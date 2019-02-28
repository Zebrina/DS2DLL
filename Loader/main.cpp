#define MAINICON 101

#include "Resources.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>

#include "SafeWrite.h"

#include "DS2X/Alteration.h"
#include "DS2X/Report.h"
#include "DS2X/Enums.h"
#include "DS2X/UINews.h"

#include "Version.h"

#include <cstdlib>

#include "DS2X/DllMain.h"

#include "stdio.h"
#include "Windows.h"
#include "tlhelp32.h"
#include "tchar.h"
#include "wchar.h"

#include <Shlwapi.h>

struct Settings {
	const char* sGamePath;
	const char* sDllPath;
	UInt32 iTimeout;
	bool bPrompt;
	bool bSkipCRC;
};

#define ERR_EXE_NOT_FOUND 1
#define ERR_EXE_INVALID_CRC 2
#define ERR_DLL_NOT_FOUND 3
#define ERR_DLL_INVALID_CRC 4
#define ERR_CREATE_PROCESS_FAILED 5
#define ERR_RESUME_THREAD_FAILED 6

bool LoadRemoteDLL(HANDLE hProcess, const char* dllPath, DWORD timeout = INFINITE) {
	bool result = false;
	size_t dllPathBufLen = strlen(dllPath) + 1;

	void* hookBase = VirtualAllocEx(hProcess, NULL, dllPathBufLen, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	if (hookBase) {
		void* loadLibraryAddress = (void*)GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");

		if (WriteProcessMemory(hProcess, hookBase, dllPath, dllPathBufLen, NULL)) {
			HANDLE thread = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)loadLibraryAddress, hookBase, 0, NULL);
			if (thread) {
				switch (WaitForSingleObject(thread, timeout))
				{
				case WAIT_OBJECT_0:
					PrintLine("hook thread complete");
					result = true;
					break;
				case WAIT_ABANDONED:
					PrintLine("Process::InstallHook: waiting for thread = WAIT_ABANDONED");
					break;
				case WAIT_TIMEOUT:
					PrintLine("Process::InstallHook: waiting for thread = WAIT_TIMEOUT");
					break;
				}
				CloseHandle(thread);
			} else {
				PrintSystemError("CreateRemoteThread failed.");
			}
		}

		VirtualFreeEx(hProcess, (void*)hookBase, 0, MEM_RELEASE);
	} else {
		PrintSystemError("VirtualAllocEx failed.");
	}

	return result;
}

bool ArgCmp(const char* arg, const char* shortCmd, const char* longCmd = "") {
	return strcmp(arg, shortCmd) == 0 || strcmp(arg, longCmd) == 0;
}

int ParseLoaderArguments(Settings& settings, const char** arguments, int count) {
	settings.sGamePath = "DungeonSiege2.exe";
	settings.sDllPath = "DS2X.dll";
	settings.iTimeout = 10000;
	settings.bSkipCRC = false;

	enum {
		APS_IDENTIFY,
		APS_DS2PATH,
		APS_DLLPATH,
		APS_TIMEOUT,
		APS_DONE,
	} aps = APS_IDENTIFY;

	int index = 0;
	while (aps != APS_DONE && ++index < count) {
		const char* arg = arguments[index];
		switch (aps) {
		case APS_IDENTIFY:
			if (ArgCmp(arg, "-h", "--help")) {
				return -1;
			} else if (ArgCmp(arg, "-ds2", "--ds2-path")) {
				aps = APS_DS2PATH;
			} else if (ArgCmp(arg, "-dll", "--dll-path")) {
				aps = APS_DLLPATH;
			} else if (ArgCmp(arg, "-t", "--timeout")) {
				aps = APS_TIMEOUT;
			} else if (ArgCmp(arg, "--skip-crc")) {
				settings.bSkipCRC = true;
			} else {
				aps = APS_DONE;
			}
			break;
		case APS_DS2PATH:
			settings.sGamePath = arg;
			aps = APS_IDENTIFY;
			break;
		case APS_DLLPATH:
			settings.sDllPath = arg;
			aps = APS_IDENTIFY;
			break;
		case APS_TIMEOUT:
			int timeout = strtol(arg, NULL, 10);
			if (timeout > 0) {
				settings.iTimeout = timeout;
			}
			aps = APS_IDENTIFY;
			break;
		}
	}

	return index;
}

int main(int argc, const char* argv[]) {
	FILETIME now;
	GetSystemTimeAsFileTime(&now);

	//const char* aGamePath = "DungeonSiege2.exe";
	//const char* aDllPath = "DS2X.dll";
	//const char* aHookMain = "?HookMain@@YGXAAULoaderInfo@@@Z";

	Settings settings;
	int ds2ArgvOffset = ParseLoaderArguments(settings, argv, argc);
	if (ds2ArgvOffset < 0) {
		return 0;
	}

	if (PathFileExists(settings.sGamePath) == FALSE) {
		return ERR_EXE_NOT_FOUND;
	}

	if (PathFileExists(settings.sDllPath) == FALSE) {
		return ERR_DLL_NOT_FOUND;
	}

	STARTUPINFO	startupInfo;
	ZeroMemory(&startupInfo, sizeof(startupInfo));
	startupInfo.cb = sizeof(startupInfo);
	PROCESS_INFORMATION	procInfo;
	ZeroMemory(&procInfo, sizeof(procInfo));

	char ds2Args[MAX_PATH] = " ";
	StrConcat(ds2Args, sizeof(ds2Args), argv + ds2ArgvOffset, argc - ds2ArgvOffset, " ");

	if (!CreateProcess(settings.sGamePath, ds2Args, NULL, NULL, FALSE, CREATE_SUSPENDED, NULL, NULL, &startupInfo, &procInfo)) {
		if (GetLastError() == 740) {
			PrintSystemError("Failed to launch process '%s%s'. Try running as administrator.", settings.sGamePath, ds2Args);
		} else {
			PrintSystemError("Failed to launch process '%s%s'.", settings.sGamePath, ds2Args);
		}

		return ERR_CREATE_PROCESS_FAILED;
	}

	/*
	LoaderInfo info;
	info.hProcess = procInfo.hProcess;
	info.out = stdout;
	HMODULE hModule = LoadLibraryA(aDllPath);
	if (hModule) {
		_HookMain hookMain = (_HookMain)GetProcAddress(hModule, aHookMain);
		if (hookMain) {
			hookMain(info);
		}
		FreeLibrary(hModule);
		if (!hookMain) {
			PrintSystemError("Failed to get library '%s' procedure address '%s'.", aDllPath, aHookMain);
			SystemPause();
			return 2;
		}
	} else {
		PrintSystemError("Failed to load library '%s'.", aDllPath);
	}
	*/

	int resultCode = 0;

	DEBUG_ONLY({
		PrintLine("Confirm to begin DLL injection.");
		SystemPause();
	});

	if (LoadRemoteDLL(procInfo.hProcess, settings.sDllPath)) {
		if (!ResumeThread(procInfo.hThread)) {
			PrintSystemError("Failed to resume thread in process '%'.", settings.sGamePath);
			resultCode = ERR_RESUME_THREAD_FAILED;
		} else {
			PrintLine("DLL injection successful!");
			DEBUG_ONLY(WaitForSingleObject(procInfo.hThread, INFINITE));
		}
	} else {
		PrintLine("DLL injection failed.");

		TerminateProcess(procInfo.hProcess, 0);
	}

	// Clean up.
	CloseHandle(procInfo.hProcess);
	CloseHandle(procInfo.hThread);

	if (resultCode != 0) {
		SystemPause();
	}

	return resultCode;
}

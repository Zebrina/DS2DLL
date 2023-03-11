#define MAINICON 101

#include "CommandLineUtil.h"
#include "Version.h"
#include "LoaderApp.h"
#include "LoaderUtil.h"

#include <cstdlib>
#include <cstring>
#include <cstdlib>
#include <Shlwapi.h>
#include <string>

static const char* INDICIUM_SUPRA_DLL = "Indicium-Supra.dll";
static const char* INDICIUM_IMGUI_DLL = "Indicium-ImGui.dll";

AppResult RunApp(const CommandLineArgValues& args) {
	CommandLineKeyValues cmdKeyValues;
	CommandLineArgsToKeyValues(cmdKeyValues, args);

    char gamePath[MAX_PATH];
    char dllPath[MAX_PATH];
    //char ds2DllPath[MAX_PATH];
    //char ds2DllDebugPath[MAX_PATH];
    char elysAllSavesPath[MAX_PATH];

	CommandLineExtractStringValue(cmdKeyValues, "game_path", gamePath, "DungeonSiege2.exe");
	CommandLineExtractStringValue(cmdKeyValues, "dll_path", dllPath, "DS2DLL.dll");
	//CommandLineExtractStringValue(cmdKeyValues, "ds2dll_path", ds2DllPath, "plugins");
	//CommandLineExtractStringValue(cmdKeyValues, "ds2dll_debug_path", ds2DllDebugPath, "");
	CommandLineExtractStringValue(cmdKeyValues, "elys_all_saves_path", elysAllSavesPath, "ElysDS2BWAllSaves.dll");
	DWORD timeout = INFINITE;
	RELEASE_ONLY(CommandLineExtractIntValue(cmdKeyValues, "injection_timeout", (int&)timeout, 10000));

	if (PathFileExistsA(gamePath) == FALSE) {
		return RES_ERR_EXE_NOT_FOUND;
	}

	if (PathFileExistsA(dllPath) == FALSE) {
		return RES_ERR_DLL_NOT_FOUND;
	}

	char ds2Args[MAX_PATH];
	CommandLineKeyValuesToString(ds2Args, MAX_PATH, cmdKeyValues);

	STARTUPINFO	startupInfo;
	ZeroMemory(&startupInfo, sizeof(startupInfo));
	startupInfo.cb = sizeof(startupInfo);
	PROCESS_INFORMATION	procInfo;
	ZeroMemory(&procInfo, sizeof(procInfo));

	if (!CreateProcessA(gamePath, ds2Args, NULL, NULL, FALSE, CREATE_SUSPENDED, NULL, NULL, &startupInfo, &procInfo)) {
		if (GetLastError() == ERROR_ELEVATION_REQUIRED) {
			return RES_ERR_CREATE_PROCESS_ELEVATION_REQUIRED;
			DEBUG_ONLY(PrintSystemError("Failed to launch process '%s%s'. Try running as administrator.", gamePath, ds2Args));
		} else {
			DEBUG_ONLY(PrintSystemError("Failed to launch process '%s%s'.", gamePath, ds2Args));
		}

		return RES_ERR_CREATE_PROCESS_FAILED;
	}

	AppResult result = RES_OK;

	DEBUG_ONLY(
		DWORD procExitCode;
		if (GetExitCodeProcess(procInfo.hProcess, &procExitCode)) {
			DEBUG_ONLY(PrintLine("Process exited with code '0x%.8x'.", procExitCode));
		} else {
			result = RES_ERR_GET_EXIT_CODE_PROCESS_FAILED;
		}
	);

	DEBUG_ONLY(
		PrintLine("Confirm to begin DLL injection.");
		SystemPause();
	);

#if 0
    if (result == RES_OK) {
        result = LoadRemoteDll(procInfo.hProcess, INDICIUM_SUPRA_DLL, timeout);
        if (result == RES_OK) {
            DEBUG_ONLY(PrintLine("Injected: (%s).", INDICIUM_SUPRA_DLL));
            result = LoadRemoteDll(procInfo.hProcess, INDICIUM_IMGUI_DLL, timeout);
            if (result == RES_OK) {
                DEBUG_ONLY(PrintLine("Injected: (%s).", INDICIUM_IMGUI_DLL));
            }
        }
    }
#endif

	if (result == RES_OK && PathFileExistsA(elysAllSavesPath)) {
		DEBUG_ONLY(PrintLine("Ely's DS2BWAllSaves found."));
		if (LoadRemoteDll(procInfo.hProcess, elysAllSavesPath, timeout) == RES_OK) {
			DEBUG_ONLY(PrintLine("Injected: (%s).", elysAllSavesPath));
		}
	}

	if (result == RES_OK) {
		result = LoadRemoteDll(procInfo.hProcess, dllPath, timeout);
		if (result == RES_OK && ResumeThread(procInfo.hThread) == 0xffffffff) {
			result = RES_ERR_RESUME_THREAD_FAILED;
		} else {
			DEBUG_ONLY(PrintLine("Injected: (%s).", dllPath));
		}
	}

	if (result != RES_OK) {
		TerminateProcess(procInfo.hProcess, 0);
		AlertError(L"Process terminated!");
	}

	CloseHandle(procInfo.hProcess);
	CloseHandle(procInfo.hThread);

	return result;
}

int main(int argc, const char* argv[]) {
	CommandLineArgValues args(argv + 1, argv + argc);

	//FILETIME now;
	//GetSystemTimeAsFileTime(&now);

	AppResult result = RunApp(args);

	DWORD lastError;
	if (result != RES_OK) {
		AlertError(AppResultToString(result));
	} else if ((lastError = GetLastError()) != 0) {
		AlertError(L"Last error returned '0x%.8x'.", lastError);
	}

	return result;
}

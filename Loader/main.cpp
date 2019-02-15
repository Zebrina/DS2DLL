#include <Windows.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>

#include "Common/Debug.h"
#include "Common/SafeWrite.h"

#include "DS2/Report.h"
#include "DS2/Enums.h"
#include "DS2/UINews.h"

#include "Version.h"
#include "Urls.h"

#define HOOK_D3D9

HMODULE targetHandle;

HMODULE LoadTargetLibrary() {
	HMODULE lib = NULL;

#ifdef HOOK_D3D9
	lib = LoadLibrary("d3d9_reshade.dll");
	if (lib != NULL) {
		return lib;
	}
#endif

	CHAR path[MAX_PATH];
	UINT len = GetWindowsDirectoryA(path, MAX_PATH);
	if (len > 0) {
		strcpy_s(path + len, MAX_PATH - len, "\\System32\\"
#ifdef HOOK_D3D9
			"d3d9.dll"
#else
			"WINTRUST.dll"
#endif
		);

		lib = LoadLibrary(path);
	}

	return lib;
}

typedef int(__thiscall *LoadExports_)(void*, HMODULE, uint32_t, uint32_t b);
LoadExports_ LoadExports = (LoadExports_)0x9c1ce4;

int LoadPluginExports(void* ex, const char* dir, const char* pattern) {
	/*
	CHAR workingDir[MAX_PATH];
	if (GetCurrentDirectory(MAX_PATH - 2, workingDir) > 0) {
		DEBUG_ONLY(Report::MessageBoxF("Current directory: %s", workingDir));
	}
	*/

	CHAR fullFileName[MAX_PATH];
	strcpy_s(fullFileName, MAX_PATH, dir);
	size_t fileNameOffset = strlen(dir);
	strcpy_s(fullFileName + fileNameOffset, MAX_PATH - fileNameOffset, "\\");
	++fileNameOffset;
	strcpy_s(fullFileName + fileNameOffset, MAX_PATH - fileNameOffset, pattern);

	WIN32_FIND_DATA findFileData;
	HANDLE hFind = INVALID_HANDLE_VALUE;
	DWORD error = 0;

	hFind = FindFirstFile(fullFileName, &findFileData);
	if (INVALID_HANDLE_VALUE == hFind) {
		return 0;
	}

	int result = 0;
	do {
		if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
			strcpy_s(fullFileName + fileNameOffset, MAX_PATH - fileNameOffset, findFileData.cFileName);

			HMODULE hModule = LoadLibrary(fullFileName);
			if (hModule != NULL) {
				result = LoadExports(ex, hModule, 0x0, 0x0);
			}
		}
	} while (result == NO_ERROR && FindNextFile(hFind, &findFileData) != 0);

	FindClose(hFind);
	
	return NO_ERROR;
}

int __fastcall LoadBaseExports(void* ex, void*, HMODULE hModule, uint32_t arg2, uint32_t arg3) {
	LoadPluginExports(ex, "plugins", "*.ds2dl0");
	
	int result = LoadExports(ex, hModule, arg2, arg3);
	//DEBUG_ONLY(Report::_MessageBoxF("Loaded %i base exports."));

	LoadPluginExports(ex, "plugins", "*.ds2dll");

	return result;
}

void WriteUrlHook(const char* keyName, uintptr_t ptr) {
	static UrlStringBuffer<0x512> urlStringBuffer;

	CHAR buffer[MAX_PATH];
	if (GetPrivateProfileString("Urls", keyName, NULL, buffer, sizeof(buffer), "DS2DllLoader.ini") > 0) {
		urlStringBuffer.HookUrl(ptr, buffer);
	}
}

void WriteHooks() {
	/*
	intptr_t address = (intptr_t)GetIATAddr((uint8_t*)GetModuleHandle(NULL), "dinput8.dll", "DirectInput8Create");

	if (address == 0) {
	Report::_MessageBox("DirectInput8Create not found.");
	}
	*/

	//0x681e66	call ds:GetActiveWindow

	// 0x612368 - 0x61236d: Exit

	// 0x84c93e call 0x5fe287
	// __thiscall void (uint32_t, const char*, uint32_t)
	//SafeWriteCall(0x84c93e, (uintptr_t)LoadPlugins);

	// Show loader version after game version.
	const char* versionMessage = "$MSG$Game: %S DS2Dll: " LOADER_VERSION_STR;
	SafeWrite32(0x44e284 + 1, (uint32_t)versionMessage);
	
	// Hook the loading of exports (skrit functions).
	SafeWriteCall(0x90e252, (uintptr_t)LoadBaseExports);

	// Hooks urls via ini file. 
	WriteUrlHook("sAvailableGamespyCom", URL_AVAILABLE_GAMESPY_COM_PTR);
	WriteUrlHook("sMsGamespyCom", URL_MS_GAMESPY_COM_PTR);
	WriteUrlHook("sNatneg1GamespyCom", URL_NATNEG1_GAMESPY_COM_PTR);
	WriteUrlHook("sNatneg2GamespyCom", URL_NATNEG2_GAMESPY_COM_PTR);
	WriteUrlHook("sMasterGamespyCom", URL_MASTER_GAMESPY_COM_PTR);
	WriteUrlHook("sPeerchatGamespyCom", URL_PEERCHAT_GAMESPY_COM_PTR);
	WriteUrlHook("sGamestatsGamespyCom", URL_GAMESTATS_GAMESPY_COM_PTR);
	WriteUrlHook("sGpcmGamespyCom", URL_GPCM_GAMESPY_COM_PTR);
	WriteUrlHook("sGpspGamespyCom", URL_GPSP_GAMESPY_COM_PTR);
}

extern "C" {
#ifdef HOOK_D3D9
	class IDirect3D9* __stdcall Direct3DCreate9(UINT SDKVersion) {
		//DEBUG_ONLY(Report::MessageBox("Hooking Direct3DCreate9!"));

		class IDirect3D9* result = NULL;

		if (targetHandle != NULL) {
			typedef class IDirect3D9* (__stdcall *_Direct3DCreate9)(UINT);

			_Direct3DCreate9 ptr = (_Direct3DCreate9)GetProcAddress(targetHandle, "Direct3DCreate9");
			if (ptr != NULL) {
				result = ptr(SDKVersion);
			}
		}

		WriteHooks();

		return result;
	}
	/*
	HRESULT __stdcall Direct3DCreate9Ex(UINT SDKVersion, IDirect3D9Ex** d3d9Device) {
		Report::MessageBox("Hooking Direct3DCreate9Ex!");

		HRESULT result = E_FAIL;

		if (targetHandle != NULL) {
			typedef HRESULT(__stdcall *_Direct3DCreate9Ex)(UINT, IDirect3D9Ex**);

			_Direct3DCreate9Ex ptr = (_Direct3DCreate9Ex)GetProcAddress(targetHandle, "Direct3DCreate9Ex");
			if (ptr != NULL) {
				result = ptr(SDKVersion, d3d9Device);
			}
		}

		WriteHooks();

		return result;
	}
	*/
#else
	LONG __stdcall WinVerifyTrust(HWND hwnd, GUID* pgActionID, LPVOID pWVTdata) {
		DEBUG_ONLY(Report::MessageBox("Hooking WinVerifyTrust!"));

		HRESULT result = E_FAIL;

		if (targetHandle != NULL) {
			typedef HRESULT(__stdcall *WinVerifyTrust_)(HWND, GUID*, LPVOID);

			WinVerifyTrust_ ptr = (WinVerifyTrust_)GetProcAddress(targetHandle, "WinVerifyTrust");
			if (ptr != NULL) {
				result = ptr(hwnd, pgActionID, pWVTdata);
			}
		}

		WriteHooks();

		return result;
	}
#endif
}

#ifdef _WINDLL

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		targetHandle = LoadTargetLibrary();
		break;
	//case DLL_THREAD_ATTACH:
	//case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		FreeLibrary(targetHandle);
		Report::MessageBox("Dll detached.");
		break;
	}
	return TRUE;
}

#else

#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
	system("pause");
	return 0;
}

#endif // _WINDLL
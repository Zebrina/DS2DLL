#include <Windows.h>

#include <cstring>
#include <cstdlib>

#include "Common/Debug.h"
#include "Common/SafeWrite.h"

#define HOOK_TARGET "d3d9.dll"

HMODULE libHandle;

HMODULE LoadTargetLibrary() {
	HMODULE lib = NULL;

#ifdef HOOK_TARGET == "d3d9.dll"
	lib = LoadLibrary("d3d9_reshade.dll");
	if (lib != NULL) {
		return lib;
	}
#endif

	CHAR path[MAX_PATH];
	UINT len = GetWindowsDirectoryA(path, MAX_PATH);
	if (len > 0) {
		strcpy_s(path + len, MAX_PATH - len, "\\System32\\" HOOK_TARGET);

		lib = LoadLibrary(path);
	}

	return lib;
}

typedef int(__thiscall *LoadExports_)(void*, HMODULE, uint32_t, uint32_t b);
LoadExports_ LoadExports = (LoadExports_)0x009c1ce4;

int LoadPluginExports(void* ex, const char* dir, const char* pattern) {
	/*
	CHAR workingDir[MAX_PATH];
	if (GetCurrentDirectory(MAX_PATH - 2, workingDir) > 0) {
		DEBUG_ONLY(Report::_MessageBoxF("Current directory: %s", workingDir));
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

	int count = 0;

	do {
		if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
			strcpy_s(fullFileName + fileNameOffset, MAX_PATH - fileNameOffset, findFileData.cFileName);

			HMODULE hModule = LoadLibrary(fullFileName);
			if (hModule != NULL) {
				LoadExports(ex, hModule, 0x0, 0x0);
				++count;
			}
		}
	} while (FindNextFile(hFind, &findFileData) != 0);

	FindClose(hFind);
	
	return count;
}

int __fastcall LoadBaseExports(void* ex, void*, HMODULE hModule, uint32_t arg2, uint32_t arg3) {
	LoadPluginExports(ex, "plugins", "*.ds2dl0");
	
	int result = LoadExports(ex, hModule, arg2, arg3);
	//DEBUG_ONLY(Report::_MessageBoxF("Loaded %i base exports."));

	LoadPluginExports(ex, "plugins", "*.ds2dll");

	return result;
}

void Hooks() {
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

	// Hook the loading of exports (skrit functions).
	SafeWriteCall(0x90e252, (uintptr_t)LoadBaseExports);
}

extern "C" {
#ifdef HOOK_TARGET == "d3d9.dll"
	class IDirect3D9* __stdcall Direct3DCreate9(UINT SDKVersion) {
		//DEBUG_ONLY(Report::_MessageBox("Hooking Direct3DCreate9!"));

		class IDirect3D9* result = NULL;

		if (libHandle != NULL) {
			typedef class IDirect3D9* (__stdcall *_Direct3DCreate9)(UINT);

			_Direct3DCreate9 ptr = (_Direct3DCreate9)GetProcAddress(libHandle, "Direct3DCreate9");
			if (ptr != NULL) {
				result = ptr(SDKVersion);
			}
		}

		Hooks();

		return result;
	}
	/*
	HRESULT __stdcall Direct3DCreate9Ex(UINT SDKVersion, IDirect3D9Ex** d3d9Device) {
		Report::_MessageBox("Hooking Direct3DCreate9Ex!");

		HRESULT result = E_FAIL;

		if (libHandle != NULL) {
			typedef HRESULT(__stdcall *_Direct3DCreate9Ex)(UINT, IDirect3D9Ex**);

			_Direct3DCreate9Ex ptr = (_Direct3DCreate9Ex)GetProcAddress(libHandle, "Direct3DCreate9Ex");
			if (ptr != NULL) {
				result = ptr(SDKVersion, d3d9Device);
			}
		}

		Hooks();

		return result;
	}
	*/
#elif HOOK_TARGET == "WINTRUST.dll"
	LONG __stdcall WinVerifyTrust(HWND hwnd, GUID* pgActionID, LPVOID pWVTdata) {
		//DEBUG_ONLY(Report::_MessageBox("WinVerifyTrust!"));

		HRESULT result = E_FAIL;

		if (libHandle != NULL) {
			typedef HRESULT(__stdcall *WinVerifyTrust_)(HWND, GUID*, LPVOID);

			WinVerifyTrust_ ptr = (WinVerifyTrust_)GetProcAddress(libHandle, "WinVerifyTrust");
			if (ptr != NULL) {
				result = ptr(hwnd, pgActionID, pWVTdata);
			}
		}

		Hooks();

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
		libHandle = LoadTargetLibrary();
		break;
	//case DLL_THREAD_ATTACH:
	//case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		FreeLibrary(libHandle);
		break;
	}
	return TRUE;
}

#else

#include <cstdlib>
#include <iostream>

#include "../DS2/SiegeEngine.h"

using namespace std;

int main(int argc, char* argv[])
{
	system("pause");
	return 0;
}

#endif // _WINDLL
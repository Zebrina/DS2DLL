#include "HookExportTable.h"

#include "SafeWrite.h"

typedef int(__thiscall *LoadExportTable)(void*, HMODULE, void*, void*);
LoadExportTable LoadExportTableBase = (LoadExportTable)0x9c1ce4;

int LoadPluginExportTable(void* ex, const char* dir, const char* pattern) {
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
				result = LoadExportTableBase(ex, hModule, 0x0, 0x0);
			}
		}
	} while (result == NO_ERROR && FindNextFile(hFind, &findFileData) != 0);

	FindClose(hFind);

	return NO_ERROR;
}

int __fastcall LoadExportTableHook(void* ex, void*, HMODULE hModule, void* arg2, void* arg3) {
	LoadPluginExportTable(ex, "plugins", "*.ds2dl0");

	int result = LoadExportTableBase(ex, hModule, arg2, arg3);

	LoadPluginExportTable(ex, "plugins", "*.ds2dll");

	return result;
}

void ExportTable::WriteHooks() {
	// Hook the loading of exports (skrit functions).
	SafeWriteCall(0x90e252, (uintptr_t)LoadExportTableHook);
}

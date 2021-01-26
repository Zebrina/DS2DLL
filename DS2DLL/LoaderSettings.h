#pragma once

#include <cstddef>

#define LOADER_SETTINGS_ADDRESS ((LPVOID)0x00400336)
#define LOADER_SETTINGS_MAGIC 'DS2D'
#define LOADER_SETTINGS_MAX_PATH (MAX_PATH >> 1)
#define LOADER_SETTINGS_RESERVED_SIZE 0x300

enum LoadSettingFlags {
	LS_NONE				= CLEARED_FLAGS,
	LS_FORCE_BORDERLESS = EnumFlag(1),
};

struct LoaderSettings {
	UInt32 magic = LOADER_SETTINGS_MAGIC;
	LoadSettingFlags flags;
	UInt16 blX;
	UInt16 blY;
	UInt16 blW;
	UInt16 blH;
	char gamePath[LOADER_SETTINGS_MAX_PATH];
	char dllPath[LOADER_SETTINGS_MAX_PATH];
	char ds2DllPath[LOADER_SETTINGS_MAX_PATH];
	char ds2DllDebugPath[LOADER_SETTINGS_MAX_PATH];
	char elysAllSavesPath[LOADER_SETTINGS_MAX_PATH];
};

typedef int(*CopyLoaderSettingsProc)(LoaderSettings* destSettingsPtr);

STATIC_ASSERT(sizeof(LoaderSettings) <= LOADER_SETTINGS_RESERVED_SIZE);

#include "DS2DLL/PluginAPI.h"
#include "DS2DLL/DS2DLL.h"
#include "ExtendedUIPartyManager.h"
#include "PartySizeExpansion.h"

extern "C" {
    __declspec(dllexport) bool GetPluginInfo(PluginInfo* info) {
		info->name = "Players 9";
        info->description = "Play Dungeon Siege II with up to 9 party members instead of only 6.";
        info->author = "Zebrina";
		info->version = 1;
		info->versionString = "1.0";
		info->pluginRequirements = "";

		return false;
	}

    __declspec(dllexport) void LoadPlugin(PluginAPI* api) {
		WriteUIPartyManagerHooks();
		WritePartyExpansionHooks();
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls(hModule);
	}
	return TRUE;
}

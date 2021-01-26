#include "DS2DLL/PluginAPI.h"
#include "DS2DLL/DS2DLL.h"

//-------------------------------------------------------------------------------------------------
// More information on how to make dsdlls (same procedure for ds2lls) here:
//-------------------------------------------------------------------------------------------------
// https://siegetheday.org/files/sucompilation.zip
//-------------------------------------------------------------------------------------------------

class Example {
private:
	int count = 0;

	FEX static const char* GetModName() {
		return "Hello World!";
	}

	FEX int GetCount() {
		return count;
	}
	FEX void SetCount(int value) {
		this->count = value;
	}
};

extern "C" {
	__declspec(dllexport) bool GetPluginInfo(PluginInfo* info) {
        // The name of this plugin.
		info->name = "Hello World";
		info->version = 1;
        // Human readable version.
		info->versionString = "1.0";
        // Other plugins that will be loaded before this plugin.
		info->pluginRequirements = "Plugin1,Plugin2";

        // Return true if this plugin should be loaded.
		return true;
	}

    __declspec(dllexport) void LoadPlugin(PluginAPI* api) {

	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		// TODO: Do some function hooking or remove if case.
		DisableThreadLibraryCalls(hModule);
	}
	return TRUE;
}

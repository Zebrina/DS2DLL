#include "DS2X/PluginAPI.h"

#include "dsdll.h"

//-------------------------------------------------------------------------------------------------
// More information on how to make dsdlls (same procedure for ds2lls) here:
//-------------------------------------------------------------------------------------------------
// https://siegetheday.org/files/sucompilation.zip
//-------------------------------------------------------------------------------------------------

class Example {
private:
	int count = 0;

	FEX static const char* GetModName() {
		return ("Hello World!");
	}

	FEX int GetCount() {
		return count;
	}
	FEX void SetCount(int count) {
		this->count = count;
	}
};

extern "C" {
	bool GetPluginInfo(PluginInfo info) {
		info.pluginName = "Hello World";
		info.version = 1;
		info.versionString = "1.0";
		info.pluginRequirements = "Plugin 1,Plugin 2";

		return true;
	}

	void LoadPlugin(PluginAPI api) {

	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		// TODO: Do some function hooking or remove if case.
	}
	return TRUE;
}

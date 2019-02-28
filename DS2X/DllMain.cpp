#include "DllMain.h"

#include "Alteration.h"
#include "Report.h"

HMODULE DS2XModuleHandle = NULL;

int __fastcall HookMain(void* this_) {
	Report::MessageBox("Inside HookMain!");
	return ((int(__thiscall*)(void*))0x4348b0)(this_);
}

void WriteHooks() {
	//FreeLibrary(DS2XModuleHandle);

	const char* versionMessage = "$MSG$Game: %S DS2Dll: " "0.1.0";
	SafeWrite32(0x44e284 + 1, (uint32_t)versionMessage);

	//SafeWriteCall(0x427a9f, (intptr_t)HookMain);

	WriteAlterationHooks();

	FlushInstructionCache(GetCurrentProcess(), NULL, 0);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		DS2XModuleHandle = hModule;
		WriteHooks();
		DisableThreadLibraryCalls(hModule);
	}
	return TRUE;
}

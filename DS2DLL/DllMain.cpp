#include "DllMain.h"

#include "Assembly.h"
#include "EventHandler.h"
#include "StringTool.h"
#include "UIShell.h"
#include "UIText.h"

#include <string>

constexpr const char* VERSION = "0.1.0";

HMODULE DS2DLLModuleHandle = NULL;
LoaderSettings DS2DLLSettings;
std::string DS2DLLError;

extern "C" {
	__declspec(dllexport) BOOL GetError(char*& messageOut, size_t bufferSize) {
		if (!DS2DLLError.empty()) {
			strcpy_s(messageOut, bufferSize, DS2DLLError.c_str());
			return TRUE;
		}
		return FALSE;
	}
}

BOOL InitializeExtensions() {
    EventHandler::GetSingleton()->Dispatch(ON_DLL_INJECTION);

	FlushInstructionCache();

	return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	BOOL result = FALSE;
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		DS2DLLModuleHandle = hModule;
		result = InitializeExtensions();
		DisableThreadLibraryCalls(hModule);
	}
	return result;
}

#include "DS2DLL/PluginAPI.h"
#include "SafeWrite.h"

#include <memory>
#include <vector>
#include <string>

#define GAMESPY_PLUGIN "GameSpy.ds2dll"
#define GAMESPY_CONFIG_FILE "Plugins\\GameSpy.ini"
#define GAMESPY_CONFIG_HOST "Host"
#define GAMESPY_CONFIG_NEWHOSTNAME "sHostName"
#define GAMESPY_DEFAULT_HOSTNAME "gamespy.com"

// "%s.available.gamespy.com"
#define GAMESPY_AVAILABLE_GAMESPY_COM_PTR 0x005a6b2f + 1
#define GAMESPY_AVAILABLE_GAMESPY_COM_OFFSET 13
// "%s.ms%d.gamespy.com"
#define GAMESPY_MS_GAMESPY_COM_PTR 0x005a88a6 + 1
#define GAMESPY_MS_GAMESPY_COM_OFFSET 8
// "natneg1.gamespy.com"
#define GAMESPY_NATNEG1_GAMESPY_COM_PTR 0x005aee4b + 1
#define GAMESPY_NATNEG1_GAMESPY_COM_OFFSET 8
// "natneg2.gamespy.com"
#define GAMESPY_NATNEG2_GAMESPY_COM_PTR 0x005aee6b + 1
#define GAMESPY_NATNEG2_GAMESPY_COM_OFFSET 8
// "%s.master.gamespy.com"
#define GAMESPY_MASTER_GAMESPY_COM_PTR 0x005b23f0 + 1
#define GAMESPY_MASTER_GAMESPY_COM_OFFSET 0x005b23f0 + 1
// "peerchat.gamespy.com"
#define GAMESPY_PEERCHAT_GAMESPY_COM_PTR 0x005c0cdf + 1
#define GAMESPY_PEERCHAT_GAMESPY_COM_OFFSET 9
// "gamestats.gamespy.com"
#define GAMESPY_GAMESTATS_GAMESPY_COM_PTR 0x005af891 + 1
#define GAMESPY_GAMESTATS_GAMESPY_COM_OFFSET 10
// "gpcm.gamespy.com"
#define GAMESPY_GPCM_GAMESPY_COM_PTR 0x005d6977 + 1
#define GAMESPY_GPCM_GAMESPY_COM_OFFSET 5
// "gpsp.gamespy.com"
#define GAMESPY_GPSP_GAMESPY_COM_PTR 0x005d8436 + 1
#define GAMESPY_GPSP_GAMESPY_COM_OFFSET 5

using namespace std;

void OverwriteHost(uintptr_t oldHostNameptr, uint32_t oldHostNameOffset, const char* newHostName) {
	SafeWriteString(*(uintptr_t*)oldHostNameptr + oldHostNameOffset, newHostName);
}

void RedirectHost(uintptr_t oldHostNameptr, uint32_t oldHostNameOffset, const char* newHostName) {
	static vector<shared_ptr<string>> strings;
	const char* oldHostName = *((const char**)oldHostNameptr);
	shared_ptr<string> newHostNameStr(new string(newHostName));
	newHostNameStr->insert(0, oldHostName, oldHostNameOffset);
	newHostNameStr->shrink_to_fit();
	SafeWrite32(oldHostNameptr, (uint32_t)newHostNameStr->c_str());
	strings.push_back(newHostNameStr);
}

void WriteHooks() {
	CHAR newHostName[MAX_PATH];
	if (GetPrivateProfileStringA(GAMESPY_CONFIG_HOST, GAMESPY_CONFIG_NEWHOSTNAME, NULL, newHostName, sizeof(newHostName), GAMESPY_CONFIG_FILE) > 0) {
		if (strlen(newHostName) <= sizeof(GAMESPY_DEFAULT_HOSTNAME)) {
			OverwriteHost(GAMESPY_AVAILABLE_GAMESPY_COM_PTR, GAMESPY_AVAILABLE_GAMESPY_COM_OFFSET, newHostName);
			OverwriteHost(GAMESPY_MS_GAMESPY_COM_PTR, GAMESPY_MS_GAMESPY_COM_OFFSET, newHostName);
			OverwriteHost(GAMESPY_NATNEG1_GAMESPY_COM_PTR, GAMESPY_NATNEG1_GAMESPY_COM_OFFSET, newHostName);
			OverwriteHost(GAMESPY_NATNEG2_GAMESPY_COM_PTR, GAMESPY_NATNEG2_GAMESPY_COM_OFFSET, newHostName);
			OverwriteHost(GAMESPY_MASTER_GAMESPY_COM_PTR, GAMESPY_MASTER_GAMESPY_COM_OFFSET, newHostName);
			OverwriteHost(GAMESPY_PEERCHAT_GAMESPY_COM_PTR, GAMESPY_PEERCHAT_GAMESPY_COM_OFFSET, newHostName);
			OverwriteHost(GAMESPY_GAMESTATS_GAMESPY_COM_PTR, GAMESPY_GAMESTATS_GAMESPY_COM_OFFSET, newHostName);
			OverwriteHost(GAMESPY_GPCM_GAMESPY_COM_PTR, GAMESPY_GPCM_GAMESPY_COM_OFFSET, newHostName);
			OverwriteHost(GAMESPY_GPSP_GAMESPY_COM_PTR, GAMESPY_GPSP_GAMESPY_COM_OFFSET, newHostName);
		} else {
			RedirectHost(GAMESPY_AVAILABLE_GAMESPY_COM_PTR, GAMESPY_AVAILABLE_GAMESPY_COM_OFFSET, newHostName);
			RedirectHost(GAMESPY_MS_GAMESPY_COM_PTR, GAMESPY_MS_GAMESPY_COM_OFFSET, newHostName);
			RedirectHost(GAMESPY_NATNEG1_GAMESPY_COM_PTR, GAMESPY_NATNEG1_GAMESPY_COM_OFFSET, newHostName);
			RedirectHost(GAMESPY_NATNEG2_GAMESPY_COM_PTR, GAMESPY_NATNEG2_GAMESPY_COM_OFFSET, newHostName);
			RedirectHost(GAMESPY_MASTER_GAMESPY_COM_PTR, GAMESPY_MASTER_GAMESPY_COM_OFFSET, newHostName);
			RedirectHost(GAMESPY_PEERCHAT_GAMESPY_COM_PTR, GAMESPY_PEERCHAT_GAMESPY_COM_OFFSET, newHostName);
			RedirectHost(GAMESPY_GAMESTATS_GAMESPY_COM_PTR, GAMESPY_GAMESTATS_GAMESPY_COM_OFFSET, newHostName);
			RedirectHost(GAMESPY_GPCM_GAMESPY_COM_PTR, GAMESPY_GPCM_GAMESPY_COM_OFFSET, newHostName);
			RedirectHost(GAMESPY_GPSP_GAMESPY_COM_PTR, GAMESPY_GPSP_GAMESPY_COM_OFFSET, newHostName);
		}
	} else {
		//Report::MessageBox("'" GAMESPY_CONFIG_NEWHOSTNAME "' key missing under '[" GAMESPY_CONFIG_HOST "]' in " GAMESPY_CONFIG_FILE ".");
		//MessageBoxA(NULL, "'" GAMESPY_CONFIG_NEWHOSTNAME "' key missing under '[" GAMESPY_CONFIG_HOST "]' in " GAMESPY_CONFIG_FILE ".", GAMESPY_PLUGIN, MB_OK);
	}
}

extern "C" {
    __declspec(dllexport) bool GetPluginInfo(PluginInfo* info) {
        info->name = "GameSpy";
        info->version = 1;
        info->versionString = "1.0";
        info->pluginRequirements = "";

        return true;
    }

    __declspec(dllexport) void LoadPlugin(PluginAPI* api) {
        WriteHooks();
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
    }
	return TRUE;
}

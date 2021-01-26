#include "Config.h"
#include "DllMain.h"
#include "DS2DLL.h"
#include "EventHandler.h"
#include "PluginAPI.h"
#include "SafeWrite.h"
#include "SkritMachine.h"
#include <algorithm>
#include <vector>

typedef int(__thiscall *LoadExportTable)(void*, HMODULE, void*, bool);
LoadExportTable LoadExportTableBase = (LoadExportTable)0x009c1ce4;

SkritMachine* this__;

struct PluginData {
    PluginInfo info;
    std::string fileName;
    HMODULE hModule;
};

void LoadPluginModules(std::vector<PluginData>& plugins, const char* dir, const char* pattern) {
    CHAR fileName[MAX_PATH];

    snprintf(fileName, sizeof(fileName), "%s\\%s", dir, pattern);

    WIN32_FIND_DATA findFileData;
    HANDLE hFind = INVALID_HANDLE_VALUE;
    DWORD error = 0;

    hFind = FindFirstFileA(fileName, &findFileData);
    if (INVALID_HANDLE_VALUE == hFind) {
        return;
    }

    int result = 0;
    do {
        if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
            snprintf(fileName, MAX_PATH, "%s\\%s", dir, findFileData.cFileName);

            HMODULE hModule = LoadLibraryA(fileName);
            if (hModule != NULL) {
                PluginData data;
                
                // Query plugin info if available.
                GetPluginInfoProc getInfo = (GetPluginInfoProc)GetProcAddress(hModule, "GetPluginInfo");
                
                bool bShouldLoad = !getInfo || getInfo(&data.info);
                
                if (bShouldLoad) {
                    data.fileName = findFileData.cFileName;
                    data.hModule = hModule;
                    plugins.push_back(data);
                } else {
                    FreeLibrary(hModule);
                }
            }
        }
    } while (result == NO_ERROR && FindNextFileA(hFind, &findFileData) != 0);

    FindClose(hFind);
}
void SortPluginModules(std::vector<PluginData>& plugins) {
    std::sort(plugins.begin(), plugins.end(), [](const PluginData& x, const PluginData& y) -> bool {
        if (StrFindNoCase(y.info.pluginRequirements, x.fileName.c_str()) >= 0) {
            return true;
        } else if (StrFindNoCase(x.info.pluginRequirements, y.fileName.c_str()) >= 0) {
            return false;
        }
        return StrCompareNoCase(x.fileName.c_str(), y.fileName.c_str());
    });
}

int LoadPluginExportTable(SkritMachine* this_, const char* dir, const char* pattern) {
	CHAR fileName[MAX_PATH];

	snprintf(fileName, sizeof(fileName), "%s\\%s", dir, pattern);

	WIN32_FIND_DATA findFileData;
	HANDLE hFind = INVALID_HANDLE_VALUE;
	DWORD error = 0;

	hFind = FindFirstFileA(fileName, &findFileData);
	if (INVALID_HANDLE_VALUE == hFind) {
		return 0;
	}

	int result = 0;
	do {
		if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
			snprintf(fileName, sizeof(fileName), "%s\\%s", dir, findFileData.cFileName);

			HMODULE hModule = LoadLibraryA(fileName);
			if (hModule != NULL) {
				result = LoadExportTableBase(this_, hModule, 0x0, true);
			}
		}
	} while (result == NO_ERROR && FindNextFileA(hFind, &findFileData) != 0);

	FindClose(hFind);

	return NO_ERROR;
}

// Might not be safe!
FEX bool LoadPlugin(const char* pluginName) {
	return LoadPluginExportTable(this__, "plugins", pluginName) == NO_ERROR;
}
FUBI_DOC(LoadPlugin, "pluginName", "Dynamically loads a DS2DLL plugin located inside the plugins folder. 'pluginName' should contain the plugin extension (.ds2dll or .ds2dl0)." );

int __fastcall LoadExportTableHook(SkritMachine* this_, void*, HMODULE hModule, void* arg2, void* arg3) {
	this__ = this_;

    std::vector<PluginData> plugins;

    const char* pluginsDir = Config::GetSingleton()->GetString("ds2dll_path", "plugins");

    PluginAPI api;

    LoadPluginModules(plugins, pluginsDir, "*.ds2dl0");
    if (plugins.size() > 0) {
        // TODO: FIX
        //SortPluginModules(plugins);
        for (uint i = 0; i < plugins.size(); ++i) {
            LoadPluginProc load = (LoadPluginProc)GetProcAddress(plugins[i].hModule, "LoadPlugin");
            if (load) {
                load(&api);
            }
            if (!plugins[i].info.bNoSkritExports) {
                LoadExportTableBase(this_, plugins[i].hModule, nullptr, true);
            }
        }
    }

	//LoadPluginExportTable(this_, "plugins", "*.ds2dl0");

	// DS2DLL exports.
	LoadExportTableBase(this_, DS2DLLModuleHandle, arg2, arg3);

	int result = LoadExportTableBase(this_, hModule, arg2, arg3);

    plugins.clear();
    LoadPluginModules(plugins, pluginsDir, "*.ds2dll");
    if (plugins.size() > 0) {
        // TODO: FIX
        //SortPluginModules(plugins);
        for (uint i = 0; i < plugins.size(); ++i) {
            LoadPluginProc load = (LoadPluginProc)GetProcAddress(plugins[i].hModule, "LoadPlugin");
            if (load) {
                load(&api);
            }
            if (!plugins[i].info.bNoSkritExports) {
                LoadExportTableBase(this_, plugins[i].hModule, nullptr, true);
            }
        }
    }

	//LoadPluginExportTable(this_, "plugins", "*.ds2dll");

    GPFastVector<Skrit::Module>& modules = this_->modules;

	return result;
}

$OnDllInjection() {
	// Hook the loading of exports (skrit functions).
	SafeWriteCall(0x0090e252, LoadExportTableHook);
}

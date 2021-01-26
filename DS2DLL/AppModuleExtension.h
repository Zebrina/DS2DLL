#pragma once

#include "MohawkGame.h"

class AppModuleExtension : protected MohawkGame {
public:
	AppModuleExtension() = delete;
	AppModuleExtension(const AppModuleExtension&) = delete;
	~AppModuleExtension() = delete;

	AppModuleExtension& operator=(const AppModuleExtension&) = delete;

    inline static AppModuleExtension* GetSingleton() {
        return (AppModuleExtension*)MohawkGame::GetSingleton();
    }

	bool GetAlwaysActive();
	void SetAlwaysActive(bool value);
    void ToggleAlwaysActive();
    bool GetForceBorderless();
    void SetForceBorderless(bool value);
    void ToggleForceBorderless();
    int GetWindowX();
    int GetWindowY();
    void SetWindowPosition(int x, int y);
    int GetWindowWidth();
    int GetWindowHeight();
    void SetWindowSize(int width, int height);
    void UpdateWindowStyle(DWORD& dwStyleRef);
    void UpdateWindowExStyle(DWORD& dwExStyleRef);

    void SetInactive(bool flag);

    static void WriteHooks();
    void Initialize();

private:
	// 0x270
    bool bConsoleEnabled;
    bool bAlwaysActive;
    bool bForceBorderless;
	bool bShouldBeActive;
    int consoleKey;
    DWORD clearWindowStyle;
    DWORD clearWindowExStyle;
    DWORD addWindowStyle;
    int windowX;
    int windowY;
    int windowWidth;
    int windowHeight;
};

#include "AppModuleExtension.h"

#include "AppConsole.h"
#include "Config.h"
#include "EventHandler.h"
#include "SafeWrite.h"
#include "UIShell.h"
#include "UIText.h"

AppModuleExtension* const gAppModuleEx = (AppModuleExtension*)0x00d01644;
WNDPROC const AppWindowProc = (WNDPROC)0x00612e48;
HOOKPROC const AppWindowsHookProc = (HOOKPROC)0x006121fd;
HHOOK const AppHHook = (HHOOK)0x00d10360;

bool AppModuleExtension::GetAlwaysActive() {
	return bAlwaysActive;
}
void AppModuleExtension::SetAlwaysActive(bool value) {
    bAlwaysActive = value;
}
void AppModuleExtension::ToggleAlwaysActive() {
    bAlwaysActive = !bAlwaysActive;
}
bool AppModuleExtension::GetForceBorderless() {
    return bForceBorderless;
}
void AppModuleExtension::SetForceBorderless(bool value) {
    bForceBorderless = value;
    if (value) {
        clearWindowStyle = WS_BORDER | WS_CAPTION | WS_DLGFRAME | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_OVERLAPPED | WS_POPUP | WS_SYSMENU | WS_THICKFRAME;
        clearWindowExStyle = WS_EX_OVERLAPPEDWINDOW;
        addWindowStyle = WS_MAXIMIZE | WS_POPUP;
    } else {
        clearWindowStyle = WS_OVERLAPPED;
        clearWindowExStyle = WS_OVERLAPPED;
        addWindowStyle = WS_OVERLAPPED;
    }
}
void AppModuleExtension::ToggleForceBorderless() {
    bForceBorderless = !bForceBorderless;
}
int AppModuleExtension::GetWindowX() {
    return windowX;
}
int AppModuleExtension::GetWindowY() {
    return windowY;
}
void AppModuleExtension::SetWindowPosition(int x, int y) {
    windowX = x;
    windowY = y;
}
int AppModuleExtension::GetWindowWidth() {
    return windowWidth;
}
int AppModuleExtension::GetWindowHeight() {
    return windowHeight;
}
void AppModuleExtension::SetWindowSize(int width, int height) {
    windowWidth = width;
    windowHeight = height;
}
void AppModuleExtension::UpdateWindowStyle(DWORD& dwStyleRef) {
    ClearFlags(dwStyleRef, clearWindowStyle);
    SetFlags(dwStyleRef, addWindowStyle);
}
void AppModuleExtension::UpdateWindowExStyle(DWORD& dwExStyleRef) {
    ClearFlags(dwExStyleRef, clearWindowExStyle);
}

void AppModuleExtension::SetInactive(bool flag) {
	bool alwaysActive = GetAlwaysActive();
	if (!alwaysActive || (flag && !bIsActive)) {
		AppModule::SetInactive(flag);
	}
	bShouldBeActive = flag;
}

void AppModuleExtension::Initialize() {
    Config* config = Config::GetSingleton();

#ifdef _DEBUG
    bConsoleEnabled = true;
#else
    bConsoleEnabled = config->GetBool("enable_console", false);
#endif

    consoleKey = config->GetInt("console_key", -1);
    if (consoleKey == -1) {
        consoleKey = VK_OEM_3; // '~' with US keyboard layout.
        char kbLayoutName[KL_NAMELENGTH];
        if (GetKeyboardLayoutNameA(kbLayoutName)) {
            if (strcmp(kbLayoutName, "0000041D") == 0) {
                // Swedish keyboard layout.
                consoleKey = VK_OEM_5;
            }
        }
    }

    bAlwaysActive = config->GetBool("always_active", false);
    SetForceBorderless(config->GetBool("force_borderless", false));
    bShouldBeActive = true;
    windowX = config->GetInt("x", 0);
    windowY = config->GetInt("y", 0);
    windowWidth = config->GetInt("width", 1024);
    windowHeight = config->GetInt("height", 768);
}

void AppModuleExtension::WriteHooks() {
    int size = sizeof(AppModuleExtension);

    // Allocate additional stack space to fit extended data.
    SafeWrite4(0x00427a92 + 2, size);
    // Make sure 'this' points to our extended offset.
    SafeWrite4(0x00427a99 + 2, -size);
    // Make sure the clean up is called with our extended offset.
    SafeWrite4(0x00427aae + 2, -size);

    // Hook the function which controls if the application is active or not. 
    //SafeWriteHook(0x00614224, &AppModuleExtension::SetInactive);
    //SafeWriteHook(0x0061426a, &AppModuleExtension::SetInactive);

    struct WinApiHooks {
        static LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
            if (msg == WM_KEYDOWN && wParam == gAppModuleEx->consoleKey) {
                gConsole->Toggle();
                return 0;
            }

            if (gConsole->IsOpen() && gConsole->ProcessWindowMessage(hwnd, msg, wParam, lParam)) {
                return 0;
            }

            switch (msg) {
            case WM_CHAR:
                break;
            case WM_DEADCHAR:
                break;
            case WM_KEYDOWN:
                break;
            case WM_KEYUP:
                break;
            case WM_ACTIVATE:
                break;
            case WM_SETFOCUS:
                break;
            case WM_KILLFOCUS:
                break;
            }

            return AppWindowProc(hwnd, msg, wParam, lParam);
        }

        static LRESULT CALLBACK WindowsHookProc(int nCode, WPARAM wParam, LPARAM lParam) {
            if (gAppModuleEx->bShouldBeActive) {
                return AppWindowsHookProc(nCode, wParam, lParam);
            }
            return CallNextHookEx(AppHHook, nCode, wParam, lParam);
        }

#if 0
        static DWORD WINAPI GetLastErrorFileNotFound() {
            return ERROR_FILE_NOT_FOUND;
        }

        static HANDLE WINAPI CreateMutexA(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName) {
        }

        static HANDLE WINAPI OpenMutexA(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCSTR lpName) {
            return NULL;
        }

        static BOOL WINAPI ReleaseMutex(HANDLE hMutex) {
            return TRUE;
        }
#endif

        static HWND WINAPI CreateWindowExA(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int x, int y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam) {
            gAppModuleEx->Initialize();
            gAppModuleEx->UpdateWindowStyle(dwStyle);
            gAppModuleEx->UpdateWindowExStyle(dwExStyle);
            //x = gAppModuleEx->GetWindowX();
            //y = gAppModuleEx->GetWindowX();
            //nWidth = gAppModuleEx->GetWindowWidth();
            //nHeight = gAppModuleEx->GetWindowHeight();
            return ::CreateWindowExA(dwExStyle, lpClassName, lpWindowName, dwStyle, x, y, nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam);
        }

        static LONG WINAPI SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong) {
            /*
            if (nIndex == GWL_STYLE) {
                gAppModuleEx->UpdateWindowStyle((DWORD&)dwNewLong);
            } else if (nIndex == GWL_EXSTYLE) {
                gAppModuleEx->UpdateWindowExStyle((DWORD&)dwNewLong);
            }
            */
            return ::SetWindowLongA(hWnd, nIndex, dwNewLong);
        }

        static BOOL WINAPI MoveWindow(HWND hWnd, int x, int y, int nWidth, int nHeight, BOOL bRepaint) {
            //x = gAppModuleEx->GetWindowX();
            //y = gAppModuleEx->GetWindowX();
            //nWidth = gAppModuleEx->GetWindowWidth();
            //nHeight = gAppModuleEx->GetWindowHeight();
            return ::MoveWindow(hWnd, x, y, nWidth, nHeight, bRepaint);
        }

        static BOOL WINAPI SetWindowPos(HWND hWnd, HWND hWndInsertAfter, int x, int y, int cx, int cy, UINT uFlags) {
            //x = gAppModuleEx->GetWindowX();
            //y = gAppModuleEx->GetWindowX();
            //cx = gAppModuleEx->GetWindowWidth();
            //cy = gAppModuleEx->GetWindowHeight();
            return ::SetWindowPos(hWnd, hWndInsertAfter, x, y, cx, cy, uFlags);
        }
    };

    // Hook the main window procedure.
    SafeWrite4(0x0061671f + 3, (uint32_t)WinApiHooks::WindowProc);

    // Hook the main windows hook procedure.
    SafeWrite4(0x00611db4 + 1, (uint32_t)WinApiHooks::WindowsHookProc);

    // Hook CreateWindowExA.
    SafeWriteHook(0x0052babe, WinApiHooks::CreateWindowExA);
    SafeWriteHook(0x0052bb00, WinApiHooks::CreateWindowExA);
    SafeWriteHook(0x00616a13, WinApiHooks::CreateWindowExA);
    SafeWriteHook(0x006170c3, WinApiHooks::CreateWindowExA); // 1

    // Hook SetWindowLongA.
    SafeWriteHook(0x005f9f14, WinApiHooks::SetWindowLongA);
    SafeWriteHook(0x005fa181, WinApiHooks::SetWindowLongA);
    SafeWriteHook(0x005fa319, WinApiHooks::SetWindowLongA);
    SafeWriteHook(0x00612e63, WinApiHooks::SetWindowLongA);
    SafeWriteHook(0x006661d7, WinApiHooks::SetWindowLongA);

    // Hook MoveWindow.
    SafeWriteHook(0x00610f3f, WinApiHooks::MoveWindow);

    // Hook SetWindowPos.
    SafeWriteHook(0x005f6A09, WinApiHooks::SetWindowPos);
    SafeWriteHook(0x005f6dcd, WinApiHooks::SetWindowPos);
    SafeWriteHook(0x005f6e18, WinApiHooks::SetWindowPos);
    SafeWriteHook(0x005f7175, WinApiHooks::SetWindowPos);
    SafeWriteHook(0x005f77B0, WinApiHooks::SetWindowPos);
    SafeWriteHook(0x00664D52, WinApiHooks::SetWindowPos);
    SafeWriteHook(0x0066506e, WinApiHooks::SetWindowPos);
    SafeWriteHook(0x0066511A, WinApiHooks::SetWindowPos);
    SafeWriteHook(0x00665214, WinApiHooks::SetWindowPos);
    SafeWriteHook(0x0068254e, WinApiHooks::SetWindowPos);
    SafeWriteHook(0x00682e6c, WinApiHooks::SetWindowPos);

    // Kind of experimental...
#if 0
    struct UIShellConfigHooks {
        static void __fastcall InitializeScreenSize(UIShell* shell, void*, int width, int height) {
            shell->InternalInitializeScreenSize(gAppModuleEx->GetWindowWidth(), gAppModuleEx->GetWindowHeight());

            // Aggressively prevent screen width and height from being overwritten.
            SafeWriteNoOperationRange(0x007413ee, 0x007413f4);
            SafeWriteNoOperationRange(0x006185fe, 0x00618602);
            SafeWriteNoOperationRange(0x006111f1, 0x006111f4);
            SafeWriteNoOperationRange(0x00611206, 0x00611209);

            FlushInstructionCache();
        }
        static void __fastcall GetWidthSetting(void*, void*, const char* keyName, int& widthOut) {
            widthOut = gAppModuleEx->GetWindowWidth();
        }
        static void __fastcall GetHeightSetting(void*, void*, const char* keyName, int& heightOut) {
            heightOut = gAppModuleEx->GetWindowHeight();
        }
    };

    // This function is called to initially set the screen width/height.
    SafeWriteHook(0x0074be70, UIShellConfigHooks::InitializeScreenSize);
    // This function is called to look up the "width" setting.
    SafeWriteHook(0x00610E16, UIShellConfigHooks::GetWidthSetting);
    // This function is called to look up the "height" setting.
    SafeWriteHook(0x00610E43, UIShellConfigHooks::GetHeightSetting);
#endif
}

$OnDllInjection() {
    AppModuleExtension::WriteHooks();
}

$OnConfigLoaded() {
    if (Config::GetSingleton()->GetBool("allow_multiple_instances", false)) {
        // Trick the game into using a process specific mutex to allow more than one instance.
        SafeWriteFormat(0x00bb1764 + 3, 9, "%.8x", GetCurrentProcessId());
    }
}

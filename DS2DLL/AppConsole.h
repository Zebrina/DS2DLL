#pragma once

#include "Config.h"
#include "DS2DLL.h"
#include <Singleton.h>
#include <d3d9.h>
#include <d3dx9core.h>

class AppConsole {
public:
    AppConsole(Config* config);
    ~AppConsole();

    bool Initialize(IDirect3DDevice9* device);

    FEX bool IsOpen() const;
    FEX void Open();
    FEX void Close();
    FEX void Toggle();

    bool ProcessWindowMessage(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

    void DrawTextString(int x, int y, const char *str);
    void Draw();

private:
    bool bConsoleOpen; // Referenced by inline assembly.
    bool bInitialized; // Referenced by inline assembly.
    bool bPauseGame;
    IDirect3DDevice9* deviceRef;
    ID3DXFont* font;
    hexcolorcode fontColor;
    IDirect3DTexture9* overlayTexture;
    hexcolorcode overlayColor;

    static void Free();
};

extern AppConsole* gConsole;

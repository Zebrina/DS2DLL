#include "AppConsole.h"

#include "AppModuleExtension.h"
#include "DllMain.h"
#include "EventHandler.h"
#include <d3dx9tex.h>

AppConsole* gConsole;

static HRESULT NAKED PostEndScene() {
    __asm {
        pushad
        pushfd

        mov ecx, gConsole
        cmp byte ptr[ecx], 0 // bConsoleOpen
        jz return_to_endscene // If console is not open, return to EndScene procedure.

        cmp byte ptr[ecx + 1], 0 // bInitialized
        jnz skip_initialization
        push eax // IDirect3DDevice9*
        call AppConsole::Initialize
        test eax, eax
        jz return_to_endscene

    skip_initialization:
        mov ecx, gConsole
        call AppConsole::Draw

    return_to_endscene:
        popfd
        popad

        push 0x005219a0
        jmp dword ptr[ecx + 0xa8] // IDirect3DDevice9::EndScene
    }
}

AppConsole::AppConsole(Config* config) :
    bConsoleOpen(false),
    bInitialized(false),
    bPauseGame(config->GetBool("console_pause_game", false)),
    deviceRef(NULL),
    font(NULL),
    fontColor(D3DCOLOR_XRGB(255, 255, 255)),
    overlayTexture(NULL),
    overlayColor(D3DCOLOR_ARGB(191, 0, 0, 0)) {

    SafeWriteJump(0x0052199a, PostEndScene);
    DEBUG_ONLY(SafeWrite1(0x0052199a + 5, (byte)NOP));
    FlushInstructionCache();

    atexit(Free);
}
AppConsole::~AppConsole() {
    if (font) {
        font->Release();
    }
    if (deviceRef) {
        deviceRef->Release();
    }
}

bool AppConsole::Initialize(IDirect3DDevice9* device) {
    HFONT hFont = (HFONT)GetStockObject(SYSTEM_FONT);

    Config* config = Config::GetSingleton();

    int fontSize = config->GetInt("console_font_size", 14);
    GPBString fontName = config->GetString("console_font", "Consolas");

    HRESULT hResult = D3DXCreateFontA(device, fontSize, 0, FW_NORMAL, 1, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, ANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, fontName, &font);
    if (FAILED(hResult)) {
        return false;
    }

    device->AddRef();
    deviceRef = device;

    bInitialized = true;
    return true;
}

FEX bool AppConsole::IsOpen() const {
    return bConsoleOpen;
}
FEX void AppConsole::Open() {
    bConsoleOpen = true;
    AppModuleExtension::GetSingleton()->SetInactive(bPauseGame);
}
FEX void AppConsole::Close() {
    bConsoleOpen = false;
    AppModuleExtension::GetSingleton()->SetInactive(false);
}
FEX void AppConsole::Toggle() {
    bConsoleOpen = !bConsoleOpen;
    AppModuleExtension::GetSingleton()->SetInactive(bPauseGame && bConsoleOpen);
}

bool AppConsole::ProcessWindowMessage(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
    case WM_CHAR:
        return true;
    case WM_DEADCHAR:
        return true;
    case WM_KEYDOWN:
        return true;
    case WM_KEYUP:
        return true;
    }
    return false;
}

void AppConsole::Free() {
    delete gConsole;
}

struct CUSTOMVERTEX
{
    FLOAT x, y, z, rhw;    // from the D3DFVF_XYZRHW flag
    DWORD color;    // from the D3DFVF_DIFFUSE flag
};

#define CUSTOMFVF (D3DFVF_XYZRHW | D3DFVF_DIFFUSE)

void AppConsole::DrawTextString(int x, int y, const char *str) {
    //constexpr FLOAT WIDTH = 1920.0f;

    /*
    LPDIRECT3DVERTEXBUFFER9 v_buffer;

    // create the vertices using the CUSTOMVERTEX struct
    CUSTOMVERTEX vertices[] =
    {
        { 400.0f, 62.5f, 0.5f, 1.0f, D3DCOLOR_XRGB(0, 0, 255), },
        { 650.0f, 500.0f, 0.5f, 1.0f, D3DCOLOR_XRGB(0, 255, 0), },
        { 150.0f, 500.0f, 0.5f, 1.0f, D3DCOLOR_XRGB(255, 0, 0), },
    };

    // create a vertex buffer interface called v_buffer
    device->CreateVertexBuffer(3 * sizeof(CUSTOMVERTEX),
        0,
        CUSTOMFVF,
        D3DPOOL_MANAGED,
        &v_buffer,
        NULL);

    VOID* pVoid;    // a void pointer

    // lock v_buffer and load the vertices into it
    v_buffer->Lock(0, 0, (void**)&pVoid, 0);
    memcpy(pVoid, vertices, sizeof(vertices));
    v_buffer->Unlock();

    // select which vertex format we are using
    hResult = device->SetFVF(CUSTOMFVF);
    if (FAILED(hResult)) {
        return;
    }

    // select the vertex buffer to display
    hResult = device->SetStreamSource(0, v_buffer, 0, sizeof(CUSTOMVERTEX));
    if (FAILED(hResult)) {
        return;
    }

    // copy the vertex buffer to the back buffer
    hResult = device->DrawPrimitive(D3DPT_TRIANGLELIST, 0, 1);
    if (FAILED(hResult)) {
        return;
    }
    */

    /*
    CUSTOMVERTEX OurVertices[] =
    {
        { 0, 0, 0, 1.0f, D3DCOLOR_ARGB(255, 255, 255, 255) },
        { 400, 0, 0, 1.0f, D3DCOLOR_ARGB(255, 255, 255, 255) },
        { 0, 300, 0, 1.0f, D3DCOLOR_ARGB(255, 255, 255, 255) },
        { 400, 300, 0, 1.0f, D3DCOLOR_ARGB(255, 255, 255, 255) },
    };

    LPDIRECT3DVERTEXBUFFER9 vBuffer;

    device->CreateVertexBuffer(4 * sizeof(CUSTOMVERTEX),
        0,
        CUSTOMFVF,
        D3DPOOL_MANAGED,
        &vBuffer,
        NULL);

    VOID* pVoid;    // the void* we were talking about

    vBuffer->Lock(0, 0, (void**)&pVoid, 0);    // locks v_buffer, the buffer we made earlier
    memcpy(pVoid, OurVertices, sizeof(OurVertices));    // copy vertices to the vertex buffer
    vBuffer->Unlock();    // unlock v_buffer

    device->SetFVF(CUSTOMFVF);
    device->SetStreamSource(0, vBuffer, 0, sizeof(CUSTOMVERTEX));
    device->DrawPrimitive(D3DPT_TRIANGLESTRIP, 0, 2);
    */

    /*
    if (!overlayTexture) {
        hResult = D3DXCreateTextureFromFileExA(device, "D:\\Projects\\DS2DLL\\DS2DLL\\ConsoleOverlay.dds", 0, 0, 0, D3DUSAGE_RENDERTARGET, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, overlayColor, NULL, NULL, &overlayTexture);
        if (hResult != D3D_OK) {
            HRSRC hResInfo = FindResourceA(DS2DLLModuleHandle, "ConsoleOverlay.dds", "Texture");
            if (hResInfo) {
                HGLOBAL hGlobal = LoadResource(DS2DLLModuleHandle, hResInfo);
                if (hGlobal) {
                    void* resPtr = LockResource(hGlobal);
                    uint resSize = SizeofResource(DS2DLLModuleHandle, hResInfo);
                    hResult = D3DXCreateTextureFromFileInMemoryEx(device, resPtr, resSize, 0, 0, 0, D3DUSAGE_RENDERTARGET, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, overlayColor, NULL, NULL, &overlayTexture);
                }
            }
        }
    }

    if (overlayTexture) {
        device->SetTexture(0, overlayTexture);
        device->DrawPrimitive(D3DPT_TRIANGLEFAN, 0, 2);
    }
    */

    if (font) {
        // Rectangle where the text will be located
        RECT textRect = { x, y, 200, 200 };

        // Inform font it is about to be used
        //pFont->Begin();

        font->DrawTextA(NULL, str, -1, &textRect, DT_LEFT | DT_TOP, fontColor);
    }

    // Calculate the rectangle the text will occupy
    //pFont->DrawTextA(str, -1, &textRect, DT_CALCRECT, 0);

    // Output the text, left aligned
    //pFont->DrawTextA(str, -1, &textRect, DT_LEFT, color);

    // Finish up drawing
    //pFont->End();
}

void AppConsole::Draw() {
    /*
    device->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, NULL, 1.0f, 0);
    device->SetRenderState(D3DRS_ZENABLE, FALSE);
    device->SetRenderState(D3DRS_LIGHTING, FALSE);
    device->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);
    */

    DrawTextString(10, 10, "Hello World!");
}

$OnConfigLoaded() {
    gConsole = new AppConsole(Config::GetSingleton());
}

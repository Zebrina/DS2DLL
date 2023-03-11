#include "DS2DLLVersion.h"
#include "EventHandler.h"
#include "UIShell.h"
#include "UIText.h"

static void __cdecl SetVersionText(UIText* gameVersionText) {
    UIShell* shell = UIShell::GetSingleton();

    UIText* loaderVersionText = (UIText*)shell->FindUIWindow("text_ds2dll_version", "main_menu", WES_UNKNOWN_1);

    if (!loaderVersionText) {
        loaderVersionText = (UIText*)shell->CreateUIWindow("main_menu", "ui:interfaces:frontend:main_menu:main_menu:text_version", "text_ds2dll_version");
        if (loaderVersionText) {
            int screenWidth = shell->GetScreenWidth();
            loaderVersionText->SetRect(screenWidth - gameVersionText->rect.right,
                                       screenWidth - gameVersionText->rect.left,
                                       gameVersionText->rect.top,
                                       gameVersionText->rect.bottom,
                                       false);
            loaderVersionText->SetJustification(JUSTIFY_RIGHT);
            loaderVersionText->SetText("DS2Dll Version - " DS2DLL_VERSION);
            loaderVersionText->SetEnabled(true);
        }
    }

    if (loaderVersionText) {
        loaderVersionText->SetVisible(true);
    }

    gameVersionText->SetVisible(true);
}

$OnDllInjection() {
    SafeWrite(0x0044e2ac + 0, NOP);
    SafeWrite(0x0044e2ac + 1, PUSH_ESI);
    SafeWriteCall(0x0044e2ac + 2, SetVersionText);
}

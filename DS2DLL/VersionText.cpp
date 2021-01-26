#include "EventHandler.h"
#include "UIShell.h"
#include "UIText.h"

static void __cdecl SetVersionText(UIText* gameVersionText) {
    UIShell* shell = UIShell::GetSingleton();

    UIText* loaderVersionText = (UIText*)shell->CreateUIWindow("main_menu", "ui:interfaces:frontend:ds2dll_frontend:text_ds2dll_version_template", "text_ds2dll_version");

    if (loaderVersionText) {
        int x = shell->GetScreenWidth() - (gameVersionText->GetPositionX() + loaderVersionText->GetWidth());
        int y = gameVersionText->GetPositionY();
        loaderVersionText->SetPosition(x, y);
        loaderVersionText->SetText("DS2Dll Version - 0.1.0");
        loaderVersionText->SetEnabled(true);
        loaderVersionText->SetVisible(true);
    }

    gameVersionText->SetVisible(true);
}

$OnDllInjection() {
    SafeWrite(0x0044e2ac + 0, NOP);
    SafeWrite(0x0044e2ac + 1, PUSH_ESI);
    SafeWriteCall(0x0044e2ac + 2, SetVersionText);
}

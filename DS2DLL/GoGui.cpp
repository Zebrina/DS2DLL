#include "GoGui.h"

#include "EventHandler.h"

FEX const GPBString& GoGui::GetToolTipColorName() const {
    const GPBString& name = GetToolTipColorName_Default();
    return name;
}
FEX hexcolorcode GoGui::GetToolTipColor() const {
    hexcolorcode color = GetToolTipColor_Default();
    return color;
}

FEX const GPBString& GoGui::FUBI_RENAME(GetItemSet)() const {
    return GetItemSet(); // test    byte ptr dword_D1A29C, 1
}

$OnDllInjection() {
    SafeWriteHook(0x00805454, &GoGui::GetToolTipColorName);
    SafeWriteHook(0x00805471, &GoGui::GetToolTipColorName);
    SafeWriteHook(0x0080821c, &GoGui::GetToolTipColorName);

    SafeWriteHook(0x008082fe, &GoGui::GetToolTipColor);
}

#pragma once

#include "GPString.h"
#include "UIWindow.h"

class UIComboBox : public UIWindow {
public:
	$Method(0x007831e0, AddElement, void, const GPBString& unk1, int unk2, uint unk3);
	$Method(0x007831b0, AddElement, void, const GPBString& unk1, int unk2);
	$Method(0x00783cc0, GetSelectedText, void, GPBString& unk1);
	$Method(0x00783360, RemoveElement, void, const GPBString& unk1);
	$Method(0x00783470, SetElementIcon, void, const GPBString& unk1, int unk2);
	$Method(0x00783290, SetElementText, void, int unk1, int unk2, const GPBString& unk3, uint unk4);
	$ConstMethod(0x00783080, GetButtonDown, bool);
	$ConstMethod(0x00783060, GetDrawText, bool);
	$ConstMethod(0x00783020, GetExpanded, bool);
	$ConstMethod(0x00783070, GetChildListbox, UIListbox*);
	$ConstMethod(0x00782fc0, GetSelectedTag, int);
	$ConstMethod(0x00783010, GetColor, hexcolorcode);
	$ConstMethod(0x00783040, GetTextColor, hexcolorcode);
	$Method(0x007833f0, RemoveAllElements, void);
	$Method(0x007844c0, SelectElement, void, const GPBString& unk1);
	$Method(0x00784560, SelectElementByTag, void, int unk1);
	$Method(0x00783100, SetChildListbox, void, UIListbox* unk1);
	$Method(0x00783000, SetColor, void, hexcolorcode color);
	$Method(0x00783050, SetDrawText, void, bool unk1);
	$Method(0x007839c0, SetExpanded, void, bool unk1);
	$Method(0x00784620, SetSelectedTag, void, int unk1);
	$Method(0x00783030, SetTextColor, void, hexcolorcode color);

    // 0x170
    $Padding(0x170, 0x190);
    // 0x190
    hexcolorcode color;
    // 0x194
    $Padding(0x194, 0x198);
    // 0x198
    hexcolorcode textColor;
};

STATIC_ASSERT_OFFSETOF(UIComboBox, color, 0x190);
STATIC_ASSERT_OFFSETOF(UIComboBox, textColor, 0x198);

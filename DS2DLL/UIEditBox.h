#pragma once

#include "Enums.h"
#include "UIWindow.h"

class UIEditBox : public UIWindow {
public:
	$Method(0x00762470, GetGreaterSelection, int);
	$Method(0x00762450, GetLesserSelection, int);
	$ConstMethod(0x00763f00, GetText, void, GPBString& unk1);
	$Method(0x007624e0, ResetSelection, void);
	$Method(0x00763ed0, SetText, void, const GPBString& unk1);
	$ConstMethod(0x00410071, GetAllowInput, bool);
	$ConstMethod(0x00410090, GetPermanentFocus, bool);
	$Method(0x007624b0, HasPixelLimit, bool);
	$ConstMethod(0x004100dc, GetColor, hexcolorcode);
	$ConstMethod(0x004100c5, GetMaxPixelSize, int);
	$ConstMethod(0x004100ae, GetMaxStringSize, int);
	$ConstMethod(0x00410121, GetPromptIndex, int);
	$ConstMethod(0x00410097, GetTabStop, int);
	$ConstMethod(0x004100e3, GetJustification, eJustification); // Exported as: GeteJustification
	$ConstMethod(0x0041010a, GetImeColor, hexcolorcode);
	$Method(0x00762a30, EnableIme, void, bool unk1);
	$Method(0x00410078, GiveFocus, void);
	$Method(0x00763110, SetAllowInput, void, bool flag);
	$Method(0x004100cc, SetColor, void, hexcolorcode unk1);
	$Method(0x004100fa, SetImeColor, void, hexcolorcode unk1);
	$Method(0x004100ea, SetJustification, void, eJustification unk1); // Exported as: SeteJustification
	$Method(0x004100b5, SetMaxPixelSize, void, int unk1);
	$Method(0x0041009e, SetMaxStringSize, void, int unk1);
	$Method(0x00410080, SetPermanentFocus, void, bool value);
	$Method(0x00410111, SetPromptIndex, void, int value);
	$Method(0x00762490, ShowHiddenText, void, bool unk1);

    // 0x170
    $Padding(0x170, 0x180);
    // 0x180
    bool b180;
    bool bAllowInput;
    bool b182;
    bool b183;
    // 0x184
    bool b184;
    bool bPermanentFocus;
    // 0x188
    $Padding(0x188, 0x190);
    // 0x190
    int maxStringSize;
    // 0x194
    int maxPixelSize;
    // 0x198
    $Padding(0x198, 0x19c);
    // 0x19c
    int promptIndex;
    // 0x1a0
    $Padding(0x1a0, 0x1ac);
    // 0x1ac
    int tabStop;
    // 0x1b0
    $Padding(0x1b0, 0x1b8);
    // 0x1b8
    hexcolorcode imeColor;
    // 0x1bc
    $Padding(0x1bc, 0x1c4);
    // 0x1c4
    hexcolorcode color;
    // 0x1c8
    $Padding(0x1c8, 0x1dc);
    // 0x1dc
    eJustification justification;
};

STATIC_ASSERT_OFFSETOF(UIEditBox, bAllowInput, 0x181);
STATIC_ASSERT_OFFSETOF(UIEditBox, bPermanentFocus, 0x185);
STATIC_ASSERT_OFFSETOF(UIEditBox, maxStringSize, 0x190);
STATIC_ASSERT_OFFSETOF(UIEditBox, promptIndex, 0x19c);
STATIC_ASSERT_OFFSETOF(UIEditBox, tabStop, 0x1ac);
STATIC_ASSERT_OFFSETOF(UIEditBox, imeColor, 0x1b8);
STATIC_ASSERT_OFFSETOF(UIEditBox, color, 0x1c4);
STATIC_ASSERT_OFFSETOF(UIEditBox, justification, 0x1dc);

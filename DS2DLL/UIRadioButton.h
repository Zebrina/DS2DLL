#pragma once

#include "UITab.h"

// Possible child of UITab.
class UIRadioButton : public UITab {
public:
    // Inherited from UITab.
    //$ConstMethod(0x0046dcc5, GetCheck, bool);
    //$Method(0x0079e960, SetCheck, void, bool bCheck);
	//$Method(0x0079eac0, SetForceCheck, void, bool bForceCheck);
	//$ConstMethod(0x005028ba, GetRadioGroup, const GPBString&);
	//$Method(0x00503f4c, SetRadioGroup, void, const GPBString& newRadioGroup);

	$ConstMethod(0x005028d1, GetAllowUserPress, bool);
	$ConstMethod(0x005028e8, GetInvalid, bool);
	$Method(0x00485d68, IsDisabled, bool);
	$Method(0x0079fb20, LoadSelectionTexture, void, const GPBString& unk1);
	$Method(0x0079f1a0, ResetButtonStatus, void);
	$Method(0x005028c1, SetAllowUserPress, void, bool bAllowUserPress);
	$Method(0x005028d8, SetInvalid, void, bool unk1);
	$Method(0x0079f2d0, SetMidState, void, bool unk1);

    // 0x178
    bool b_178;
    // 0x179
    bool b_179;
    // 0x17a
    bool allowUserPress;
    // 0x17b
    bool b_17b;
    // 0x17c
    $Padding(0x17c, 0x198);
    // 0x198
    bool disabled;
    // 0x199
    bool b_199;
    // 0x19a
    bool b_19a;
    // 0x19b
    bool b_19b;
    // 0x19c
    $Padding(0x19c, 0x24c);
    // 0x24c
    bool invalid;
};

STATIC_ASSERT_OFFSETOF(UIRadioButton, allowUserPress, 0x17a);
STATIC_ASSERT_OFFSETOF(UIRadioButton, invalid, 0x24c);

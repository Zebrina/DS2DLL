#pragma once

#include "UIWindow.h"

// Possible parent of UIRadioButton.
class UITab : public UIWindow {
public:
	$Method(0x004541da, GetCheck, bool);
	$Method(0x007824e0, SetCheck, void, bool bCheck);
	$Method(0x00782580, SetForceCheck, void, bool bForceCheck);
	$Method(0x004541e1, GetRadioGroup, const GPBString&);
	$Method(0x00454cda, SetRadioGroup, void, const GPBString& newRadioGroup);

    // 0x170
    bool b_170;
    // 0x171
    bool check;
    // 0x172
    bool b_172;
    // 0x173
    bool b_173;
    // 0x174
    GPBString radioGroup;
};

STATIC_ASSERT(sizeof(UITab) == 0x178);

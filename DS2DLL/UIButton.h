#pragma once

#include "UIWindow.h"

// Possible child of UITextBox
class UIButton : public UIWindow {
public:
	// 0x0077f890
	virtual ~UIButton();

    $ConstMethod(0x0049b595, GetDisabled, bool);
	$ConstMethod(0x00502838, GetPartialDisable, bool);
    $Method(0x0077fa00, EnableButton, void);
    $Method(0x0077f970, DisableButton, void);
	$ConstMethod(0x00502874, GetPressedState, bool);
	$Method(0x0077f770, SetPressedState, void, bool unk1);
	$ConstMethod(0x0050357f, GetIsRepeater, bool);
	$Method(0x00502864, SetIsRepeater, void, bool bRepeater);
	$ConstMethod(0x0050284f, GetAllowUserPress, bool);
	$Method(0x0050283f, SetAllowUserPress, void, bool bAllowUserPress);
	$ConstMethod(0x00502856, GetButtonDown, bool);
	$Method(0x0077fba0, ResetButtonStatus, void);
};

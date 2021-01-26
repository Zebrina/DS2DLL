#pragma once

#include "UIWindow.h"

class UICheckbox : public UIWindow {
public:
	// 0x00789880
	virtual ~UICheckbox();

	$ConstMethod(0x00502887, GetCheckState, bool); // Exported as: FUBI_RENAME_GetCheckState
	$Method(0x0050287e, SetCheckState, void, bool unk1); // Exported as: FUBI_RENAME_SetCheckState
	$ConstMethod(0x0050289e, GetAllowUserPress, bool);
	$Method(0x0050288e, SetAllowUserPress, void, bool bAllowUserPress);
	$Method(0x00789d00, LoadCheckTexture, void, const GPBString& unk1);

	// 0x170
	$Padding(0x170, 0x188);
	// 0x188
	bool allowUserPress;
};

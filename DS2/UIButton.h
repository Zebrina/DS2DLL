#pragma once

#include "ClassMacros.h"

class UIButton {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x502835, int, Params(UIWindow* unk1), Args(unk1));
	DefineConstMethod(FUBI_RENAME_GetIsRepeater, 0x50357f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAllowUserPress, 0x50284f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetButtonDown, 0x502856, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDisabled, 0x49b595, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPartialDisable, 0x502838, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPressedState, 0x502874, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(DisableButton, 0x77f970, void, NO_PARAMS, NO_ARGS);
	DefineMethod(EnableButton, 0x77fa00, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ResetButtonStatus, 0x77fba0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetAllowUserPress, 0x50283f, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetIsRepeater, 0x502864, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetPressedState, 0x77f770, void, Params(bool unk1), Args(unk1));
};

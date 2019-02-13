#pragma once

class UIButton {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x502835, int, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineConstMethod(FUBI_RENAME_GetIsRepeater, 0x50357f, bool, Params(), Args());
	DefineConstMethod(GetAllowUserPress, 0x50284f, bool, Params(), Args());
	DefineConstMethod(GetButtonDown, 0x502856, bool, Params(), Args());
	DefineConstMethod(GetDisabled, 0x49b595, bool, Params(), Args());
	DefineConstMethod(GetPartialDisable, 0x502838, bool, Params(), Args());
	DefineConstMethod(GetPressedState, 0x502874, bool, Params(), Args());
	DefineMethod(DisableButton, 0x77f970, void, Params(), Args());
	DefineMethod(EnableButton, 0x77fa00, void, Params(), Args());
	DefineMethod(ResetButtonStatus, 0x77fba0, void, Params(), Args());
	DefineMethod(SetAllowUserPress, 0x50283f, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetIsRepeater, 0x502864, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetPressedState, 0x77f770, void, Params(bool unk1), Args(bool unk1));
};

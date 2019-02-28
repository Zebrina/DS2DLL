#pragma once

#include "GPBString.h"
#include "UIWindow.h"



class UIRadioButton : public UIWindow {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x5028b7, int, Params(UIWindow* unk1), Args(unk1));
	DefineConstMethod(GetAllowUserPress, 0x5028d1, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCheck, 0x46dcc5, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInvalid, 0x5028e8, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsDisabled, 0x485d68, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRadioGroup, 0x5028ba, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(LoadSelectionTexture, 0x79fb20, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(ResetButtonStatus, 0x79f1a0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetAllowUserPress, 0x5028c1, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetCheck, 0x79e960, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetForceCheck, 0x79eac0, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetInvalid, 0x5028d8, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetMidState, 0x79f2d0, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetRadioGroup, 0x503f4c, void, Params(const gpbstring<char>& unk1), Args(unk1));
};

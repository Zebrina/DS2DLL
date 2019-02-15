#pragma once

#include "ClassMacros.h"

class UITab {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x4541d7, int, Params(UIWindow* unk1), Args(unk1));
	DefineMethod(GetCheck, 0x4541da, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetRadioGroup, 0x4541e1, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(SetCheck, 0x7824e0, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetForceCheck, 0x782580, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetRadioGroup, 0x454cda, void, Params(const gpbstring<char>& unk1), Args(unk1));
};

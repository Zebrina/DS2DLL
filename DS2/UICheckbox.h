#pragma once

#include "ClassMacros.h"

class UICheckbox {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x50287b, int, Params(UIWindow* unk1), Args(unk1));
	DefineConstMethod(FUBI_RENAME_GetCheckState, 0x502887, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAllowUserPress, 0x50289e, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_SetCheckState, 0x50287e, void, Params(bool unk1), Args(unk1));
	DefineMethod(LoadCheckTexture, 0x789d00, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetAllowUserPress, 0x50288e, void, Params(bool unk1), Args(unk1));
};

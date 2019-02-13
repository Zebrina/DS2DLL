#pragma once

class UICheckbox {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x50287b, int, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineConstMethod(FUBI_RENAME_GetCheckState, 0x502887, bool, Params(), Args());
	DefineConstMethod(GetAllowUserPress, 0x50289e, bool, Params(), Args());
	DefineMethod(FUBI_RENAME_SetCheckState, 0x50287e, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(LoadCheckTexture, 0x789d00, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetAllowUserPress, 0x50288e, void, Params(bool unk1), Args(bool unk1));
};

#pragma once

class UIRadioButton {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x5028b7, int, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineConstMethod(GetAllowUserPress, 0x5028d1, bool, Params(), Args());
	DefineConstMethod(GetCheck, 0x46dcc5, bool, Params(), Args());
	DefineConstMethod(GetInvalid, 0x5028e8, bool, Params(), Args());
	DefineMethod(IsDisabled, 0x485d68, bool, Params(), Args());
	/*UIRadioButton*/ public: const gpbstring<char>& /*__thiscall*/ GetRadioGroup() const; //0x005028ba
	DefineMethod(LoadSelectionTexture, 0x79fb20, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(ResetButtonStatus, 0x79f1a0, void, Params(), Args());
	DefineMethod(SetAllowUserPress, 0x5028c1, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetCheck, 0x79e960, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetForceCheck, 0x79eac0, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetInvalid, 0x5028d8, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetMidState, 0x79f2d0, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetRadioGroup, 0x503f4c, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
};

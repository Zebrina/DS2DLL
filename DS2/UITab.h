#pragma once

class UITab {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x4541d7, int, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineMethod(GetCheck, 0x4541da, bool, Params(), Args());
	/*UITab*/ public: const gpbstring<char>& /*__thiscall*/ GetRadioGroup(); //0x004541e1
	DefineMethod(SetCheck, 0x7824e0, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetForceCheck, 0x782580, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetRadioGroup, 0x454cda, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
};

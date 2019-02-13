#pragma once

class UIText {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x5028a5, int, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineConstMethod(GetText, 0x503f1d, void, Params(gpbstring<char>& unk1), Args(gpbstring<char>& unk1));
	DefineMethod(SetText, 0x503a55, void, Params(const gpbstring<char>& unk1, bool unk2), Args(const gpbstring<char>& unk1, bool unk2));
	DefineStaticMethod(GetUIText, 0x5028af, UIText*, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineConstMethod(GetJustification, 0x5028a8, JUSTIFICATION, Params(), Args());
	/*UIText*/ public: unsigned int /*__thiscall*/ GetColor() const; //0x00498485
	DefineMethod(SetAutoSize, 0x472beb, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetColor, 0x472bdb, void, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(SetFont, 0x760ac0, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetJustification, 0x456d41, void, Params(JUSTIFICATION unk1), Args(JUSTIFICATION unk1));
};

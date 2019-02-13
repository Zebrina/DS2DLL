#pragma once

class UIEditBox {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x41006e, int, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineMethod(GetGreaterSelection, 0x762470, int, Params(), Args());
	DefineMethod(GetLesserSelection, 0x762450, int, Params(), Args());
	DefineConstMethod(GetText, 0x763f00, void, Params(gpbstring<char>& unk1), Args(gpbstring<char>& unk1));
	DefineMethod(ResetSelection, 0x7624e0, void, Params(), Args());
	DefineMethod(SetText, 0x763ed0, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineConstMethod(GetAllowInput, 0x410071, bool, Params(), Args());
	DefineConstMethod(GetPermanentFocus, 0x410090, bool, Params(), Args());
	DefineMethod(HasPixelLimit, 0x7624b0, bool, Params(), Args());
	DefineConstMethod(GetColor, 0x4100dc, int, Params(), Args());
	DefineConstMethod(GetMaxPixelSize, 0x4100c5, int, Params(), Args());
	DefineConstMethod(GetMaxStringSize, 0x4100ae, int, Params(), Args());
	DefineConstMethod(GetPromptIndex, 0x410121, int, Params(), Args());
	DefineConstMethod(GetTabStop, 0x410097, int, Params(), Args());
	DefineConstMethod(GetJustification, 0x4100e3, JUSTIFICATION, Params(), Args());
	/*UIEditBox*/ public: unsigned long /*__thiscall*/ GetImeColor() const; //0x0041010a
	DefineMethod(EnableIme, 0x762a30, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(GiveFocus, 0x410078, void, Params(), Args());
	DefineMethod(SetAllowInput, 0x763110, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetColor, 0x4100cc, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetImeColor, 0x4100fa, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetJustification, 0x4100ea, void, Params(JUSTIFICATION unk1), Args(JUSTIFICATION unk1));
	DefineMethod(SetMaxPixelSize, 0x4100b5, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetMaxStringSize, 0x41009e, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetPermanentFocus, 0x410080, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetPromptIndex, 0x410111, void, Params(int unk1), Args(int unk1));
	DefineMethod(ShowHiddenText, 0x762490, void, Params(bool unk1), Args(bool unk1));
};

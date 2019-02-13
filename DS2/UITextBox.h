#pragma once

class UITextBox {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x410128, int, Params(UIWindow* unk1), Args(UIWindow* unk1));
	/*UITextBox*/ private: gpbstring<char> /*__thiscall*/ GetTextInAnsi() const; //0x004105e1
	DefineMethod(ReformatTooltip, 0x41066e, int, Params(const gpbstring<char>& unk1, int unk2, unsigned long unk3), Args(const gpbstring<char>& unk1, int unk2, unsigned long unk3));
	DefineMethod(SetLineText, 0x410628, int, Params(int unk1, const gpbstring<char>& unk2, unsigned long unk3), Args(int unk1, const gpbstring<char>& unk2, unsigned long unk3));
	DefineMethod(SetText, 0x410608, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetToolTipText, 0x41064e, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(FUBI_RENAME_GetScrolling, 0x410158, bool, Params(), Args());
	DefineConstMethod(GetDisableUpdate, 0x4101e7, bool, Params(), Args());
	DefineConstMethod(GetFixedLocation, 0x4101a2, bool, Params(), Args());
	DefineConstMethod(GetScrollThrough, 0x4101d0, bool, Params(), Args());
	DefineMethod(GetTypeMode, 0x41021c, bool, Params(), Args());
	DefineMethod(IsFinishedScrolling, 0x41015d, bool, Params(), Args());
	DefineConstMethod(GetScrollRate, 0x410174, float, Params(), Args());
	DefineMethod(GetTypeRate, 0x410205, float, Params(), Args());
	DefineMethod(FUBI_RENAME_GetElementHeight, 0x41014a, int, Params(), Args());
	DefineMethod(FUBI_RENAME_GetLeadElement, 0x41013c, int, Params(), Args());
	DefineConstMethod(GetFontHeight, 0x4101b9, int, Params(), Args());
	DefineConstMethod(GetLineSpacer, 0x4101fe, int, Params(), Args());
	DefineConstMethod(GetJustification, 0x41017b, JUSTIFICATION, Params(), Args());
	/*UITextBox*/ public: unsigned int /*__thiscall*/ FUBI_RENAME_GetMaxActiveElements(); //0x00410137
	/*UITextBox*/ public: unsigned int /*__thiscall*/ FUBI_RENAME_GetNumElements(); //0x00410132
	/*UITextBox*/ public: unsigned long /*__thiscall*/ GetTextColor() const; //0x0041012b
	DefineMethod(CenterWindowToMousePos, 0x75d910, void, Params(), Args());
	DefineMethod(FUBI_RENAME_SetLeadElement, 0x410141, void, Params(int unk1), Args(int unk1));
	DefineMethod(FUBI_RENAME_SetScrolling, 0x41014f, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetDisableUpdate, 0x4101d7, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetFixedLocation, 0x410192, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetFontHeight, 0x4101a9, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetJustification, 0x410182, void, Params(JUSTIFICATION unk1), Args(JUSTIFICATION unk1));
	DefineMethod(SetLineSpacer, 0x4101ee, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetScrollRate, 0x410164, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetScrollThrough, 0x4101c0, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetTextColor, 0x75fa90, void, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(SetTypeMode, 0x410223, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetTypeRate, 0x41020c, void, Params(float unk1), Args(float unk1));
};

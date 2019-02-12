#pragma once

class UIEditBox {
public:
	/*UIEditBox*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(UIWindow* unk1); //0x0041006e
	/*UIEditBox*/ private: int /*__thiscall*/ GetGreaterSelection(); //0x00762470
	/*UIEditBox*/ private: int /*__thiscall*/ GetLesserSelection(); //0x00762450
	/*UIEditBox*/ private: void /*__thiscall*/ GetText(gpbstring<char>& unk1) const; //0x00763f00
	/*UIEditBox*/ private: void /*__thiscall*/ ResetSelection(); //0x007624e0
	/*UIEditBox*/ private: void /*__thiscall*/ SetText(const gpbstring<char>& unk1); //0x00763ed0
	/*UIEditBox*/ public: bool /*__thiscall*/ GetAllowInput() const; //0x00410071
	/*UIEditBox*/ public: bool /*__thiscall*/ GetPermanentFocus() const; //0x00410090
	/*UIEditBox*/ public: bool /*__thiscall*/ HasPixelLimit(); //0x007624b0
	/*UIEditBox*/ public: int /*__thiscall*/ GetColor() const; //0x004100dc
	/*UIEditBox*/ public: int /*__thiscall*/ GetMaxPixelSize() const; //0x004100c5
	/*UIEditBox*/ public: int /*__thiscall*/ GetMaxStringSize() const; //0x004100ae
	/*UIEditBox*/ public: int /*__thiscall*/ GetPromptIndex() const; //0x00410121
	/*UIEditBox*/ public: int /*__thiscall*/ GetTabStop() const; //0x00410097
	/*UIEditBox*/ public: JUSTIFICATION /*__thiscall*/ GetJustification() const; //0x004100e3
	/*UIEditBox*/ public: unsigned long /*__thiscall*/ GetImeColor() const; //0x0041010a
	/*UIEditBox*/ public: void /*__thiscall*/ EnableIme(bool unk1); //0x00762a30
	/*UIEditBox*/ public: void /*__thiscall*/ GiveFocus(); //0x00410078
	/*UIEditBox*/ public: void /*__thiscall*/ SetAllowInput(bool unk1); //0x00763110
	/*UIEditBox*/ public: void /*__thiscall*/ SetColor(int unk1); //0x004100cc
	/*UIEditBox*/ public: void /*__thiscall*/ SetImeColor(unsigned long unk1); //0x004100fa
	/*UIEditBox*/ public: void /*__thiscall*/ SetJustification(JUSTIFICATION unk1); //0x004100ea
	/*UIEditBox*/ public: void /*__thiscall*/ SetMaxPixelSize(int unk1); //0x004100b5
	/*UIEditBox*/ public: void /*__thiscall*/ SetMaxStringSize(int unk1); //0x0041009e
	/*UIEditBox*/ public: void /*__thiscall*/ SetPermanentFocus(bool unk1); //0x00410080
	/*UIEditBox*/ public: void /*__thiscall*/ SetPromptIndex(int unk1); //0x00410111
	/*UIEditBox*/ public: void /*__thiscall*/ ShowHiddenText(bool unk1); //0x00762490
};

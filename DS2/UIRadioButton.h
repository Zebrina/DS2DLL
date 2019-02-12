#pragma once

class UIRadioButton {
public:
	/*UIRadioButton*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(UIWindow* unk1); //0x005028b7
	/*UIRadioButton*/ public: bool /*__thiscall*/ GetAllowUserPress() const; //0x005028d1
	/*UIRadioButton*/ public: bool /*__thiscall*/ GetCheck() const; //0x0046dcc5
	/*UIRadioButton*/ public: bool /*__thiscall*/ GetInvalid() const; //0x005028e8
	/*UIRadioButton*/ public: bool /*__thiscall*/ IsDisabled(); //0x00485d68
	/*UIRadioButton*/ public: const gpbstring<char>& /*__thiscall*/ GetRadioGroup() const; //0x005028ba
	/*UIRadioButton*/ public: void /*__thiscall*/ LoadSelectionTexture(const gpbstring<char>& unk1); //0x0079fb20
	/*UIRadioButton*/ public: void /*__thiscall*/ ResetButtonStatus(); //0x0079f1a0
	/*UIRadioButton*/ public: void /*__thiscall*/ SetAllowUserPress(bool unk1); //0x005028c1
	/*UIRadioButton*/ public: void /*__thiscall*/ SetCheck(bool unk1); //0x0079e960
	/*UIRadioButton*/ public: void /*__thiscall*/ SetForceCheck(bool unk1); //0x0079eac0
	/*UIRadioButton*/ public: void /*__thiscall*/ SetInvalid(bool unk1); //0x005028d8
	/*UIRadioButton*/ public: void /*__thiscall*/ SetMidState(bool unk1); //0x0079f2d0
	/*UIRadioButton*/ public: void /*__thiscall*/ SetRadioGroup(const gpbstring<char>& unk1); //0x00503f4c
};

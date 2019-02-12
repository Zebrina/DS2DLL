#pragma once

class UIButton {
public:
	/*UIButton*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(UIWindow* unk1); //0x00502835
	/*UIButton*/ public: bool /*__thiscall*/ FUBI_RENAME_GetIsRepeater() const; //0x0050357f
	/*UIButton*/ public: bool /*__thiscall*/ GetAllowUserPress() const; //0x0050284f
	/*UIButton*/ public: bool /*__thiscall*/ GetButtonDown() const; //0x00502856
	/*UIButton*/ public: bool /*__thiscall*/ GetDisabled() const; //0x0049b595
	/*UIButton*/ public: bool /*__thiscall*/ GetPartialDisable() const; //0x00502838
	/*UIButton*/ public: bool /*__thiscall*/ GetPressedState() const; //0x00502874
	/*UIButton*/ public: void /*__thiscall*/ DisableButton(); //0x0077f970
	/*UIButton*/ public: void /*__thiscall*/ EnableButton(); //0x0077fa00
	/*UIButton*/ public: void /*__thiscall*/ ResetButtonStatus(); //0x0077fba0
	/*UIButton*/ public: void /*__thiscall*/ SetAllowUserPress(bool unk1); //0x0050283f
	/*UIButton*/ public: void /*__thiscall*/ SetIsRepeater(bool unk1); //0x00502864
	/*UIButton*/ public: void /*__thiscall*/ SetPressedState(bool unk1); //0x0077f770
};

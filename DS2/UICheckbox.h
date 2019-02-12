#pragma once

class UICheckbox {
public:
	/*UICheckbox*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(UIWindow* unk1); //0x0050287b
	/*UICheckbox*/ public: bool /*__thiscall*/ FUBI_RENAME_GetCheckState() const; //0x00502887
	/*UICheckbox*/ public: bool /*__thiscall*/ GetAllowUserPress() const; //0x0050289e
	/*UICheckbox*/ public: void /*__thiscall*/ FUBI_RENAME_SetCheckState(bool unk1); //0x0050287e
	/*UICheckbox*/ public: void /*__thiscall*/ LoadCheckTexture(const gpbstring<char>& unk1); //0x00789d00
	/*UICheckbox*/ public: void /*__thiscall*/ SetAllowUserPress(bool unk1); //0x0050288e
};

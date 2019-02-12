#pragma once

class UITextBox {
public:
	/*UITextBox*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(UIWindow* unk1); //0x00410128
	/*UITextBox*/ private: gpbstring<char> /*__thiscall*/ GetTextInAnsi() const; //0x004105e1
	/*UITextBox*/ private: int /*__thiscall*/ ReformatTooltip(const gpbstring<char>& unk1, int unk2, unsigned long unk3); //0x0041066e
	/*UITextBox*/ private: int /*__thiscall*/ SetLineText(int unk1, const gpbstring<char>& unk2, unsigned long unk3); //0x00410628
	/*UITextBox*/ private: void /*__thiscall*/ SetText(const gpbstring<char>& unk1); //0x00410608
	/*UITextBox*/ private: void /*__thiscall*/ SetToolTipText(const gpbstring<char>& unk1); //0x0041064e
	/*UITextBox*/ public: bool /*__thiscall*/ FUBI_RENAME_GetScrolling(); //0x00410158
	/*UITextBox*/ public: bool /*__thiscall*/ GetDisableUpdate() const; //0x004101e7
	/*UITextBox*/ public: bool /*__thiscall*/ GetFixedLocation() const; //0x004101a2
	/*UITextBox*/ public: bool /*__thiscall*/ GetScrollThrough() const; //0x004101d0
	/*UITextBox*/ public: bool /*__thiscall*/ GetTypeMode(); //0x0041021c
	/*UITextBox*/ public: bool /*__thiscall*/ IsFinishedScrolling(); //0x0041015d
	/*UITextBox*/ public: float /*__thiscall*/ GetScrollRate() const; //0x00410174
	/*UITextBox*/ public: float /*__thiscall*/ GetTypeRate(); //0x00410205
	/*UITextBox*/ public: int /*__thiscall*/ FUBI_RENAME_GetElementHeight(); //0x0041014a
	/*UITextBox*/ public: int /*__thiscall*/ FUBI_RENAME_GetLeadElement(); //0x0041013c
	/*UITextBox*/ public: int /*__thiscall*/ GetFontHeight() const; //0x004101b9
	/*UITextBox*/ public: int /*__thiscall*/ GetLineSpacer() const; //0x004101fe
	/*UITextBox*/ public: JUSTIFICATION /*__thiscall*/ GetJustification() const; //0x0041017b
	/*UITextBox*/ public: unsigned int /*__thiscall*/ FUBI_RENAME_GetMaxActiveElements(); //0x00410137
	/*UITextBox*/ public: unsigned int /*__thiscall*/ FUBI_RENAME_GetNumElements(); //0x00410132
	/*UITextBox*/ public: unsigned long /*__thiscall*/ GetTextColor() const; //0x0041012b
	/*UITextBox*/ public: void /*__thiscall*/ CenterWindowToMousePos(); //0x0075d910
	/*UITextBox*/ public: void /*__thiscall*/ FUBI_RENAME_SetLeadElement(int unk1); //0x00410141
	/*UITextBox*/ public: void /*__thiscall*/ FUBI_RENAME_SetScrolling(bool unk1); //0x0041014f
	/*UITextBox*/ public: void /*__thiscall*/ SetDisableUpdate(bool unk1); //0x004101d7
	/*UITextBox*/ public: void /*__thiscall*/ SetFixedLocation(bool unk1); //0x00410192
	/*UITextBox*/ public: void /*__thiscall*/ SetFontHeight(int unk1); //0x004101a9
	/*UITextBox*/ public: void /*__thiscall*/ SetJustification(JUSTIFICATION unk1); //0x00410182
	/*UITextBox*/ public: void /*__thiscall*/ SetLineSpacer(int unk1); //0x004101ee
	/*UITextBox*/ public: void /*__thiscall*/ SetScrollRate(float unk1); //0x00410164
	/*UITextBox*/ public: void /*__thiscall*/ SetScrollThrough(bool unk1); //0x004101c0
	/*UITextBox*/ public: void /*__thiscall*/ SetTextColor(unsigned int unk1); //0x0075fa90
	/*UITextBox*/ public: void /*__thiscall*/ SetTypeMode(bool unk1); //0x00410223
	/*UITextBox*/ public: void /*__thiscall*/ SetTypeRate(float unk1); //0x0041020c
};

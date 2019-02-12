#pragma once

class UIText {
public:
	/*UIText*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(UIWindow* unk1); //0x005028a5
	/*UIText*/ private: void /*__thiscall*/ GetText(gpbstring<char>& unk1) const; //0x00503f1d
	/*UIText*/ private: void /*__thiscall*/ SetText(const gpbstring<char>& unk1, bool unk2); //0x00503a55
	/*UIText*/ public: /*static*/ UIText* /*__cdecl*/ GetUIText(UIWindow* unk1); //0x005028af
	/*UIText*/ public: JUSTIFICATION /*__thiscall*/ GetJustification() const; //0x005028a8
	/*UIText*/ public: unsigned int /*__thiscall*/ GetColor() const; //0x00498485
	/*UIText*/ public: void /*__thiscall*/ SetAutoSize(bool unk1); //0x00472beb
	/*UIText*/ public: void /*__thiscall*/ SetColor(unsigned int unk1); //0x00472bdb
	/*UIText*/ public: void /*__thiscall*/ SetFont(const gpbstring<char>& unk1); //0x00760ac0
	/*UIText*/ public: void /*__thiscall*/ SetJustification(JUSTIFICATION unk1); //0x00456d41
};

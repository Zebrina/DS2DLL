#pragma once

class UIComboBox {
public:
	/*UIComboBox*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(UIWindow* unk1); //0x00456a98
	/*UIComboBox*/ private: void /*__thiscall*/ AddElement(const gpbstring<char>& unk1, int unk2, unsigned long unk3); //0x007831e0
	/*UIComboBox*/ private: void /*__thiscall*/ AddElement(const gpbstring<char>& unk1, int unk2); //0x007831b0
	/*UIComboBox*/ private: void /*__thiscall*/ GetSelectedText(gpbstring<char>& unk1); //0x00783cc0
	/*UIComboBox*/ private: void /*__thiscall*/ RemoveElement(const gpbstring<char>& unk1); //0x00783360
	/*UIComboBox*/ private: void /*__thiscall*/ SetElementIcon(const gpbstring<char>& unk1, int unk2); //0x00783470
	/*UIComboBox*/ private: void /*__thiscall*/ SetElementText(int unk1, int unk2, const gpbstring<char>& unk3, unsigned long unk4); //0x00783290
	/*UIComboBox*/ public: bool /*__thiscall*/ GetButtonDown() const; //0x00783080
	/*UIComboBox*/ public: bool /*__thiscall*/ GetDrawText() const; //0x00783060
	/*UIComboBox*/ public: bool /*__thiscall*/ GetExpanded() const; //0x00783020
	/*UIComboBox*/ public: UIListbox* /*__thiscall*/ GetChildListbox() const; //0x00783070
	/*UIComboBox*/ public: int /*__thiscall*/ GetSelectedTag() const; //0x00782fc0
	/*UIComboBox*/ public: unsigned int /*__thiscall*/ GetColor() const; //0x00783010
	/*UIComboBox*/ public: unsigned int /*__thiscall*/ GetTextColor() const; //0x00783040
	/*UIComboBox*/ public: void /*__thiscall*/ RemoveAllElements(); //0x007833f0
	/*UIComboBox*/ public: void /*__thiscall*/ SelectElement(const gpbstring<char>& unk1); //0x007844c0
	/*UIComboBox*/ public: void /*__thiscall*/ SelectElementByTag(int unk1); //0x00784560
	/*UIComboBox*/ public: void /*__thiscall*/ SetChildListbox(UIListbox* unk1); //0x00783100
	/*UIComboBox*/ public: void /*__thiscall*/ SetColor(unsigned int unk1); //0x00783000
	/*UIComboBox*/ public: void /*__thiscall*/ SetDrawText(bool unk1); //0x00783050
	/*UIComboBox*/ public: void /*__thiscall*/ SetExpanded(bool unk1); //0x007839c0
	/*UIComboBox*/ public: void /*__thiscall*/ SetSelectedTag(int unk1); //0x00784620
	/*UIComboBox*/ public: void /*__thiscall*/ SetTextColor(unsigned int unk1); //0x00783030
};

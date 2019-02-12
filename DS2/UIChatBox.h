#pragma once

class UIChatBox {
public:
	/*UIChatBox*/ private: gpbstring<char> /*__thiscall*/ GetLastSubmittedTextInAnsi(); //0x0040b3e4
	/*UIChatBox*/ private: gpbstring<char> /*__thiscall*/ GetTextInAnsi(); //0x0040b3bd
	/*UIChatBox*/ private: void /*__thiscall*/ SubmitText(const gpbstring<char>& unk1, unsigned long unk2, bool unk3); //0x0040b40b
	/*UIChatBox*/ public: void /*__thiscall*/ Clear(); //0x00754d60
	/*UIChatBox*/ public: void /*__thiscall*/ SetTextVisible(bool unk1); //0x00409357
};

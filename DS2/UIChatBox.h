#pragma once

class UIChatBox {
public:
	/*UIChatBox*/ private: gpbstring<char> /*__thiscall*/ GetLastSubmittedTextInAnsi(); //0x0040b3e4
	/*UIChatBox*/ private: gpbstring<char> /*__thiscall*/ GetTextInAnsi(); //0x0040b3bd
	DefineMethod(SubmitText, 0x40b40b, void, Params(const gpbstring<char>& unk1, unsigned long unk2, bool unk3), Args(const gpbstring<char>& unk1, unsigned long unk2, bool unk3));
	DefineMethod(Clear, 0x754d60, void, Params(), Args());
	DefineMethod(SetTextVisible, 0x409357, void, Params(bool unk1), Args(bool unk1));
};

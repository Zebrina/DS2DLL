#pragma once



class UIChatBox {
public:
	DefineMethod(GetLastSubmittedTextInAnsi, 0x40b3e4, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineMethod(GetTextInAnsi, 0x40b3bd, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineMethod(SubmitText, 0x40b40b, void, Params(const gpbstring<char>& unk1, unsigned long unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(Clear, 0x754d60, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetTextVisible, 0x409357, void, Params(bool unk1), Args(unk1));
};

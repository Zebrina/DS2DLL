#pragma once

#include "ClassMacros.h"

class UIEditBox {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x41006e, int, Params(UIWindow* unk1), Args(unk1));
	DefineMethod(GetGreaterSelection, 0x762470, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetLesserSelection, 0x762450, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetText, 0x763f00, void, Params(gpbstring<char>& unk1), Args(unk1));
	DefineMethod(ResetSelection, 0x7624e0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetText, 0x763ed0, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetAllowInput, 0x410071, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPermanentFocus, 0x410090, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(HasPixelLimit, 0x7624b0, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetColor, 0x4100dc, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxPixelSize, 0x4100c5, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxStringSize, 0x4100ae, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPromptIndex, 0x410121, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTabStop, 0x410097, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetJustification, 0x4100e3, JUSTIFICATION, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetImeColor, 0x41010a, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(EnableIme, 0x762a30, void, Params(bool unk1), Args(unk1));
	DefineMethod(GiveFocus, 0x410078, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetAllowInput, 0x763110, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetColor, 0x4100cc, void, Params(int unk1), Args(unk1));
	DefineMethod(SetImeColor, 0x4100fa, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetJustification, 0x4100ea, void, Params(JUSTIFICATION unk1), Args(unk1));
	DefineMethod(SetMaxPixelSize, 0x4100b5, void, Params(int unk1), Args(unk1));
	DefineMethod(SetMaxStringSize, 0x41009e, void, Params(int unk1), Args(unk1));
	DefineMethod(SetPermanentFocus, 0x410080, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetPromptIndex, 0x410111, void, Params(int unk1), Args(unk1));
	DefineMethod(ShowHiddenText, 0x762490, void, Params(bool unk1), Args(unk1));
};

#pragma once

#include "GPBString.h"
#include "UIWindow.h"

class UITextBox : public UIWindow {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x410128, int, Params(UIWindow* unk1), Args(unk1));
	DefineConstMethod(GetTextInAnsi, 0x4105e1, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineMethod(ReformatTooltip, 0x41066e, int, Params(const gpbstring<char>& unk1, int unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetLineText, 0x410628, int, Params(int unk1, const gpbstring<char>& unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetText, 0x410608, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetToolTipText, 0x41064e, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_GetScrolling, 0x410158, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDisableUpdate, 0x4101e7, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetFixedLocation, 0x4101a2, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetScrollThrough, 0x4101d0, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetTypeMode, 0x41021c, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsFinishedScrolling, 0x41015d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetScrollRate, 0x410174, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetTypeRate, 0x410205, float, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_GetElementHeight, 0x41014a, int, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_GetLeadElement, 0x41013c, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetFontHeight, 0x4101b9, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLineSpacer, 0x4101fe, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GeteJustification, 0x41017b, eJustification, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_GetMaxActiveElements, 0x410137, unsigned int, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_GetNumElements, 0x410132, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTextColor, 0x41012b, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(CenterWindowToMousePos, 0x75d910, void, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_SetLeadElement, 0x410141, void, Params(int unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_SetScrolling, 0x41014f, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetDisableUpdate, 0x4101d7, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetFixedLocation, 0x410192, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetFontHeight, 0x4101a9, void, Params(int unk1), Args(unk1));
	DefineMethod(SeteJustification, 0x410182, void, Params(eJustification unk1), Args(unk1));
	DefineMethod(SetLineSpacer, 0x4101ee, void, Params(int unk1), Args(unk1));
	DefineMethod(SetScrollRate, 0x410164, void, Params(float unk1), Args(unk1));
	DefineMethod(SetScrollThrough, 0x4101c0, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetTextColor, 0x75fa90, void, Params(unsigned int unk1), Args(unk1));
	DefineMethod(SetTypeMode, 0x410223, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetTypeRate, 0x41020c, void, Params(float unk1), Args(unk1));
};

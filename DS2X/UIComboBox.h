#pragma once

#include "UIWindow.h"



class UIComboBox : public UIWindow {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x456a98, int, Params(UIWindow* unk1), Args(unk1));
	DefineMethod(AddElement, 0x7831e0, void, Params(const gpbstring<char>& unk1, int unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(AddElement, 0x7831b0, void, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(GetSelectedText, 0x783cc0, void, Params(gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RemoveElement, 0x783360, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetElementIcon, 0x783470, void, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(SetElementText, 0x783290, void, Params(int unk1, int unk2, const gpbstring<char>& unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetButtonDown, 0x783080, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDrawText, 0x783060, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExpanded, 0x783020, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetChildListbox, 0x783070, UIListbox*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSelectedTag, 0x782fc0, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetColor, 0x783010, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTextColor, 0x783040, unsigned int, NO_PARAMS, NO_ARGS);
	DefineMethod(RemoveAllElements, 0x7833f0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SelectElement, 0x7844c0, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SelectElementByTag, 0x784560, void, Params(int unk1), Args(unk1));
	DefineMethod(SetChildListbox, 0x783100, void, Params(UIListbox* unk1), Args(unk1));
	DefineMethod(SetColor, 0x783000, void, Params(unsigned int unk1), Args(unk1));
	DefineMethod(SetDrawText, 0x783050, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetExpanded, 0x7839c0, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetSelectedTag, 0x784620, void, Params(int unk1), Args(unk1));
	DefineMethod(SetTextColor, 0x783030, void, Params(unsigned int unk1), Args(unk1));
};

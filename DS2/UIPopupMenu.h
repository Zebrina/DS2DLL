#pragma once

#include "ClassMacros.h"

class UIPopupMenu {
public:
	DefineMethod(FUBI_RENAME_GetSelectedElement, 0x5029c3, int, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_AddElement, 0x503b61, void, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(FUBI_RENAME_RemoveAllElements, 0x5029d1, void, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_RemoveElement, 0x503b84, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_RemoveElement, 0x5029c8, void, Params(int unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_ShowAtCursor, 0x5029ba, void, Params(eAlignment unk1), Args(unk1));
};

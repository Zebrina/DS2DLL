#pragma once

class UIPopupMenu {
public:
	DefineMethod(FUBI_RENAME_GetSelectedElement, 0x5029c3, int, Params(), Args());
	DefineMethod(FUBI_RENAME_AddElement, 0x503b61, void, Params(const gpbstring<char>& unk1, int unk2), Args(const gpbstring<char>& unk1, int unk2));
	DefineMethod(FUBI_RENAME_RemoveAllElements, 0x5029d1, void, Params(), Args());
	DefineMethod(FUBI_RENAME_RemoveElement, 0x503b84, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(FUBI_RENAME_RemoveElement, 0x5029c8, void, Params(int unk1), Args(int unk1));
	DefineMethod(FUBI_RENAME_ShowAtCursor, 0x5029ba, void, Params(eAlignment unk1), Args(eAlignment unk1));
};

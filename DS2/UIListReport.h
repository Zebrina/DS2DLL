#pragma once

class UIListReport {
public:
	/*UIListReport*/ private: gpbstring<char> /*__thiscall*/ FUBI_RENAME_GetSelectedElementText(int unk1); //0x004106c6
	DefineMethod(FUBI_RENAME_GetNumElements, 0x410246, int, Params(), Args());
	DefineMethod(FUBI_RENAME_GetSelectedElementID, 0x410449, int, Params(), Args());
	DefineMethod(FUBI_RENAME_GetSelectedElementTag, 0x410241, int, Params(), Args());
	DefineMethod(AddElement, 0x4108bf, void, Params(const gpbstring<char>& unk1, int unk2), Args(const gpbstring<char>& unk1, int unk2));
	DefineMethod(FUBI_RENAME_RemoveAllElements, 0x410233, void, Params(), Args());
	DefineMethod(FUBI_RENAME_RemoveElement, 0x410238, void, Params(int unk1), Args(int unk1));
	DefineMethod(InsertColumn, 0x4106a1, void, Params(const gpbstring<char>& unk1, int unk2), Args(const gpbstring<char>& unk1, int unk2));
	DefineMethod(SetSelectedElement, 0x757b30, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetSelectedElementByRow, 0x757bb0, void, Params(int unk1), Args(int unk1));
};

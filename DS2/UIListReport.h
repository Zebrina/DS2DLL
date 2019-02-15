#pragma once

#include "ClassMacros.h"

class UIListReport {
public:
	DefineMethod(FUBI_RENAME_GetSelectedElementText, 0x4106c6, gpbstring<char>, Params(int unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_GetNumElements, 0x410246, int, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_GetSelectedElementID, 0x410449, int, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_GetSelectedElementTag, 0x410241, int, NO_PARAMS, NO_ARGS);
	DefineMethod(AddElement, 0x4108bf, void, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(FUBI_RENAME_RemoveAllElements, 0x410233, void, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_RemoveElement, 0x410238, void, Params(int unk1), Args(unk1));
	DefineMethod(InsertColumn, 0x4106a1, void, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(SetSelectedElement, 0x757b30, void, Params(int unk1), Args(unk1));
	DefineMethod(SetSelectedElementByRow, 0x757bb0, void, Params(int unk1), Args(unk1));
};

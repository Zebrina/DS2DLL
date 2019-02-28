#pragma once

#include "GPBString.h"
#include "UIWindow.h"



class UIMessage;

class UIListbox : public UIWindow {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x5028ef, int, Params(UIWindow* unk1), Args(unk1));
	DefineMethod(AddElement, 0x503aa6, int, Params(const gpbstring<char>& unk1, int unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(AddElement, 0x503a83, int, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(GetSelectedText, 0x503f65, void, Params(gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RemoveElement, 0x503afe, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SelectElement, 0x503b1e, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetElementIcon, 0x503b3e, void, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(SetElementText, 0x503acc, void, Params(int unk1, int unk2, const gpbstring<char>& unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(GetActive, 0x5029a5, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetButtonDown, 0x502924, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetDrawSelectionBox, 0x50299e, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetHasFocus, 0x502990, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetHitSelect, 0x502989, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPermanentFocus, 0x502997, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(HandleInputMessage, 0x774dc0, bool, Params(UIMessage& unk1), Args(unk1));
	DefineMethod(GetSelectedData, 0x775a00, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineMethod(GetElementData, 0x774860, const gpbstring<char>&, Params(int unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_GetElementHeight, 0x50290a, int, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_GetElementWidth, 0x50290f, int, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_GetNumElements, 0x502905, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetElementId, 0x773c50, int, Params(unsigned int unk1), Args(unk1));
	DefineMethod(GetElementTag, 0x773ca0, int, Params(unsigned int unk1), Args(unk1));
	DefineConstMethod(GetHeight, 0x5028f7, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetLeadElementIndex, 0x5028f2, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetSelectedIndex, 0x773ef0, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetSelectedTag, 0x773ec0, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetWidth, 0x5028fe, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTextColor, 0x485d76, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetActiveColor, 0x502972, unsigned long, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInactiveColor, 0x50295b, unsigned long, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInvalidColor, 0x485d7d, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(AddIcon, 0x775cf0, void, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(AutoSize, 0x773f20, void, Params(UIWindow* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(ClearSelection, 0x773d70, void, NO_PARAMS, NO_ARGS);
	DefineMethod(FlashElementIcon, 0x773dd0, void, Params(int unk1, float unk2), Args(unk1, unk2));
	DefineMethod(LoadSelectionTexture, 0x772f50, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RemoveAllElements, 0x44a237, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RemoveAllElements, 0x778880, void, Params(bool unk1), Args(unk1));
	DefineMethod(RemoveElement, 0x778790, void, Params(int unk1), Args(unk1));
	DefineMethod(ResizeSlider, 0x7748a0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SelectElement, 0x774be0, void, Params(int unk1), Args(unk1));
	DefineMethod(SelectElementData, 0x774cc0, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SelectElementId, 0x774c50, void, Params(int unk1), Args(unk1));
	DefineMethod(SelectElementIndex, 0x774d50, void, Params(int unk1), Args(unk1));
	DefineMethod(SelectFirstElement, 0x774510, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SelectLastElement, 0x7745a0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SelectNextElement, 0x7741a0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SelectNextPage, 0x774400, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SelectPreviousElement, 0x7740d0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SelectPreviousPage, 0x7742a0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetActive, 0x46dd36, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetActiveColor, 0x502962, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetButtonDown, 0x50292b, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetDrawSelectionBox, 0x46dd26, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetElementData, 0x775ca0, void, Params(int unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(SetElementIcon, 0x773da0, void, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineMethod(SetElementSelectable, 0x773cf0, void, Params(int unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SetHasFocus, 0x46dd16, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetHeight, 0x7735e0, void, Params(int unk1), Args(unk1));
	DefineMethod(SetHitSelect, 0x502979, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetInactiveColor, 0x50294b, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetInvalidColor, 0x50293b, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetTextColor, 0x502914, void, Params(unsigned int unk1), Args(unk1));
};

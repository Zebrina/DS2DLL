#pragma once

#include "GPBString.h"
#include "UIWindow.h"

#include "ClassMacros.h"

class UIItem;

class UIGridbox {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x502700, int, Params(UIWindow* unk1), Args(unk1));
	DefineConstMethod(GetAutoPlaceNotify, 0x502817, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAutoTransfer, 0x4cffc9, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetConsumesItems, 0x5027e9, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetContinuePickup, 0x5027bb, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDeactivateOverlapped, 0x5027f0, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetIgnoreItem, 0x5027d2, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLocalPlace, 0x485c9e, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetRequestPickup, 0x5027a4, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetStore, 0x485c20, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(SortForSpace, 0x7934d0, bool, Params(UIItem* unk1), Args(unk1));
	DefineMethod(GetTextBox, 0x78c620, UITextBox*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetTextBg, 0x78c650, UIWindow*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGridType, 0x502787, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetFullRatio, 0x78da50, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBoxHeight, 0x502751, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBoxWidth, 0x50277c, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetColumns, 0x50272a, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRows, 0x502713, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetColor, 0x50282e, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(AutoSort, 0x792c50, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetAutoPlaceNotify, 0x502807, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetAutoTransfer, 0x5027c2, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetBoxHeight, 0x502731, void, Params(int unk1), Args(unk1));
	DefineMethod(SetBoxWidth, 0x50276c, void, Params(int unk1), Args(unk1));
	DefineMethod(SetColor, 0x50281e, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetColumns, 0x50271a, void, Params(int unk1), Args(unk1));
	DefineMethod(SetConsumesItems, 0x5027d9, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetContinuePickup, 0x485c27, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetDeactivateOverlapped, 0x485c8e, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetGridType, 0x503f04, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetIgnoreItem, 0x485c5e, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetItemDetect, 0x485c37, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetLocalPlace, 0x5027f7, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetOriginalBoxHeight, 0x502741, void, Params(int unk1), Args(unk1));
	DefineMethod(SetOriginalBoxWidth, 0x50275c, void, Params(int unk1), Args(unk1));
	DefineMethod(SetRequestPickup, 0x5027ab, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetRows, 0x502703, void, Params(int unk1), Args(unk1));
	DefineMethod(SetStore, 0x50278e, void, Params(bool unk1), Args(unk1));
};

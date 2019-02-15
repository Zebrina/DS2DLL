#pragma once

#include "Enums.h"

#include "ClassMacros.h"

class GoGui {
public:
	DefineConstMethod(GetCanSaveInInventory, 0x8053da, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCanSell, 0x408894, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsIdentified, 0x408890, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsReagent, 0x8053a1, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsDroppable, 0x80524f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsLoreBook, 0x805288, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsPetConsumable, 0x80532f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsSpellBook, 0x805d54, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetActiveIcon, 0x80516f, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEquipRequirements, 0x803cd2, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInventoryIcon, 0x40a39e, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLastInventoryIcon, 0x8047b0, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLoreKey, 0x8052c1, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMiniIcon, 0x8051a6, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetToolTipColorName, 0x805413, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetVariation, 0x40a3ae, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEquipSlot, 0x805216, eEquipSlot, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetUseClass, 0x805368, eItemSkillType, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetItemLevel, 0x40887f, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetItemPower, 0x40885a, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInventoryHeight, 0x408849, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInventoryMaxStackable, 0x8051dd, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInventoryWidth, 0x408845, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetToolTipColor, 0x80544a, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(AddEquipRequirements, 0x80a4c1, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetCanSell, 0x408898, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetEquipRequirements, 0x803cd6, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetInventoryHeight, 0x803cfb, void, Params(int unk1), Args(unk1));
	DefineMethod(SetInventoryIcon, 0x803ce2, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetInventoryWidth, 0x803cee, void, Params(int unk1), Args(unk1));
	DefineMethod(SetIsIdentified, 0x408883, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetItemLevel, 0x408872, void, Params(float unk1), Args(unk1));
	DefineMethod(SetItemPower, 0x40884d, void, Params(float unk1), Args(unk1));
	DefineMethod(SetVariation, 0x40a3a2, void, Params(const gpbstring<char>& unk1), Args(unk1));
};

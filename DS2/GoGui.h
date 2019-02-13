#pragma once

class GoGui {
public:
	DefineConstMethod(GetCanSaveInInventory, 0x8053da, bool, Params(), Args());
	DefineMethod(GetCanSell, 0x408894, bool, Params(), Args());
	DefineConstMethod(GetIsIdentified, 0x408890, bool, Params(), Args());
	DefineConstMethod(GetIsReagent, 0x8053a1, bool, Params(), Args());
	DefineConstMethod(IsDroppable, 0x80524f, bool, Params(), Args());
	DefineConstMethod(IsLoreBook, 0x805288, bool, Params(), Args());
	DefineConstMethod(IsPetConsumable, 0x80532f, bool, Params(), Args());
	DefineConstMethod(IsSpellBook, 0x805d54, bool, Params(), Args());
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetActiveIcon() const; //0x0080516f
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetEquipRequirements() const; //0x00803cd2
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetInventoryIcon() const; //0x0040a39e
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetLastInventoryIcon() const; //0x008047b0
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetLoreKey() const; //0x008052c1
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetMiniIcon() const; //0x008051a6
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetToolTipColorName() const; //0x00805413
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetVariation() const; //0x0040a3ae
	DefineConstMethod(GetEquipSlot, 0x805216, eEquipSlot, Params(), Args());
	DefineConstMethod(GetUseClass, 0x805368, eItemSkillType, Params(), Args());
	DefineConstMethod(GetItemLevel, 0x40887f, float, Params(), Args());
	DefineConstMethod(GetItemPower, 0x40885a, float, Params(), Args());
	DefineConstMethod(GetInventoryHeight, 0x408849, int, Params(), Args());
	DefineConstMethod(GetInventoryMaxStackable, 0x8051dd, int, Params(), Args());
	DefineConstMethod(GetInventoryWidth, 0x408845, int, Params(), Args());
	/*GoGui*/ public: unsigned long /*__thiscall*/ GetToolTipColor() const; //0x0080544a
	DefineMethod(AddEquipRequirements, 0x80a4c1, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetCanSell, 0x408898, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetEquipRequirements, 0x803cd6, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetInventoryHeight, 0x803cfb, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetInventoryIcon, 0x803ce2, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetInventoryWidth, 0x803cee, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetIsIdentified, 0x408883, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetItemLevel, 0x408872, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetItemPower, 0x40884d, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetVariation, 0x40a3a2, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
};

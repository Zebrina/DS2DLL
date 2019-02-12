#pragma once

class GoGui {
public:
	/*GoGui*/ public: bool /*__thiscall*/ GetCanSaveInInventory() const; //0x008053da
	/*GoGui*/ public: bool /*__thiscall*/ GetCanSell(); //0x00408894
	/*GoGui*/ public: bool /*__thiscall*/ GetIsIdentified() const; //0x00408890
	/*GoGui*/ public: bool /*__thiscall*/ GetIsReagent() const; //0x008053a1
	/*GoGui*/ public: bool /*__thiscall*/ IsDroppable() const; //0x0080524f
	/*GoGui*/ public: bool /*__thiscall*/ IsLoreBook() const; //0x00805288
	/*GoGui*/ public: bool /*__thiscall*/ IsPetConsumable() const; //0x0080532f
	/*GoGui*/ public: bool /*__thiscall*/ IsSpellBook() const; //0x00805d54
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetActiveIcon() const; //0x0080516f
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetEquipRequirements() const; //0x00803cd2
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetInventoryIcon() const; //0x0040a39e
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetLastInventoryIcon() const; //0x008047b0
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetLoreKey() const; //0x008052c1
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetMiniIcon() const; //0x008051a6
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetToolTipColorName() const; //0x00805413
	/*GoGui*/ public: const gpbstring<char>& /*__thiscall*/ GetVariation() const; //0x0040a3ae
	/*GoGui*/ public: eEquipSlot /*__thiscall*/ GetEquipSlot() const; //0x00805216
	/*GoGui*/ public: eItemSkillType /*__thiscall*/ GetUseClass() const; //0x00805368
	/*GoGui*/ public: float /*__thiscall*/ GetItemLevel() const; //0x0040887f
	/*GoGui*/ public: float /*__thiscall*/ GetItemPower() const; //0x0040885a
	/*GoGui*/ public: int /*__thiscall*/ GetInventoryHeight() const; //0x00408849
	/*GoGui*/ public: int /*__thiscall*/ GetInventoryMaxStackable() const; //0x008051dd
	/*GoGui*/ public: int /*__thiscall*/ GetInventoryWidth() const; //0x00408845
	/*GoGui*/ public: unsigned long /*__thiscall*/ GetToolTipColor() const; //0x0080544a
	/*GoGui*/ public: void /*__thiscall*/ AddEquipRequirements(const gpbstring<char>& unk1); //0x0080a4c1
	/*GoGui*/ public: void /*__thiscall*/ SetCanSell(bool unk1); //0x00408898
	/*GoGui*/ public: void /*__thiscall*/ SetEquipRequirements(const gpbstring<char>& unk1); //0x00803cd6
	/*GoGui*/ public: void /*__thiscall*/ SetInventoryHeight(int unk1); //0x00803cfb
	/*GoGui*/ public: void /*__thiscall*/ SetInventoryIcon(const gpbstring<char>& unk1); //0x00803ce2
	/*GoGui*/ public: void /*__thiscall*/ SetInventoryWidth(int unk1); //0x00803cee
	/*GoGui*/ public: void /*__thiscall*/ SetIsIdentified(bool unk1); //0x00408883
	/*GoGui*/ public: void /*__thiscall*/ SetItemLevel(float unk1); //0x00408872
	/*GoGui*/ public: void /*__thiscall*/ SetItemPower(float unk1); //0x0040884d
	/*GoGui*/ public: void /*__thiscall*/ SetVariation(const gpbstring<char>& unk1); //0x0040a3a2
};

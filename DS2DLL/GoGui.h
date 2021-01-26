#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "Go.h"
#include "GoComponent.h"
#include "GPString.h"

class GoGui : public GoComponent {
public:
	$ConstMethod(0x008053da, GetCanSaveInInventory, bool);
	$ConstMethod(0x00408894, GetCanSell, bool);
	$ConstMethod(0x00408890, GetIsIdentified, bool);
	$ConstMethod(0x008053a1, GetIsReagent, bool); // "is_reagent"
	$ConstMethod(0x0080524f, IsDroppable, bool); // "is_droppable"
	$ConstMethod(0x00805288, IsLoreBook, bool); // "is_lorebook"
	$ConstMethod(0x0080532f, IsPetConsumable, bool); // "is_pet_consumable"
	$ConstMethod(0x00805d54, IsSpellBook, bool);
	$ConstMethod(0x0080516f, GetActiveIcon, const GPBString&); // "active_icon"
	$ConstMethod(0x00803cd2, GetEquipRequirements, const GPBString&);
	$ConstMethod(0x0040a39e, GetInventoryIcon, const GPBString&);
	$ConstMethod(0x008047b0, GetLastInventoryIcon, const GPBString&);
	$ConstMethod(0x008052c1, GetLoreKey, const GPBString&); // "lore_key"
	$ConstMethod(0x008051a6, GetMiniIcon, const GPBString&); // "mini_icon"
	$ConstMethod(0x00805413, GetToolTipColorName_Default, const GPBString&); // "tooltip_color"
    FEX const GPBString& GetToolTipColorName() const;
    $ConstMethod(0x0080544a, GetToolTipColor_Default, hexcolorcode);
    FEX hexcolorcode GetToolTipColor() const;
	$ConstMethod(0x0040a3ae, GetVariation, const GPBString&);
	$ConstMethod(0x00805216, GetEquipSlot, eEquipSlot); // "equip_slot"
	$ConstMethod(0x00805368, GetUseClass, eItemSkillType); // "use_class"
	$ConstMethod(0x0040887f, GetItemLevel, float);
	$ConstMethod(0x0040885a, GetItemPower, float);
	$ConstMethod(0x00408849, GetInventoryHeight, int);
	$ConstMethod(0x008051dd, GetInventoryMaxStackable, int); // "inventory_max_stackable"
	$ConstMethod(0x00408845, GetInventoryWidth, int);
	$Method(0x00408898, SetCanSell, void, bool unk1);
	$Method(0x00803cd6, SetEquipRequirements, void, const GPBString& equipRequirements);
	$Method(0x0080a4c1, AddEquipRequirements, void, const GPBString& equipRequirements);
	$Method(0x00803ce2, SetInventoryIcon, void, const GPBString& inventoryIcon);
	$Method(0x00803cee, SetInventoryWidth, void, int width);
	$Method(0x00803cfb, SetInventoryHeight, void, int height);
	$Method(0x00408883, SetIsIdentified, void, bool unk1);
	$Method(0x00408872, SetItemLevel, void, float level);
	$Method(0x0040884d, SetItemPower, void, float power);
	$Method(0x0040a3a2, SetVariation, void, const GPBString& variation);

    $ConstMethod(0x008052f8, GetItemSet, const GPBString&);

	// 0x14
	GPBString inventoryIcon;
	// 0x18
	int inventoryWidth;
	// 0x1c
	int inventoryHeight;
	// 0x20
	GPBString equipRequirements;
	// 0x24
	float itemPower;
	// 0x28
	float itemLevel;
	// 0x2c
	bool bIsIdentified;
	// 0x30
	GPBString variation;
	// 0x34
	bool bCanSell;

private:
    FEX const GPBString& FUBI_RENAME(GetItemSet)() const;
};

STATIC_ASSERT_OFFSETOF(GoGui, inventoryIcon, 0x14);
STATIC_ASSERT_OFFSETOF(GoGui, bIsIdentified, 0x2c);
STATIC_ASSERT_OFFSETOF(GoGui, bCanSell, 0x34);

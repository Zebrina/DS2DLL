#pragma once

#include "FuBi.h"
#include "UIGridbox.h"

class GoInventory {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x408daf, GoInventory*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x408da6, unsigned long, Params(GoInventory* unk1), Args(unk1));
	DefineMethod(RCAdd, 0x831c07, FuBi::Cookie__*, Params(Go* unk1, eInventoryLocation unk2, eActionOrigin unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RCAddGold, 0x408cf5, FuBi::Cookie__*, Params(int unk1), Args(unk1));
	DefineMethod(RCAutoEquip, 0x8342b5, FuBi::Cookie__*, Params(eEquipSlot unk1, const Goid_* unk2, eActionOrigin unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RCEquip, 0x834146, FuBi::Cookie__*, Params(eEquipSlot unk1, const Goid_* unk2, eActionOrigin unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCRemove, 0x82de8c, FuBi::Cookie__*, Params(Go* unk1, const SiegePos& unk2, const Quat& unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RCRemove, 0x82dfe6, FuBi::Cookie__*, Params(Go* unk1, const SiegePos& unk2), Args(unk1, unk2));
	DefineMethod(RCRemove, 0x82e141, FuBi::Cookie__*, Params(Go* unk1), Args(unk1));
	DefineMethod(RCSelect, 0x829cf0, FuBi::Cookie__*, Params(eInventoryLocation unk1, eActionOrigin unk2), Args(unk1, unk2));
	DefineMethod(RCSetGold, 0x829e34, FuBi::Cookie__*, Params(int unk1), Args(unk1));
	DefineMethod(RCSetLocation, 0x8314e8, FuBi::Cookie__*, Params(Go* unk1, eInventoryLocation unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCTransfer, 0x831e11, FuBi::Cookie__*, Params(Go* unk1, Go* unk2, eInventoryLocation unk3, eActionOrigin unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RCUnequip, 0x408c87, FuBi::Cookie__*, Params(eEquipSlot unk1, eActionOrigin unk2), Args(unk1, unk2));
	DefineMethod(RCDeactivateGuiItems, 0x82f6b1, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSetLocationPreference, 0x8276d6, void, Params(eInventoryLocation unk1), Args(unk1));
	DefineMethod(SDeactivateGuiItems, 0x830123, void, NO_PARAMS, NO_ARGS);
	DefineConstMethod(CanAdd, 0x83005d, bool, Params(const Go* unk1, eInventoryLocation unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(CanGive, 0x830242, bool, Params(const Goid_* unk1, const Goid_* unk2, eActionOrigin unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(Contains, 0x829c57, bool, Params(const Go* unk1), Args(unk1));
	DefineMethod(GetCanManipulateInventory, 0x408c68, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetForceGet, 0x408d3a, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMarkAllInventoryForRemoval, 0x408cca, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasGold, 0x408ce9, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasGridbox, 0x408d48, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasItems, 0x828fdf, bool, Params(eInventoryLocation unk1, bool unk2), Args(unk1, unk2));
	DefineConstMethod(HasSelectedOffensiveWeaponOrSpell, 0x408d17, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsActiveSpell, 0x829c20, bool, Params(const Go* unk1), Args(unk1));
	DefineConstMethod(IsAnyWeaponEquipped, 0x408b89, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsEitherHandEquipped, 0x408ba9, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsEquipped, 0x408b5b, bool, Params(const Go* unk1), Args(unk1));
	DefineMethod(IsItemSetActive, 0x830f48, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(IsMeleeWeaponEquipped, 0x826415, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsMeleeWeaponSelected, 0x826821, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsPackOnly, 0x408b57, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsRangedWeaponEquipped, 0x826454, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsRangedWeaponSelected, 0x82683c, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsSlotEquipped, 0x408b74, bool, Params(eEquipSlot unk1), Args(unk1));
	DefineConstMethod(IsSpellInProgress, 0x82961c, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(IsSpellSelected, 0x826894, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(ListItems, 0x82b625, bool, Params(eInventoryLocation unk1, GopColl& unk2, bool unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(ListItems, 0x408c1d, bool, Params(eInventoryLocation unk1, GopColl& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(ListItems, 0x40a3be, bool, Params(eInventoryLocation unk1, GopColl& unk2), Args(unk1, unk2));
	DefineConstMethod(ListItems, 0x82be6d, bool, Params(eQueryTrait unk1, eInventoryLocation unk2, GopColl& unk3, bool unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineConstMethod(ListItems, 0x408c34, bool, Params(eQueryTrait unk1, eInventoryLocation unk2, GopColl& unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(ListItems, 0x40a3d4, bool, Params(eQueryTrait unk1, eInventoryLocation unk2, GopColl& unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(ListItems, 0x82b646, bool, Params(QtColl& unk1, eInventoryLocation unk2, GopColl& unk3, bool unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineConstMethod(ListItems, 0x408c4e, bool, Params(QtColl& unk1, eInventoryLocation unk2, GopColl& unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(ListItems, 0x40a3ed, bool, Params(QtColl& unk1, eInventoryLocation unk2, GopColl& unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(ListVisibleItems, 0x829cb9, bool, Params(GopColl& unk1), Args(unk1));
	DefineMethod(LocationContainsTemplate, 0x82ccdd, bool, Params(eInventoryLocation unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(SAutoGet, 0x8380d5, bool, Params(const Goid_* unk1, eActionOrigin unk2), Args(unk1, unk2));
	DefineMethod(SAutoGive, 0x837ad7, bool, Params(const Goid_* unk1, const Goid_* unk2, eActionOrigin unk3), Args(unk1, unk2, unk3));
	DefineMethod(SAutoUse, 0x82e298, bool, Params(const Goid_* unk1, eActionOrigin unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(SBeginGive, 0x82865b, bool, Params(const Goid_* unk1, eActionOrigin unk2), Args(unk1, unk2));
	DefineMethod(SEndGive, 0x832a9a, bool, Params(const Goid_* unk1, const Goid_* unk2, eActionOrigin unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(TestEquip, 0x833af0, bool, Params(const Goid_* unk1, eEquipSlot unk2), Args(unk1, unk2));
	DefineConstMethod(TestEquipPassive, 0x832fe2, bool, Params(const Goid_* unk1), Args(unk1));
	DefineConstMethod(TestGet, 0x8330ef, bool, Params(const Goid_* unk1, bool unk2), Args(unk1, unk2));
	DefineConstMethod(TestGet, 0x408cd1, bool, Params(const Goid_* unk1), Args(unk1));
	DefineConstMethod(GetActiveMeleeWeapon, 0x82968b, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetActiveRangedWeapon, 0x8296d8, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetActiveSpellBook, 0x408d9f, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBestArmor, 0x826974, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEquipped, 0x828edb, Go*, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetEquipped, 0x8263be, Go*, Params(eEquipSlot unk1), Args(unk1));
	DefineConstMethod(GetEquippedMeleeWeapon, 0x8263cc, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEquippedRangedWeapon, 0x826421, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetItem, 0x828f23, Go*, Params(eInventoryLocation unk1), Args(unk1));
	DefineConstMethod(GetItemFromTemplate, 0x828f8b, Go*, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetItemFromTemplate, 0x82cd5c, Go*, Params(eInventoryLocation unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineConstMethod(GetSelectedDualWieldWeapon, 0x82a5b0, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSelectedItem, 0x408bcb, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSelectedMeleeWeapon, 0x8267ee, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSelectedOffensiveWeaponOrSpell, 0x8278e7, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSelectedRangedWeapon, 0x826807, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSelectedSpell, 0x826858, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSelectedWeapon, 0x8267d2, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSelectedWeaponOrSpell, 0x8278ab, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetShield, 0x82695b, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGridbox, 0x408d41, UIGridbox*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetAnimStance, 0x827687, eAnimStance, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEquippedSlot, 0x8276a0, eEquipSlot, Params(const Go* unk1), Args(unk1));
	DefineConstMethod(GetEquippedSlot, 0x828426, eEquipSlot, Params(const Goid_* unk1), Args(unk1));
	DefineConstMethod(GetLocation, 0x829c85, eInventoryLocation, Params(const Go* unk1), Args(unk1));
	DefineConstMethod(GetSelectedLocation, 0x408c16, eInventoryLocation, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetFullRatio, 0x82977e, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetAnimStanceInt, 0x408b52, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGold, 0x408ce2, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGridAreaFree, 0x408d74, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGridAreaMax, 0x408d6c, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGridAreaUsed, 0x829725, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGridWidth, 0x408d64, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGridHeight, 0x408d68, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetNumActiveSpells, 0x408d23, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetNumSetBonuses, 0x830b40, int, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RSAdd, 0x831fbb, FuBi::Cookie__*, Params(Go* unk1, eInventoryLocation unk2, eActionOrigin unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSAutoEquip, 0x8374df, FuBi::Cookie__*, Params(eEquipSlot unk1, const Goid_* unk2, eActionOrigin unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSAutoEquip, 0x408c9f, FuBi::Cookie__*, Params(eEquipSlot unk1, const Goid_* unk2, eActionOrigin unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSCreateAddItem, 0x8316b5, FuBi::Cookie__*, Params(eInventoryLocation unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(RSEquip, 0x837361, FuBi::Cookie__*, Params(eEquipSlot unk1, const Goid_* unk2, eActionOrigin unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSRemove, 0x82ea69, FuBi::Cookie__*, Params(Go* unk1, bool unk2, Go* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSRemove, 0x408cb6, FuBi::Cookie__*, Params(Go* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(RSSelect, 0x82b6a3, FuBi::Cookie__*, Params(eInventoryLocation unk1, eActionOrigin unk2), Args(unk1, unk2));
	DefineMethod(RSSetLocation, 0x831d11, FuBi::Cookie__*, Params(Go* unk1, eInventoryLocation unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSTransfer, 0x832135, FuBi::Cookie__*, Params(Go* unk1, Go* unk2, eInventoryLocation unk3, eActionOrigin unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RSUnequip, 0x408c6f, FuBi::Cookie__*, Params(eEquipSlot unk1, eActionOrigin unk2), Args(unk1, unk2));
	DefineMethod(AddDelayedPcontent, 0x837a87, void, NO_PARAMS, NO_ARGS);
	DefineMethod(DropItemsAroundBody, 0x408d0b, void, NO_PARAMS, NO_ARGS);
	DefineMethod(DropItemsFor, 0x8375e2, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCBeginGive, 0x827915, void, Params(const Goid_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCBeginUse, 0x826588, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCEndGive, 0x8322c3, void, Params(const Goid_* unk1, const Goid_* unk2, eActionOrigin unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RCEndUse, 0x826695, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCRefreshMagicalEquipment, 0x82946e, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCReleaseGridboxes, 0x82c019, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCRemoveExpendedItem, 0x82cfcc, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCSetCanManipulateInventory, 0x82bebc, void, Params(bool unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCSetCustomHead, 0x82d24b, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RCSetForceGet, 0x82698c, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetInventoryDirty, 0x827b76, void, Params(bool unk1), Args(unk1));
	DefineMethod(ReportItemSwitching, 0x827c70, void, Params(Go* unk1), Args(unk1));
	DefineMethod(RSReleaseGridboxes, 0x82d330, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSSetForceGet, 0x827a36, void, Params(bool unk1), Args(unk1));
	DefineMethod(RSSetLocationPreference, 0x828570, void, Params(eInventoryLocation unk1), Args(unk1));
	DefineMethod(RSSetMarkAllInventoryForRemoval, 0x82649c, void, Params(bool unk1), Args(unk1));
	DefineMethod(RSTicketCreateItemForShopkeep, 0x83259b, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RSUsePotion, 0x82e50a, void, Params(const Goid_* unk1, eActionOrigin unk2), Args(unk1, unk2));
	DefineMethod(SBeginUse, 0x8277bb, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SEndUse, 0x8277f4, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetGridbox, 0x408d54, void, Params(UIGridbox* unk1), Args(unk1));
	DefineMethod(SetLocationPreference, 0x826460, void, Params(eInventoryLocation unk1), Args(unk1));
	DefineMethod(SetNumActiveSpells, 0x408d2a, void, Params(int unk1), Args(unk1));
	DefineMethod(SRefreshMagicalEquipment, 0x82a5ab, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SSetCanManipulateInventory, 0x82cddb, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetCustomHead, 0x82e688, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SSetGold, 0x82b81b, void, Params(int unk1), Args(unk1));
	DefineMethod(SSetInventoryDirty, 0x828696, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSyncRevivedPartyGold, 0x82ba1e, void, NO_PARAMS, NO_ARGS);

	FillStruct(0x00, 0x14);
	// 0x14
	int gridWidth;
	// 0x18
	int gridHeight;
	// 0x1c
	FillStruct(0x1c, 0x48);
	// 0x48
	Go* offhand;
	// 0x4c
	Go* mainhand;
	// 0x50
	FillStruct(0x50, 0x94);
	// 0x94
	int activeSpells;
	// 0x98
	int gold;
	// 0x9c
	FillStruct(0x9c, 0xd0);
	// 0xd0
	UIGridbox* uiGridBox;
	// 0xd4
	FillStruct(0xd4, 0xd8);
	// 0xd8
	Go* activeSpellbook;
};

STATIC_ASSERT_OFFSETOF(GoInventory, gridWidth, 0x14);
STATIC_ASSERT_OFFSETOF(GoInventory, offhand, 0x48);
STATIC_ASSERT_OFFSETOF(GoInventory, activeSpells, 0x94);
STATIC_ASSERT_OFFSETOF(GoInventory, uiGridBox, 0xd0);
STATIC_ASSERT_OFFSETOF(GoInventory, activeSpellbook, 0xd8);

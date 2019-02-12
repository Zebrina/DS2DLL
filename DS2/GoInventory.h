#pragma once

#include "FuBi.h"

class GoInventory {
public:
	/*GoInventory*/ private: /*static*/ GoInventory* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00408daf
	/*GoInventory*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoInventory* unk1); //0x00408da6
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCAdd(Go* unk1, eInventoryLocation unk2, eActionOrigin unk3, bool unk4); //0x00831c07
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCAddGold(int unk1); //0x00408cf5
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCAutoEquip(eEquipSlot unk1, const Goid_* unk2, eActionOrigin unk3, bool unk4); //0x008342b5
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCEquip(eEquipSlot unk1, const Goid_* unk2, eActionOrigin unk3); //0x00834146
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCRemove(Go* unk1, const SiegePos& unk2, const Quat& unk3, bool unk4); //0x0082de8c
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCRemove(Go* unk1, const SiegePos& unk2); //0x0082dfe6
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCRemove(Go* unk1); //0x0082e141
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCSelect(eInventoryLocation unk1, eActionOrigin unk2); //0x00829cf0
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCSetGold(int unk1); //0x00829e34
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCSetLocation(Go* unk1, eInventoryLocation unk2, bool unk3); //0x008314e8
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCTransfer(Go* unk1, Go* unk2, eInventoryLocation unk3, eActionOrigin unk4, bool unk5); //0x00831e11
	/*GoInventory*/ private: FuBi::Cookie__* /*__thiscall*/ RCUnequip(eEquipSlot unk1, eActionOrigin unk2); //0x00408c87
	/*GoInventory*/ private: void /*__thiscall*/ RCDeactivateGuiItems(); //0x0082f6b1
	/*GoInventory*/ private: void /*__thiscall*/ RCSetLocationPreference(eInventoryLocation unk1); //0x008276d6
	/*GoInventory*/ private: void /*__thiscall*/ SDeactivateGuiItems(); //0x00830123
	/*GoInventory*/ public: bool /*__thiscall*/ CanAdd(const Go* unk1, eInventoryLocation unk2, bool unk3) const; //0x0083005d
	/*GoInventory*/ public: bool /*__thiscall*/ CanGive(const Goid_* unk1, const Goid_* unk2, eActionOrigin unk3); //0x00830242
	/*GoInventory*/ public: bool /*__thiscall*/ Contains(const Go* unk1) const; //0x00829c57
	/*GoInventory*/ public: bool /*__thiscall*/ GetCanManipulateInventory(); //0x00408c68
	/*GoInventory*/ public: bool /*__thiscall*/ GetForceGet(); //0x00408d3a
	/*GoInventory*/ public: bool /*__thiscall*/ GetMarkAllInventoryForRemoval(); //0x00408cca
	/*GoInventory*/ public: bool /*__thiscall*/ HasGold() const; //0x00408ce9
	/*GoInventory*/ public: bool /*__thiscall*/ HasGridbox() const; //0x00408d48
	/*GoInventory*/ public: bool /*__thiscall*/ HasItems(eInventoryLocation unk1, bool unk2) const; //0x00828fdf
	/*GoInventory*/ public: bool /*__thiscall*/ HasSelectedOffensiveWeaponOrSpell() const; //0x00408d17
	/*GoInventory*/ public: bool /*__thiscall*/ IsActiveSpell(const Go* unk1); //0x00829c20
	/*GoInventory*/ public: bool /*__thiscall*/ IsAnyWeaponEquipped() const; //0x00408b89
	/*GoInventory*/ public: bool /*__thiscall*/ IsEitherHandEquipped() const; //0x00408ba9
	/*GoInventory*/ public: bool /*__thiscall*/ IsEquipped(const Go* unk1) const; //0x00408b5b
	/*GoInventory*/ public: bool /*__thiscall*/ IsItemSetActive(const gpbstring<char>& unk1); //0x00830f48
	/*GoInventory*/ public: bool /*__thiscall*/ IsMeleeWeaponEquipped() const; //0x00826415
	/*GoInventory*/ public: bool /*__thiscall*/ IsMeleeWeaponSelected() const; //0x00826821
	/*GoInventory*/ public: bool /*__thiscall*/ IsPackOnly() const; //0x00408b57
	/*GoInventory*/ public: bool /*__thiscall*/ IsRangedWeaponEquipped() const; //0x00826454
	/*GoInventory*/ public: bool /*__thiscall*/ IsRangedWeaponSelected() const; //0x0082683c
	/*GoInventory*/ public: bool /*__thiscall*/ IsSlotEquipped(eEquipSlot unk1) const; //0x00408b74
	/*GoInventory*/ public: bool /*__thiscall*/ IsSpellInProgress(const gpbstring<char>& unk1) const; //0x0082961c
	/*GoInventory*/ public: bool /*__thiscall*/ IsSpellSelected() const; //0x00826894
	/*GoInventory*/ public: bool /*__thiscall*/ ListItems(eInventoryLocation unk1, GopColl& unk2, bool unk3, bool unk4) const; //0x0082b625
	/*GoInventory*/ public: bool /*__thiscall*/ ListItems(eInventoryLocation unk1, GopColl& unk2, bool unk3) const; //0x00408c1d
	/*GoInventory*/ public: bool /*__thiscall*/ ListItems(eInventoryLocation unk1, GopColl& unk2) const; //0x0040a3be
	/*GoInventory*/ public: bool /*__thiscall*/ ListItems(eQueryTrait unk1, eInventoryLocation unk2, GopColl& unk3, bool unk4, bool unk5) const; //0x0082be6d
	/*GoInventory*/ public: bool /*__thiscall*/ ListItems(eQueryTrait unk1, eInventoryLocation unk2, GopColl& unk3, bool unk4) const; //0x00408c34
	/*GoInventory*/ public: bool /*__thiscall*/ ListItems(eQueryTrait unk1, eInventoryLocation unk2, GopColl& unk3) const; //0x0040a3d4
	/*GoInventory*/ public: bool /*__thiscall*/ ListItems(QtColl& unk1, eInventoryLocation unk2, GopColl& unk3, bool unk4, bool unk5) const; //0x0082b646
	/*GoInventory*/ public: bool /*__thiscall*/ ListItems(QtColl& unk1, eInventoryLocation unk2, GopColl& unk3, bool unk4) const; //0x00408c4e
	/*GoInventory*/ public: bool /*__thiscall*/ ListItems(QtColl& unk1, eInventoryLocation unk2, GopColl& unk3) const; //0x0040a3ed
	/*GoInventory*/ public: bool /*__thiscall*/ ListVisibleItems(GopColl& unk1) const; //0x00829cb9
	/*GoInventory*/ public: bool /*__thiscall*/ LocationContainsTemplate(eInventoryLocation unk1, const gpbstring<char>& unk2); //0x0082ccdd
	/*GoInventory*/ public: bool /*__thiscall*/ SAutoGet(const Goid_* unk1, eActionOrigin unk2); //0x008380d5
	/*GoInventory*/ public: bool /*__thiscall*/ SAutoGive(const Goid_* unk1, const Goid_* unk2, eActionOrigin unk3); //0x00837ad7
	/*GoInventory*/ public: bool /*__thiscall*/ SAutoUse(const Goid_* unk1, eActionOrigin unk2, bool unk3); //0x0082e298
	/*GoInventory*/ public: bool /*__thiscall*/ SBeginGive(const Goid_* unk1, eActionOrigin unk2); //0x0082865b
	/*GoInventory*/ public: bool /*__thiscall*/ SEndGive(const Goid_* unk1, const Goid_* unk2, eActionOrigin unk3); //0x00832a9a
	/*GoInventory*/ public: bool /*__thiscall*/ TestEquip(const Goid_* unk1, eEquipSlot unk2) const; //0x00833af0
	/*GoInventory*/ public: bool /*__thiscall*/ TestEquipPassive(const Goid_* unk1) const; //0x00832fe2
	/*GoInventory*/ public: bool /*__thiscall*/ TestGet(const Goid_* unk1, bool unk2) const; //0x008330ef
	/*GoInventory*/ public: bool /*__thiscall*/ TestGet(const Goid_* unk1) const; //0x00408cd1
	/*GoInventory*/ public: Go* /*__thiscall*/ GetActiveMeleeWeapon() const; //0x0082968b
	/*GoInventory*/ public: Go* /*__thiscall*/ GetActiveRangedWeapon() const; //0x008296d8
	/*GoInventory*/ public: Go* /*__thiscall*/ GetActiveSpellBook() const; //0x00408d9f
	/*GoInventory*/ public: Go* /*__thiscall*/ GetBestArmor() const; //0x00826974
	/*GoInventory*/ public: Go* /*__thiscall*/ GetEquipped(const gpbstring<char>& unk1) const; //0x00828edb
	/*GoInventory*/ public: Go* /*__thiscall*/ GetEquipped(eEquipSlot unk1) const; //0x008263be
	/*GoInventory*/ public: Go* /*__thiscall*/ GetEquippedMeleeWeapon() const; //0x008263cc
	/*GoInventory*/ public: Go* /*__thiscall*/ GetEquippedRangedWeapon() const; //0x00826421
	/*GoInventory*/ public: Go* /*__thiscall*/ GetItem(eInventoryLocation unk1) const; //0x00828f23
	/*GoInventory*/ public: Go* /*__thiscall*/ GetItemFromTemplate(const gpbstring<char>& unk1) const; //0x00828f8b
	/*GoInventory*/ public: Go* /*__thiscall*/ GetItemFromTemplate(eInventoryLocation unk1, const gpbstring<char>& unk2); //0x0082cd5c
	/*GoInventory*/ public: Go* /*__thiscall*/ GetSelectedDualWieldWeapon() const; //0x0082a5b0
	/*GoInventory*/ public: Go* /*__thiscall*/ GetSelectedItem() const; //0x00408bcb
	/*GoInventory*/ public: Go* /*__thiscall*/ GetSelectedMeleeWeapon() const; //0x008267ee
	/*GoInventory*/ public: Go* /*__thiscall*/ GetSelectedOffensiveWeaponOrSpell() const; //0x008278e7
	/*GoInventory*/ public: Go* /*__thiscall*/ GetSelectedRangedWeapon() const; //0x00826807
	/*GoInventory*/ public: Go* /*__thiscall*/ GetSelectedSpell() const; //0x00826858
	/*GoInventory*/ public: Go* /*__thiscall*/ GetSelectedWeapon() const; //0x008267d2
	/*GoInventory*/ public: Go* /*__thiscall*/ GetSelectedWeaponOrSpell() const; //0x008278ab
	/*GoInventory*/ public: Go* /*__thiscall*/ GetShield() const; //0x0082695b
	/*GoInventory*/ public: UIGridbox* /*__thiscall*/ GetGridbox() const; //0x00408d41
	/*GoInventory*/ public: eAnimStance /*__thiscall*/ GetAnimStance(); //0x00827687
	/*GoInventory*/ public: eEquipSlot /*__thiscall*/ GetEquippedSlot(const Go* unk1) const; //0x008276a0
	/*GoInventory*/ public: eEquipSlot /*__thiscall*/ GetEquippedSlot(const Goid_* unk1) const; //0x00828426
	/*GoInventory*/ public: eInventoryLocation /*__thiscall*/ GetLocation(const Go* unk1) const; //0x00829c85
	/*GoInventory*/ public: eInventoryLocation /*__thiscall*/ GetSelectedLocation() const; //0x00408c16
	/*GoInventory*/ public: float /*__thiscall*/ GetFullRatio() const; //0x0082977e
	/*GoInventory*/ public: int /*__thiscall*/ GetAnimStanceInt(); //0x00408b52
	/*GoInventory*/ public: int /*__thiscall*/ GetGold() const; //0x00408ce2
	/*GoInventory*/ public: int /*__thiscall*/ GetGridAreaFree() const; //0x00408d74
	/*GoInventory*/ public: int /*__thiscall*/ GetGridAreaMax() const; //0x00408d6c
	/*GoInventory*/ public: int /*__thiscall*/ GetGridAreaUsed() const; //0x00829725
	/*GoInventory*/ public: int /*__thiscall*/ GetGridHeight() const; //0x00408d68
	/*GoInventory*/ public: int /*__thiscall*/ GetGridWidth() const; //0x00408d64
	/*GoInventory*/ public: int /*__thiscall*/ GetNumActiveSpells(); //0x00408d23
	/*GoInventory*/ public: int /*__thiscall*/ GetNumSetBonuses(const gpbstring<char>& unk1); //0x00830b40
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSAdd(Go* unk1, eInventoryLocation unk2, eActionOrigin unk3, bool unk4); //0x00831fbb
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSAutoEquip(eEquipSlot unk1, const Goid_* unk2, eActionOrigin unk3, bool unk4); //0x008374df
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSAutoEquip(eEquipSlot unk1, const Goid_* unk2, eActionOrigin unk3); //0x00408c9f
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSCreateAddItem(eInventoryLocation unk1, const gpbstring<char>& unk2); //0x008316b5
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSEquip(eEquipSlot unk1, const Goid_* unk2, eActionOrigin unk3); //0x00837361
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSRemove(Go* unk1, bool unk2, Go* unk3); //0x0082ea69
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSRemove(Go* unk1, bool unk2); //0x00408cb6
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSSelect(eInventoryLocation unk1, eActionOrigin unk2); //0x0082b6a3
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetLocation(Go* unk1, eInventoryLocation unk2, bool unk3); //0x00831d11
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSTransfer(Go* unk1, Go* unk2, eInventoryLocation unk3, eActionOrigin unk4, bool unk5); //0x00832135
	/*GoInventory*/ public: FuBi::Cookie__* /*__thiscall*/ RSUnequip(eEquipSlot unk1, eActionOrigin unk2); //0x00408c6f
	/*GoInventory*/ public: void /*__thiscall*/ AddDelayedPcontent(); //0x00837a87
	/*GoInventory*/ public: void /*__thiscall*/ DropItemsAroundBody(); //0x00408d0b
	/*GoInventory*/ public: void /*__thiscall*/ DropItemsFor(const Goid_* unk1); //0x008375e2
	/*GoInventory*/ public: void /*__thiscall*/ RCBeginGive(const Goid_* unk1, unsigned long unk2); //0x00827915
	/*GoInventory*/ public: void /*__thiscall*/ RCBeginUse(); //0x00826588
	/*GoInventory*/ public: void /*__thiscall*/ RCEndGive(const Goid_* unk1, const Goid_* unk2, eActionOrigin unk3, unsigned long unk4); //0x008322c3
	/*GoInventory*/ public: void /*__thiscall*/ RCEndUse(); //0x00826695
	/*GoInventory*/ public: void /*__thiscall*/ RCRefreshMagicalEquipment(); //0x0082946e
	/*GoInventory*/ public: void /*__thiscall*/ RCReleaseGridboxes(unsigned long unk1); //0x0082c019
	/*GoInventory*/ public: void /*__thiscall*/ RCRemoveExpendedItem(const Goid_* unk1); //0x0082cfcc
	/*GoInventory*/ public: void /*__thiscall*/ RCSetCanManipulateInventory(bool unk1, unsigned long unk2); //0x0082bebc
	/*GoInventory*/ public: void /*__thiscall*/ RCSetCustomHead(const gpbstring<char>& unk1); //0x0082d24b
	/*GoInventory*/ public: void /*__thiscall*/ RCSetForceGet(bool unk1); //0x0082698c
	/*GoInventory*/ public: void /*__thiscall*/ RCSetInventoryDirty(bool unk1); //0x00827b76
	/*GoInventory*/ public: void /*__thiscall*/ ReportItemSwitching(Go* unk1); //0x00827c70
	/*GoInventory*/ public: void /*__thiscall*/ RSReleaseGridboxes(); //0x0082d330
	/*GoInventory*/ public: void /*__thiscall*/ RSSetForceGet(bool unk1); //0x00827a36
	/*GoInventory*/ public: void /*__thiscall*/ RSSetLocationPreference(eInventoryLocation unk1); //0x00828570
	/*GoInventory*/ public: void /*__thiscall*/ RSSetMarkAllInventoryForRemoval(bool unk1); //0x0082649c
	/*GoInventory*/ public: void /*__thiscall*/ RSTicketCreateItemForShopkeep(const gpbstring<char>& unk1); //0x0083259b
	/*GoInventory*/ public: void /*__thiscall*/ RSUsePotion(const Goid_* unk1, eActionOrigin unk2); //0x0082e50a
	/*GoInventory*/ public: void /*__thiscall*/ SBeginUse(const Goid_* unk1); //0x008277bb
	/*GoInventory*/ public: void /*__thiscall*/ SEndUse(const Goid_* unk1); //0x008277f4
	/*GoInventory*/ public: void /*__thiscall*/ SetGridbox(UIGridbox* unk1); //0x00408d54
	/*GoInventory*/ public: void /*__thiscall*/ SetLocationPreference(eInventoryLocation unk1); //0x00826460
	/*GoInventory*/ public: void /*__thiscall*/ SetNumActiveSpells(int unk1); //0x00408d2a
	/*GoInventory*/ public: void /*__thiscall*/ SRefreshMagicalEquipment(); //0x0082a5ab
	/*GoInventory*/ public: void /*__thiscall*/ SSetCanManipulateInventory(bool unk1); //0x0082cddb
	/*GoInventory*/ public: void /*__thiscall*/ SSetCustomHead(const gpbstring<char>& unk1); //0x0082e688
	/*GoInventory*/ public: void /*__thiscall*/ SSetGold(int unk1); //0x0082b81b
	/*GoInventory*/ public: void /*__thiscall*/ SSetInventoryDirty(bool unk1); //0x00828696
	/*GoInventory*/ public: void /*__thiscall*/ SSyncRevivedPartyGold(); //0x0082ba1e
};

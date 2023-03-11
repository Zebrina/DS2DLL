#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "FuBi.h"
#include "Go.h"
#include "GoComponent.h"
#include "GoidScid.h"
#include "QtColl.h"
#include "UIGridbox.h"

constexpr uint NUM_EQUIP_SLOTS = 12;

class GoInventory : public GoComponent {
public:
    virtual ~GoInventory();

	$StaticMethod(0x00408daf, FUBI_NetToInstance, GoInventory*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00408da6, FUBI_InstanceToNet, uint, GoInventory* unk1);
	
	$Method(0x00830123, SDeactivateGuiItems, void);
	$ConstMethod(0x0083005d, CanAdd, bool, const Go* targetGo, eInventoryLocation inventoryLocation, bool unk3);
	$Method(0x00830242, CanGive, bool, const Goid* unk1, const Goid* unk2, eActionOrigin actionOrigin);
	$ConstMethod(0x00829c57, Contains, bool, const Go* targetGo);
	$Method(0x00408c68, GetCanManipulateInventory, bool);
	$Method(0x00408d3a, GetForceGet, bool);
	$Method(0x00408cca, GetMarkAllInventoryForRemoval, bool);
	$ConstMethod(0x00408ce9, HasGold, bool);
	$ConstMethod(0x00408d48, HasGridbox, bool);
	$ConstMethod(0x00828fdf, HasItems, bool, eInventoryLocation inventoryLocation, bool unk2);
	$ConstMethod(0x00408d17, HasSelectedOffensiveWeaponOrSpell, bool);
	$Method(0x00829c20, IsActiveSpell, bool, const Go* targetGo);
	$ConstMethod(0x00408b89, IsAnyWeaponEquipped, bool);
	$ConstMethod(0x00408ba9, IsEitherHandEquipped, bool);
	$ConstMethod(0x00408b5b, IsEquipped, bool, const Go* targetGo);
	$Method(0x00830f48, IsItemSetActive, bool, const GPBString& unk1);
	$ConstMethod(0x00826415, IsMeleeWeaponEquipped, bool);
	$ConstMethod(0x00826821, IsMeleeWeaponSelected, bool);
	$ConstMethod(0x00408b57, IsPackOnly, bool);
	$ConstMethod(0x00826454, IsRangedWeaponEquipped, bool);
	$ConstMethod(0x0082683c, IsRangedWeaponSelected, bool);
	$ConstMethod(0x00408b74, IsSlotEquipped, bool, eEquipSlot equipSlot);
	$ConstMethod(0x0082961c, IsSpellInProgress, bool, const GPBString& unk1);
	$ConstMethod(0x00826894, IsSpellSelected, bool);
	$ConstMethod(0x0082b625, ListItems, bool, eInventoryLocation inventoryLocation, GopColl& unk2, bool unk3 = true, bool unk4 = true);
	$ConstMethod(0x0082be6d, ListItems, bool, eQueryTrait unk1, eInventoryLocation inventoryLocation, GopColl& unk3, bool unk4 = true, bool unk5 = true);
	$ConstMethod(0x0082b646, ListItems, bool, QtColl& unk1, eInventoryLocation inventoryLocation, GopColl& unk3, bool unk4, bool unk5 = true);
	$ConstMethod(0x0040a3ed, ListItems, bool, QtColl& unk1, eInventoryLocation inventoryLocation, GopColl& unk3);
	$ConstMethod(0x00829cb9, ListVisibleItems, bool, GopColl& unk1);
	$Method(0x0082ccdd, LocationContainsTemplate, bool, eInventoryLocation inventoryLocation, const GPBString& path);
	$Method(0x008380d5, SAutoGet, bool, const Goid* targetGoid, eActionOrigin actionOrigin);
	$Method(0x00837ad7, SAutoGive, bool, const Goid* unk1, const Goid* unk2, eActionOrigin actionOrigin);
	$Method(0x0082e298, SAutoUse, bool, const Goid* unk1, eActionOrigin actionOrigin, bool unk3);
	$Method(0x0082865b, SBeginGive, bool, const Goid* targetGoid, eActionOrigin actionOrigin);
	$Method(0x00832a9a, SEndGive, bool, const Goid* unk1, const Goid* unk2, eActionOrigin actionOrigin);
	$ConstMethod(0x00833af0, TestEquip, bool, const Goid* targetGoid, eEquipSlot equipSlot);
	$ConstMethod(0x00832fe2, TestEquipPassive, bool, const Goid* targetGoid);
	$ConstMethod(0x008330ef, TestGet, bool, const Goid* targetGoid, bool unk2 = false);
	$ConstMethod(0x0082968b, GetActiveMeleeWeapon, Go*);
	$ConstMethod(0x008296d8, GetActiveRangedWeapon, Go*);
	$ConstMethod(0x00408d9f, GetActiveSpellBook, Go*);
	$ConstMethod(0x00826974, GetBestArmor, Go*);
	$ConstMethod(0x00828edb, GetEquipped, Go*, const GPBString& unk1);
	$ConstMethod(0x008263be, GetEquipped, Go*, eEquipSlot equipSlot);
	$ConstMethod(0x008263cc, GetEquippedMeleeWeapon, Go*);
	$ConstMethod(0x00826421, GetEquippedRangedWeapon, Go*);
	$ConstMethod(0x00828f23, GetItem, Go*, eInventoryLocation inventoryLocation);
	$ConstMethod(0x00828f8b, GetItemFromTemplate, Go*, const GPBString& path);
	$Method(0x0082cd5c, GetItemFromTemplate, Go*, eInventoryLocation inventoryLocation, const GPBString& path);
	$ConstMethod(0x0082a5b0, GetSelectedDualWieldWeapon, Go*);
	$ConstMethod(0x00408bcb, GetSelectedItem, Go*);
	$ConstMethod(0x008267ee, GetSelectedMeleeWeapon, Go*);
	$ConstMethod(0x008278e7, GetSelectedOffensiveWeaponOrSpell, Go*);
	$ConstMethod(0x00826807, GetSelectedRangedWeapon, Go*);
	$ConstMethod(0x00826858, GetSelectedSpell, Go*);
	$ConstMethod(0x008267d2, GetSelectedWeapon, Go*);
	$ConstMethod(0x008278ab, GetSelectedWeaponOrSpell, Go*);
	$ConstMethod(0x0082695b, GetShield, Go*);
	$ConstMethod(0x00408d41, GetGridbox, UIGridbox*);
	$Method(0x00827687, GetAnimStance, eAnimStance);
	$ConstMethod(0x008276a0, GetEquippedSlot, eEquipSlot, const Go* targetGo);
	$ConstMethod(0x00828426, GetEquippedSlot, eEquipSlot, const Goid* targetGoid);
	$ConstMethod(0x00829c85, GetLocation, eInventoryLocation, const Go* targetGo);
	$ConstMethod(0x00408c16, GetSelectedLocation, eInventoryLocation);
	$ConstMethod(0x0082977e, GetFullRatio, float);
	$Method(0x00408b52, GetAnimStanceInt, int);
	$ConstMethod(0x00408ce2, GetGold, int);
	$ConstMethod(0x00408d74, GetGridAreaFree, int);
	$ConstMethod(0x00408d6c, GetGridAreaMax, int);
	$ConstMethod(0x00829725, GetGridAreaUsed, int);
	$ConstMethod(0x00408d64, GetGridWidth, int);
	$ConstMethod(0x00408d68, GetGridHeight, int);
	$Method(0x00408d23, GetNumActiveSpells, int);
	$Method(0x00830b40, GetNumSetBonuses, int, const GPBString& unk1);
	$Method(0x00837a87, AddDelayedPcontent, void);
	$Method(0x00408d0b, DropItemsAroundBody, void);
	$Method(0x008375e2, DropItemsFor, void, const Goid* targetGoid);
	$Method(0x00827c70, ReportItemSwitching, void, Go* targetGo);
	$Method(0x008277bb, SBeginUse, void, const Goid* targetGoid);
	$Method(0x008277f4, SEndUse, void, const Goid* targetGoid);
	$Method(0x00408d54, SetGridbox, void, UIGridbox* unk1);
	$Method(0x00826460, SetLocationPreference, void, eInventoryLocation inventoryLocation);
	$Method(0x00408d2a, SetNumActiveSpells, void, int unk1);
	$Method(0x0082a5ab, SRefreshMagicalEquipment, void);
	$Method(0x0082cddb, SSetCanManipulateInventory, void, bool unk1);
	$Method(0x0082e688, SSetCustomHead, void, const GPBString& unk1);
	$Method(0x0082b81b, SSetGold, void, int amount);
	$Method(0x00828696, SSetInventoryDirty, void, bool unk1);
	$Method(0x0082ba1e, SSyncRevivedPartyGold, void);

	$Method(0x00831fbb, RSAdd, FuBiCookie*, Go* targetGo, eInventoryLocation inventoryLocation, eActionOrigin actionOrigin, bool unk4);
	$Method(0x008374df, RSAutoEquip, FuBiCookie*, eEquipSlot equipSlot, const Goid* targetGoid, eActionOrigin actionOrigin, bool unk4 = false);
	$Method(0x008316b5, RSCreateAddItem, FuBiCookie*, eInventoryLocation inventoryLocation, const GPBString& unk2);
	$Method(0x00837361, RSEquip, FuBiCookie*, eEquipSlot equipSlot, const Goid* targetGoid, eActionOrigin actionOrigin);
	$Method(0x0082ea69, RSRemove, FuBiCookie*, Go* unk1, bool unk2, Go* unk3);
	$Method(0x00408cb6, RSRemove, FuBiCookie*, Go* targetGo, bool unk2);
	$Method(0x0082b6a3, RSSelect, FuBiCookie*, eInventoryLocation inventoryLocation, eActionOrigin actionOrigin);
	$Method(0x00831d11, RSSetLocation, FuBiCookie*, Go* targetGo, eInventoryLocation inventoryLocation, bool unk3);
	$Method(0x00832135, RSTransfer, FuBiCookie*, Go* unk1, Go* unk2, eInventoryLocation inventoryLocation, eActionOrigin actionOrigin, bool unk5);
	$Method(0x00408c6f, RSUnequip, FuBiCookie*, eEquipSlot equipSlot, eActionOrigin actionOrigin);
	$Method(0x0082d330, RSReleaseGridboxes, void);
	$Method(0x00827a36, RSSetForceGet, void, bool unk1);
	$Method(0x00828570, RSSetLocationPreference, void, eInventoryLocation inventoryLocation);
	$Method(0x0082649c, RSSetMarkAllInventoryForRemoval, void, bool unk1);
	$Method(0x0083259b, RSTicketCreateItemForShopkeep, void, const GPBString& unk1);
	$Method(0x0082e50a, RSUsePotion, void, const Goid* targetGoid, eActionOrigin actionOrigin);

	$Method(0x00831c07, RCAdd, FuBiCookie*, Go* targetGo, eInventoryLocation inventoryLocation, eActionOrigin actionOrigin, bool unk4);
	$Method(0x00408cf5, RCAddGold, FuBiCookie*, int amount);
	$Method(0x008342b5, RCAutoEquip, FuBiCookie*, eEquipSlot equipSlot, const Goid* targetGoid, eActionOrigin actionOrigin, bool unk4);
	$Method(0x00834146, RCEquip, FuBiCookie*, eEquipSlot equipSlot, const Goid* targetGoid, eActionOrigin actionOrigin);
	$Method(0x0082de8c, RCRemove, FuBiCookie*, Go* targetGo, const SiegePos& unk2, const Quat& unk3, bool unk4);
	$Method(0x0082dfe6, RCRemove, FuBiCookie*, Go* targetGo, const SiegePos& unk2);
	$Method(0x0082e141, RCRemove, FuBiCookie*, Go* targetGo);
	$Method(0x00829cf0, RCSelect, FuBiCookie*, eInventoryLocation inventoryLocation, eActionOrigin actionOrigin);
	$Method(0x00829e34, RCSetGold, FuBiCookie*, int amount);
	$Method(0x008314e8, RCSetLocation, FuBiCookie*, Go* targetGo, eInventoryLocation inventoryLocation, bool unk3);
	$Method(0x00831e11, RCTransfer, FuBiCookie*, Go* unk1, Go* unk2, eInventoryLocation inventoryLocation, eActionOrigin actionOrigin, bool unk5);
	$Method(0x00408c87, RCUnequip, FuBiCookie*, eEquipSlot equipSlot, eActionOrigin actionOrigin);
	$Method(0x0082f6b1, RCDeactivateGuiItems, void);
	$Method(0x008276d6, RCSetLocationPreference, void, eInventoryLocation inventoryLocation);
	$Method(0x00827915, RCBeginGive, void, const Goid* targetGoid, uint unk2);
	$Method(0x00826588, RCBeginUse, void);
	$Method(0x008322c3, RCEndGive, void, const Goid* unk1, const Goid* unk2, eActionOrigin actionOrigin, uint unk4);
	$Method(0x00826695, RCEndUse, void);
	$Method(0x0082946e, RCRefreshMagicalEquipment, void);
	$Method(0x0082c019, RCReleaseGridboxes, void, uint unk1);
	$Method(0x0082cfcc, RCRemoveExpendedItem, void, const Goid* targetGoid);
	$Method(0x0082bebc, RCSetCanManipulateInventory, void, bool unk1, uint unk2);
	$Method(0x0082d24b, RCSetCustomHead, void, const GPBString& unk1);
	$Method(0x0082698c, RCSetForceGet, void, bool unk1);
	$Method(0x00827b76, RCSetInventoryDirty, void, bool unk1);

    template <class Action>
    void ForEachEquippedItem(Action action) {
        for (uint slot = 0; slot < NUM_EQUIP_SLOTS; ++slot) {
            Go* item = equipped[slot];
            if (item) {
                action((eEquipSlot)slot, item);
            }
        }
    }

	// 0x14
	int gridWidth;
	// 0x18
	int gridHeight;
	// 0x1c
	$Padding(0x1c, 0x48);
    // 0x48
    union {
        Go* equipped[NUM_EQUIP_SLOTS];
        struct {
            // 0x48
            Go* equippedShield;
            // 0x4c
            Go* equippedWeapon;
            // 0x50
            Go* equippedFeet;
            // 0x54
            Go* equippedChest;
            // 0x58
            Go* equippedHead;
            // 0x5c
            Go* equippedForearms;
            // 0x60
            Go* equippedAmulet;
            // 0x64
            Go* equippedSpellbook;
            // 0x68
            Go* equippedRing1;
            // 0x6c
            Go* equippedRing2;
            // 0x70
            Go* equippedRing3;
            // 0x74
            Go* equippedRing4;
        };
    };
	// 0x78
	$Padding(0x78, 0x90);
	// 0x90
	eInventoryLocation selectedLocation;
	// 0x94
	int numActiveSpells;
	// 0x98
	int gold;
	// 0x9c
	$Padding(0x9c, 0xac);
	// 0xac
	bool bForceGet;
	// 0xb0
	$Padding(0xb0, 0xc0);
	// 0xc0
	bool bCanManipulate;
	bool b_c1;
	bool b_c2;
	bool b_c3;
	// 0xc4
	Go* selectedItem;
	// 0xc8
	eActionOrigin selectedItemActionOrigin; // DS1 LEAK
	// 0xcc
	eAnimStance animStance;
	// 0xd0
	UIGridbox* uiGridBox;
	// 0xd4
	byte b_d4; // 0082768A                 cmp     byte ptr [esi+0D4h], 0      bool??
	// 0xd8
	Go* activeSpellbook;
};

STATIC_ASSERT_OFFSETOF(GoInventory, gridWidth, 0x14);
STATIC_ASSERT_OFFSETOF(GoInventory, equippedShield, 0x48);
STATIC_ASSERT_OFFSETOF(GoInventory, numActiveSpells, 0x94);
STATIC_ASSERT_OFFSETOF(GoInventory, selectedItem, 0xc4);
STATIC_ASSERT_OFFSETOF(GoInventory, uiGridBox, 0xd0);
STATIC_ASSERT_OFFSETOF(GoInventory, activeSpellbook, 0xd8);

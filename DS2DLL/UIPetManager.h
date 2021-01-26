#pragma once

#include "GoidScid.h"
#include "UIWindow.h"

class UIPetManager {
public:
	$Singleton(UIPetManager, 0x00456e66);

	$Method(0x004bdcff, AttemptPetFeed, void);
	$Method(0x004bd7a1, OnGrowthBarRolloff, void);
	$Method(0x004bd784, OnGrowthBarRollover, void, int unk1);
	$Method(0x004bd7ab, OnPetPowerRolloff, void);
	$Method(0x004be7b9, OnPetPowerRollover, void);
	$Method(0x004bd7a6, OnPetWeaponRolloff, void);
	$Method(0x004be043, OnPetWeaponRollover, void);
	$Method(0x004bdae7, ShowNextPetInventoryPage, void);
	$Method(0x004bdb49, ShowPreviousPetInventoryPage, void);

	// 0x00
    UIWindow* itemslotPetWeapon;
    // 0x04
    UIWindow* itemslotPetSpell;
    // 0x08
    UIWindow* itemslotPetEmanation;
    // 0x0c
    UIWindow* itemslotPetPower;
    // 0x10
    UIWindow* statusBarHunger;
    // 0x14
    UIWindow* statusBarGrowth[5];
    // 0x28
    UIWindow* windowGrowthIcon[5];
    // 0x3c
    UIWindow* windowLeader[5];
    // 0x50
    $Padding(0x50, 0x58);
    // 0x58
    bool b58 = true;
    // 0x5c
    Goid* goid5C = Goid::Invalid;
    // 0x60
    bool b60 = false;
    // 0x64
	$Padding(0x64, 0x68);
};

STATIC_ASSERT(sizeof(UIPetManager) == 0x68);

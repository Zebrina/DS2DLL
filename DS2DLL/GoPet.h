#pragma once

#include "FuBi.h"
#include "GoComponent.h"
#include "GoidScid.h"
#include "GPString.h"

class GoPet : public GoComponent {
public:
	$StaticMethod(0x00485ab4, FUBI_NetToInstance, GoPet*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00485aab, FUBI_InstanceToNet, uint, GoPet* unk1);
	$Method(0x00485aa7, GetPetClass, const GPBString&);
	$Method(0x00485aa3, GetPetEmanation, const Goid*);
	$Method(0x00485a9f, GetPetSpell, const Goid*);
	$Method(0x00485a9b, GetPetWeapon, const Goid*);
	$Method(0x00485a88, GetFullPetLevel, float);
	$Method(0x00485a8f, GetPetLevelProgress, float);
	$Method(0x00485a84, GetPetLevel, int);
	$Method(0x00958284, EatItem, void, const Goid* unk1);
	$Method(0x0095672d, RCBuildPetEquipment, void, const Goid* unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x00956b31, RCSetPetBonus, void, int unk1, int unk2);
	$Method(0x009547ad, RCSetPetLevel, void, int unk1);
	$Method(0x00957235, RCSetPetStats, void, bool unk1);
	$Method(0x00954e00, RSFinishPetLevelUp, void);
	$Method(0x00958ae6, RSRequestStatRefresh, void);
	$Method(0x00957f10, RSSetPetBonus, void, int unk1, int unk2);
	$Method(0x00954f3e, RSSetPetLevel, void, int unk1);
	$Method(0x0095807b, RSSetPetStats, void, const Goid* unk1, bool unk2, bool unk3);
	$Method(0x00958a66, SBuildPetStats, void, bool unk1, bool unk2);

    // 0x14
    $Padding(0x00, 0x38);
	// 0x38
	int petLevel;
	// 0x3c
	float petLevelProgress;
	// 0x40
	Goid* petWeapon;
	// 0x44
	Goid* petSpell;
	// 0x48
	Goid* petEmanation;
	// 0x5c
	GPBString petClass;
};

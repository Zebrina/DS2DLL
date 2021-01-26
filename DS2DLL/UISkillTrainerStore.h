#pragma once

#include "GoidScid.h"
#include "GPString.h"

class UISkillTrainerStore {
public:
	$Singleton(UISkillTrainerStore, 0x00474008);

	$Method(0x004cf7d2, BuyNextUpgrade, void);
	$Method(0x004cfa19, ConfirmNextUpgrade, void);
	$Method(0x004cf1c6, HideSelectedDescription, void);
	$Method(0x004cf405, RCPurchaseSkill, void, const Goid* unk1, const GPBString& unk2, int unk3);
	$Method(0x004cf995, ResetDescriptionTimer, void, const GPBString& unk1, int unk2);
	$Method(0x004cf628, RSPurchaseSkill, void, const Goid* unk1, const GPBString& unk2);
	$Method(0x0047eb48, SetActivePage, void, const GPBString& unk1);
	$Method(0x0047eb5e, SetRolloverSkill, void, const GPBString& unk1);
	$Method(0x004cfc12, UpdateSelectedDescription, void);

    // 0x00
    float f00;
    // 0x04
    $Padding(0x04, 0x14);
    // 0x14
    bool b14;
};

STATIC_ASSERT(sizeof(UISkillTrainerStore) == 0x18);

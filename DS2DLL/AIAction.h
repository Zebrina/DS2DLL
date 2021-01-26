#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "GoidScid.h"
#include "Memory.h"

class AIAction {
public:
	$Singleton(AIAction, 0x00429dc6);

	$Method(0x009528f7, RSCollectLoot, FuBiCookie*, const_mem_ptr unk1);
	$Method(0x00952a36, RSCollectLootMp, FuBiCookie*, const Goid* unk1, const_mem_ptr unk2);
	$Method(0x0095372b, RSDoJobPacker, FuBiCookie*, const_mem_ptr unk1);
	$Method(0x00952d02, RSDrinkLifeHealingPotions, FuBiCookie*, const_mem_ptr unk1, eActionOrigin unk2);
	$Method(0x00952ea5, RSDrinkManaHealingPotions, FuBiCookie*, const_mem_ptr unk1, eActionOrigin unk2);
};

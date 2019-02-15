#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "Memory.h"

#include "ClassMacros.h"

struct Goid_;

class AIAction {
public:
	DefineSingleton(AIAction, 0x429dc6);

	DefineMethod(RSCollectLoot, 0x9528f7, FuBi::Cookie__*, Params(const_mem_ptr unk1), Args(unk1));
	DefineMethod(RSCollectLootMp, 0x952a36, FuBi::Cookie__*, Params(const Goid_* unk1, const_mem_ptr unk2), Args(unk1, unk2));
	DefineMethod(RSDoJobPacker, 0x95372b, FuBi::Cookie__*, Params(const_mem_ptr unk1), Args(unk1));
	DefineMethod(RSDrinkLifeHealingPotions, 0x952d02, FuBi::Cookie__*, Params(const_mem_ptr unk1, eActionOrigin unk2), Args(unk1, unk2));
	DefineMethod(RSDrinkManaHealingPotions, 0x952ea5, FuBi::Cookie__*, Params(const_mem_ptr unk1, eActionOrigin unk2), Args(unk1, unk2));
};

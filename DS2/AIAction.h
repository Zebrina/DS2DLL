#pragma once

#include "ClassMacros.h"

class AIAction {
public:
	DefineSingleton(AIAction, 0x429dc6);

	/*AIAction*/ private: /*static*/ AIAction* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429dc6
	/*AIAction*/ private: FuBi::Cookie__* /*__thiscall*/ RSCollectLoot(const_mem_ptr unk1); //0x009528f7
	/*AIAction*/ private: FuBi::Cookie__* /*__thiscall*/ RSCollectLootMp(const Goid_* unk1, const_mem_ptr unk2); //0x00952a36
	/*AIAction*/ private: FuBi::Cookie__* /*__thiscall*/ RSDoJobPacker(const_mem_ptr unk1); //0x0095372b
	/*AIAction*/ private: FuBi::Cookie__* /*__thiscall*/ RSDrinkLifeHealingPotions(const_mem_ptr unk1, eActionOrigin unk2); //0x00952d02
	/*AIAction*/ private: FuBi::Cookie__* /*__thiscall*/ RSDrinkManaHealingPotions(const_mem_ptr unk1, eActionOrigin unk2); //0x00952ea5
};

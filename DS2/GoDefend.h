#pragma once

#include "FuBi.h"

class GoDefend {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x4a43df, GoDefend*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoDefend*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoDefend* unk1); //0x004a43d6
	DefineMethod(EvaluateTotalDefense, 0x959dbc, float, Params(), Args());
	DefineConstMethod(GetBlockCombatMagicChance, 0x4a565d, float, Params(), Args());
	DefineConstMethod(GetBlockCombatMagicChanceAmount, 0x4a5679, float, Params(), Args());
	DefineConstMethod(GetBlockCombatMagicDamage, 0x4a562c, float, Params(), Args());
	DefineConstMethod(GetBlockCustomDamage, 0x959fc1, float, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(GetBlockDamage, 0x4a561c, float, Params(), Args());
	DefineConstMethod(GetBlockMeleeDamage, 0x4a5620, float, Params(), Args());
	DefineConstMethod(GetBlockMeleeDamageChance, 0x4a564f, float, Params(), Args());
	DefineConstMethod(GetBlockMeleeDamageChanceAmount, 0x4a566b, float, Params(), Args());
	DefineConstMethod(GetBlockNatureMagicChance, 0x4a5664, float, Params(), Args());
	DefineConstMethod(GetBlockNatureMagicChanceAmount, 0x4a5680, float, Params(), Args());
	DefineConstMethod(GetBlockNatureMagicDamage, 0x4a5628, float, Params(), Args());
	DefineConstMethod(GetBlockPartCombatMagicDamage, 0x4a5644, float, Params(), Args());
	DefineConstMethod(GetBlockPartCustomDamage, 0x95a009, float, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(GetBlockPartDamage, 0x4a5634, float, Params(), Args());
	DefineConstMethod(GetBlockPartMeleeDamage, 0x4a5638, float, Params(), Args());
	DefineConstMethod(GetBlockPartNatureMagicDamage, 0x4a5640, float, Params(), Args());
	DefineConstMethod(GetBlockPartPiercingDamage, 0x4a5648, float, Params(), Args());
	DefineConstMethod(GetBlockPartRangedDamage, 0x4a563c, float, Params(), Args());
	DefineConstMethod(GetBlockPiercingDamage, 0x4a5630, float, Params(), Args());
	DefineConstMethod(GetBlockRangedDamage, 0x4a5624, float, Params(), Args());
	DefineConstMethod(GetBlockRangedDamageChance, 0x4a5656, float, Params(), Args());
	DefineConstMethod(GetBlockRangedDamageChanceAmount, 0x4a5672, float, Params(), Args());
	DefineConstMethod(GetChanceToDodgeHit, 0x4a5687, float, Params(), Args());
	DefineConstMethod(GetChanceToDodgeHitMelee, 0x4a568e, float, Params(), Args());
	DefineConstMethod(GetChanceToDodgeHitRanged, 0x4a5695, float, Params(), Args());
	DefineConstMethod(GetDamageThreshold, 0x959e09, float, Params(), Args());
	DefineConstMethod(GetDamageToManaPercent, 0x4a56cd, float, Params(), Args());
	DefineConstMethod(GetDefense, 0x4a5611, float, Params(), Args());
	DefineMethod(GetDefenseBonusPercent, 0x4a5615, float, Params(), Args());
	DefineConstMethod(GetManaShield, 0x4a56c6, float, Params(), Args());
	DefineConstMethod(GetReflectDamageAmount, 0x4a569c, float, Params(), Args());
	DefineConstMethod(GetReflectDamageChance, 0x4a56aa, float, Params(), Args());
	DefineConstMethod(GetReflectDamageToSelfAmount, 0x4a56bf, float, Params(), Args());
	DefineConstMethod(GetReflectFixedDamageAmount, 0x4a56a3, float, Params(), Args());
	DefineConstMethod(GetReflectPiercingDamageAmount, 0x4a56b1, float, Params(), Args());
	DefineConstMethod(GetReflectPiercingDamageChance, 0x4a56b8, float, Params(), Args());
	DefineMethod(RCSetDefenseNatural, 0x959c77, void, Params(float unk1), Args(float unk1));
	DefineMethod(SSetDefenseNatural, 0x959da9, void, Params(float unk1), Args(float unk1));
};

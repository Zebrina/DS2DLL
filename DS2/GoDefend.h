#pragma once

#include "FuBi.h"

class GoDefend {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x4a43df, GoDefend*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x4a43d6, unsigned long, Params(GoDefend* unk1), Args(unk1));
	DefineMethod(EvaluateTotalDefense, 0x959dbc, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockCombatMagicChance, 0x4a565d, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockCombatMagicChanceAmount, 0x4a5679, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockCombatMagicDamage, 0x4a562c, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockCustomDamage, 0x959fc1, float, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetBlockDamage, 0x4a561c, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockMeleeDamage, 0x4a5620, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockMeleeDamageChance, 0x4a564f, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockMeleeDamageChanceAmount, 0x4a566b, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockNatureMagicChance, 0x4a5664, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockNatureMagicChanceAmount, 0x4a5680, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockNatureMagicDamage, 0x4a5628, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockPartCombatMagicDamage, 0x4a5644, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockPartCustomDamage, 0x95a009, float, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetBlockPartDamage, 0x4a5634, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockPartMeleeDamage, 0x4a5638, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockPartNatureMagicDamage, 0x4a5640, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockPartPiercingDamage, 0x4a5648, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockPartRangedDamage, 0x4a563c, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockPiercingDamage, 0x4a5630, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockRangedDamage, 0x4a5624, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockRangedDamageChance, 0x4a5656, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockRangedDamageChanceAmount, 0x4a5672, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetChanceToDodgeHit, 0x4a5687, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetChanceToDodgeHitMelee, 0x4a568e, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetChanceToDodgeHitRanged, 0x4a5695, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDamageThreshold, 0x959e09, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDamageToManaPercent, 0x4a56cd, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDefense, 0x4a5611, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetDefenseBonusPercent, 0x4a5615, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetManaShield, 0x4a56c6, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReflectDamageAmount, 0x4a569c, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReflectDamageChance, 0x4a56aa, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReflectDamageToSelfAmount, 0x4a56bf, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReflectFixedDamageAmount, 0x4a56a3, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReflectPiercingDamageAmount, 0x4a56b1, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReflectPiercingDamageChance, 0x4a56b8, float, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSetDefenseNatural, 0x959c77, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetDefenseNatural, 0x959da9, void, Params(float unk1), Args(unk1));
};

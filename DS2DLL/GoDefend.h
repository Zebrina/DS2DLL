#pragma once

#include "FuBi.h"
#include "GoComponent.h"

class GoDefend : public GoComponent {
public:
    $StaticMethod(0x004a43df, FUBI_NetToInstance, GoDefend*, uint unk1, FuBiCookie** unk2);
    $StaticMethod(0x004a43d6, FUBI_InstanceToNet, uint, GoDefend* unk1);
    $Method(0x00959dbc, EvaluateTotalDefense, float);
    $ConstMethod(0x004a565d, GetBlockCombatMagicChance, float);
    $ConstMethod(0x004a5679, GetBlockCombatMagicChanceAmount, float);
    $ConstMethod(0x004a562c, GetBlockCombatMagicDamage, float);
    $ConstMethod(0x00959fc1, GetBlockCustomDamage, float, const char* unk1);
    $ConstMethod(0x004a561c, GetBlockDamage, float);
    $ConstMethod(0x004a5620, GetBlockMeleeDamage, float);
    $ConstMethod(0x004a564f, GetBlockMeleeDamageChance, float);
    $ConstMethod(0x004a566b, GetBlockMeleeDamageChanceAmount, float);
    $ConstMethod(0x004a5664, GetBlockNatureMagicChance, float);
    $ConstMethod(0x004a5680, GetBlockNatureMagicChanceAmount, float);
    $ConstMethod(0x004a5628, GetBlockNatureMagicDamage, float);
    $ConstMethod(0x004a5644, GetBlockPartCombatMagicDamage, float);
    $ConstMethod(0x0095a009, GetBlockPartCustomDamage, float, const char* unk1);
    $ConstMethod(0x004a5634, GetBlockPartDamage, float);
    $ConstMethod(0x004a5638, GetBlockPartMeleeDamage, float);
    $ConstMethod(0x004a5640, GetBlockPartNatureMagicDamage, float);
    $ConstMethod(0x004a5648, GetBlockPartPiercingDamage, float);
    $ConstMethod(0x004a563c, GetBlockPartRangedDamage, float);
    $ConstMethod(0x004a5630, GetBlockPiercingDamage, float);
    $ConstMethod(0x004a5624, GetBlockRangedDamage, float);
    $ConstMethod(0x004a5656, GetBlockRangedDamageChance, float);
    $ConstMethod(0x004a5672, GetBlockRangedDamageChanceAmount, float);
    $ConstMethod(0x004a5687, GetChanceToDodgeHit, float);
    $ConstMethod(0x004a568e, GetChanceToDodgeHitMelee, float);
    $ConstMethod(0x004a5695, GetChanceToDodgeHitRanged, float);
    $ConstMethod(0x00959e09, GetDamageThreshold, float);
    $ConstMethod(0x004a56cd, GetDamageToManaPercent, float);
    $ConstMethod(0x004a5611, GetDefense, float);
    $Method(0x004a5615, GetDefenseBonusPercent, float);
    $ConstMethod(0x004a56c6, GetManaShield, float);
    $ConstMethod(0x004a569c, GetReflectDamageAmount, float);
    $ConstMethod(0x004a56aa, GetReflectDamageChance, float);
    $ConstMethod(0x004a56bf, GetReflectDamageToSelfAmount, float);
    $ConstMethod(0x004a56a3, GetReflectFixedDamageAmount, float);
    $ConstMethod(0x004a56b1, GetReflectPiercingDamageAmount, float);
    $ConstMethod(0x004a56b8, GetReflectPiercingDamageChance, float);
    $Method(0x00959c77, RCSetDefenseNatural, void, float unk1);
    $Method(0x00959da9, SSetDefenseNatural, void, float unk1);
};

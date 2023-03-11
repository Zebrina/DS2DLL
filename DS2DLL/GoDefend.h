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
    $ConstMethod(0x004a5615, GetDefenseBonusPercent, float);
    $ConstMethod(0x004a56c6, GetManaShield, float);
    $ConstMethod(0x004a569c, GetReflectDamageAmount, float);
    $ConstMethod(0x004a56aa, GetReflectDamageChance, float);
    $ConstMethod(0x004a56bf, GetReflectDamageToSelfAmount, float);
    $ConstMethod(0x004a56a3, GetReflectFixedDamageAmount, float);
    $ConstMethod(0x004a56b1, GetReflectPiercingDamageAmount, float);
    $ConstMethod(0x004a56b8, GetReflectPiercingDamageChance, float);
    $Method(0x00959c77, RCSetDefenseNatural, void, float unk1);
    $Method(0x00959da9, SSetDefenseNatural, void, float unk1);

    // 0x014
    $Padding(0x014, 0x020);
    // 0x020
    float naturalDefense; // ??
    // 0x024
    float defense;
    // 0x028
    float naturalBlockDamage; // ??
    // 0x02c
    float blockDamage;
    // 0x030
    float naturalBlockMeleeDamage; // ??
    // 0x034
    float blockMeleeDamage;
    // 0x038
    float naturalBlockRangedDamage; // ??
    // 0x03c
    float blockRangedDamage;
    // 0x040
    float naturalBlockNatureMagicDamage; // ??
    // 0x044
    float blockNatureMagicDamage;
    // 0x048
    float naturalBlockCombatMagicDamage; // ??
    // 0x04c
    float blockCombatMagicDamage;
    // 0x050
    float naturalBlockPiercingDamage; // ??
    // 0x054
    float blockPiercingDamage;
    // 0x058
    float naturalBlockPartDamage; // ??
    // 0x05c
    float blockPartDamage;
    // 0x060
    float naturalBlockPartMeleeDamage; // ??
    // 0x064
    float blockPartMeleeDamage;
    // 0x068
    float naturalBlockPartRangedDamage; // ??
    // 0x06c
    float blockPartRangedDamage;
    // 0x070
    float naturalBlockPartNatureMagicDamage; // ??
    // 0x074
    float blockPartNatureMagicDamage;
    // 0x078
    float naturalBlockPartCombatMagicDamage; // ??
    // 0x07c
    float blockPartCombatMagicDamage;
    // 0x080
    float naturalBlockPartPiercingDamage; // ??
    // 0x084
    float blockPartPiercingDamage;
    // 0x088
    float naturalBlockMeleeDamageChance; // ??
    // 0x08c
    float blockMeleeDamageChance;
    // 0x090
    $Padding(0x090, 0x098);
    // 0x098
    float naturalBlockCombatMagicChance; // ??
    // 0x09c
    float blockCombatMagicChance;
    // 0x0a0
    float naturalBlockNatureMagicChance; // ??
    // 0x0a4
    float blockNatureMagicChance;
    // 0x0a8
    float naturalBlockMeleeDamageChanceAmount; // ??
    // 0x0ac
    float blockMeleeDamageChanceAmount;
    // 0x0b0
    float naturalBlockRangedDamageChanceAmount; // ??
    // 0x0b4
    float blockRangedDamageChanceAmount;
    // 0x0b8
    float naturalBlockCombatMagicChanceAmount; // ??
    // 0x0bc
    float blockCombatMagicChanceAmount;
    // 0x0c0
    float naturalBlockNatureMagicChanceAmount; // ??
    // 0x0c4
    float blockNatureMagicChanceAmount;
    // 0x0c8
    float naturalChanceToDodgeHit; // ??
    // 0x0cc
    float chanceToDodgeHit;
    // 0x0d0
    float naturalChanceToDodgeHitMelee; // ??
    // 0x0d4
    float chanceToDodgeHitMelee;
    // 0x0d8
    float naturalChanceToDodgeHitRanged; // ??
    // 0x0dc
    float chanceToDodgeHitRanged;
    // 0x0e0
    $Padding(0x0e0, 0x0f8);
    // 0x0f8
    float naturalReflectDamageAmount; // ??
    // 0x0fc
    float reflectDamageAmount;
    // 0x100
    float naturalReflectFixedDamageAmount; // ??
    // 0x104
    float reflectFixedDamageAmount;
    // 0x108
    float naturalReflectDamageChance; // ??
    // 0x10c
    float reflectDamageChance;
    // 0x110
    float naturalReflectPiercingDamageAmount; // ??
    // 0x114
    float reflectPiercingDamageAmount;
    // 0x118
    $Padding(0x118, 0x120);
    // 0x120
    float naturalReflectDamageToSelfAmount; // ??
    // 0x124
    float reflectDamageToSelfAmount;
    // 0x128
    float naturalManaShield; // ??
    // 0x12c
    float manaShield;
    // 0x130
    float naturalDamageToManaPercent; // ??
    // 0x134
    float damageToManaPercent;
    // 0x138
    float naturalDefenseBonusPercent; // ??
    // 0x13c
    float defenseBonusPercent;
};

STATIC_ASSERT_OFFSETOF(GoDefend, defense, 0x24);
STATIC_ASSERT_OFFSETOF(GoDefend, blockDamage, 0x2c);
STATIC_ASSERT_OFFSETOF(GoDefend, blockMeleeDamage, 0x034);
STATIC_ASSERT_OFFSETOF(GoDefend, blockMeleeDamageChanceAmount, 0x0ac);
STATIC_ASSERT_OFFSETOF(GoDefend, chanceToDodgeHitRanged, 0x0dc);
STATIC_ASSERT_OFFSETOF(GoDefend, reflectDamageAmount, 0x0fc);
STATIC_ASSERT_OFFSETOF(GoDefend, reflectPiercingDamageAmount, 0x114);
STATIC_ASSERT_OFFSETOF(GoDefend, reflectDamageToSelfAmount, 0x124);
STATIC_ASSERT_OFFSETOF(GoDefend, manaShield, 0x12c);
STATIC_ASSERT_OFFSETOF(GoDefend, defenseBonusPercent, 0x13c);

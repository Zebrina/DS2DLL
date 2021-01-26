#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "Go.h"
#include "GoComponent.h"
#include "GoidScid.h"
#include "GPString.h"
#include "SiegePos.h"

/*
007FE4C6 - 89 46 58  - mov [esi+58],eax
00933F1F - D9 5B 58  - fstp dword ptr [ebx+58]
*/

class GoAttack : public GoComponent {
public:
	$StaticMethod(0x0044a0c6, FUBI_NetToInstance, GoAttack*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x0044a0bd, FUBI_InstanceToNet, uint, GoAttack* unk1);

    $ConstMethod(0x0044a03a, GetRequiresLineOfSight, bool);
    $ConstMethod(0x0044a041, GetIsMelee, bool);
    $ConstMethod(0x0044a04a, GetIsProjectile, bool);
    $ConstMethod(0x0044a060, GetIsOneShot, bool);
    $ConstMethod(0x0044a06a, GetIsTwoHanded, bool);
    $ConstMethod(0x0044a074, GetIsWieldedWeapon, bool);
    $ConstMethod(0x0044a07e, GetIsDualWield, bool);
    $ConstMethod(0x0044a088, GetIsThrown, bool);

    $ConstMethod(0x00936f1a, GetDamageType, eDamageType);
    $ConstMethod(0x00449fe5, GetAttackClass, eAttackClass);
    FEX void SetAttackClass(eAttackClass value);

	$ConstMethod(0x00937afe, GetAmmoAlwaysAttached, bool);
	$ConstMethod(0x00937ac5, GetAmmoAppearsJIT, bool);
	$ConstMethod(0x00937a8c, GetAmmoAttachesToWeapon, bool);
	$ConstMethod(0x0044a01c, GetForceCriticals, bool);
	$ConstMethod(0x0044a054, GetIsWeapon, bool);
	$ConstMethod(0x0044abce, GetMarkTargetFire, bool);
	$ConstMethod(0x00937b70, GetMonsterAddBaseDamage, bool);
	$ConstMethod(0x0044a023, GetMultiAttack, bool);
	$ConstMethod(0x009379e3, GetUseAimingError, bool);
	$Method(0x0093840c, IsInProjectileRange, bool, float unk1, const SiegePos& unk2);
	$ConstMethod(0x00936f05, GetShooter, Go*);
	$ConstMethod(0x00937a55, GetAmmoAttachBone, const GPBString&);
	$ConstMethod(0x0044abb9, GetDamageToType, const GPBString&);
	$ConstMethod(0x00937973, GetSkillClass, const GPBString&);
	$ConstMethod(0x00449ffe, GetAmmoCloneSource, const Goid*);
	$ConstMethod(0x0044a002, GetAmmoReady, const Goid*);
	$ConstMethod(0x0044a092, GetLastFiredAmmo, const Goid*);
	$ConstMethod(0x00449ffa, GetProjectileLauncher, const Goid*);
	$Method(0x009376e2, SPrepareAmmo, const Goid*);
	$Method(0x0093765e, ComputeAimingAngle, float, const Goid* unk1, const SiegePos& unk2, const SiegePos& unk3, float unk4);
	$Method(0x00937fbe, ComputeAimingAngle, float, const SiegePos& unk1, const SiegePos& unk2, float unk3);
	$ConstMethod(0x0044ab57, GetAimingErrorBonus, float);
	$ConstMethod(0x0044a0af, GetAimingErrorX, float);
	$ConstMethod(0x0044a0b6, GetAimingErrorY, float);
	$ConstMethod(0x0044abc0, GetAmountDamageToType, float);
	$ConstMethod(0x009379aa, GetAreaDamageRadius, float);
	$ConstMethod(0x0093906a, GetAttackRange, float);
	$ConstMethod(0x0044ab50, GetChanceForAimingError, float);
	$ConstMethod(0x0044ab3b, GetChanceToHitBonus, float);
	$ConstMethod(0x0044ab42, GetChanceToHitBonusMelee, float);
	$ConstMethod(0x0044ab49, GetChanceToHitBonusRanged, float);
	$ConstMethod(0x0044abd5, GetChanceToPenetrate, float);
	$ConstMethod(0x0044ab7a, GetCMagicExpPercent, float);
	$ConstMethod(0x0044aabd, GetCriticalChanceMeleeBonusPercent, float);
	$ConstMethod(0x0044aac4, GetCriticalChanceRangedBonusPercent, float);
	$ConstMethod(0x0044aaa8, GetCriticalDamageBonusPercent, float);
	$ConstMethod(0x0044aaaf, GetCriticalDamageMeleeBonusPercent, float);
	$ConstMethod(0x0044aab6, GetCriticalDamageRangedBonusPercent, float);
	$ConstMethod(0x00939c8a, GetCustomEffectDamageChance, float, const char* unk1, const Goid* unk2);
	$ConstMethod(0x00939cee, GetCustomEffectDamageMax, float, const char* unk1, const Goid* unk2);
	$ConstMethod(0x00939cd1, GetCustomEffectDamageMin, float, const char* unk1, const Goid* unk2);
	$ConstMethod(0x0044aa69, GetDamageBonusMaxCMagic, float);
	$ConstMethod(0x0044aa4e, GetDamageBonusMaxMelee, float);
	$ConstMethod(0x0044aa7e, GetDamageBonusMaxNMagic, float);
	$ConstMethod(0x0044aa5a, GetDamageBonusMaxRanged, float);
	$ConstMethod(0x0044aa62, GetDamageBonusMinCMagic, float);
	$ConstMethod(0x0044aa4a, GetDamageBonusMinMelee, float);
	$ConstMethod(0x0044aa77, GetDamageBonusMinNMagic, float);
	$ConstMethod(0x0044aa56, GetDamageBonusMinRanged, float);
	$ConstMethod(0x0044aa27, GetDamageMax, float);
	$ConstMethod(0x0044aa0c, GetDamageMin, float);
	$ConstMethod(0x0044aa70, GetDamageMultiplierCMagic, float);
	$ConstMethod(0x0044aa52, GetDamageMultiplierMelee, float);
	$ConstMethod(0x0044aa85, GetDamageMultiplierNMagic, float);
	$ConstMethod(0x0044aa5e, GetDamageMultiplierRanged, float);
	$ConstMethod(0x0044abc7, GetDamageToUndead, float);
	$ConstMethod(0x0044aaa1, GetDeathDamageBonusPercent, float);
	$ConstMethod(0x0044ab5e, GetExperienceBonus, float);
	$ConstMethod(0x0044aa93, GetFireDamageBonusPercent, float);
	$ConstMethod(0x0044aa8c, GetIceDamageBonusPercent, float);
	$ConstMethod(0x0044abab, GetLifeBonusAmount, float);
	$ConstMethod(0x0044ab81, GetLifeStealAmount, float);
	$ConstMethod(0x0044ab88, GetLifeStealAmountMelee, float);
	$ConstMethod(0x0044ab8f, GetLifeStealAmountRanged, float);
	$ConstMethod(0x0044aa9a, GetLightningDamageBonusPercent, float);
	$ConstMethod(0x0044abb2, GetManaBonusAmount, float);
	$ConstMethod(0x0044aad9, GetManaDamageValueMelee, float);
	$ConstMethod(0x0044aacb, GetManaDamageValueRanged, float);
	$ConstMethod(0x0044aae0, GetManaDrainValueMelee, float);
	$ConstMethod(0x0044aad2, GetManaDrainValueRanged, float);
	$ConstMethod(0x0044ab96, GetManaStealAmount, float);
	$ConstMethod(0x0044ab9d, GetManaStealAmountMelee, float);
	$ConstMethod(0x0044aba4, GetManaStealAmountRanged, float);
	$ConstMethod(0x0044ab65, GetMeleeExpPercent, float);
	$ConstMethod(0x0044ab73, GetNMagicExpPercent, float);
	$ConstMethod(0x0044aae7, GetPiercingDamageChance, float);
	$ConstMethod(0x0044aafc, GetPiercingDamageChanceAmount, float);
	$ConstMethod(0x0044ab03, GetPiercingDamageChanceAmountMelee, float);
	$ConstMethod(0x0044ab0a, GetPiercingDamageChanceAmountRanged, float);
	$ConstMethod(0x0044aaee, GetPiercingDamageChanceMelee, float);
	$ConstMethod(0x0044aaf5, GetPiercingDamageChanceRanged, float);
	$ConstMethod(0x0044ab18, GetPiercingDamageMax, float);
	$ConstMethod(0x0044ab26, GetPiercingDamageMeleeMax, float);
	$ConstMethod(0x0044ab1f, GetPiercingDamageMeleeMin, float);
	$ConstMethod(0x0044ab11, GetPiercingDamageMin, float);
	$ConstMethod(0x0044ab34, GetPiercingDamageRangedMax, float);
	$ConstMethod(0x0044ab2d, GetPiercingDamageRangedMin, float);
	$ConstMethod(0x0044aa42, GetPowerDamageBonusPercent, float);
    $ConstMethod(0x0044aa46, GetMagicPowerDamageBonusPercent, float);
	$ConstMethod(0x0044ab6c, GetRangedExpPercent, float);
	$ConstMethod(0x00449fe9, GetReloadDelay, float);
	$ConstMethod(0x00937a1c, GetWeaponErrorRange, float);
	$Method(0x009382f2, ComputeFiringPos, SiegePos&);
	$Method(0x0044a099, ComputeTargetPos, SiegePos&, const Goid* unk1);
	$Method(0x00937e18, ComputeTimedTargetPos, SiegePos&, const Goid* unk1, double unk2);
	$Method(0x00937f2d, ComputeAimingError, void);
	$Method(0x009385b1, RCLaunchAmmo, void, Go* unk1, const Goid* unk2, SiegePos unk3, Vector3 unk4, uint unk5);
	$Method(0x00937573, RCSetDamageMaxNatural, void, float unk1, uint unk2);
	$Method(0x00937488, RCSetDamageMinNatural, void, float unk1, uint unk2);
	$Method(0x0044b30f, SetDamageMax, void, float unk1);
	$Method(0x0044aa2b, SetDamageMaxNatural, void, float unk1);
	$Method(0x0044b302, SetDamageMin, void, float unk1);
	$Method(0x0044aa10, SetDamageMinNatural, void, float unk1);
	$Method(0x0044a02a, SetMultiAttack, void, bool unk1);
	$Method(0x00449fed, SetProjectileLauncher, void, const Goid* unk1);
	$Method(0x0093857a, SLaunchAmmo, void, float unk1, const SiegePos& unk2, const SiegePos& unk3, float unk4, float unk5, const Goid* unk6);
	$Method(0x0093848e, SLaunchSpecifiedAmmo, void, const Goid* unk1, float unk2, const SiegePos& unk3, const SiegePos& unk4, float unk5, float unk6, const Goid* unk7, const Goid* unk8);
	$Method(0x00937be7, SSetDamageMaxNatural, void, float unk1);
	$Method(0x00937ba9, SSetDamageMinNatural, void, float unk1);
	$Method(0x00936ef5, SSetForceCriticals, void, bool unk1);
	$Method(0x00937765, SUnprepareAmmo, void);

    enum Flags {
        REQUIRES_LINE_OF_SIGHT = EnumFlag(1),
        IS_MELEE = EnumFlag(2),
        IS_PROJECTILE = EnumFlag(3),
        IS_ONE_SHOT = EnumFlag(4),
        IS_TWO_HANDED = EnumFlag(5),
        IS_WIELDED_WEAPON = EnumFlag(6),
        IS_DUAL_WIELD = EnumFlag(7),
        IS_THROWN = EnumFlag(8),
    };

	// 0x014
    Flags flags;
	// 0x018
	eAttackClass attackClass;
    // 0x01c
    Goid* ammoCloneSource;
    // 0x020
    Goid* projectileLauncher;
    // 0x024
    float naturalDamageMin; // ??
    // 0x028
    float damageMin;
    // 0x02c
    float naturalDamageMax; // ??
    // 0x030
    float damageMax;
    // 0x034
    float naturalReloadDelay; // ??
    // 0x038
    float reloadDelay;
	// 0x03c
    float naturalPowerDamageBonusPercent; // ??
    // 0x040
    float powerDamageBonusPercent;
    // 0x044
    float naturalMagicPowerDamageBonusPercent; // ??
    // 0x048
    float magicPowerDamageBonusPercent;
    // 0x04c
    $Padding(0x04c, 0x07c);
    // 0x07c
    float naturalDamageBonusMinCombatMagic; // ??
    // 0x080
    float damageBonusMinCombatMagic;
    // 0x084
    float naturalDamageBonusMaxCombatMagic; // ??
    // 0x088
    float damageBonusMaxCombatMagic;
    // 0x08c
    float naturalDamageMultiplierCombatMagic; // ??
    // 0x090
    float damageMultiplierCombatMagic;
    // 0x094
    float naturalDamageBonusMinNatureMagic; // ??
    // 0x098
    float damageBonusMinNatureMagic;
    // 0x09c
    float naturalDamageBonusMaxNatureMagic; // ??
    // 0x0a0
    float damageBonusMaxNatureMagic;
    // 0x0a4
    float naturalDamageMultiplierNatureMagic; // ??
    // 0x0a8
    float damageMultiplierNatureMagic;
    // 0x0ac
    float naturalIceDamageBonusPercent; // ??
    // 0x0b0
    float iceDamageBonusPercent;
    // 0x0b4
    float naturalFireDamageBonusPercent; // ??
    // 0x0b8
    float fireDamageBonusPercent;
    // 0x0bc
    float naturalLightningDamageBonusPercent; // ??
    // 0x0c0
    float lightningDamageBonusPercent;
    // 0x0c4
    float naturalDeathDamageBonusPercent; // ??
    // 0x0c8
    float deathDamageBonusPercent;
    // 0x0cc
    float naturalCriticalDamageBonusPercent; // ??
    // 0x0d0
    float criticalDamageBonusPercent;
    // 0x0d4
    float naturalCriticalDamageMeleeBonusPercent; // ??
    // 0x0d8
    float criticalDamageMeleeBonusPercent;
    // 0x0dc
    float naturalCriticalChanceMeleeBonusPercent; // ??
    // 0x0e0
    float criticalChanceMeleeBonusPercent;
    // 0x0e4
    float naturalCriticalDamageRangedBonusPercent; // ??
    // 0x0e8
    float criticalDamageRangedBonusPercent;
    // 0x0f0
    float naturalCriticalChanceRangedBonusPercent; // ??
    // 0x0f0
    float criticalChanceRangedBonusPercent;
    // 0x0f4
    bool bForceCriticals;
    // 0x0f8
    float naturalManaDamageValueRanged; // ??
    // 0x0fc
    float manaDamageValueRanged;
    // 0x100
    float naturalManaDrainValueRanged; // ??
    // 0x104
    float manaDrainValueRanged;
    // 0x108
    float naturalManaDamageValueMelee; // ??
    // 0x10c
    float manaDamageValueMelee;
    // 0x110
    float naturalManaDrainValueMelee; // ??
    // 0x114
    float manaDrainValueMelee;
    // 0x118
    float naturalPiercingDamageChance; // ??
    // 0x11c
    float piercingDamageChance;
    // 0x120
    float naturalPiercingDamageChanceMelee; // ??
    // 0x124
    float piercingDamageChanceMelee;
    // 0x128
    float naturalPiercingDamageChanceRanged; // ??
    // 0x12c
    float piercingDamageChanceRanged;
    // 0x130
    float naturalPiercingDamageChanceAmount; // ??
    // 0x134
    float piercingDamageChanceAmount;
    // 0x138
    float naturalPiercingDamageChanceAmountMelee; // ??
    // 0x13c
    float piercingDamageChanceAmountMelee;
    // 0x140
    float naturalPiercingDamageChanceAmountRanged; // ??
    // 0x144
    float piercingDamageChanceAmountRanged;
    // 0x148
    float naturalPiercingDamageMin; // ??
    // 0x14c
    float piercingDamageMin;
    // 0x150
    float naturalPiercingDamageMax; // ??
    // 0x154
    float piercingDamageMax;
    // 0x158
    float naturalPiercingDamageMeleeMin; // ??
    // 0x15c
    float piercingDamageMeleeMin;
    // 0x160
    float naturalPiercingDamageMeleeMax; // ??
    // 0x164
    float piercingDamageMeleeMax;
    // 0x168
    float naturalPiercingDamageRangedMin; // ??
    // 0x16c
    float piercingDamageRangedMin;
    // 0x170
    float naturalPiercingDamageRangedMax; // ??
    // 0x174
    float piercingDamageRangedMax;
    // 0x178
    float naturalChanceToPenetrate; // ??
    // 0x17c
    float chanceToPenetrate;
    // 0x180
    float naturalChanceToHitBonus; // ??
    // 0x184
    float chanceToHitBonus;
    // 0x188
    float naturalChanceToHitBonusMelee; // ??
    // 0x18c
    float chanceToHitBonusMelee;
    // 0x190
    float naturalChanceToHitBonusRanged; // ??
    // 0x194
    float chanceToHitBonusRanged;
    // 0x198
    float naturalChanceForAimingError; // ??
    // 0x19c
    float chanceForAimingError;
    // 0x1a0
    float naturalAimingErrorBonus; // ??
    // 0x1a4
    float aimingErrorBonus;
    // 0x1a8
    float naturalExperienceBonus; // ??
    // 0x1ac
    float experienceBonus;
    // 0x1b0
    float naturalMeleeExpPercent; // ??
    // 0x1b4
    float meleeExpPercent;
    // 0x1b8
    float naturalRangedExpPercent; // ??
    // 0x1bc
    float rangedExpPercent;
    // 0x1c0
    float naturalCombatMagicExpPercent; // ??
    // 0x1c4
    float combatMagicExpPercent;
    // 0x1c8
    float naturalNatureMagicExpPercent; // ??
    // 0x1cc
    float natureMagicExpPercent;
    // 0x1d0
    float naturalLifeStealAmount; // ??
    // 0x1d4
    float lifeStealAmount;
    // 0x1d8
    float naturalLifeStealAmountMelee; // ??
    // 0x1dc
    float lifeStealAmountMelee;
    // 0x1e0
    float naturalLifeStealAmountRanged; // ??
    // 0x1e4
    float lifeStealAmountRanged;
    // 0x1e8
    float naturalManaStealAmount; // ??
    // 0x1ec
    float manaStealAmount;
    // 0x1f0
    float naturalManaStealAmountMelee; // ??
    // 0x1f4
    float manaStealAmountMelee;
    // 0x1f8
    float naturalManaStealAmountRanged; // ??
    // 0x1fc
    float manaStealAmountRanged;
    // 0x200
    float naturalLifeBonusAmount; // ??
    // 0x204
    float lifeBonusAmount;
    // 0x208
    float naturalManaBonusAmount; // ??
    // 0x20c
    float manaBonusAmount;
    // 0x210
    float naturalDamageToUndead; // ??
    // 0x214
    float damageToUndead;
    // 0x218
    GPBString damageToType;
    // 0x21c
    $Padding(0x21c, 0x220);
    // 0x220
    float amountDamageToType;
    // 0x224
    bool b224;
    bool bMarkTargetFire;
    bool b226;
    bool b227;
    // 0x228
    $Padding(0x228, 0x240);
    // 0x240
    bool bMultiAttack;
    // 0x244
    $Padding(0x244, 0x248);
    // 0x248
    Goid* lastFiredAmmo;
    // 0x24c
    $Padding(0x24c, 0x250);
    // 0x250
    float aimingErrorX;
    // 0x254
    float aimingErrorY;
};

STATIC_ASSERT_OFFSETOF(GoAttack, attackClass, 0x018);
STATIC_ASSERT_OFFSETOF(GoAttack, naturalReloadDelay, 0x034);
STATIC_ASSERT_OFFSETOF(GoAttack, naturalDamageBonusMinCombatMagic, 0x07c);
STATIC_ASSERT_OFFSETOF(GoAttack, bForceCriticals, 0x0f4);
STATIC_ASSERT_OFFSETOF(GoAttack, naturalManaDamageValueRanged, 0x0f8);
STATIC_ASSERT_OFFSETOF(GoAttack, amountDamageToType, 0x220);
STATIC_ASSERT_OFFSETOF(GoAttack, bMultiAttack, 0x240);
STATIC_ASSERT_OFFSETOF(GoAttack, lastFiredAmmo, 0x248);
STATIC_ASSERT_OFFSETOF(GoAttack, aimingErrorX, 0x250);

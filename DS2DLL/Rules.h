#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "FrustumId.h"
#include "Go.h"
#include "GoidScid.h"
#include "GPMath.h"
#include "GPString.h"
#include "Player.h"
#include "Skrit.h"
#include "SkritHookWrapper.h"

class Rules {
public:
    typedef void(__cdecl *OnPartyMemberMadeMonsterAngry)(Go* partyMember, Go* angryEnemy, eAggroType angryReason);
    typedef void(__cdecl *OnWorldLocation)(const Goid* partyMember, int locationId, bool bFocusHero, bool bLocalHero);
    typedef void(__cdecl *OnSetPackMemberStats)(const Goid* partyMember, bool bResetLifeAndMana);
    typedef bool(__cdecl *OnDropItemFor)(Go* dropFor, const GPBString& itemTemplate);
    typedef void(__cdecl *OnPartyMemberAdded)(const Goid* newMember, const Goid* hero);
    typedef double(__cdecl *OnCalculateExperience)(const Goid* victim, const Goid* attacker, const Goid* weapon, double damage);
    typedef void(__cdecl *OnAwardExperience)(const Goid* client, const Goid* victim, const Goid* weapon, double experiencePoints);
    typedef void(__cdecl *OnLevelUp)(const Goid* client, const GPBString& skill);
    typedef bool(__cdecl *OnCalcCanHit)(const Goid* attacker, const Goid* victim, const Goid* attackerWeapon);
    typedef float(__cdecl *OnCalculateDefenceHelper)(const Goid* client, const Goid* armorSwap);
    typedef float(__cdecl *OnCalculateDefence)(const Goid* client);
    typedef float(__cdecl *OnCalcAimingError)(const Goid* client);
    typedef float(__cdecl *OnCalculateMaxLife)(Go* client);
    typedef float(__cdecl *OnCalculateMaxMana)(Go* client);
    typedef void(__cdecl *OnRegenerateLife)(const Goid* client, double deltaTime);
    typedef void(__cdecl *OnRegenerateMana)(const Goid* client, double deltaTime);
    typedef bool(__cdecl *OnDamageGo)(const Goid* victim, const Goid* attacker, const Goid* attackerWeapon, double damage, bool bPiercingDamage, bool bExplosiveDamage);
    typedef bool(__cdecl *OnGetDamageRangeHelper)(const Goid* client, const Goid* weapon, const Goid* offhand, RangeF& rangeOut);
    typedef bool(__cdecl *OnGetDamageRange)(const Goid* client, const Goid* weapon, RangeF& rangeOut);
    typedef float(__cdecl *OnCalculateDamage)(const Goid* attacker, const Goid* weapon, const Goid* victim, double minDamage, double maxDamage, double totalDefense, bool bPiercing, bool bDamageOverTime);
    typedef bool(__cdecl *OnDamageGoVolume)(const Goid* victim, const Goid* attacker, const Goid* attackerWeapon, double damage, double deltaTime, bool bExplosiveDamage);
    typedef void(__cdecl *OnDamageGoMeleeMultiplier)(const Goid* attacker, const Goid* weapon, const Goid* victim, double damageMult, bool bCanBlock);
    typedef void(__cdecl *OnDamageGoMelee)(const Goid* attacker, const Goid* weapon, const Goid* victim);
    typedef void(__cdecl *OnDamageGoRangedMultiplier)(const Goid* attacker, const Goid* weapon, const Goid* victim, double damageMult, bool bCanBlock);
    typedef void(__cdecl *OnDamageGoRanged)(const Goid* attacker, const Goid* weapon, const Goid* victim);
    typedef void(__cdecl *OnDamageGoMagic)(const Goid* attacker, const Goid* spell, const Goid* victim);
    typedef bool(__cdecl *OnProjectileCollision)(const Goid* owner, const Goid* projectile, const Goid* collided);
    typedef bool(__cdecl *OnDamageGoMagicPower)(const Goid* attacker, const Goid* spell, const Goid* victim, double damage);
    typedef bool(__cdecl *OnDamageGoPower)(const GPBString& damageClass, const Goid* attacker, const Goid* spell, const Goid* victim, double damage);
    typedef void(__cdecl *OnDamageGoMagicObject)(const Goid* attacker, const Goid* object, const Goid* victim);
    typedef bool(__cdecl *OnClientEnterWorld)(const PlayerId* playerId, const Goid* hero);
    typedef bool(__cdecl *OnClientExitWorld)(const PlayerId* playerId);

    typedef void(__cdecl *OnPartyMemberMadeMonsterAngryHook)(OnPartyMemberMadeMonsterAngry next, Go* partyMember, Go* angryEnemy, eAggroType angryReason);
    typedef void(__cdecl *OnWorldLocationHook)(OnWorldLocation next, const Goid* partyMember, int locationId, bool bFocusHero, bool bLocalHero);
    typedef void(__cdecl *OnSetPackMemberStatsHook)(OnSetPackMemberStats next, const Goid* partyMember, bool bResetLifeAndMana);
    typedef bool(__cdecl *OnDropItemForHook)(OnDropItemFor next, Go* dropFor, const GPBString& itemTemplate);
    typedef void(__cdecl *OnPartyMemberAddedHook)(OnPartyMemberAdded next, const Goid* newMember, const Goid* hero);
    typedef double(__cdecl *OnCalculateExperienceHook)(OnCalculateExperience next, const Goid* victim, const Goid* attacker, const Goid* weapon, double damage);
    typedef void(__cdecl *OnAwardExperienceHook)(OnAwardExperience next, const Goid* client, const Goid* victim, const Goid* weapon, double experiencePoints);
    typedef void(__cdecl *OnLevelUpHook)(OnLevelUp next, const Goid* client, const GPBString& skill);
    typedef bool(__cdecl *OnCalcCanHitHook)(OnCalcCanHit next, const Goid* attacker, const Goid* victim, const Goid* attackerWeapon);
    typedef float(__cdecl *OnCalculateDefenceHelperHook)(OnCalculateDefenceHelper next, const Goid* client, const Goid* armorSwap);
    typedef float(__cdecl *OnCalculateDefenceHook)(OnCalculateDefence next, const Goid* client);
    typedef float(__cdecl *OnCalcAimingErrorHook)(OnCalcAimingError next, const Goid* client);
    typedef float(__cdecl *OnCalculateMaxLifeHook)(OnCalculateMaxLife next, Go* client);
    typedef float(__cdecl *OnCalculateMaxManaHook)(OnCalculateMaxMana next, Go* client);
    typedef void(__cdecl *OnRegenerateLifeHook)(OnRegenerateLife next, const Goid* client, double deltaTime);
    typedef void(__cdecl *OnRegenerateManaHook)(OnRegenerateMana next, const Goid* client, double deltaTime);
    typedef bool(__cdecl *OnDamageGoHook)(OnDamageGo next, const Goid* victim, const Goid* attacker, const Goid* attackerWeapon, double damage, bool bPiercingDamage, bool bExplosiveDamage);
    typedef bool(__cdecl *OnGetDamageRangeHelperHook)(OnGetDamageRangeHelper next, const Goid* client, const Goid* weapon, const Goid* offhand, RangeF& rangeOut);
    typedef bool(__cdecl *OnGetDamageRangeHook)(OnGetDamageRange next, const Goid* client, const Goid* weapon, RangeF& rangeOut);
    typedef float(__cdecl *OnCalculateDamageHook)(OnCalculateDamage next, const Goid* attacker, const Goid* weapon, const Goid* victim, double minDamage, double maxDamage, double totalDefense, bool bPiercing, bool bDamageOverTime);
    typedef bool(__cdecl *OnDamageGoVolumeHook)(OnDamageGoVolume next, const Goid* victim, const Goid* attacker, const Goid* attackerWeapon, double damage, double deltaTime, bool bExplosiveDamage);
    typedef void(__cdecl *OnDamageGoMeleeMultiplierHook)(OnDamageGoMeleeMultiplier next, const Goid* attacker, const Goid* weapon, const Goid* victim, double damageMult, bool bCanBlock);
    typedef void(__cdecl *OnDamageGoMeleeHook)(OnDamageGoMelee next, const Goid* attacker, const Goid* weapon, const Goid* victim);
    typedef void(__cdecl *OnDamageGoRangedMultiplierHook)(OnDamageGoRangedMultiplier next, const Goid* attacker, const Goid* weapon, const Goid* victim, double damageMult, bool bCanBlock);
    typedef void(__cdecl *OnDamageGoRangedHook)(OnDamageGoRanged next, const Goid* attacker, const Goid* weapon, const Goid* victim);
    typedef void(__cdecl *OnDamageGoMagicHook)(OnDamageGoMagic next, const Goid* attacker, const Goid* spell, const Goid* victim);
    typedef bool(__cdecl *OnProjectileCollisionHook)(OnProjectileCollision next, const Goid* owner, const Goid* projectile, const Goid* collided);
    typedef bool(__cdecl *OnDamageGoMagicPowerHook)(OnDamageGoMagicPower next, const Goid* attacker, const Goid* spell, const Goid* victim, double damage);
    typedef bool(__cdecl *OnDamageGoPowerHook)(OnDamageGoPower next, const GPBString& damageClass, const Goid* attacker, const Goid* spell, const Goid* victim, double damage);
    typedef void(__cdecl *OnDamageGoMagicObjectHook)(OnDamageGoMagicObject next, const Goid* attacker, const Goid* object, const Goid* victim);
    typedef bool(__cdecl *OnClientEnterWorldHook)(OnClientEnterWorld next, const PlayerId* playerId, const Goid* hero);
    typedef bool(__cdecl *OnClientExitWorldHook)(OnClientExitWorld next, const PlayerId* playerId);

	$Singleton(Rules, 0x0040a637);

	$Method(0x00842bfe, CanHit, bool, const Goid* unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x00842d4a, DamageGo, bool, const Goid* unk1, const Goid* unk2, const Goid* unk3, float unk4, bool unk5, bool unk6);
	$Method(0x00842cc7, DamageGoMagicPower, bool, const Goid* unk1, const Goid* unk2, const Goid* unk3, double unk4);
	$Method(0x00842cee, DamageGoPower, bool, const GPBString& unk1, const Goid* unk2, const Goid* unk3, const Goid* unk4, double unk5);
	$Method(0x00842d18, DamageGoVolume, bool, const Goid* unk1, const Goid* unk2, const Goid* unk3, float unk4, float unk5, bool unk6);
	$Method(0x00842c1d, GetDamageRange, bool, const Goid* unk1, const Goid* unk2, RangeF& unk3);
	$Method(0x00845d10, IsQuestOrLoreItem, bool, const char* unk1);
	$Method(0x0084501d, STrySpawnLootThief, bool, Go* unk1, Go* unk2);
	$Method(0x00842eba, CalculateExperience, double, const Goid* unk1, const Goid* unk2, const Goid* unk3, double unk4);
	$Method(0x00409656, GetDifficultyComputerValue, double, uint unk1);
	$Method(0x0040963f, GetDifficultyPlayerValue, double, uint unk1);
	$ConstMethod(0x00842d77, GetNextLevelXP, double, float unk1);
	$ConstMethod(0x00842dd9, LevelToXP, double, float unk1);
	$Method(0x00843ab4, ComputeCustomDamage, float, Go* unk1, Go* unk2, Go* unk3, bool unk4);
	$Method(0x00843c62, ComputeCustomDamageFromType, float, Go* unk1, Go* unk2, Go* unk3, eDamageType unk4, bool unk5);
	$Method(0x0084314c, GetAveragePartyLevel, float, Go* unk1);
	$ConstMethod(0x004096e1, GetConsciousnessLifePercent, float);
    FEX void SetConsciousnessLifePercent(float value);
	$ConstMethod(0x004096dd, GetMaxResistanceValue, float);
    FEX void SetMaxResistanceValue(float value);
	$ConstMethod(0x004096f6, GetLootThiefChance, float);
	$Method(0x004096fa, SetLootThiefChance, void, float unk1);
	$ConstMethod(0x004096e5, GetLootThiefGoid, const Goid*);
	$Method(0x004096e9, SetLootThiefGoid, void, const Goid* unk1);
	$ConstMethod(0x0040a617, GetMaxLevel, float);
	$Method(0x00843212, GetTotalAveragePartyLevels, float, const GopColl& unk1);
	$Method(0x00841fc6, GetTotalDefense, float, const Goid* unk1);
    $Method(0x00841fdf, GetTotalDefense, float, const Goid* unk1, const Goid* unk2);
	$ConstMethod(0x00842e38, XPToLevel, float, double unk1);
	$Method(0x008431b0, GetTotalLevelingPartyMembers, int, Go* unk1, const FrustumId* unk2);
	$Method(0x0040966d, ChangeLife, void, const Goid* unk1, const Goid* unk2, float unk3);
	$Method(0x0084474b, ChangeLife, void, const Goid* unk1, const Goid* unk2, float unk3, uint unk4);
	$Method(0x00409688, ChangeLifeLocal, void, const Goid* unk1, const Goid* unk2, float unk3);
	$Method(0x004096a8, ChangeMana, void, const Goid* unk1, float unk2);
	$Method(0x00842f4a, ChangeMana, void, const Goid* unk1, float unk2, uint unk3);
	$Method(0x004096c0, ChangeManaLocal, void, const Goid* unk1, float unk2);
	$Method(0x0084208d, DamageGoMagic, void, const Goid* unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x008420ac, DamageGoMagicObject, void, const Goid* unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x00841ffb, DamageGoMelee, void, const Goid* unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x0084201a, DamageGoMeleeMultiplier, void, const Goid* unk1, const Goid* unk2, const Goid* unk3, float unk4, bool unk5);
	$Method(0x00842044, DamageGoRanged, void, const Goid* unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x00842063, DamageGoRangedMultiplier, void, const Goid* unk1, const Goid* unk2, const Goid* unk3, float unk4, bool unk5);
	$Method(0x00845d9e, RCAwardPrimaryExperience, void, const Goid* unk1, uint unk2, double unk3);
	$Method(0x00841eb0, RCOnPartyMemberMadeMonsterAngry, void, Go* unk1, Go* unk2, eAggroType aggroType);
	$Method(0x008456c0, RCPlayLevelUpSoundAndText, void, const Goid* unk1, const char* unk2);
	$Method(0x0084305c, RSPlayCombatSound, void, const Goid* unk1, const Goid* unk2, bool unk3);
	$Method(0x008420e7, SAwardExperience, void, const Goid* unk1, const Goid* unk2, const Goid* unk3, double unk4);
	$Method(0x0084665f, SAwardPrimaryExperience, void, const Goid* unk1, const char* unk2, double unk3, bool unk4);
	$Method(0x0084211e, SetPackMemberStats, void, const Goid* unk1, bool unk2);
	$Method(0x008420cb, SOnPartyMemberAdded, void, const Goid* newMember, const Goid* hero);
	$Method(0x00845d95, SPlayLevelUpSoundAndText, void, const Goid* unk1, const char* unk2);
	$Method(0x00845b93, UpdateClassDesignation, void, const Goid* unk1);

    // 0x00
    SkritObject* skrit;
    // 0x04
	$Padding(0x04, 0x14);
	// 0x14
	float consciousnessLifePercent;
    // 0x18
	$Padding(0x18, 0x60);
	// 0x60
	float maxResistanceValue;
	// 0x64
	float lootThiefChance;
    // 0x68
	$Padding(0x68, 0x7c);
	// 0x7c
	Goid* lootThiefGoid;
    // 0x80
    $Padding(0x80, 0xf4);

private:
    //FEX static void HookOnPartyMemberMadeMonsterAngry(SkritObject* skrit, const char* functionName);
    //FEX static void HookOnWorldLocation(SkritObject* skrit, const char* functionName);
    //FEX static void HookSetPackMemberStats(SkritObject* skrit, const char* functionName);
    //FEX static void HookOnDropItemFor(SkritObject* skrit, const char* functionName);
    //FEX static void HookOnPartyMemberAdded(SkritObject* skrit, const char* functionName);
    //FEX static void HookCalculateExperience(SkritObject* skrit, const char* functionName);
    //FEX static void HookAwardExperience(SkritObject* skrit, const char* functionName);
    //FEX static void HookOnLevelUp(SkritObject* skrit, const char* functionName);
    //FEX static void HookCalcCanHit(SkritObject* skrit, const char* functionName);
    //FEX static void HookCalculateDefenceHelper(SkritObject* skrit, const char* functionName);
    //FEX static void HookCalculateDefence(SkritObject* skrit, const char* functionName);
    //FEX static void HookCalcAimingError(SkritObject* skrit, const char* functionName);
    //FEX static void HookCalculateMaxLife(SkritObject* skrit, const char* functionName);
    //FEX static void HookCalculateMaxMana(SkritObject* skrit, const char* functionName);
    //FEX static void HookRegenerateLife(SkritObject* skrit, const char* functionName);
    //FEX static void HookRegenerateMana(SkritObject* skrit, const char* functionName);
    //FEX static void HookDamageGo(SkritObject* skrit, const char* functionName);
    //FEX static void HookGetDamageRangeHelper(SkritObject* skrit, const char* functionName);
    //FEX static void HookGetDamageRange(SkritObject* skrit, const char* functionName);
    //FEX static void HookCalculateDamage(SkritObject* skrit, const char* functionName);
    //FEX static void HookDamageGoVolume(SkritObject* skrit, const char* functionName);
    //FEX static void HookDamageGoMeleeMultiplier(SkritObject* skrit, const char* functionName);
    //FEX static void HookDamageGoMelee(SkritObject* skrit, const char* functionName);
    //FEX static void HookDamageGoRangedMultiplier(SkritObject* skrit, const char* functionName);
    //FEX static void HookDamageGoRanged(SkritObject* skrit, const char* functionName);
    //FEX static void HookDamageGoMagic(SkritObject* skrit, const char* functionName);
    //FEX static void HookOnProjectileCollision(SkritObject* skrit, const char* functionName);
    //FEX static void HookDamageGoMagicPower(SkritObject* skrit, const char* functionName);
    //FEX static void HookDamageGoPower(SkritObject* skrit, const char* functionName);
    //FEX static void HookDamageGoMagicObject(SkritObject* skrit, const char* functionName);
    //FEX static void HookOnClientEnterWorld(SkritObject* skrit, const char* functionName);
    //FEX static void HookOnClientExitWorld(SkritObject* skrit, const char* functionName);
};

STATIC_ASSERT(sizeof(Rules) == 0xf4);
STATIC_ASSERT_OFFSETOF(Rules, consciousnessLifePercent, 0x14);
STATIC_ASSERT_OFFSETOF(Rules, maxResistanceValue, 0x60);
STATIC_ASSERT_OFFSETOF(Rules, lootThiefGoid, 0x7c);

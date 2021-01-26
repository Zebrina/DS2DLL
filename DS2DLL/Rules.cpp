#include "Rules.h"

#include <vector>

FEX void Rules::SetConsciousnessLifePercent(float value) {
    consciousnessLifePercent = Limit(value, 0.0f, 100.0f);
}
FEX void Rules::SetMaxResistanceValue(float value) {
    maxResistanceValue = Limit(value, 0.0f, 100.0f);
}

$Function(0x0084162e, SkritOnPartyMemberMadeMonsterAngry, void, SkritObject* skrit, const char* functionName, Go* partyMember, Go* angryEnemy, eAggroType angryReason);
$Function(0x0084169a, SkritOnWorldLocation, void, SkritObject* skrit, const char* functionName, const Goid* partyMember, int locationId, bool bFocusHero, bool bLocalHero);
$Function(0x008418b9, SkritSetPackMemberStats, void, SkritObject* skrit, const char* functionName, const Goid* partyMember, bool bResetLifeAndMana);
$Function(0x00842695, SkritOnDropItemFor, bool, SkritObject* skrit, const char* functionName, Go* dropFor, const GPBString& itemTemplate);
$Function(0x0084184d, SkritOnPartyMemberAdded, void, SkritObject* skrit, const char* functionName, const Goid* newMember, const Goid* hero);
$Function(0x008427e2, SkritCalculateExperience, double, SkritObject* skrit, const char* functionName, const Goid* victim, const Goid* attacker, const Goid* weapon, double damage);
$Function(0x00841775, SkritAwardExperience, void, SkritObject* skrit, const char* functionName, const Goid* client, const Goid* victim, const Goid* weapon, double experiencePoints);
$Function(0x008417e1, SkritOnLevelUp, void, SkritObject* skrit, const char* functionName, const Goid* client, const GPBString& skill);
$Function(0x00842773, SkritCalcCanHit, bool, SkritObject* skrit, const char* functionName, const Goid* attacker, const Goid* victim, const Goid* attackerWeapon);
$Function(0x00841b4a, SkritCalculateDefenceHelper, float, SkritObject* skrit, const char* functionName, const Goid* client, const Goid* armorSwap);
$Function(0x00841adb, SkritCalculateDefence, float, SkritObject* skrit, const char* functionName, const Goid* client);
$Function(0x00841706, SkritCalcAimingError, float, SkritObject* skrit, const char* functionName, const Goid* client);
$Function(0x00841925, SkritCalculateMaxLife, float, SkritObject* skrit, const char* functionName, Go* client);
$Function(0x00841994, SkritCalculateMaxMana, float, SkritObject* skrit, const char* functionName, Go* client);
$Function(0x00841a03, SkritRegenerateLife, void, SkritObject* skrit, const char* functionName, const Goid* client, double deltaTime);
$Function(0x00841a6f, SkritRegenerateMana, void, SkritObject* skrit, const char* functionName, const Goid* client, double deltaTime);
$Function(0x0084292f, SkritDamageGo, bool, SkritObject* skrit, const char* functionName, const Goid* victim, const Goid* attacker, const Goid* attackerWeapon, double damage, bool piercingDamage, bool explosiveDamage);
$Function(0x008428c0, SkritGetDamageRangeHelper, bool, SkritObject* skrit, const char* functionName, const Goid* client, const Goid* weapon, const Goid* offhand, RangeF& rangeOut);
$Function(0x00842851, SkritGetDamageRange, bool, SkritObject* skrit, const char* functionName, const Goid* client, const Goid* weapon, RangeF& rangeOut);
$Function(0x00841bb9, SkritCalculateDamage, float, SkritObject* skrit, const char* functionName, const Goid* attacker, const Goid* weapon, const Goid* victim, double minDamage, double maxDamage, double totalDefense, bool bPiercing, bool bDamageOverTime);
$Function(0x0084299e, SkritDamageGoVolume, bool, SkritObject* skrit, const char* functionName, const Goid* victim, const Goid* attacker, const Goid* attackerWeapon, double damage, double deltaTime, bool bExplosiveDamage);
$Function(0x00841c94, SkritDamageGoMeleeMultiplier, void, SkritObject* skrit, const char* functionName, const Goid* attacker, const Goid* weapon, const Goid* victim, double damageMult, bool bCanBlock);
$Function(0x00841c28, SkritDamageGoMelee, void, SkritObject* skrit, const char* functionName, const Goid* attacker, const Goid* weapon, const Goid* victim);
$Function(0x00841d6c, SkritDamageGoRangedMultiplier, void, SkritObject* skrit, const char* functionName, const Goid* attacker, const Goid* weapon, const Goid* victim, double damageMult, bool bCanBlock);
$Function(0x00841d00, SkritDamageGoRanged, void, SkritObject* skrit, const char* functionName, const Goid* attacker, const Goid* weapon, const Goid* victim);
$Function(0x00841dd8, SkritDamageGoMagic, void, SkritObject* skrit, const char* functionName, const Goid* attacker, const Goid* spell, const Goid* victim);
$Function(0x00842704, SkritOnProjectileCollision, bool, SkritObject* skrit, const char* functionName, const Goid* owner, const Goid* projectile, const Goid* collided);
$Function(0x00842a0d, SkritDamageGoMagicPower, bool, SkritObject* skrit, const char* functionName, const Goid* attacker, const Goid* spell, const Goid* victim, double damage);
$Function(0x00842a7c, SkritDamageGoPower, bool, SkritObject* skrit, const char* functionName, const GPBString& damageClass, const Goid* attacker, const Goid* spell, const Goid* victim, double damage);
$Function(0x00841e44, SkritDamageGoMagicObject, void, SkritObject* skrit, const char* functionName, const Goid* attacker, const Goid* object, const Goid* victim);
$Function(0x00842aeb, SkritOnClientEnterWorld, bool, SkritObject* skrit, const char* functionName, const PlayerId* playerId, const Goid* hero);
$Function(0x00842b5a, SkritOnClientExitWorld, bool, SkritObject* skrit, const char* functionName, const PlayerId* playerId);

FEX void Rules::HookOnPartyMemberMadeMonsterAngry(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookOnWorldLocation(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookSetPackMemberStats(SkritObject* skrit, const char* functionName) {
}
/*
FEX void Rules::HookOnDropItemFor(SkritObject* skrit, const char* functionName) {
}
*/
FEX void Rules::HookOnPartyMemberAdded(SkritObject* skrit, const char* functionName) {
}
/*
FEX void Rules::HookCalculateExperience(SkritObject* skrit, const char* functionName) {
}
*/
FEX void Rules::HookAwardExperience(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookOnLevelUp(SkritObject* skrit, const char* functionName) {
}
/*
FEX void Rules::HookCalcCanHit(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookCalculateDefenceHelper(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookCalculateDefence(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookCalcAimingError(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookCalculateMaxLife(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookCalculateMaxMana(SkritObject* skrit, const char* functionName) {
}
*/
FEX void Rules::HookRegenerateLife(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookRegenerateMana(SkritObject* skrit, const char* functionName) {
}
/*
FEX void Rules::HookDamageGo(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookGetDamageRangeHelper(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookGetDamageRange(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookCalculateDamage(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookDamageGoVolume(SkritObject* skrit, const char* functionName) {
}
*/
FEX void Rules::HookDamageGoMeleeMultiplier(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookDamageGoMelee(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookDamageGoRangedMultiplier(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookDamageGoRanged(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookDamageGoMagic(SkritObject* skrit, const char* functionName) {
}
/*
FEX void Rules::HookOnProjectileCollision(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookDamageGoMagicPower(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookDamageGoPower(SkritObject* skrit, const char* functionName) {
}
*/
FEX void Rules::HookDamageGoMagicObject(SkritObject* skrit, const char* functionName) {
}
/*
FEX void Rules::HookOnClientEnterWorld(SkritObject* skrit, const char* functionName) {
}
FEX void Rules::HookOnClientExitWorld(SkritObject* skrit, const char* functionName) {
}
*/

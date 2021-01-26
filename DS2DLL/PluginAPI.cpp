#include "PluginAPI.h"

#include "PClass.h"
#include "SkritHookWrapper.h"

ePClass PluginAPI::RegisterPClass(const char* internalName, const char* visibleName, hexcolorcode color, ePClass pContentProxy) {
    return PClassManager::GetSingleton()->RegisterPClass(internalName, visibleName, color, pContentProxy);
}

typedef SkritHookWrapper<0x0084162e, 0x00841f90, void, Go*, Go*, eAggroType> OnPartyMemberMadeMonsterAngryHookWrapper;
typedef SkritHookWrapper<0x0084169a, 0x00841fba, void, const Goid*, int, bool, bool> OnWorldLocationHookWrapper;
typedef SkritHookWrapper<0x008418b9, 0x0084212e, void, const Goid*, bool> SetPackMemberStatsHookWrapper;
typedef SkritHookWrapper<0x00842695, 0x00844709, bool, Go*, const GPBString&> OnDropItemForHookWrapper;
typedef SkritHookWrapper<0x0084184d, 0x0084184d, void, const Goid*, const Goid*> OnPartyMemberAddedHookWrapper;
typedef SkritHookWrapper<0x008427e2, 0x008420db, double, const Goid*, const Goid*, const Goid*, double> CalculateExperienceHookWrapper;
typedef SkritHookWrapper<0x00841775, 0x00842112, void, const Goid*, const Goid*, const Goid*, double> AwardExperienceHookWrapper;
typedef SkritHookWrapper<0x008417e1, 0x0084655e, void, const Goid*, const GPBString&> OnLevelUpHookWrapper1;
typedef SkritHookWrapper<0x008417e1, 0x0084658e, void, const Goid*, const GPBString&> OnLevelUpHookWrapper2;
typedef SkritHookWrapper<0x00842773, 0x00842c11, bool, const Goid*, const Goid*, const Goid*> CalcCanHitHookWrapper;
typedef SkritHookWrapper<0x00841b4a, 0x00841fef, float, const Goid*, const Goid*> CalculateDefenceHelperHookWrapper;
typedef SkritHookWrapper<0x00841adb, 0x00841fd3, float, const Goid*> CalculateDefenceHookWrapper;
typedef SkritHookWrapper<0x00841706, 0x00842147, float, const Goid*> CalcAimingErrorHookWrapper;
typedef SkritHookWrapper<0x00841925, 0x00842160, float, Go*> CalculateMaxLifeHookWrapper;
typedef SkritHookWrapper<0x00841994, 0x0084219d, float, Go*> CalculateMaxManaHookWrapper;
typedef SkritHookWrapper<0x00841a03, 0x00842184, void, const Goid*, double> RegenerateLifeHookWrapper;
typedef SkritHookWrapper<0x00841a6f, 0x008421c1, void, const Goid*, double> RegenerateManaHookWrapper;
typedef SkritHookWrapper<0x0084292f, 0x00842d6b, bool, const Goid*, const Goid*, const Goid*, double, bool, bool> DamageGoHookWrapper;
typedef SkritHookWrapper<0x008428c0, 0x00842ca9, bool, const Goid*, const Goid*, const Goid*, RangeF&> GetDamageRangeHelperHookWrapper;
typedef SkritHookWrapper<0x00842851, 0x00842851, bool, const Goid*, const Goid*, RangeF&> GetDamageRangeHookWrapper;
typedef SkritHookWrapper<0x00841bb9, 0x00842c30, float, const Goid*, const Goid*, const Goid*, double, double, double, bool, bool> CalculateDamageHookWrapper;
typedef SkritHookWrapper<0x0084299e, 0x00842d3e, bool, const Goid*, const Goid*, const Goid*, double, double, bool> DamageGoVolumeHookWrapper;
typedef SkritHookWrapper<0x00841c94, 0x00842038, void, const Goid*, const Goid*, const Goid*, double, bool> DamageGoMeleeMultiplierHookWrapper;
typedef SkritHookWrapper<0x00841c28, 0x0084200e, void, const Goid*, const Goid*, const Goid*> DamageGoMeleeHookWrapper;
typedef SkritHookWrapper<0x00841d6c, 0x00842081, void, const Goid*, const Goid*, const Goid*, double, bool> DamageGoRangedMultiplierHookWrapper;
typedef SkritHookWrapper<0x00841d00, 0x00842057, void, const Goid*, const Goid*, const Goid*> DamageGoRangedHookWrapper;
typedef SkritHookWrapper<0x00841dd8, 0x008420a0, void, const Goid*, const Goid*, const Goid*> DamageGoMagicHookWrapper;
typedef SkritHookWrapper<0x00842704, 0x00842f3e, bool, const Goid*, const Goid*, const Goid*> OnProjectileCollisionHookWrapper; //
typedef SkritHookWrapper<0x00842a0d, 0x00842ce2, bool, const Goid*, const Goid*, const Goid*, double> DamageGoMagicPowerHookWrapper;
typedef SkritHookWrapper<0x00842a7c, 0x00842d0c, bool, const GPBString&, const Goid*, const Goid*, const Goid*, double> DamageGoPowerHookWrapper;
typedef SkritHookWrapper<0x00841e44, 0x008420bf, void, const Goid*, const Goid*, const Goid*> DamageGoMagicObjectHookWrapper;
typedef SkritHookWrapper<0x00842aeb, 0x00842bd9, bool, const PlayerId*, const Goid*> OnClientEnterWorldHookWrapper; //
typedef SkritHookWrapper<0x00842b5a, 0x00842bf2, bool, const PlayerId*> OnClientExitWorldHookWrapper; //

void PluginAPI::HookOnPartyMemberMadeMonsterAngry(Rules::OnPartyMemberMadeMonsterAngryHook function) {
    OnPartyMemberMadeMonsterAngryHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookOnWorldLocation(Rules::OnWorldLocationHook function) {
    OnWorldLocationHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookSetPackMemberStats(Rules::OnSetPackMemberStatsHook function) {
    SetPackMemberStatsHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookOnDropItemFor(Rules::OnDropItemForHook function) {
    OnDropItemForHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookOnPartyMemberAdded(Rules::OnPartyMemberAddedHook function) {
    OnPartyMemberAddedHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookCalculateExperience(Rules::OnCalculateExperienceHook function) {
    CalculateExperienceHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookAwardExperience(Rules::OnAwardExperienceHook function) {
    AwardExperienceHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookOnLevelUp(Rules::OnLevelUpHook function) {
    OnLevelUpHookWrapper1::GetSingleton()->Register(function);
    OnLevelUpHookWrapper2::GetSingleton()->Register(function);
}
void PluginAPI::HookCalcCanHit(Rules::OnCalcCanHitHook function) {
    CalcCanHitHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookCalculateDefenceHelper(Rules::OnCalculateDefenceHelperHook function) {
    CalculateDefenceHelperHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookCalculateDefence(Rules::OnCalculateDefenceHook function) {
    CalculateDefenceHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookCalcAimingError(Rules::OnCalcAimingErrorHook function) {
    CalcAimingErrorHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookCalculateMaxLife(Rules::OnCalculateMaxLifeHook function) {
    CalculateMaxLifeHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookCalculateMaxMana(Rules::OnCalculateMaxManaHook function) {
    CalculateMaxManaHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookRegenerateLife(Rules::OnRegenerateLifeHook function) {
    RegenerateLifeHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookRegenerateMana(Rules::OnRegenerateManaHook function) {
    RegenerateManaHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookDamageGo(Rules::OnDamageGoHook function) {
    DamageGoHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookGetDamageRangeHelper(Rules::OnGetDamageRangeHelperHook function) {
    GetDamageRangeHelperHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookGetDamageRange(Rules::OnGetDamageRangeHook function) {
    GetDamageRangeHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookCalculateDamage(Rules::OnCalculateDamageHook function) {
    CalculateDamageHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookDamageGoVolume(Rules::OnDamageGoVolumeHook function) {
    DamageGoVolumeHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookDamageGoMeleeMultiplier(Rules::OnDamageGoMeleeMultiplierHook function) {
    DamageGoMeleeMultiplierHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookDamageGoMelee(Rules::OnDamageGoMeleeHook function) {
    DamageGoMeleeHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookDamageGoRangedMultiplier(Rules::OnDamageGoRangedMultiplierHook function) {
    DamageGoRangedMultiplierHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookDamageGoRanged(Rules::OnDamageGoRangedHook function) {
    DamageGoRangedHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookDamageGoMagic(Rules::OnDamageGoMagicHook function) {
    DamageGoMagicHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookOnProjectileCollision(Rules::OnProjectileCollisionHook function) {
    OnProjectileCollisionHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookDamageGoMagicPower(Rules::OnDamageGoMagicPowerHook function) {
    DamageGoMagicPowerHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookDamageGoPower(Rules::OnDamageGoPowerHook function) {
    DamageGoPowerHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookDamageGoMagicObject(Rules::OnDamageGoMagicObjectHook function) {
    DamageGoMagicObjectHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookOnClientEnterWorld(Rules::OnClientEnterWorldHook function) {
    OnClientEnterWorldHookWrapper::GetSingleton()->Register(function);
}
void PluginAPI::HookOnClientExitWorld(Rules::OnClientExitWorldHook function) {
    OnClientExitWorldHookWrapper::GetSingleton()->Register(function);
}

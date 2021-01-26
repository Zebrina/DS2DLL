#pragma once

#include "Rules.h"

struct PluginInfo {
private:
    uint structVersion = 1;
public:
    uint version = 0;
	const char* name = "";
    const char* description = "";
    const char* author = "";
	const char* versionString = "";
	const char* pluginRequirements = "";
    bool bNoSkritExports = false;
};

class PluginAPI {
public:
	enum SystemTypeEnum {
		Alteration,
	};

	uint RegisterSystemTypeEnum(SystemTypeEnum type, const char* name);

    virtual ePClass RegisterPClass(const char* internalName, const char* visibleName, hexcolorcode color, ePClass pContentProxy = INVALID);

    virtual void HookOnPartyMemberMadeMonsterAngry(Rules::OnPartyMemberMadeMonsterAngryHook hook);
    virtual void HookOnWorldLocation(Rules::OnWorldLocationHook hook);
    virtual void HookSetPackMemberStats(Rules::OnSetPackMemberStatsHook hook);
    virtual void HookOnDropItemFor(Rules::OnDropItemForHook hook);
    virtual void HookOnPartyMemberAdded(Rules::OnPartyMemberAddedHook hook);
    virtual void HookCalculateExperience(Rules::OnCalculateExperienceHook hook);
    virtual void HookAwardExperience(Rules::OnAwardExperienceHook hook);
    virtual void HookOnLevelUp(Rules::OnLevelUpHook hook);
    virtual void HookCalcCanHit(Rules::OnCalcCanHitHook hook);
    virtual void HookCalculateDefenceHelper(Rules::OnCalculateDefenceHelperHook hook);
    virtual void HookCalculateDefence(Rules::OnCalculateDefenceHook hook);
    virtual void HookCalcAimingError(Rules::OnCalcAimingErrorHook hook);
    virtual void HookCalculateMaxLife(Rules::OnCalculateMaxLifeHook hook);
    virtual void HookCalculateMaxMana(Rules::OnCalculateMaxManaHook hook);
    virtual void HookRegenerateLife(Rules::OnRegenerateLifeHook hook);
    virtual void HookRegenerateMana(Rules::OnRegenerateManaHook hook);
    virtual void HookDamageGo(Rules::OnDamageGoHook hook);
    virtual void HookGetDamageRangeHelper(Rules::OnGetDamageRangeHelperHook hook);
    virtual void HookGetDamageRange(Rules::OnGetDamageRangeHook hook);
    virtual void HookCalculateDamage(Rules::OnCalculateDamageHook hook);
    virtual void HookDamageGoVolume(Rules::OnDamageGoVolumeHook hook);
    virtual void HookDamageGoMeleeMultiplier(Rules::OnDamageGoMeleeMultiplierHook hook);
    virtual void HookDamageGoMelee(Rules::OnDamageGoMeleeHook hook);
    virtual void HookDamageGoRangedMultiplier(Rules::OnDamageGoRangedMultiplierHook hook);
    virtual void HookDamageGoRanged(Rules::OnDamageGoRangedHook hook);
    virtual void HookDamageGoMagic(Rules::OnDamageGoMagicHook hook);
    virtual void HookOnProjectileCollision(Rules::OnProjectileCollisionHook hook);
    virtual void HookDamageGoMagicPower(Rules::OnDamageGoMagicPowerHook hook);
    virtual void HookDamageGoPower(Rules::OnDamageGoPowerHook hook);
    virtual void HookDamageGoMagicObject(Rules::OnDamageGoMagicObjectHook hook);
    virtual void HookOnClientEnterWorld(Rules::OnClientEnterWorldHook hook);
    virtual void HookOnClientExitWorld(Rules::OnClientExitWorldHook hook);
};

typedef bool(*GetPluginInfoProc)(PluginInfo* info);
typedef void(*LoadPluginProc)(PluginAPI* api);

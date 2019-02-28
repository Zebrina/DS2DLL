#pragma once

#include "Enums.h"
#include "FuBi.h"

// Only referenced by GoMagic.
enum eMagicClass {

};

// Only referenced by GoMagic.
enum eUsageContextFlags {

};

class GoMagic {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x467930, GoMagic*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x467927, unsigned long, Params(GoMagic* unk1), Args(unk1));
	DefineMethod(CanReachNextLevel, 0x93f264, bool, Params(const Go* go), Args(go));
	DefineConstMethod(GetApplyEnchantmentsOnCast, 0x93eab0, bool, NO_PARAMS, NO_ARGS); // "apply_enchantments"
	DefineConstMethod(GetCanAutocast, 0x93ed50, bool, NO_PARAMS, NO_ARGS); // "can_autocast"
	DefineConstMethod(GetDoesDamagePerSecond, 0x93ed17, bool, NO_PARAMS, NO_ARGS); // "does_damage_per_second"
	DefineConstMethod(GetIsAwpVisible, 0x93ee34, bool, NO_PARAMS, NO_ARGS); // "awp_visible"
	DefineConstMethod(GetIsBuff, 0x93ee6d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsCommandCast, 0x93e3e7, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsDebuff, 0x93eea6, bool, NO_PARAMS, NO_ARGS); // "is_debuff"
	DefineConstMethod(GetIsModifierProc, 0x93ef51, bool, NO_PARAMS, NO_ARGS); // "is_modifier_proc"
	DefineConstMethod(GetIsOneShot, 0x4678b4, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsOneUse, 0x93ecde, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsPower, 0x93ef18, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetIsPowerMaster, 0x467923, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsWeaponEnchant, 0x93eedf, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetManaCostVaries, 0x93e9cc, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRequireMembershipCheck, 0x93eca5, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRequiresLineOfSight, 0x4678ad, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRequireStateCheck, 0x93ec6c, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetUseIntelLevel, 0x93edfb, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetUsesDamageOverTime, 0x93ef8a, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasAlterationType, 0x93f54b, bool, Params(eAlteration alteration), Args(alteration));
	DefineConstMethod(HasEnchantments, 0x4678bd, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(HasNonInnateEnchantments, 0x93f62d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasTargetTypeFlags, 0x468257, bool, Params(eTargetTypeFlags unk1), Args(unk1));
	DefineConstMethod(HasTargetTypeFlagsNot, 0x46826a, bool, Params(eTargetTypeFlags unk1), Args(unk1));
	DefineMethod(IsAggressive, 0x468233, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsCastableOn, 0x93f789, bool, Params(Go* unk1, bool unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(IsCastableOn, 0x467873, bool, Params(Go* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(IsCastableOn, 0x467887, bool, Params(Go* unk1), Args(unk1));
	DefineMethod(IsCastableOnGround, 0x46829a, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsDefensive, 0x46824b, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsEnoughManaToCast, 0x93f753, bool, Params(Go* unk1, Go* unk2), Args(unk1, unk2));
	DefineMethod(IsEnoughManaToCast, 0x93fced, bool, Params(Go* unk1), Args(unk1));
	DefineConstMethod(IsHealthPotion, 0x93f5c5, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsLevelMetToCast, 0x93f50a, bool, Params(Go* unk1), Args(unk1));
	DefineMethod(IsLifeGiving, 0x4681f8, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsLifeTaking, 0x468203, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsManaGiving, 0x46820f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsManaPotion, 0x93f5f9, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsManaTaking, 0x46821b, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsOffensive, 0x46823f, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsPassive, 0x468227, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsPotion, 0x4682b9, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsRejuvenationPotion, 0x93f577, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsSpell, 0x4682ac, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsTargetTypeFriendly, 0x46827d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAttackDamageModifierMax, 0x93eb20, const gpbstring<char>&, NO_PARAMS, NO_ARGS); // "attack_damage_modifier_max"
	DefineConstMethod(GetAttackDamageModifierMin, 0x93eae9, const gpbstring<char>&, NO_PARAMS, NO_ARGS); // "attack_damage_modifier_min"
	DefineConstMethod(GetCasterStateName, 0x93ec35, const gpbstring<char>&, NO_PARAMS, NO_ARGS); // "caster_state_name"
	DefineConstMethod(GetCastExperience, 0x93ebc7, const gpbstring<char>&, NO_PARAMS, NO_ARGS); // "cast_experience"
	DefineConstMethod(GetEffectDuration, 0x93eb90, const gpbstring<char>&, NO_PARAMS, NO_ARGS); // "effect_duration"
	DefineConstMethod(GetManaCostModifier, 0x93e927, const gpbstring<char>&, NO_PARAMS, NO_ARGS); // "mana_cost_modifier"
	DefineConstMethod(GetManaCostUI, 0x93e95e, const gpbstring<char>&, NO_PARAMS, NO_ARGS); // "mana_cost_ui"
	DefineConstMethod(GetManaCostUIModifier, 0x93e995, const gpbstring<char>&, NO_PARAMS, NO_ARGS); // "mana_cost_ui_modifier"
	DefineConstMethod(GetPrefixModifierName, 0x468329, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRareModifier1Name, 0x468331, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRareModifier2Name, 0x468335, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSkillClass, 0x93e7d3, const gpbstring<char>&, NO_PARAMS, NO_ARGS); // "skill_class"
	DefineConstMethod(GetStateName, 0x93ebfe, const gpbstring<char>&, NO_PARAMS, NO_ARGS); // "state_name"
	DefineConstMethod(GetSuffixModifierName, 0x46832d, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(SCast, 0x93ff79, const Goid_*, Params(Go* unk1), Args(unk1));
	DefineConstMethod(GetDamageType, 0x93ed89, eDamageType, NO_PARAMS, NO_ARGS); // "damage_type"
	DefineConstMethod(GetMagicClass, 0x93e8b5, eMagicClass, NO_PARAMS, NO_ARGS); // "magic_class"
	DefineMethod(BuildTargetTypeFlags, 0x93e032, eTargetTypeFlags, Params(Go* unk1, Go* unk2), Args(unk1, unk2));
	DefineConstMethod(GetTargetTypeFlags, 0x46786b, eTargetTypeFlags, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTargetTypeFlagsNot, 0x46786f, eTargetTypeFlags, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetUsageContextFlags, 0x93f4d1, eUsageContextFlags, NO_PARAMS, NO_ARGS); // "usage_context_flags"
	DefineConstMethod(EvaluateAttackDamageModifierMax, 0x46784a, float, Params(const Go* unk1, const Go* unk2), Args(unk1, unk2));
	DefineConstMethod(EvaluateAttackDamageModifierMin, 0x467836, float, Params(const Go* unk1, const Go* unk2), Args(unk1, unk2));
	DefineConstMethod(EvaluateCastExperience, 0x467822, float, Params(const Go* unk1, const Go* unk2), Args(unk1, unk2));
	DefineConstMethod(EvaluateEffectDuration, 0x46780e, float, Params(const Go* unk1, const Go* unk2), Args(unk1, unk2));
	DefineConstMethod(EvaluateManaCost, 0x4677fa, float, Params(const Go* unk1, const Go* unk2), Args(unk1, unk2));
	DefineConstMethod(GetAutoCastChance, 0x93e79a, float, NO_PARAMS, NO_ARGS); // "autocast_chance"
	DefineConstMethod(GetCastRange, 0x93ea3e, float, NO_PARAMS, NO_ARGS); // "cast_range"
	DefineConstMethod(GetCastReloadDelay, 0x93ea77, float, NO_PARAMS, NO_ARGS); // "cast_reload_delay"
	DefineMethod(GetLongestAlteration, 0x467902, float, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(GetMagicLevel, 0x93f218, float, Params(const Go* unk1), Args(unk1));
	DefineConstMethod(GetManaCost, 0x93e8ee, float, NO_PARAMS, NO_ARGS); // "mana_cost"
	DefineConstMethod(GetMaxCastLevel, 0x93e87c, float, NO_PARAMS, NO_ARGS); // "max_level"
	DefineConstMethod(GetMaxIntel, 0x93edc2, float, NO_PARAMS, NO_ARGS); // "max_intel"
	DefineConstMethod(GetPContentLevel, 0x93e843, float, NO_PARAMS, NO_ARGS); // "pcontent_level"
	DefineConstMethod(GetPotionFullRatio, 0x93e726, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRequiredCastLevel, 0x93e80a, float, NO_PARAMS, NO_ARGS); // "required_level"
	DefineConstMethod(GetSpeedBias, 0x93ea05, float, NO_PARAMS, NO_ARGS); // "speed_bias"
	DefineConstMethod(GetCastSubAnimation, 0x93eb57, unsigned int, NO_PARAMS, NO_ARGS); // "cast_sub_animation"
	DefineMethod(ApplyEnchantments, 0x93e138, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(ApplyEnchantments, 0x4678e4, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(ApplyEnchantments, 0x468308, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCApplyEnchantments, 0x93e3ff, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RCMemberCast, 0x93fd11, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCOneShotUsed, 0x93e046, void, Params(Go* unk1), Args(unk1));
	DefineMethod(RCSetIsPowerMaster, 0x93e1c2, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetPotionAmount, 0x93fbdd, void, Params(float unk1), Args(unk1));
	DefineMethod(SApplyEnchantments, 0x4682e7, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(SApplyEnchantments, 0x4682c5, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SApplyEnchantments, 0x4678c6, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SApplyEnchantments, 0x93f651, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SetIsPowerMaster, 0x467916, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetTargetTypeFlags, 0x46785e, void, Params(eTargetTypeFlags unk1), Args(unk1));
	DefineMethod(SSetIsPowerMaster, 0x93e534, void, Params(bool unk1), Args(unk1));

	enum Flags {

	};

	// 0x00
	FillStruct(0x00, 0x14);
	// 0x14
	Flags flags;
	// 0x18
	eTargetTypeFlags targetTypeFlags;
	// 0x1c
	eTargetTypeFlags targetTypeFlagsNOT;
	// 0x20
	FillStruct(0x20, 0x28);
	// 0x24
	gpbstring<char> prefixModifierName;
	// 0x28
	gpbstring<char> suffixModifierName;
	// 0x2c
	FillStruct(0x2c, 0x30);
	// 0x30
	gpbstring<char> rareModifier1Name;
	// 0x34
	gpbstring<char> rareModifier2Name;
	// 0x38
	void* enchantments;
};

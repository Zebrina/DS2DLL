#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "GPFastVector.h"
#include "FuBi.h"
#include "Go.h"
#include "GoComponent.h"
#include "Reagent.h"

class GoMagic : public GoComponent {
public:
	struct Enchantment {
        enum CustomDamageFlag {
            CUSTOM_DAMAGE_MELEE     = EnumFlag(2),
            CUSTOM_DAMAGE_RANGED    = EnumFlag(3),
            CUSTOM_DAMAGE_LIGHTNING = EnumFlag(4),
            CUSTOM_DAMAGE_ICE       = EnumFlag(5),
            CUSTOM_DAMAGE_FIRE      = EnumFlag(6),
            CUSTOM_DAMAGE_DEATH     = EnumFlag(7),
        };

		// 0x00
		$Padding(0x00, 0x04);
		// 0x04
		eAlteration alteration;
		// 0x08
		$Padding(0x08, 0x0c);
        // 0x0c
        GPBString valueString; // ??
        // 0x10
        GPBString maxValueString; // ??
        // 0x14
        GPBString durationString; // ??
        // 0x18
        GPBString frequencyString; // ??
        // 0x1c
        GPBString transferEfficiencyString; // ??
        // 0x20
        GPBString initialDelayString; // ??
        // 0x24
        float value; // ??
        // 0x28
        float minValueCeiling;
        // 0x2c
        float maxValue; // ??
        // 0x30
        float maxValueCeiling;
        // 0x34
        bool bMultiplyValue;
        // 0x38
        float duration;
        // 0x3c
        float frequency;
        // 0x40
        float transferEfficiency;
		// 0x44
		bool bPartyActive;
		bool bInnateEnchantment;
        // 0x48
        float initialDelay;
        // 0x4c
        GPBString description;
        // 0x4c
        $Padding(0x4c, 0x50);
        // 0x50
        bool bIsEnchantment;
        bool bIsPermanent;
        bool bIsTransmissible;
        bool bIsSingleInstance;
        // 0x54
        bool bIsValueLimited;
        bool bIsTargetTransfer;
        bool bIsSourceTransfer;
        bool bIsOffensiveTransfer;
        // 0x58
        bool bIsUITimerVisible;
        bool bAbortOnMin;
        bool bAbortOnMax;
        bool b58;
        // 0x5c
        GPBString dependName;
        // 0x60
        GPBString dependObject;
        // 0x64
        GPBString monsterType;
        // 0x68
        GPBString customEffect;
        // 0x6c
        CustomDamageFlag customDamageFlags;
        // 0x70
        GPBString customEffectSkrit;
        // 0x74
        $Padding(0x74, 0x7c);
        // 0x7c
        bool bCustomDamageMeleeOnly;
        bool bCustomDamageRangedOnly;
        // 0x80
        $Padding(0x80, 0x88);
        // 0x88
        GPBString suite;
        // 0x8c
        $Padding(0x8c, 0x98);
        // 0x98
        Goid* goid98;
        // 0x9c
        Goid* goid9C;
        // 0xa0
        Goid* goidA0;
	};

    STATIC_ASSERT(sizeof(Enchantment) == 0xa8);

    struct EnchantmentList {
        // 0x00
        $Padding(0x00, 0x08);
        // 0x08
        GPFastVector<Enchantment*> enchantments;
    };

	$StaticMethod(0x00467930, FUBI_NetToInstance, GoMagic*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00467927, FUBI_InstanceToNet, uint, GoMagic* unk1);
	$Method(0x0093f264, CanReachNextLevel, bool, const Go* go);
	$ConstMethod(0x0093eab0, GetApplyEnchantmentsOnCast, bool); // "apply_enchantments"
	$ConstMethod(0x0093ed50, GetCanAutocast, bool); // "can_autocast"
	$ConstMethod(0x0093ed17, GetDoesDamagePerSecond, bool); // "does_damage_per_second"
	$ConstMethod(0x0093ee34, GetIsAwpVisible, bool); // "awp_visible"
	$ConstMethod(0x0093ee6d, GetIsBuff, bool); // "is_buff"
	$ConstMethod(0x0093e3e7, GetIsCommandCast, bool);
	$ConstMethod(0x0093eea6, GetIsDebuff, bool); // "is_debuff"
	$ConstMethod(0x0093ef51, GetIsModifierProc, bool); // "is_modifier_proc"
	$ConstMethod(0x004678b4, GetIsOneShot, bool);
	$ConstMethod(0x0093ecde, GetIsOneUse, bool); // "one_use"
	$ConstMethod(0x0093ef18, GetIsPower, bool); // "is_power"
	$ConstMethod(0x00467923, GetIsPowerMaster, bool);
	$ConstMethod(0x0093eedf, GetIsWeaponEnchant, bool); // "is_weapon_enchant"
	$ConstMethod(0x0093e9cc, GetManaCostVaries, bool); // "mana_cost_varies"
	$ConstMethod(0x0093eca5, GetRequireMembershipCheck, bool); // "require_membership_check"
	$ConstMethod(0x004678ad, GetRequiresLineOfSight, bool);
	$ConstMethod(0x0093ec6c, GetRequireStateCheck, bool); // "require_state_check"
	$ConstMethod(0x0093edfb, GetUseIntelLevel, bool); // "use_intel_level"
	$ConstMethod(0x0093ef8a, GetUsesDamageOverTime, bool); // "uses_damage_over_time"
	$ConstMethod(0x0093f54b, HasAlterationType, bool, eAlteration alteration); // INVESTIGATE
	$ConstMethod(0x004678bd, HasEnchantments, bool);
	$ConstMethod(0x0093f62d, HasNonInnateEnchantments, bool);
	$ConstMethod(0x00468257, HasTargetTypeFlags, bool, eTargetTypeFlags unk1);
	$ConstMethod(0x0046826a, HasTargetTypeFlagsNot, bool, eTargetTypeFlags unk1);
	$ConstMethod(0x00468233, IsAggressive, bool);
	$ConstMethod(0x0093f789, IsCastableOn, bool, Go* unk1, bool unk2, bool unk3);
	$ConstMethod(0x00467873, IsCastableOn, bool, Go* unk1, bool unk2);
	$ConstMethod(0x00467887, IsCastableOn, bool, Go* unk1);
	$ConstMethod(0x0046829a, IsCastableOnGround, bool);
	$ConstMethod(0x0046824b, IsDefensive, bool);
	$ConstMethod(0x0093f753, IsEnoughManaToCast, bool, Go* unk1, Go* unk2);
	$ConstMethod(0x0093fced, IsEnoughManaToCast, bool, Go* unk1);
	$ConstMethod(0x0093f5c5, IsHealthPotion, bool);
	$ConstMethod(0x0093f50a, IsLevelMetToCast, bool, Go* unk1);
	$ConstMethod(0x004681f8, IsLifeGiving, bool);
	$ConstMethod(0x00468203, IsLifeTaking, bool);
	$ConstMethod(0x0046820f, IsManaGiving, bool);
	$ConstMethod(0x0093f5f9, IsManaPotion, bool);
	$ConstMethod(0x0046821b, IsManaTaking, bool);
	$ConstMethod(0x0046823f, IsOffensive, bool);
	$ConstMethod(0x00468227, IsPassive, bool);
	$ConstMethod(0x004682b9, IsPotion, bool);
	$ConstMethod(0x0093f577, IsRejuvenationPotion, bool);
	$ConstMethod(0x004682ac, IsSpell, bool);
	$ConstMethod(0x0046827d, IsTargetTypeFriendly, bool);
	$ConstMethod(0x0093eb20, GetAttackDamageModifierMax, const GPBString&); // "attack_damage_modifier_max"
	$ConstMethod(0x0093eae9, GetAttackDamageModifierMin, const GPBString&); // "attack_damage_modifier_min"
	$ConstMethod(0x0093ec35, GetCasterStateName, const GPBString&); // "caster_state_name"
	$ConstMethod(0x0093ebc7, GetCastExperience, const GPBString&); // "cast_experience"
	$ConstMethod(0x0093eb90, GetEffectDuration, const GPBString&); // "effect_duration"
	$ConstMethod(0x0093e927, GetManaCostModifier, const GPBString&); // "mana_cost_modifier"
	$ConstMethod(0x0093e95e, GetManaCostUI, const GPBString&); // "mana_cost_ui"
	$ConstMethod(0x0093e995, GetManaCostUIModifier, const GPBString&); // "mana_cost_ui_modifier"
	$ConstMethod(0x00468329, GetPrefixModifierName, const GPBString&);
	$ConstMethod(0x00468331, GetRareModifier1Name, const GPBString&);
	$ConstMethod(0x00468335, GetRareModifier2Name, const GPBString&);
	$ConstMethod(0x0093e7d3, GetSkillClass, const GPBString&); // "skill_class"
	$ConstMethod(0x0093ebfe, GetStateName, const GPBString&); // "state_name"
	$ConstMethod(0x0046832d, GetSuffixModifierName, const GPBString&);
	$Method(0x0093ff79, SCast, const Goid*, Go* unk1);
	$ConstMethod(0x0093ed89, GetDamageType, eDamageType); // "damage_type"
	$ConstMethod(0x0093e8b5, GetMagicClass, eMagicClass); // "magic_class"
	$Method(0x0093e032, BuildTargetTypeFlags, eTargetTypeFlags, Go* unk1, Go* unk2);
	$ConstMethod(0x0046786b, GetTargetTypeFlags, eTargetTypeFlags);
	$ConstMethod(0x0046786f, GetTargetTypeFlagsNot, eTargetTypeFlags);
	$ConstMethod(0x0093f4d1, GetUsageContextFlags, eUsageContextFlags); // "usage_context_flags"
	$ConstMethod(0x0046784a, EvaluateAttackDamageModifierMax, float, const Go* unk1, const Go* unk2);
	$ConstMethod(0x00467836, EvaluateAttackDamageModifierMin, float, const Go* unk1, const Go* unk2);
	$ConstMethod(0x00467822, EvaluateCastExperience, float, const Go* unk1, const Go* unk2);
	$ConstMethod(0x0046780e, EvaluateEffectDuration, float, const Go* unk1, const Go* unk2);
	$ConstMethod(0x004677fa, EvaluateManaCost, float, const Go* unk1, const Go* unk2);
	$ConstMethod(0x0093e79a, GetAutoCastChance, float); // "autocast_chance"
	$ConstMethod(0x0093ea3e, GetCastRange, float); // "cast_range"
	$ConstMethod(0x0093ea77, GetCastReloadDelay, float); // "cast_reload_delay"
	$Method(0x00467902, GetLongestAlteration, float, const Goid* unk1, const Goid* unk2);
	$Method(0x0093f218, GetMagicLevel, float, const Go* unk1);
	$ConstMethod(0x0093e8ee, GetManaCost, float); // "mana_cost"
	$ConstMethod(0x0093e87c, GetMaxCastLevel, float); // "max_level"
	$ConstMethod(0x0093edc2, GetMaxIntel, float); // "max_intel"
	$ConstMethod(0x0093e843, GetPContentLevel, float); // "pcontent_level"
	$ConstMethod(0x0093e726, GetPotionFullRatio, float);
	$ConstMethod(0x0093e80a, GetRequiredCastLevel, float); // "required_level"
	$ConstMethod(0x0093ea05, GetSpeedBias, float); // "speed_bias"
	$ConstMethod(0x0093eb57, GetCastSubAnimation, uint); // "cast_sub_animation"
	$Method(0x0093e138, ApplyEnchantments, void, const char* unk1, const Goid* unk2, const Goid* unk3, const Goid* unk4, float unk5);
	$Method(0x004678e4, ApplyEnchantments, void, const char* unk1, const Goid* unk2, const Goid* unk3, const Goid* unk4);
	$Method(0x00468308, ApplyEnchantments, void, const char* unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x0093e3ff, RCApplyEnchantments, void, const char* unk1, const Goid* unk2, const Goid* unk3, const Goid* unk4, float unk5);
	$Method(0x0093fd11, RCMemberCast, void, uint unk1);
	$Method(0x0093e046, RCOneShotUsed, void, Go* unk1);
	$Method(0x0093e1c2, RCSetIsPowerMaster, void, bool unk1);
	$Method(0x0093fbdd, RCSetPotionAmount, void, float unk1);
	$Method(0x004682e7, SApplyEnchantments, void, const char* unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x004682c5, SApplyEnchantments, void, const char* unk1, const Goid* unk2, const Goid* unk3, float unk4);
	$Method(0x004678c6, SApplyEnchantments, void, const char* unk1, const Goid* unk2, const Goid* unk3, const Goid* unk4);
	$Method(0x0093f651, SApplyEnchantments, void, const char* unk1, const Goid* unk2, const Goid* unk3, const Goid* unk4, float unk5);
	$Method(0x00467916, SetIsPowerMaster, void, bool unk1);
	$Method(0x0046785e, SetTargetTypeFlags, void, eTargetTypeFlags unk1);
	$Method(0x0093e534, SSetIsPowerMaster, void, bool unk1);

    FEX float GetAlterationSum(eAlteration alteration);

	enum Flags : uint {
		NONE = CLEARED_FLAGS,
		REQUIRES_LINE_OF_SIGHT = EnumFlag(1),
		IS_ONE_SHOT = EnumFlag(2),
		IS_COMMAND_CAST = EnumFlag(3),
		IS_AGGRESSIVE = EnumFlag(8),
		IS_DEFENSIVE = EnumFlag(10),
	};

	// 0x14
	Flags flags;
	// 0x18
	eTargetTypeFlags targetTypeFlags;
	// 0x1c
	eTargetTypeFlags targetTypeFlagsNot;
	// 0x20
	$Padding(0x20, 0x24);
	// 0x24
	GPBString prefixModifierName;
	// 0x28
	GPBString suffixModifierName;
	// 0x2c
	$Padding(0x2c, 0x30);
	// 0x30
	GPBString rareModifier1Name;
	// 0x34
	GPBString rareModifier2Name;
	// 0x38
    EnchantmentList* enchantments;
	// 0x3c
	$Padding(0x3c, 0x48);
	// 0x48
    GPFastVector<GPBString> enchantmentReagents;
	// 0x50
	bool bIsPowerMaster;
};

STATIC_ASSERT_OFFSETOF(GoMagic, flags, 0x14);
STATIC_ASSERT_OFFSETOF(GoMagic, prefixModifierName, 0x24);
STATIC_ASSERT_OFFSETOF(GoMagic, rareModifier1Name, 0x30);
STATIC_ASSERT_OFFSETOF(GoMagic, enchantmentReagents, 0x48);
STATIC_ASSERT_OFFSETOF(GoMagic, bIsPowerMaster, 0x50);

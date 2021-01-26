#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "FFXID.h"
#include "FuBi.h"
#include "GoComponent.h"
#include "GoidScid.h"
#include "GPFastVector.h"
#include "SkillColl.h"

// Level
#define SKILL_UBER "uber"
#define SKILL_MELEE "melee"
#define SKILL_RANGED "ranged"
#define SKILL_COMBAT_MAGIC "combat magic"
#define SKILL_NATURE_MAGIC "nature magic"
#define SKILL_STRENGTH "strength"
#define SKILL_DEXTERITY "dexterity"
#define SKILL_INTELLIGENCE "intelligence"

class GoActor : public GoComponent {
public:
    struct GenericState {

    };

	$StaticMethod(0x004087f1, FUBI_NetToInstance, GoActor*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x004087e8, FUBI_InstanceToNet, uint, GoActor* unk1);
	$Method(0x00802932, CanUseActiveSkill, bool, eActiveSkillDelivery unk1);
	$Method(0x0040876a, ActivateQuickSlotSkill, void, int quickSlotSkillId);
	$Method(0x00802a8f, DoesActiveEquipmentSupportSkill, bool, const GPBString& unk1);
	$Method(0x00802a35, DoesEquipmentSupportSkill, bool, const GPBString& unk1);
	$ConstMethod(0x004086d6, GetActiveSkillReady, bool);
	$ConstMethod(0x004086dd, GetActiveSkillRelease, bool);
	$ConstMethod(0x00408782, GetCanBeResurrected, bool);
	$Method(0x0040a2fa, GetCanCast, bool);
	$Method(0x00408793, GetCanDamageBeReflected, bool);
	$ConstMethod(0x007f6c6e, GetCanDualWield, bool);
	$ConstMethod(0x0040859b, GetCanLevelUp, bool);
	$ConstMethod(0x0040877e, GetCanShowHealth, bool);
	$ConstMethod(0x004085ab, GetDropsSpellbook, bool);
	$Method(0x007ffa50, GetGenericState, bool, int unk1, GenericState& genericStateOut);
    $ConstMethod(0x007f958b, GetGenericStateName, const GPBString&, int unk1);
    $ConstMethod(0x007f9551, GetGenericStateCaster, const Goid*, int unk1);
    $ConstMethod(0x007fb574, GetGenericStateCaster, const Goid*, const char* unk1);
    $ConstMethod(0x007f9517, GetGenericStateSpellGoid, const Goid*, int unk1);
    $ConstMethod(0x007fb52d, GetGenericStateSpellGoid, const Goid*, const char* unk1);
    $ConstMethod(0x007fb4e5, GetGenericStateSpellLevel, float, const char* unk1);
	$ConstMethod(0x007f98c1, GetHasPowerDamageState, bool);
	$Method(0x007fa592, GetHasWeaponEnchant, bool);
	$ConstMethod(0x004085a2, GetIsHero, bool);
	$ConstMethod(0x007f9644, GetIsMale, bool);
	$ConstMethod(0x0040863b, GetIsSummoned, bool);
	$ConstMethod(0x0040a32b, GetMarkedAgony, bool);
	$ConstMethod(0x0040a324, GetMarkedDeath, bool);
	$ConstMethod(0x0040a348, GetMarkedFire, bool);
	$ConstMethod(0x0040a332, GetMarkedHarvest, bool);
	$ConstMethod(0x004086f4, GetUsingActiveSkill, bool);
	$ConstMethod(0x00408722, GetUsingPowerDamage, bool);
	$ConstMethod(0x007fb5bb, HasAuraState, bool, const char* unk1);
	$ConstMethod(0x007fb4a7, HasGenericState, bool, const char* unk1);
	$Method(0x00408763, IsActiveSkillSelected, bool);
	$Method(0x007f98f1, SetSkillLevelBase, bool, const char* skillName, float unk2, bool natural);
	$ConstMethod(0x00408660, GetSkillLevel, float, const char* skillName);
	$Method(0x0040869c, SetSkillLevel, bool, const char* skillName, float unk2);
	$ConstMethod(0x00408672, GetNaturalSkillLevel, float, const char* unk1);
	$Method(0x00408684, SetNaturalSkillLevel, bool, const char* skillName, float unk2);
	$Method(0x007ffac0, SRemoveSummoned, bool);
	$ConstMethod(0x007ffc6d, MakeNaturalResistanceToolTipAnsi, GPBString); // Exported as: MakeNatrualResistanceToolTipAnsi
	$ConstMethod(0x007ff33e, MakeNaturalResistanceListAnsi, GPBString);
	$Method(0x007ff1bd, MakeResistanceListAnsi, GPBString);
	$Method(0x007ff0e9, MakeResistanceToolTipAnsi, GPBString);
	$ConstMethod(0x007fe5cf, MakeResistanceToolTipAnsi, GPBString, eDamageType unk1, float unk2);
	$ConstMethod(0x004086b4, GetSkill, Skill*, const char* skillName);
	$ConstMethod(0x0040874c, GetCurrentActiveSkill, const GPBString&);
	$ConstMethod(0x007faf9d, GetQuickSlotSkill, const GPBString&, int unk1);
	$ConstMethod(0x007f960d, GetRace, const GPBString&);
	$ConstMethod(0x0040870b, GetPreLaunchFFXId, const FFXID*);
	$Method(0x004087ae, GetCorpse, const Goid*);
	$Method(0x0040862a, GetSummonCaster, const Goid*);
	$Method(0x00408619, GetSummoned, const Goid*);
	$Method(0x007f9837, SCreatePowerObject, const Goid*, const GPBString& unk1);
	$ConstMethod(0x0040864e, GetSkillExperience, double, const char* unk1);
	$Method(0x00408773, GetActiveSkillDelivery, eActiveSkillDelivery);
	$ConstMethod(0x0040877a, GetAlignment, eActorAlignment);
	$ConstMethod(0x0040a2d8, GetActiveSkillReloadBonus, float);
	$ConstMethod(0x004086c0, GetActiveSkillReloadDamage, float);
	$ConstMethod(0x004086c7, GetActiveSkillReloadMaxDamage, float);
	$Method(0x007fb66b, GetAuraValue, float, const char* unk1, const Goid* unk2);
	$Method(0x0040a2ee, GetBuffResistance, float);
	$Method(0x0040a30f, GetCastReloadBonusPercent, float);
	$Method(0x007fc511, GetChanceToCastTemplate, float, const GPBString& path, bool unk2);
	$Method(0x0040a2e7, GetDebuffResistance, float);
	$Method(0x0040a2e3, GetFreezeChance, float);
	$ConstMethod(0x0040a31d, GetHealingBonusPercent, float);
	$ConstMethod(0x007f82e9, GetHighestSkillLevel, float);
	$ConstMethod(0x0040a2df, GetMagicFindChance, float);
	$Method(0x0040a301, GetMeleeReloadBonusPercent, float);
	$ConstMethod(0x007f6c8b, GetMonsterLevel, float);
	$Method(0x007fafa6, GetNaturalResistance, float, eDamageType unk1);
	$Method(0x007fa874, GetNaturalStateResistance, float, const GPBString& unk1);
	$Method(0x0040a308, GetRangedReloadBonusPercent, float);
	$Method(0x007fafe6, GetResistance, float, eDamageType unk1);
	$ConstMethod(0x0040a316, GetSacrificePercent, float);
	$ConstMethod(0x007f96b6, GetSpotRequestWaitTime, float);
	$Method(0x007fa8cb, GetStateResistance, float, const GPBString& unk1);
	$Method(0x007fb5f9, GetStrongestAuraValue, float, const char* unk1);
	$ConstMethod(0x0040a2d4, GetSummonAttackSpeedBonusPercent, float);
	$ConstMethod(0x0040a2d0, GetSummonDamageBonusPercent, float);
	$ConstMethod(0x007f88d9, GetUnconsciousDuration, float);
	$ConstMethod(0x007f979a, GetBarBackroundIndex, int);
	$ConstMethod(0x0040873b, GetBonusSkillPoints, int);
	$ConstMethod(0x007f96ef, GetMaxBuffs, int);
	$ConstMethod(0x007f9728, GetMaxDebuffs, int);
	$Method(0x007fa4f9, GetNumAppliedBuffs, int);
	$Method(0x007fa561, GetNumAppliedDebuffs, int);
	$Method(0x004087aa, GetTuningPointId, int);
	$Method(0x007f81cb, RCUpdatePortraitTexture, FuBiCookie*);
	$ConstMethod(0x0040864a, GetMapLocationId, uint);
	$Method(0x0040c880, GetClass, void, GPBString& unk1);
	$Method(0x00802016, RCAddAuraState, void, const char* unk1, const char* unk2, const Goid* unk3, float unk4, const FFXID* unk5);
	$Method(0x007f6b80, AddBonusSkillPoints, void, int unk1); // Exported as RCAddBonusSkillPoints
	$Method(0x0080126e, RCAddGenericState, void, const char* unk1, const char* unk2, float unk3, const Goid* unk4, const Goid* unk5, float unk6, bool unk7);
	$Method(0x0080136d, RCAddIncantationState, void, const char* unk1, const char* unk2, float unk3, const Goid* unk4, const Goid* unk5, const char* unk6);
	$Method(0x007f6f02, RCRecalcReloadAmount, void, float unk1, float unk2, uint unk3);
	$Method(0x00801b7a, RCRemoveAuraState, void, const char* unk1, const Goid* unk2);
	$Method(0x007fed07, RCRemoveGenericState, void, const char* unk1);
	$Method(0x007f69a9, RCResetReloadDamage, void, bool unk1);
	$Method(0x007f6a99, RCSetActiveSkillRelease, void, bool unk1, uint unk2);
	$Method(0x007f9939, RCSetActiveSkillReloadBonus, void, float unk1);
	$Method(0x007f86d6, RCSetAlignment, void, eActorAlignment unk1);
	$Method(0x007f7082, RCSetCanBeResurrected, void, bool unk1);
	$Method(0x007f87bb, RCSetCanShowHealth, void, bool unk1);
	$Method(0x00802f9d, RCSetCurrentActiveSkill, void, const GPBString& unk1);
	$Method(0x007fb7b4, RCSetNaturalSkillLevel, void, const char* unk1, float unk2);
	$Method(0x007f6c99, RCSetSkillLevels, void, float unk1, float unk2, float unk3);
	$Method(0x007f686d, RCSetSummonCaster, void, const Goid* unk1);
	$Method(0x007f675a, RCSetSummoned, void, const Goid* unk1);
	$Method(0x007f7179, RCSetUnconsiousEndTime, void, double unk1);
	$Method(0x007fb6cd, RCSetUsingActiveSkill, void, bool unk1, uint unk2);
	$Method(0x007f6de0, RCStartActiveSkillReload, void, float unk1, float unk2, uint unk3);
	$Method(0x007f8322, RCSubtractReloadDamage, void, float unk1);
	$Method(0x007f890a, RSResetUnconsciousDuration, void, float unk1);
	$Method(0x007f8414, RSSetActiveSkillRelease, void, bool unk1);
	$Method(0x007fa6bf, RSSetActiveSkillReloadBonus, void, float unk1);
	$Method(0x00803082, RSSetCurrentActiveSkill, void, const GPBString& unk1);
	$Method(0x007fc7d9, RSSetNaturalSkillLevel, void, const char* unk1, float unk2);
	$Method(0x007f8523, RSSetSkillLevels, void, float unk1, float unk2, float unk3);
	$Method(0x007fc6d3, RSSetUsingActiveSkill, void, bool unk1);
	$Method(0x008021b8, SAddAuraState, void, const char* unk1, const char* unk2, const Goid* unk3, float unk4, const FFXID* unk5);
	//$Method(0x007f851a, SAddBonusSkillPoints, void, int unk1); // Just calls RCAddBonusSkillPoints.
	$Method(0x0080188c, SAddGenericState, void, const char* unk1, const char* unk2, float unk3, const Goid* unk4, const Goid* unk5, float unk6, bool unk7);
	$Method(0x004085b5, SAddGenericState, void, const char* unk1, const char* unk2, float unk3, const Goid* unk4, const Goid* unk5, float unk6);
	$Method(0x008018b5, SAddIncantationState, void, const char* unk1, const char* unk2, float unk3, const Goid* unk4, const Goid* unk5, const char* unk6);
	$Method(0x004087d7, SCastPassiveSpellsOnHit, void, const Goid* unk1);
	$Method(0x004087c6, SCastPassiveSpellsWhenHit, void, const Goid* unk1);
	$Method(0x007f9a34, SCreateCorpse, void, const Goid* unk1);
	$Method(0x007fa5e7, SetActiveSkillReady, void, bool unk1);
	$Method(0x004086e4, SetActiveSkillRelease, void, bool unk1);
	$Method(0x0040ace7, SetActiveSkillReloadBonus, void, float unk1);
	$Method(0x00408753, SetActiveSkillSelected, void, bool unk1);
	$Method(0x0040873f, SetBonusSkillPoints, void, int value);
	$Method(0x0040ad5b, SetBuffResistance, void, float value);
	$Method(0x0040ad6b, SetCanCast, void, bool unk1);
	$Method(0x0040b314, SetClass, void, const GPBString& unk1);
	$Method(0x008028c7, SetCurrentActiveSkill, void, const GPBString& unk1);
	$Method(0x0040ad29, SetDebuffResistance, void, float value);
	$Method(0x0040ad04, SetFreezeChance, void, float value);
	$Method(0x0040ad8b, SetHealingBonusPercent, void, float value);
	$Method(0x0040acf7, SetMagicFindChance, void, float value);
	$Method(0x0040adab, SetMarkedAgony, void, bool marked);
	$Method(0x0040ad9b, SetMarkedDeath, void, bool marked);
	$Method(0x0040adcb, SetMarkedFire, void, bool marked);
	$Method(0x0040adbb, SetMarkedHarvest, void, bool marked);
	$Method(0x007feebe, SetNaturalResistance, void, eDamageType type, float value);
    $Method(0x007fef22, SetResistance, void, eDamageType unk1, float unk2);
	$Method(0x008001a3, SetNaturalStateResistance, void, const GPBString& unk1, float value);
    $Method(0x00800228, SetStateResistance, void, const GPBString& unk1, float value);
	$Method(0x004086fb, SetPreLaunchFFXId, void, const FFXID* unk1);
	$Method(0x0040ad7b, SetSacrificePercent, void, float value);
	$Method(0x0040862e, SetSummonCaster, void, const Goid* unk1);
	$Method(0x0040861d, SetSummoned, void, const Goid* unk1);
	$Method(0x0040879d, SetTuningPointId, void, int unk1);
	$Method(0x007fae9b, SetUsingActiveSkill, void, bool unk1);
	$Method(0x00802d7b, SRecalcReloadAmount, void);
	$Method(0x0080210b, SRemoveAuraState, void, const char* unk1, const Goid* unk2);
	$Method(0x004085fa, SRemoveBuffs, void);
	$Method(0x00408606, SRemoveDebuffs, void);
	$Method(0x007ffa47, SRemoveGenericState, void, const char* state);
	$Method(0x007ffbcf, SRemoveSpellState, void, const GPBString& state);
	$Method(0x004085dd, SRemoveSpellStates, void, bool unk1, bool unk2);
	$Method(0x004086ce, SResetReloadDamage, void);
	$Method(0x007f840b, SResetReloadDamage, void, bool unk1);
	$Method(0x007f9a22, SSetAlignment, void, eActorAlignment unk1);
	$Method(0x007f88a0, SSetCanBeResurrected, void, bool unk1);
	$Method(0x00408786, SSetCanDamageBeReflected, void, bool unk1);
	$Method(0x007f9a2b, SSetCanShowHealth, void, bool unk1);
	$Method(0x007f8091, SSetSummonCaster, void, const Goid* unk1);
	$Method(0x007f8088, SSetSummoned, void, const Goid* unk1);
	$Method(0x00408712, SSetUsingPowerDamage, void, bool unk1);
	$Method(0x00802ae9, SStartActiveSkillReload, void);
	$Method(0x007f980a, SSubtractReloadDamage, void, float unk1);

	enum Flags {
		CAN_LEVEL_UP    = EnumFlag(1),
		IS_HERO         = EnumFlag(2),
		DROPS_SPELLBOOK = EnumFlag(3),
	};

	// 0x014
	eActorAlignment alignment = AA_NEUTRAL;
	// 0x018
    SkillColl skills; // call sub_7f235a("monster_level")
	// 0x007f23a7 Skill* GetSkill
	// 0x007f2310 double GetSkillExperience
	// 0x020
	$Padding(0x020, 0x028);
	// 0x028
	uint mapLocationId = 0;
	// 0x02c
	bool bCanShowHealth = false;
	bool bCanBeResurrected = true;
    bool b02E = false;
	// 0x030
    double d030 = 0.0;
    // 0x038
    bool b038 = false;
	// 0x03c
	int tuningPointId = 0;
	// 0x040
	$Padding(0x040, 0x044);
	// 0x044
	const Goid* corpse = Goid::Invalid;
	// 0x048
	$Padding(0x048, 0x04c);
	// 0x04c
	const Goid* summoned = Goid::Invalid;
	// 0x050
	const Goid* summonCaster = Goid::Invalid;
	// 0x054
    float naturalSummonDamagePercent = 0.0f;
	// 0x058
	float summonDamageBonusPercent = 0.0f;
	// 0x05c
    float naturalSummonAttackSpeedBonusPercent = 0.0f;
	// 0x060
	float summonAttackSpeedBonusPercent = 0.0f;
	// 0x064
    float naturalMagicFindChance = 0.0f;
	// 0x068
	float magicFindChance = 0.0f;
	// 0x06c
    float naturalFreezeChance = 0.0f;
	// 0x070
	float freezeChance = 0.0f;
	// 0x074
	int bonusSkillPoints = 0;
	// 0x078
	bool bCanDamageBeReflected = true;
	// 0x07c
	Flags flags;
	// 0x080
	$Padding(0x080, 0x088);
	// 0x088
	bool b088 = true;
	bool bCanCast = true;
	// 0x08c
    float naturalSacrificePercent = 0.0f; // ??
	// 0x090
	float sacrificePercent = 0.0f;
	// 0x094
    float naturalCastReloadBonusPercent = 0.0f; // ??
	// 0x098
	float castReloadBonusPercent = 0.0f;
	// 0x09c
    float naturalMeleeReloadBonusPercent = 0.0f; // ??
	// 0x0a0
	float meleeReloadBonusPercent = 0.0f;
	// 0x0a4
    float naturalRangedReloadBonusPercent = 0.0f; // ??
	// 0x0a8
	float rangedReloadBonusPercent = 0.0f;
	// 0x0ac
    float naturalHealingBonusPercent = 0.0f; // ??
	// 0x0b0
	float healingBonusPercent = 0.0f;
	// 0x0b4
	bool b0B4 = false;
	bool bMarkedDeath = false;
	bool b0B6 = false;
	bool bMarkedAgony = false;
	// 0x0b8
	bool b0B8 = false;
	bool bMarkedHarvest = false;
	bool b0BA = false;
	bool bMarkedFire = false;
	// 0x0bc
	$Padding(0x0bc, 0x0c8);
	// 0x0c8
	GPBString currentActiveSkill;
	// 0x0cc
	bool bActiveSkillSelected = false;
	// 0x0d0
	float activeSkillReloadMaxDamage = 0.0f;
	// 0x0d4
	float activeSkillReloadDamage = 0.0f;
	// 0x0d8
	$Padding(0x0d8, 0x0dc);
	// 0x0dc
	float activeSkillReloadBonus = 0.0f;
	// 0x0e0
	bool bActiveSkillReady = false;
	bool bActiveSkillRelease = false;
	bool bUsingActiveSkill = false;
	// 0x0e4
	eActiveSkillDelivery activeSkillDelivery;
	// 0x0e8
	FFXID* preLaunchFFXId = nullptr;
	// 0x0ec
	bool bUsingPowerDamage;
	bool b0ED = false;
	bool b0EE;
	bool b0EF;
	// 0x0f0
	$Padding(0x0f0, 0x0f4);
	// 0x0f4
	// GetGenericState
	// GetHasPowerDamageState
	// GetHasWeaponEnchant
	void* ptr0F4;
	// 0x0f8
	$Padding(0x0f8, 0x124);
    // 0x124
    float naturalDebuffResistance = 0.0f; // ??
	// 0x128
	float debuffResistance = 0.0f;
	// 0x12c
    float naturalBuffResistance = 0.0f; // ??
	// 0x130
	float buffResistance = 0.0f;
    // 0x134
	$Padding(0x134, 0x150);
};

STATIC_ASSERT(sizeof(GoActor) == 0x150);
STATIC_ASSERT_OFFSETOF(GoActor, alignment, 0x014);
STATIC_ASSERT_OFFSETOF(GoActor, mapLocationId, 0x028);
STATIC_ASSERT_OFFSETOF(GoActor, freezeChance, 0x070);
STATIC_ASSERT_OFFSETOF(GoActor, sacrificePercent, 0x090);
STATIC_ASSERT_OFFSETOF(GoActor, meleeReloadBonusPercent, 0x0a0);
STATIC_ASSERT_OFFSETOF(GoActor, healingBonusPercent, 0x0b0);
STATIC_ASSERT_OFFSETOF(GoActor, activeSkillReloadMaxDamage, 0x0d0);
STATIC_ASSERT_OFFSETOF(GoActor, bActiveSkillReady, 0x0e0);
STATIC_ASSERT_OFFSETOF(GoActor, bActiveSkillRelease, 0x0e1);
STATIC_ASSERT_OFFSETOF(GoActor, bUsingActiveSkill, 0x0e2);
STATIC_ASSERT_OFFSETOF(GoActor, bUsingPowerDamage, 0x0ec);
STATIC_ASSERT_OFFSETOF(GoActor, debuffResistance, 0x128);

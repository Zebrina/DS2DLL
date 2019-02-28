#pragma once

#include "Enums.h"
#include "FuBi.h"

struct FFXID_;
struct Goid_;
class Skill;

// Level
#define SKILL_UBER "uber"
#define SKILL_MELEE "melee"
#define SKILL_RANGED "ranged"
#define SKILL_COMBAT_MAGIC "combat magic"
#define SKILL_NATURE_MAGIC "nature magic"
#define SKILL_STRENGTH "strength"
#define SKILL_DEXTERITY "dexterity"
#define SKILL_INTELLIGENCE "intelligence"

enum eActiveSkillDelivery {

};

class GoActor {
public:
	struct GenericState {

	};

	DefineStaticMethod(FUBI_NetToInstance, 0x4087f1, GoActor*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x4087e8, unsigned long, Params(GoActor* unk1), Args(unk1));
	DefineMethod(CanUseActiveSkill, 0x802932, bool, Params(eActiveSkillDelivery unk1), Args(unk1));
	DefineMethod(DoesActiveEquipmentSupportSkill, 0x802a8f, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(DoesEquipmentSupportSkill, 0x802a35, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetActiveSkillReady, 0x4086d6, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetActiveSkillRelease, 0x4086dd, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCanBeResurrected, 0x408782, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCanCast, 0x40a2fa, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCanDamageBeReflected, 0x408793, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCanDualWield, 0x7f6c6e, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCanLevelUp, 0x40859b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCanShowHealth, 0x40877e, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDropsSpellbook, 0x4085ab, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetGenericState, 0x7ffa50, bool, Params(int unk1, GoActor::GenericState& unk2), Args(unk1, unk2));
	DefineConstMethod(GetHasPowerDamageState, 0x7f98c1, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetHasWeaponEnchant, 0x7fa592, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsHero, 0x4085a2, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsMale, 0x7f9644, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsSummoned, 0x40863b, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMarkedAgony, 0x40a32b, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMarkedDeath, 0x40a324, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMarkedFire, 0x40a348, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMarkedHarvest, 0x40a332, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetUsingActiveSkill, 0x4086f4, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetUsingPowerDamage, 0x408722, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasAuraState, 0x7fb5bb, bool, Params(const char* unk1), Args(unk1));
	DefineConstMethod(HasGenericState, 0x7fb4a7, bool, Params(const char* unk1), Args(unk1));
	DefineMethod(IsActiveSkillSelected, 0x408763, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(SetSkillLevelBase, 0x7f98f1, bool, Params(const char* unk1, float unk2, bool natural), Args(unk1, unk2, natural));
	DefineConstMethod(GetSkillLevel, 0x408660, float, Params(const char* unk1), Args(unk1));
	DefineMethod(SetSkillLevel, 0x40869c, bool, Params(const char* unk1, float unk2), Args(unk1, unk2));
	DefineConstMethod(GetNaturalSkillLevel, 0x408672, float, Params(const char* unk1), Args(unk1));
	DefineMethod(SetNaturalSkillLevel, 0x408684, bool, Params(const char* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SRemoveSummoned, 0x7ffac0, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(MakeNaturalResistanceToolTipAnsi, 0x7ffc6d, gpbstring<char>, NO_PARAMS, NO_ARGS); // Exported as: MakeNatrualResistanceToolTipAnsi
	DefineConstMethod(MakeNaturalResistanceListAnsi, 0x7ff33e, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineMethod(MakeResistanceListAnsi, 0x7ff1bd, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineMethod(MakeResistanceToolTipAnsi, 0x7ff0e9, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(MakeResistanceToolTipAnsi, 0x7fe5cf, gpbstring<char>, Params(eDamageType unk1, float unk2), Args(unk1, unk2));
	DefineConstMethod(GetSkill, 0x4086b4, Skill*, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetCurrentActiveSkill, 0x40874c, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGenericStateName, 0x7f958b, const gpbstring<char>&, Params(int unk1), Args(unk1));
	DefineConstMethod(GetQuickSlotSkill, 0x7faf9d, const gpbstring<char>&, Params(int unk1), Args(unk1));
	DefineConstMethod(GetRace, 0x7f960d, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPreLaunchFFXId, 0x40870b, const FFXID_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCorpse, 0x4087ae, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGenericStateCaster, 0x7fb574, const Goid_*, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetGenericStateCaster, 0x7f9551, const Goid_*, Params(int unk1), Args(unk1));
	DefineConstMethod(GetGenericStateSpellGoid, 0x7fb52d, const Goid_*, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetGenericStateSpellGoid, 0x7f9517, const Goid_*, Params(int unk1), Args(unk1));
	DefineMethod(GetSummonCaster, 0x40862a, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetSummoned, 0x408619, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(SCreatePowerObject, 0x7f9837, const Goid_*, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetSkillExperience, 0x40864e, double, Params(const char* unk1), Args(unk1));
	DefineMethod(GetActiveSkillDelivery, 0x408773, eActiveSkillDelivery, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAlignment, 0x40877a, eActorAlignment, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetActiveSkillReloadBonus, 0x40a2d8, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetActiveSkillReloadDamage, 0x4086c0, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetActiveSkillReloadMaxDamage, 0x4086c7, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetAuraValue, 0x7fb66b, float, Params(const char* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(GetBuffResistance, 0x40a2ee, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCastReloadBonusPercent, 0x40a30f, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetChanceToCastTemplate, 0x7fc511, float, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(GetDebuffResistance, 0x40a2e7, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetFreezeChance, 0x40a2e3, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGenericStateSpellLevel, 0x7fb4e5, float, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetHealingBonusPercent, 0x40a31d, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetHighestSkillLevel, 0x7f82e9, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMagicFindChance, 0x40a2df, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMeleeReloadBonusPercent, 0x40a301, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMonsterLevel, 0x7f6c8b, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetNaturalResistance, 0x7fafa6, float, Params(eDamageType unk1), Args(unk1));
	DefineMethod(GetNaturalStateResistance, 0x7fa874, float, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetRangedReloadBonusPercent, 0x40a308, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetResistance, 0x7fafe6, float, Params(eDamageType unk1), Args(unk1));
	DefineConstMethod(GetSacrificePercent, 0x40a316, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSpotRequestWaitTime, 0x7f96b6, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetStateResistance, 0x7fa8cb, float, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetStrongestAuraValue, 0x7fb5f9, float, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetSummonAttackSpeedBonusPercent, 0x40a2d4, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSummonDamageBonusPercent, 0x40a2d0, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetUnconsciousDuration, 0x7f88d9, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBarBackroundIndex, 0x7f979a, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBonusSkillPoints, 0x40873b, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxBuffs, 0x7f96ef, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxDebuffs, 0x7f9728, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetNumAppliedBuffs, 0x7fa4f9, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetNumAppliedDebuffs, 0x7fa561, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetTuningPointId, 0x4087aa, int, NO_PARAMS, NO_ARGS);
	DefineMethod(RCUpdatePortraitTexture, 0x7f81cb, FuBi::Cookie__*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMapLocationId, 0x40864a, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(ActivateQuickSlotSkill, 0x40876a, void, Params(int unk1), Args(unk1));
	DefineMethod(GetClass, 0x40c880, void, Params(gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RCAddAuraState, 0x802016, void, Params(const char* unk1, const char* unk2, const Goid_* unk3, float unk4, const FFXID_* unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RCAddBonusSkillPoints, 0x7f6b80, void, Params(int unk1), Args(unk1));
	DefineMethod(RCAddGenericState, 0x80126e, void, Params(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6, bool unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineMethod(RCAddIncantationState, 0x80136d, void, Params(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, const char* unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(RCRecalcReloadAmount, 0x7f6f02, void, Params(float unk1, float unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCRemoveAuraState, 0x801b7a, void, Params(const char* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RCRemoveGenericState, 0x7fed07, void, Params(const char* unk1), Args(unk1));
	DefineMethod(RCResetReloadDamage, 0x7f69a9, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetActiveSkillRelease, 0x7f6a99, void, Params(bool unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCSetActiveSkillReloadBonus, 0x7f9939, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetAlignment, 0x7f86d6, void, Params(eActorAlignment unk1), Args(unk1));
	DefineMethod(RCSetCanBeResurrected, 0x7f7082, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetCanShowHealth, 0x7f87bb, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetCurrentActiveSkill, 0x802f9d, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RCSetNaturalSkillLevel, 0x7fb7b4, void, Params(const char* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(RCSetSkillLevels, 0x7f6c99, void, Params(float unk1, float unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetSummonCaster, 0x7f686d, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCSetSummoned, 0x7f675a, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCSetUnconsiousEndTime, 0x7f7179, void, Params(double unk1), Args(unk1));
	DefineMethod(RCSetUsingActiveSkill, 0x7fb6cd, void, Params(bool unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCStartActiveSkillReload, 0x7f6de0, void, Params(float unk1, float unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSubtractReloadDamage, 0x7f8322, void, Params(float unk1), Args(unk1));
	DefineMethod(RSResetUnconsciousDuration, 0x7f890a, void, Params(float unk1), Args(unk1));
	DefineMethod(RSSetActiveSkillRelease, 0x7f8414, void, Params(bool unk1), Args(unk1));
	DefineMethod(RSSetActiveSkillReloadBonus, 0x7fa6bf, void, Params(float unk1), Args(unk1));
	DefineMethod(RSSetCurrentActiveSkill, 0x803082, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RSSetNaturalSkillLevel, 0x7fc7d9, void, Params(const char* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(RSSetSkillLevels, 0x7f8523, void, Params(float unk1, float unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSSetUsingActiveSkill, 0x7fc6d3, void, Params(bool unk1), Args(unk1));
	DefineMethod(SAddAuraState, 0x8021b8, void, Params(const char* unk1, const char* unk2, const Goid_* unk3, float unk4, const FFXID_* unk5), Args(unk1, unk2, unk3, unk4, unk5));
	//DefineMethod(SAddBonusSkillPoints, 0x7f851a, void, Params(int unk1), Args(unk1));
	DefineMethod(SAddGenericState, 0x80188c, void, Params(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6, bool unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineMethod(SAddGenericState, 0x4085b5, void, Params(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(SAddIncantationState, 0x8018b5, void, Params(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, const char* unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(SCastPassiveSpellsOnHit, 0x4087d7, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SCastPassiveSpellsWhenHit, 0x4087c6, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SCreateCorpse, 0x7f9a34, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetActiveSkillReady, 0x7fa5e7, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetActiveSkillRelease, 0x4086e4, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetActiveSkillReloadBonus, 0x40ace7, void, Params(float unk1), Args(unk1));
	DefineMethod(SetActiveSkillSelected, 0x408753, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetBonusSkillPoints, 0x40873f, void, Params(int unk1), Args(unk1));
	DefineMethod(SetBuffResistance, 0x40ad5b, void, Params(float unk1), Args(unk1));
	DefineMethod(SetCanCast, 0x40ad6b, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetClass, 0x40b314, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetCurrentActiveSkill, 0x8028c7, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetDebuffResistance, 0x40ad29, void, Params(float unk1), Args(unk1));
	DefineMethod(SetFreezeChance, 0x40ad04, void, Params(float unk1), Args(unk1));
	DefineMethod(SetHealingBonusPercent, 0x40ad8b, void, Params(float unk1), Args(unk1));
	DefineMethod(SetMagicFindChance, 0x40acf7, void, Params(float unk1), Args(unk1));
	DefineMethod(SetMarkedAgony, 0x40adab, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetMarkedDeath, 0x40ad9b, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetMarkedFire, 0x40adcb, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetMarkedHarvest, 0x40adbb, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetNaturalResistance, 0x7feebe, void, Params(eDamageType unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetNaturalStateResistance, 0x8001a3, void, Params(const gpbstring<char>& unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetPreLaunchFFXId, 0x4086fb, void, Params(const FFXID_* unk1), Args(unk1));
	DefineMethod(SetResistance, 0x7fef22, void, Params(eDamageType unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetSacrificePercent, 0x40ad7b, void, Params(float unk1), Args(unk1));
	DefineMethod(SetStateResistance, 0x800228, void, Params(const gpbstring<char>& unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetSummonCaster, 0x40862e, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetSummoned, 0x40861d, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetTuningPointId, 0x40879d, void, Params(int unk1), Args(unk1));
	DefineMethod(SetUsingActiveSkill, 0x7fae9b, void, Params(bool unk1), Args(unk1));
	DefineMethod(SRecalcReloadAmount, 0x802d7b, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SRemoveAuraState, 0x80210b, void, Params(const char* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(SRemoveBuffs, 0x4085fa, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SRemoveDebuffs, 0x408606, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SRemoveGenericState, 0x7ffa47, void, Params(const char* unk1), Args(unk1));
	DefineMethod(SRemoveSpellState, 0x7ffbcf, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SRemoveSpellStates, 0x4085dd, void, Params(bool unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SResetReloadDamage, 0x4086ce, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SResetReloadDamage, 0x7f840b, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetAlignment, 0x7f9a22, void, Params(eActorAlignment unk1), Args(unk1));
	DefineMethod(SSetCanBeResurrected, 0x7f88a0, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetCanDamageBeReflected, 0x408786, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetCanShowHealth, 0x7f9a2b, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetSummonCaster, 0x7f8091, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SSetSummoned, 0x7f8088, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SSetUsingPowerDamage, 0x408712, void, Params(bool unk1), Args(unk1));
	DefineMethod(SStartActiveSkillReload, 0x802ae9, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SSubtractReloadDamage, 0x7f980a, void, Params(float unk1), Args(unk1));

	DefineMethod(RemoveBuffsAndDebuffs, 0x800c5b, void, Params(bool unk1, bool debuffs, bool buffs), Args(unk1, debuffs, buffs));

	enum Flags {
		CAN_LEVEL_UP = 0x1,
		IS_HERO = 0x2,
		DROPS_SPELLBOOK = 0x4,
	};

	// 0x000
	FillStruct(0x000, 0x014);
	// 0x014
	eActorAlignment alignment;
	// 0x018
	void* monsterLevel; // call sub_7f235a("monster_level")
	// 0x7f23a7 Skill* GetSkill
	// 0x7f2310 double GetSkillExperience
	// 0x01c
	FillStruct(0x01c, 0x028);
	// 0x028
	unsigned int mapLocationId;
	// 0x02c
	bool canShowHealth;
	// 0x02d
	bool canBeResurrected;
	// 0x02e
	bool b_02e;
	// 0x02f
	bool b_02f;
	// 0x030
	FillStruct(0x030, 0x03c);
	// 0x03c
	int tuningPointId;
	// 0x040
	FillStruct(0x040, 0x044);
	// 0x044
	Goid_* corpse;
	// 0x048
	FillStruct(0x048, 0x04c);
	// 0x04c
	Goid_* summoned;
	// 0x050
	Goid_* summonCaster;
	// 0x054
	FillStruct(0x054, 0x058);
	// 0x058
	float summonDamageBonusPercent; // double?
	// 0x05c
	FillStruct(0x05c, 0x060);
	// 0x060
	float summonAttackSpeedBonusPercent;; // double?
	// 0x064
	FillStruct(0x064, 0x068);
	// 0x068
	float magicFindChance;; // double?
	// 0x06c
	FillStruct(0x06c, 0x070);
	// 0x070
	float freezeChance;
	// 0x074
	int bonusSkillPoints;
	// 0x078
	bool canDamageBeReflected;
	// 0x079
	bool b_079;
	// 0x07a
	bool b_07a;
	// 0x07b
	bool b_07b;
	// 0x07c
	Flags flags;
	// 0x080
	FillStruct(0x080, 0x088);
	// 0x088
	bool b_088;
	// 0x089
	bool canCast;
	// 0x08a
	bool b_08a;
	// 0x08b
	bool b_08b;
	// 0x08c
	FillStruct(0x08c, 0x090);
	// 0x090
	float sacrificePercent; // double?
	// 0x094
	FillStruct(0x094, 0x098);
	// 0x098
	float castReloadBonusPercent; // double?
	// 0x09c
	FillStruct(0x09c, 0x0a0);
	// 0x0a0
	float meleeReloadBonusPercent; // double?
	// 0x0a4
	FillStruct(0x0a4, 0x0a8);
	// 0x0a8
	float rangedReloadBonusPercent; // double?
	// 0x0ac
	FillStruct(0x0ac, 0x0b0);
	// 0x0b0
	float healingBonusPercent;
	// 0x0b4
	bool b_0b4;
	// 0x0b5
	bool markedDeath;
	// 0x0b6
	bool b_0b6;
	// 0x0b7
	bool markedAgony;
	// 0x0b8
	bool b_0b8;
	// 0x0b9
	bool markedHarvest;
	// 0x0ba
	bool b_0ba;
	// 0x0bb
	bool markedFire;
	// 0x0bc
	FillStruct(0x0bc, 0x0c8);
	// 0x0c8
	gpbstring<char> currentActiveSkill;
	// 0x0cc
	bool activeSkillSelected;
	// 0x0cd
	bool b_0cd;
	// 0x0ce
	bool b_0ce;
	// 0x0cf
	bool b_0cf;
	// 0x0d0
	float activeSkillReloadMaxDamage;
	// 0x0d4
	float activeSkillReloadDamage;
	// 0x0d8
	FillStruct(0x0d8, 0x0dc);
	// 0x0dc
	float activeSkillReloadBonus;
	// 0x0e0
	bool activeSkillReady;
	// 0x0e1
	bool activeSkillRelease;
	// 0x0e2
	bool usingActiveSkill;
	// 0x0e3
	bool b_0e3;
	// 0x0e4
	eActiveSkillDelivery activeSkillDelivery;
	// 0x0e8
	FFXID_* preLaunchFFXId;
	// 0x0ec
	bool usingPowerDamage;
	// 0x0ed
	bool b_0ed;
	// 0x0ee
	bool b_0ee;
	// 0x0ef
	bool b_0ef;
	// 0x0f0
	FillStruct(0x0f0, 0x0f4);
	// 0x0f4
	// GetGenericState
	// GetHasPowerDamageState
	// GetHasWeaponEnchant
	void* ptr_0f4;
	// 0x0f8
	FillStruct(0x0f8, 0x128);
	// 0x128
	float debuffResistance; // double?
	// 0x12c
	FillStruct(0x12c, 0x130);
	// 0x130
	float buffResistance; // double?
	// 0x134
	FillStruct(0x134, 0x16c);
	// 0x16c
	float naturalSkillLevel;
};

STATIC_ASSERT_OFFSETOF(GoActor, alignment, 0x014);
STATIC_ASSERT_OFFSETOF(GoActor, mapLocationId, 0x028);
STATIC_ASSERT_OFFSETOF(GoActor, freezeChance, 0x070);
STATIC_ASSERT_OFFSETOF(GoActor, sacrificePercent, 0x090);
STATIC_ASSERT_OFFSETOF(GoActor, meleeReloadBonusPercent, 0x0a0);
STATIC_ASSERT_OFFSETOF(GoActor, healingBonusPercent, 0x0b0);
STATIC_ASSERT_OFFSETOF(GoActor, activeSkillReloadMaxDamage, 0x0d0);
STATIC_ASSERT_OFFSETOF(GoActor, activeSkillReady, 0x0e0);
STATIC_ASSERT_OFFSETOF(GoActor, activeSkillRelease, 0x0e1);
STATIC_ASSERT_OFFSETOF(GoActor, usingActiveSkill, 0x0e2);
STATIC_ASSERT_OFFSETOF(GoActor, usingPowerDamage, 0x0ec);
STATIC_ASSERT_OFFSETOF(GoActor, debuffResistance, 0x128);
STATIC_ASSERT_OFFSETOF(GoActor, naturalSkillLevel, 0x16c);

int s() {
	return sizeof(GoActor);
}

#pragma once

class GoActor {
public:
	struct GenericState {

	};

	DefineStaticMethod(FUBI_NetToInstance, 0x4087f1, GoActor*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoActor*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoActor* unk1); //0x004087e8
	DefineMethod(CanUseActiveSkill, 0x802932, bool, Params(eActiveSkillDelivery unk1), Args(eActiveSkillDelivery unk1));
	DefineMethod(DoesActiveEquipmentSupportSkill, 0x802a8f, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(DoesEquipmentSupportSkill, 0x802a35, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineConstMethod(GetActiveSkillReady, 0x4086d6, bool, Params(), Args());
	DefineConstMethod(GetActiveSkillRelease, 0x4086dd, bool, Params(), Args());
	DefineConstMethod(GetCanBeResurrected, 0x408782, bool, Params(), Args());
	DefineMethod(GetCanCast, 0x40a2fa, bool, Params(), Args());
	DefineMethod(GetCanDamageBeReflected, 0x408793, bool, Params(), Args());
	DefineConstMethod(GetCanDualWield, 0x7f6c6e, bool, Params(), Args());
	DefineConstMethod(GetCanLevelUp, 0x40859b, bool, Params(), Args());
	DefineConstMethod(GetCanShowHealth, 0x40877e, bool, Params(), Args());
	DefineConstMethod(GetDropsSpellbook, 0x4085ab, bool, Params(), Args());
	DefineMethod(GetGenericState, 0x7ffa50, bool, Params(int unk1, GoActor::GenericState& unk2), Args(int unk1, GoActor::GenericState& unk2));
	DefineConstMethod(GetHasPowerDamageState, 0x7f98c1, bool, Params(), Args());
	DefineMethod(GetHasWeaponEnchant, 0x7fa592, bool, Params(), Args());
	DefineConstMethod(GetIsHero, 0x4085a2, bool, Params(), Args());
	DefineConstMethod(GetIsMale, 0x7f9644, bool, Params(), Args());
	DefineConstMethod(GetIsSummoned, 0x40863b, bool, Params(), Args());
	DefineMethod(GetMarkedAgony, 0x40a32b, bool, Params(), Args());
	DefineMethod(GetMarkedDeath, 0x40a324, bool, Params(), Args());
	DefineMethod(GetMarkedFire, 0x40a348, bool, Params(), Args());
	DefineMethod(GetMarkedHarvest, 0x40a332, bool, Params(), Args());
	DefineConstMethod(GetUsingActiveSkill, 0x4086f4, bool, Params(), Args());
	DefineConstMethod(GetUsingPowerDamage, 0x408722, bool, Params(), Args());
	DefineConstMethod(HasAuraState, 0x7fb5bb, bool, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(HasGenericState, 0x7fb4a7, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(IsActiveSkillSelected, 0x408763, bool, Params(), Args());
	DefineMethod(SetNaturalSkillLevel, 0x408684, bool, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
	DefineMethod(SetSkillLevel, 0x40869c, bool, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
	DefineMethod(SetSkillLevelBase, 0x7f98f1, bool, Params(const char* unk1, float unk2, bool unk3), Args(const char* unk1, float unk2, bool unk3));
	DefineMethod(SRemoveSummoned, 0x7ffac0, bool, Params(), Args());
	/*GoActor*/ public: gpbstring<char> /*__thiscall*/ MakeNatrualResistanceToolTipAnsi() const; //0x007ffc6d
	/*GoActor*/ public: gpbstring<char> /*__thiscall*/ MakeNaturalResistanceListAnsi() const; //0x007ff33e
	/*GoActor*/ public: gpbstring<char> /*__thiscall*/ MakeResistanceListAnsi(); //0x007ff1bd
	/*GoActor*/ public: gpbstring<char> /*__thiscall*/ MakeResistanceToolTipAnsi(); //0x007ff0e9
	/*GoActor*/ public: gpbstring<char> /*__thiscall*/ MakeResistanceToolTipAnsi(eDamageType unk1, float unk2) const; //0x007fe5cf
	DefineConstMethod(GetSkill, 0x4086b4, Skill*, Params(const char* unk1), Args(const char* unk1));
	/*GoActor*/ public: const gpbstring<char>& /*__thiscall*/ GetCurrentActiveSkill() const; //0x0040874c
	/*GoActor*/ public: const gpbstring<char>& /*__thiscall*/ GetGenericStateName(int unk1) const; //0x007f958b
	/*GoActor*/ public: const gpbstring<char>& /*__thiscall*/ GetQuickSlotSkill(int unk1) const; //0x007faf9d
	/*GoActor*/ public: const gpbstring<char>& /*__thiscall*/ GetRace() const; //0x007f960d
	/*GoActor*/ public: const FFXID_* /*__thiscall*/ GetPreLaunchFFXId() const; //0x0040870b
	/*GoActor*/ public: const Goid_* /*__thiscall*/ GetCorpse(); //0x004087ae
	/*GoActor*/ public: const Goid_* /*__thiscall*/ GetGenericStateCaster(const char* unk1) const; //0x007fb574
	/*GoActor*/ public: const Goid_* /*__thiscall*/ GetGenericStateCaster(int unk1) const; //0x007f9551
	/*GoActor*/ public: const Goid_* /*__thiscall*/ GetGenericStateSpellGoid(const char* unk1) const; //0x007fb52d
	/*GoActor*/ public: const Goid_* /*__thiscall*/ GetGenericStateSpellGoid(int unk1) const; //0x007f9517
	/*GoActor*/ public: const Goid_* /*__thiscall*/ GetSummonCaster(); //0x0040862a
	/*GoActor*/ public: const Goid_* /*__thiscall*/ GetSummoned(); //0x00408619
	/*GoActor*/ public: const Goid_* /*__thiscall*/ SCreatePowerObject(const gpbstring<char>& unk1); //0x007f9837
	DefineConstMethod(GetSkillExperience, 0x40864e, double, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(GetActiveSkillDelivery, 0x408773, eActiveSkillDelivery, Params(), Args());
	DefineConstMethod(GetAlignment, 0x40877a, eActorAlignment, Params(), Args());
	DefineConstMethod(GetActiveSkillReloadBonus, 0x40a2d8, float, Params(), Args());
	DefineConstMethod(GetActiveSkillReloadDamage, 0x4086c0, float, Params(), Args());
	DefineConstMethod(GetActiveSkillReloadMaxDamage, 0x4086c7, float, Params(), Args());
	DefineMethod(GetAuraValue, 0x7fb66b, float, Params(const char* unk1, const Goid_* unk2), Args(const char* unk1, const Goid_* unk2));
	DefineMethod(GetBuffResistance, 0x40a2ee, float, Params(), Args());
	DefineMethod(GetCastReloadBonusPercent, 0x40a30f, float, Params(), Args());
	DefineMethod(GetChanceToCastTemplate, 0x7fc511, float, Params(const gpbstring<char>& unk1, bool unk2), Args(const gpbstring<char>& unk1, bool unk2));
	DefineMethod(GetDebuffResistance, 0x40a2e7, float, Params(), Args());
	DefineMethod(GetFreezeChance, 0x40a2e3, float, Params(), Args());
	DefineConstMethod(GetGenericStateSpellLevel, 0x7fb4e5, float, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(GetHealingBonusPercent, 0x40a31d, float, Params(), Args());
	DefineConstMethod(GetHighestSkillLevel, 0x7f82e9, float, Params(), Args());
	DefineConstMethod(GetMagicFindChance, 0x40a2df, float, Params(), Args());
	DefineMethod(GetMeleeReloadBonusPercent, 0x40a301, float, Params(), Args());
	DefineConstMethod(GetMonsterLevel, 0x7f6c8b, float, Params(), Args());
	DefineMethod(GetNaturalResistance, 0x7fafa6, float, Params(eDamageType unk1), Args(eDamageType unk1));
	DefineConstMethod(GetNaturalSkillLevel, 0x408672, float, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(GetNaturalStateResistance, 0x7fa874, float, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetRangedReloadBonusPercent, 0x40a308, float, Params(), Args());
	DefineMethod(GetResistance, 0x7fafe6, float, Params(eDamageType unk1), Args(eDamageType unk1));
	DefineConstMethod(GetSacrificePercent, 0x40a316, float, Params(), Args());
	DefineConstMethod(GetSkillLevel, 0x408660, float, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(GetSpotRequestWaitTime, 0x7f96b6, float, Params(), Args());
	DefineMethod(GetStateResistance, 0x7fa8cb, float, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetStrongestAuraValue, 0x7fb5f9, float, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(GetSummonAttackSpeedBonusPercent, 0x40a2d4, float, Params(), Args());
	DefineConstMethod(GetSummonDamageBonusPercent, 0x40a2d0, float, Params(), Args());
	DefineConstMethod(GetUnconsciousDuration, 0x7f88d9, float, Params(), Args());
	DefineConstMethod(GetBarBackroundIndex, 0x7f979a, int, Params(), Args());
	DefineConstMethod(GetBonusSkillPoints, 0x40873b, int, Params(), Args());
	DefineConstMethod(GetMaxBuffs, 0x7f96ef, int, Params(), Args());
	DefineConstMethod(GetMaxDebuffs, 0x7f9728, int, Params(), Args());
	DefineMethod(GetNumAppliedBuffs, 0x7fa4f9, int, Params(), Args());
	DefineMethod(GetNumAppliedDebuffs, 0x7fa561, int, Params(), Args());
	DefineMethod(GetTuningPointId, 0x4087aa, int, Params(), Args());
	DefineMethod(RCUpdatePortraitTexture, 0x7f81cb, FuBi::Cookie__*, Params(), Args());
	/*GoActor*/ public: unsigned long /*__thiscall*/ GetMapLocationId() const; //0x0040864a
	DefineMethod(ActivateQuickSlotSkill, 0x40876a, void, Params(int unk1), Args(int unk1));
	DefineMethod(GetClass, 0x40c880, void, Params(gpbstring<char>& unk1), Args(gpbstring<char>& unk1));
	DefineMethod(RCAddAuraState, 0x802016, void, Params(const char* unk1, const char* unk2, const Goid_* unk3, float unk4, const FFXID_* unk5), Args(const char* unk1, const char* unk2, const Goid_* unk3, float unk4, const FFXID_* unk5));
	DefineMethod(RCAddBonusSkillPoints, 0x7f6b80, void, Params(int unk1), Args(int unk1));
	DefineMethod(RCAddGenericState, 0x80126e, void, Params(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6, bool unk7), Args(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6, bool unk7));
	DefineMethod(RCAddIncantationState, 0x80136d, void, Params(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, const char* unk6), Args(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, const char* unk6));
	DefineMethod(RCRecalcReloadAmount, 0x7f6f02, void, Params(float unk1, float unk2, unsigned long unk3), Args(float unk1, float unk2, unsigned long unk3));
	DefineMethod(RCRemoveAuraState, 0x801b7a, void, Params(const char* unk1, const Goid_* unk2), Args(const char* unk1, const Goid_* unk2));
	DefineMethod(RCRemoveGenericState, 0x7fed07, void, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(RCResetReloadDamage, 0x7f69a9, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSetActiveSkillRelease, 0x7f6a99, void, Params(bool unk1, unsigned long unk2), Args(bool unk1, unsigned long unk2));
	DefineMethod(RCSetActiveSkillReloadBonus, 0x7f9939, void, Params(float unk1), Args(float unk1));
	DefineMethod(RCSetAlignment, 0x7f86d6, void, Params(eActorAlignment unk1), Args(eActorAlignment unk1));
	DefineMethod(RCSetCanBeResurrected, 0x7f7082, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSetCanShowHealth, 0x7f87bb, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSetCurrentActiveSkill, 0x802f9d, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RCSetNaturalSkillLevel, 0x7fb7b4, void, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
	DefineMethod(RCSetSkillLevels, 0x7f6c99, void, Params(float unk1, float unk2, float unk3), Args(float unk1, float unk2, float unk3));
	DefineMethod(RCSetSummonCaster, 0x7f686d, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCSetSummoned, 0x7f675a, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCSetUnconsiousEndTime, 0x7f7179, void, Params(double unk1), Args(double unk1));
	DefineMethod(RCSetUsingActiveSkill, 0x7fb6cd, void, Params(bool unk1, unsigned long unk2), Args(bool unk1, unsigned long unk2));
	DefineMethod(RCStartActiveSkillReload, 0x7f6de0, void, Params(float unk1, float unk2, unsigned long unk3), Args(float unk1, float unk2, unsigned long unk3));
	DefineMethod(RCSubtractReloadDamage, 0x7f8322, void, Params(float unk1), Args(float unk1));
	DefineMethod(RSResetUnconsciousDuration, 0x7f890a, void, Params(float unk1), Args(float unk1));
	DefineMethod(RSSetActiveSkillRelease, 0x7f8414, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RSSetActiveSkillReloadBonus, 0x7fa6bf, void, Params(float unk1), Args(float unk1));
	DefineMethod(RSSetCurrentActiveSkill, 0x803082, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RSSetNaturalSkillLevel, 0x7fc7d9, void, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
	DefineMethod(RSSetSkillLevels, 0x7f8523, void, Params(float unk1, float unk2, float unk3), Args(float unk1, float unk2, float unk3));
	DefineMethod(RSSetUsingActiveSkill, 0x7fc6d3, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SAddAuraState, 0x8021b8, void, Params(const char* unk1, const char* unk2, const Goid_* unk3, float unk4, const FFXID_* unk5), Args(const char* unk1, const char* unk2, const Goid_* unk3, float unk4, const FFXID_* unk5));
	DefineMethod(SAddBonusSkillPoints, 0x7f851a, void, Params(int unk1), Args(int unk1));
	DefineMethod(SAddGenericState, 0x80188c, void, Params(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6, bool unk7), Args(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6, bool unk7));
	DefineMethod(SAddGenericState, 0x4085b5, void, Params(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6), Args(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6));
	DefineMethod(SAddIncantationState, 0x8018b5, void, Params(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, const char* unk6), Args(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, const char* unk6));
	DefineMethod(SCastPassiveSpellsOnHit, 0x4087d7, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SCastPassiveSpellsWhenHit, 0x4087c6, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SCreateCorpse, 0x7f9a34, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetActiveSkillReady, 0x7fa5e7, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetActiveSkillRelease, 0x4086e4, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetActiveSkillReloadBonus, 0x40ace7, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetActiveSkillSelected, 0x408753, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetBonusSkillPoints, 0x40873f, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetBuffResistance, 0x40ad5b, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetCanCast, 0x40ad6b, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetClass, 0x40b314, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetCurrentActiveSkill, 0x8028c7, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetDebuffResistance, 0x40ad29, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetFreezeChance, 0x40ad04, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetHealingBonusPercent, 0x40ad8b, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetMagicFindChance, 0x40acf7, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetMarkedAgony, 0x40adab, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetMarkedDeath, 0x40ad9b, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetMarkedFire, 0x40adcb, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetMarkedHarvest, 0x40adbb, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetNaturalResistance, 0x7feebe, void, Params(eDamageType unk1, float unk2), Args(eDamageType unk1, float unk2));
	DefineMethod(SetNaturalStateResistance, 0x8001a3, void, Params(const gpbstring<char>& unk1, float unk2), Args(const gpbstring<char>& unk1, float unk2));
	DefineMethod(SetPreLaunchFFXId, 0x4086fb, void, Params(const FFXID_* unk1), Args(const FFXID_* unk1));
	DefineMethod(SetResistance, 0x7fef22, void, Params(eDamageType unk1, float unk2), Args(eDamageType unk1, float unk2));
	DefineMethod(SetSacrificePercent, 0x40ad7b, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetStateResistance, 0x800228, void, Params(const gpbstring<char>& unk1, float unk2), Args(const gpbstring<char>& unk1, float unk2));
	DefineMethod(SetSummonCaster, 0x40862e, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetSummoned, 0x40861d, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetTuningPointId, 0x40879d, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetUsingActiveSkill, 0x7fae9b, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SRecalcReloadAmount, 0x802d7b, void, Params(), Args());
	DefineMethod(SRemoveAuraState, 0x80210b, void, Params(const char* unk1, const Goid_* unk2), Args(const char* unk1, const Goid_* unk2));
	DefineMethod(SRemoveBuffs, 0x4085fa, void, Params(), Args());
	DefineMethod(SRemoveDebuffs, 0x408606, void, Params(), Args());
	DefineMethod(SRemoveGenericState, 0x7ffa47, void, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(SRemoveSpellState, 0x7ffbcf, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SRemoveSpellStates, 0x4085dd, void, Params(bool unk1, bool unk2), Args(bool unk1, bool unk2));
	DefineMethod(SResetReloadDamage, 0x4086ce, void, Params(), Args());
	DefineMethod(SResetReloadDamage, 0x7f840b, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SSetAlignment, 0x7f9a22, void, Params(eActorAlignment unk1), Args(eActorAlignment unk1));
	DefineMethod(SSetCanBeResurrected, 0x7f88a0, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SSetCanDamageBeReflected, 0x408786, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SSetCanShowHealth, 0x7f9a2b, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SSetSummonCaster, 0x7f8091, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SSetSummoned, 0x7f8088, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SSetUsingPowerDamage, 0x408712, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SStartActiveSkillReload, 0x802ae9, void, Params(), Args());
	DefineMethod(SSubtractReloadDamage, 0x7f980a, void, Params(float unk1), Args(float unk1));
};

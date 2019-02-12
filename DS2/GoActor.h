#pragma once

class GoActor {
public:
	struct GenericState {

	};

	/*GoActor*/ private: /*static*/ GoActor* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x004087f1
	/*GoActor*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoActor* unk1); //0x004087e8
	/*GoActor*/ public: bool /*__thiscall*/ CanUseActiveSkill(eActiveSkillDelivery unk1); //0x00802932
	/*GoActor*/ public: bool /*__thiscall*/ DoesActiveEquipmentSupportSkill(const gpbstring<char>& unk1); //0x00802a8f
	/*GoActor*/ public: bool /*__thiscall*/ DoesEquipmentSupportSkill(const gpbstring<char>& unk1); //0x00802a35
	/*GoActor*/ public: bool /*__thiscall*/ GetActiveSkillReady() const; //0x004086d6
	/*GoActor*/ public: bool /*__thiscall*/ GetActiveSkillRelease() const; //0x004086dd
	/*GoActor*/ public: bool /*__thiscall*/ GetCanBeResurrected() const; //0x00408782
	/*GoActor*/ public: bool /*__thiscall*/ GetCanCast(); //0x0040a2fa
	/*GoActor*/ public: bool /*__thiscall*/ GetCanDamageBeReflected(); //0x00408793
	/*GoActor*/ public: bool /*__thiscall*/ GetCanDualWield() const; //0x007f6c6e
	/*GoActor*/ public: bool /*__thiscall*/ GetCanLevelUp() const; //0x0040859b
	/*GoActor*/ public: bool /*__thiscall*/ GetCanShowHealth() const; //0x0040877e
	/*GoActor*/ public: bool /*__thiscall*/ GetDropsSpellbook() const; //0x004085ab
	/*GoActor*/ public: bool /*__thiscall*/ GetGenericState(int unk1, GoActor::GenericState& unk2); //0x007ffa50
	/*GoActor*/ public: bool /*__thiscall*/ GetHasPowerDamageState() const; //0x007f98c1
	/*GoActor*/ public: bool /*__thiscall*/ GetHasWeaponEnchant(); //0x007fa592
	/*GoActor*/ public: bool /*__thiscall*/ GetIsHero() const; //0x004085a2
	/*GoActor*/ public: bool /*__thiscall*/ GetIsMale() const; //0x007f9644
	/*GoActor*/ public: bool /*__thiscall*/ GetIsSummoned() const; //0x0040863b
	/*GoActor*/ public: bool /*__thiscall*/ GetMarkedAgony(); //0x0040a32b
	/*GoActor*/ public: bool /*__thiscall*/ GetMarkedDeath(); //0x0040a324
	/*GoActor*/ public: bool /*__thiscall*/ GetMarkedFire(); //0x0040a348
	/*GoActor*/ public: bool /*__thiscall*/ GetMarkedHarvest(); //0x0040a332
	/*GoActor*/ public: bool /*__thiscall*/ GetUsingActiveSkill() const; //0x004086f4
	/*GoActor*/ public: bool /*__thiscall*/ GetUsingPowerDamage() const; //0x00408722
	/*GoActor*/ public: bool /*__thiscall*/ HasAuraState(const char* unk1) const; //0x007fb5bb
	/*GoActor*/ public: bool /*__thiscall*/ HasGenericState(const char* unk1) const; //0x007fb4a7
	/*GoActor*/ public: bool /*__thiscall*/ IsActiveSkillSelected(); //0x00408763
	/*GoActor*/ public: bool /*__thiscall*/ SetNaturalSkillLevel(const char* unk1, float unk2); //0x00408684
	/*GoActor*/ public: bool /*__thiscall*/ SetSkillLevel(const char* unk1, float unk2); //0x0040869c
	/*GoActor*/ public: bool /*__thiscall*/ SetSkillLevelBase(const char* unk1, float unk2, bool unk3); //0x007f98f1
	/*GoActor*/ public: bool /*__thiscall*/ SRemoveSummoned(); //0x007ffac0
	/*GoActor*/ public: gpbstring<char> /*__thiscall*/ MakeNatrualResistanceToolTipAnsi() const; //0x007ffc6d
	/*GoActor*/ public: gpbstring<char> /*__thiscall*/ MakeNaturalResistanceListAnsi() const; //0x007ff33e
	/*GoActor*/ public: gpbstring<char> /*__thiscall*/ MakeResistanceListAnsi(); //0x007ff1bd
	/*GoActor*/ public: gpbstring<char> /*__thiscall*/ MakeResistanceToolTipAnsi(); //0x007ff0e9
	/*GoActor*/ public: gpbstring<char> /*__thiscall*/ MakeResistanceToolTipAnsi(eDamageType unk1, float unk2) const; //0x007fe5cf
	/*GoActor*/ public: Skill* /*__thiscall*/ GetSkill(const char* unk1) const; //0x004086b4
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
	/*GoActor*/ public: double /*__thiscall*/ GetSkillExperience(const char* unk1) const; //0x0040864e
	/*GoActor*/ public: eActiveSkillDelivery /*__thiscall*/ GetActiveSkillDelivery(); //0x00408773
	/*GoActor*/ public: eActorAlignment /*__thiscall*/ GetAlignment() const; //0x0040877a
	/*GoActor*/ public: float /*__thiscall*/ GetActiveSkillReloadBonus() const; //0x0040a2d8
	/*GoActor*/ public: float /*__thiscall*/ GetActiveSkillReloadDamage() const; //0x004086c0
	/*GoActor*/ public: float /*__thiscall*/ GetActiveSkillReloadMaxDamage() const; //0x004086c7
	/*GoActor*/ public: float /*__thiscall*/ GetAuraValue(const char* unk1, const Goid_* unk2); //0x007fb66b
	/*GoActor*/ public: float /*__thiscall*/ GetBuffResistance(); //0x0040a2ee
	/*GoActor*/ public: float /*__thiscall*/ GetCastReloadBonusPercent(); //0x0040a30f
	/*GoActor*/ public: float /*__thiscall*/ GetChanceToCastTemplate(const gpbstring<char>& unk1, bool unk2); //0x007fc511
	/*GoActor*/ public: float /*__thiscall*/ GetDebuffResistance(); //0x0040a2e7
	/*GoActor*/ public: float /*__thiscall*/ GetFreezeChance(); //0x0040a2e3
	/*GoActor*/ public: float /*__thiscall*/ GetGenericStateSpellLevel(const char* unk1) const; //0x007fb4e5
	/*GoActor*/ public: float /*__thiscall*/ GetHealingBonusPercent() const; //0x0040a31d
	/*GoActor*/ public: float /*__thiscall*/ GetHighestSkillLevel() const; //0x007f82e9
	/*GoActor*/ public: float /*__thiscall*/ GetMagicFindChance() const; //0x0040a2df
	/*GoActor*/ public: float /*__thiscall*/ GetMeleeReloadBonusPercent(); //0x0040a301
	/*GoActor*/ public: float /*__thiscall*/ GetMonsterLevel() const; //0x007f6c8b
	/*GoActor*/ public: float /*__thiscall*/ GetNaturalResistance(eDamageType unk1); //0x007fafa6
	/*GoActor*/ public: float /*__thiscall*/ GetNaturalSkillLevel(const char* unk1) const; //0x00408672
	/*GoActor*/ public: float /*__thiscall*/ GetNaturalStateResistance(const gpbstring<char>& unk1); //0x007fa874
	/*GoActor*/ public: float /*__thiscall*/ GetRangedReloadBonusPercent(); //0x0040a308
	/*GoActor*/ public: float /*__thiscall*/ GetResistance(eDamageType unk1); //0x007fafe6
	/*GoActor*/ public: float /*__thiscall*/ GetSacrificePercent() const; //0x0040a316
	/*GoActor*/ public: float /*__thiscall*/ GetSkillLevel(const char* unk1) const; //0x00408660
	/*GoActor*/ public: float /*__thiscall*/ GetSpotRequestWaitTime() const; //0x007f96b6
	/*GoActor*/ public: float /*__thiscall*/ GetStateResistance(const gpbstring<char>& unk1); //0x007fa8cb
	/*GoActor*/ public: float /*__thiscall*/ GetStrongestAuraValue(const char* unk1); //0x007fb5f9
	/*GoActor*/ public: float /*__thiscall*/ GetSummonAttackSpeedBonusPercent() const; //0x0040a2d4
	/*GoActor*/ public: float /*__thiscall*/ GetSummonDamageBonusPercent() const; //0x0040a2d0
	/*GoActor*/ public: float /*__thiscall*/ GetUnconsciousDuration() const; //0x007f88d9
	/*GoActor*/ public: int /*__thiscall*/ GetBarBackroundIndex() const; //0x007f979a
	/*GoActor*/ public: int /*__thiscall*/ GetBonusSkillPoints() const; //0x0040873b
	/*GoActor*/ public: int /*__thiscall*/ GetMaxBuffs() const; //0x007f96ef
	/*GoActor*/ public: int /*__thiscall*/ GetMaxDebuffs() const; //0x007f9728
	/*GoActor*/ public: int /*__thiscall*/ GetNumAppliedBuffs(); //0x007fa4f9
	/*GoActor*/ public: int /*__thiscall*/ GetNumAppliedDebuffs(); //0x007fa561
	/*GoActor*/ public: int /*__thiscall*/ GetTuningPointId(); //0x004087aa
	/*GoActor*/ public: FuBi::Cookie__* /*__thiscall*/ RCUpdatePortraitTexture(); //0x007f81cb
	/*GoActor*/ public: unsigned long /*__thiscall*/ GetMapLocationId() const; //0x0040864a
	/*GoActor*/ public: void /*__thiscall*/ ActivateQuickSlotSkill(int unk1); //0x0040876a
	/*GoActor*/ public: void /*__thiscall*/ GetClass(gpbstring<char>& unk1); //0x0040c880
	/*GoActor*/ public: void /*__thiscall*/ RCAddAuraState(const char* unk1, const char* unk2, const Goid_* unk3, float unk4, const FFXID_* unk5); //0x00802016
	/*GoActor*/ public: void /*__thiscall*/ RCAddBonusSkillPoints(int unk1); //0x007f6b80
	/*GoActor*/ public: void /*__thiscall*/ RCAddGenericState(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6, bool unk7); //0x0080126e
	/*GoActor*/ public: void /*__thiscall*/ RCAddIncantationState(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, const char* unk6); //0x0080136d
	/*GoActor*/ public: void /*__thiscall*/ RCRecalcReloadAmount(float unk1, float unk2, unsigned long unk3); //0x007f6f02
	/*GoActor*/ public: void /*__thiscall*/ RCRemoveAuraState(const char* unk1, const Goid_* unk2); //0x00801b7a
	/*GoActor*/ public: void /*__thiscall*/ RCRemoveGenericState(const char* unk1); //0x007fed07
	/*GoActor*/ public: void /*__thiscall*/ RCResetReloadDamage(bool unk1); //0x007f69a9
	/*GoActor*/ public: void /*__thiscall*/ RCSetActiveSkillRelease(bool unk1, unsigned long unk2); //0x007f6a99
	/*GoActor*/ public: void /*__thiscall*/ RCSetActiveSkillReloadBonus(float unk1); //0x007f9939
	/*GoActor*/ public: void /*__thiscall*/ RCSetAlignment(eActorAlignment unk1); //0x007f86d6
	/*GoActor*/ public: void /*__thiscall*/ RCSetCanBeResurrected(bool unk1); //0x007f7082
	/*GoActor*/ public: void /*__thiscall*/ RCSetCanShowHealth(bool unk1); //0x007f87bb
	/*GoActor*/ public: void /*__thiscall*/ RCSetCurrentActiveSkill(const gpbstring<char>& unk1); //0x00802f9d
	/*GoActor*/ public: void /*__thiscall*/ RCSetNaturalSkillLevel(const char* unk1, float unk2); //0x007fb7b4
	/*GoActor*/ public: void /*__thiscall*/ RCSetSkillLevels(float unk1, float unk2, float unk3); //0x007f6c99
	/*GoActor*/ public: void /*__thiscall*/ RCSetSummonCaster(const Goid_* unk1); //0x007f686d
	/*GoActor*/ public: void /*__thiscall*/ RCSetSummoned(const Goid_* unk1); //0x007f675a
	/*GoActor*/ public: void /*__thiscall*/ RCSetUnconsiousEndTime(double unk1); //0x007f7179
	/*GoActor*/ public: void /*__thiscall*/ RCSetUsingActiveSkill(bool unk1, unsigned long unk2); //0x007fb6cd
	/*GoActor*/ public: void /*__thiscall*/ RCStartActiveSkillReload(float unk1, float unk2, unsigned long unk3); //0x007f6de0
	/*GoActor*/ public: void /*__thiscall*/ RCSubtractReloadDamage(float unk1); //0x007f8322
	/*GoActor*/ public: void /*__thiscall*/ RSResetUnconsciousDuration(float unk1); //0x007f890a
	/*GoActor*/ public: void /*__thiscall*/ RSSetActiveSkillRelease(bool unk1); //0x007f8414
	/*GoActor*/ public: void /*__thiscall*/ RSSetActiveSkillReloadBonus(float unk1); //0x007fa6bf
	/*GoActor*/ public: void /*__thiscall*/ RSSetCurrentActiveSkill(const gpbstring<char>& unk1); //0x00803082
	/*GoActor*/ public: void /*__thiscall*/ RSSetNaturalSkillLevel(const char* unk1, float unk2); //0x007fc7d9
	/*GoActor*/ public: void /*__thiscall*/ RSSetSkillLevels(float unk1, float unk2, float unk3); //0x007f8523
	/*GoActor*/ public: void /*__thiscall*/ RSSetUsingActiveSkill(bool unk1); //0x007fc6d3
	/*GoActor*/ public: void /*__thiscall*/ SAddAuraState(const char* unk1, const char* unk2, const Goid_* unk3, float unk4, const FFXID_* unk5); //0x008021b8
	/*GoActor*/ public: void /*__thiscall*/ SAddBonusSkillPoints(int unk1); //0x007f851a
	/*GoActor*/ public: void /*__thiscall*/ SAddGenericState(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6, bool unk7); //0x0080188c
	/*GoActor*/ public: void /*__thiscall*/ SAddGenericState(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, float unk6); //0x004085b5
	/*GoActor*/ public: void /*__thiscall*/ SAddIncantationState(const char* unk1, const char* unk2, float unk3, const Goid_* unk4, const Goid_* unk5, const char* unk6); //0x008018b5
	/*GoActor*/ public: void /*__thiscall*/ SCastPassiveSpellsOnHit(const Goid_* unk1); //0x004087d7
	/*GoActor*/ public: void /*__thiscall*/ SCastPassiveSpellsWhenHit(const Goid_* unk1); //0x004087c6
	/*GoActor*/ public: void /*__thiscall*/ SCreateCorpse(const Goid_* unk1); //0x007f9a34
	/*GoActor*/ public: void /*__thiscall*/ SetActiveSkillReady(bool unk1); //0x007fa5e7
	/*GoActor*/ public: void /*__thiscall*/ SetActiveSkillRelease(bool unk1); //0x004086e4
	/*GoActor*/ public: void /*__thiscall*/ SetActiveSkillReloadBonus(float unk1); //0x0040ace7
	/*GoActor*/ public: void /*__thiscall*/ SetActiveSkillSelected(bool unk1); //0x00408753
	/*GoActor*/ public: void /*__thiscall*/ SetBonusSkillPoints(int unk1); //0x0040873f
	/*GoActor*/ public: void /*__thiscall*/ SetBuffResistance(float unk1); //0x0040ad5b
	/*GoActor*/ public: void /*__thiscall*/ SetCanCast(bool unk1); //0x0040ad6b
	/*GoActor*/ public: void /*__thiscall*/ SetClass(const gpbstring<char>& unk1); //0x0040b314
	/*GoActor*/ public: void /*__thiscall*/ SetCurrentActiveSkill(const gpbstring<char>& unk1); //0x008028c7
	/*GoActor*/ public: void /*__thiscall*/ SetDebuffResistance(float unk1); //0x0040ad29
	/*GoActor*/ public: void /*__thiscall*/ SetFreezeChance(float unk1); //0x0040ad04
	/*GoActor*/ public: void /*__thiscall*/ SetHealingBonusPercent(float unk1); //0x0040ad8b
	/*GoActor*/ public: void /*__thiscall*/ SetMagicFindChance(float unk1); //0x0040acf7
	/*GoActor*/ public: void /*__thiscall*/ SetMarkedAgony(bool unk1); //0x0040adab
	/*GoActor*/ public: void /*__thiscall*/ SetMarkedDeath(bool unk1); //0x0040ad9b
	/*GoActor*/ public: void /*__thiscall*/ SetMarkedFire(bool unk1); //0x0040adcb
	/*GoActor*/ public: void /*__thiscall*/ SetMarkedHarvest(bool unk1); //0x0040adbb
	/*GoActor*/ public: void /*__thiscall*/ SetNaturalResistance(eDamageType unk1, float unk2); //0x007feebe
	/*GoActor*/ public: void /*__thiscall*/ SetNaturalStateResistance(const gpbstring<char>& unk1, float unk2); //0x008001a3
	/*GoActor*/ public: void /*__thiscall*/ SetPreLaunchFFXId(const FFXID_* unk1); //0x004086fb
	/*GoActor*/ public: void /*__thiscall*/ SetResistance(eDamageType unk1, float unk2); //0x007fef22
	/*GoActor*/ public: void /*__thiscall*/ SetSacrificePercent(float unk1); //0x0040ad7b
	/*GoActor*/ public: void /*__thiscall*/ SetStateResistance(const gpbstring<char>& unk1, float unk2); //0x00800228
	/*GoActor*/ public: void /*__thiscall*/ SetSummonCaster(const Goid_* unk1); //0x0040862e
	/*GoActor*/ public: void /*__thiscall*/ SetSummoned(const Goid_* unk1); //0x0040861d
	/*GoActor*/ public: void /*__thiscall*/ SetTuningPointId(int unk1); //0x0040879d
	/*GoActor*/ public: void /*__thiscall*/ SetUsingActiveSkill(bool unk1); //0x007fae9b
	/*GoActor*/ public: void /*__thiscall*/ SRecalcReloadAmount(); //0x00802d7b
	/*GoActor*/ public: void /*__thiscall*/ SRemoveAuraState(const char* unk1, const Goid_* unk2); //0x0080210b
	/*GoActor*/ public: void /*__thiscall*/ SRemoveBuffs(); //0x004085fa
	/*GoActor*/ public: void /*__thiscall*/ SRemoveDebuffs(); //0x00408606
	/*GoActor*/ public: void /*__thiscall*/ SRemoveGenericState(const char* unk1); //0x007ffa47
	/*GoActor*/ public: void /*__thiscall*/ SRemoveSpellState(const gpbstring<char>& unk1); //0x007ffbcf
	/*GoActor*/ public: void /*__thiscall*/ SRemoveSpellStates(bool unk1, bool unk2); //0x004085dd
	/*GoActor*/ public: void /*__thiscall*/ SResetReloadDamage(); //0x004086ce
	/*GoActor*/ public: void /*__thiscall*/ SResetReloadDamage(bool unk1); //0x007f840b
	/*GoActor*/ public: void /*__thiscall*/ SSetAlignment(eActorAlignment unk1); //0x007f9a22
	/*GoActor*/ public: void /*__thiscall*/ SSetCanBeResurrected(bool unk1); //0x007f88a0
	/*GoActor*/ public: void /*__thiscall*/ SSetCanDamageBeReflected(bool unk1); //0x00408786
	/*GoActor*/ public: void /*__thiscall*/ SSetCanShowHealth(bool unk1); //0x007f9a2b
	/*GoActor*/ public: void /*__thiscall*/ SSetSummonCaster(const Goid_* unk1); //0x007f8091
	/*GoActor*/ public: void /*__thiscall*/ SSetSummoned(const Goid_* unk1); //0x007f8088
	/*GoActor*/ public: void /*__thiscall*/ SSetUsingPowerDamage(bool unk1); //0x00408712
	/*GoActor*/ public: void /*__thiscall*/ SStartActiveSkillReload(); //0x00802ae9
	/*GoActor*/ public: void /*__thiscall*/ SSubtractReloadDamage(float unk1); //0x007f980a
};

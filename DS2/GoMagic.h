#pragma once

#include "FuBi.h"

class GoMagic {
public:
	/*GoMagic*/ private: /*static*/ GoMagic* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00467930
	/*GoMagic*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoMagic* unk1); //0x00467927
	/*GoMagic*/ public: bool /*__thiscall*/ CanReachNextLevel(const Go* unk1); //0x0093f264
	/*GoMagic*/ public: bool /*__thiscall*/ GetApplyEnchantmentsOnCast() const; //0x0093eab0
	/*GoMagic*/ public: bool /*__thiscall*/ GetCanAutocast() const; //0x0093ed50
	/*GoMagic*/ public: bool /*__thiscall*/ GetDoesDamagePerSecond() const; //0x0093ed17
	/*GoMagic*/ public: bool /*__thiscall*/ GetIsAwpVisible() const; //0x0093ee34
	/*GoMagic*/ public: bool /*__thiscall*/ GetIsBuff() const; //0x0093ee6d
	/*GoMagic*/ public: bool /*__thiscall*/ GetIsCommandCast() const; //0x0093e3e7
	/*GoMagic*/ public: bool /*__thiscall*/ GetIsDebuff() const; //0x0093eea6
	/*GoMagic*/ public: bool /*__thiscall*/ GetIsModifierProc() const; //0x0093ef51
	/*GoMagic*/ public: bool /*__thiscall*/ GetIsOneShot() const; //0x004678b4
	/*GoMagic*/ public: bool /*__thiscall*/ GetIsOneUse() const; //0x0093ecde
	/*GoMagic*/ public: bool /*__thiscall*/ GetIsPower() const; //0x0093ef18
	/*GoMagic*/ public: bool /*__thiscall*/ GetIsPowerMaster(); //0x00467923
	/*GoMagic*/ public: bool /*__thiscall*/ GetIsWeaponEnchant() const; //0x0093eedf
	/*GoMagic*/ public: bool /*__thiscall*/ GetManaCostVaries() const; //0x0093e9cc
	/*GoMagic*/ public: bool /*__thiscall*/ GetRequireMembershipCheck() const; //0x0093eca5
	/*GoMagic*/ public: bool /*__thiscall*/ GetRequiresLineOfSight() const; //0x004678ad
	/*GoMagic*/ public: bool /*__thiscall*/ GetRequireStateCheck() const; //0x0093ec6c
	/*GoMagic*/ public: bool /*__thiscall*/ GetUseIntelLevel() const; //0x0093edfb
	/*GoMagic*/ public: bool /*__thiscall*/ GetUsesDamageOverTime() const; //0x0093ef8a
	/*GoMagic*/ public: bool /*__thiscall*/ HasAlterationType(eAlteration unk1) const; //0x0093f54b
	/*GoMagic*/ public: bool /*__thiscall*/ HasEnchantments() const; //0x004678bd
	/*GoMagic*/ public: bool /*__thiscall*/ HasNonInnateEnchantments(); //0x0093f62d
	/*GoMagic*/ public: bool /*__thiscall*/ HasTargetTypeFlags(eTargetTypeFlags unk1) const; //0x00468257
	/*GoMagic*/ public: bool /*__thiscall*/ HasTargetTypeFlagsNot(eTargetTypeFlags unk1) const; //0x0046826a
	/*GoMagic*/ public: bool /*__thiscall*/ IsAggressive(); //0x00468233
	/*GoMagic*/ public: bool /*__thiscall*/ IsCastableOn(Go* unk1, bool unk2, bool unk3); //0x0093f789
	/*GoMagic*/ public: bool /*__thiscall*/ IsCastableOn(Go* unk1, bool unk2); //0x00467873
	/*GoMagic*/ public: bool /*__thiscall*/ IsCastableOn(Go* unk1); //0x00467887
	/*GoMagic*/ public: bool /*__thiscall*/ IsCastableOnGround(); //0x0046829a
	/*GoMagic*/ public: bool /*__thiscall*/ IsDefensive(); //0x0046824b
	/*GoMagic*/ public: bool /*__thiscall*/ IsEnoughManaToCast(Go* unk1, Go* unk2); //0x0093f753
	/*GoMagic*/ public: bool /*__thiscall*/ IsEnoughManaToCast(Go* unk1); //0x0093fced
	/*GoMagic*/ public: bool /*__thiscall*/ IsHealthPotion() const; //0x0093f5c5
	/*GoMagic*/ public: bool /*__thiscall*/ IsLevelMetToCast(Go* unk1); //0x0093f50a
	/*GoMagic*/ public: bool /*__thiscall*/ IsLifeGiving(); //0x004681f8
	/*GoMagic*/ public: bool /*__thiscall*/ IsLifeTaking(); //0x00468203
	/*GoMagic*/ public: bool /*__thiscall*/ IsManaGiving(); //0x0046820f
	/*GoMagic*/ public: bool /*__thiscall*/ IsManaPotion() const; //0x0093f5f9
	/*GoMagic*/ public: bool /*__thiscall*/ IsManaTaking(); //0x0046821b
	/*GoMagic*/ public: bool /*__thiscall*/ IsOffensive(); //0x0046823f
	/*GoMagic*/ public: bool /*__thiscall*/ IsPassive(); //0x00468227
	/*GoMagic*/ public: bool /*__thiscall*/ IsPotion() const; //0x004682b9
	/*GoMagic*/ public: bool /*__thiscall*/ IsRejuvenationPotion() const; //0x0093f577
	/*GoMagic*/ public: bool /*__thiscall*/ IsSpell() const; //0x004682ac
	/*GoMagic*/ public: bool /*__thiscall*/ IsTargetTypeFriendly() const; //0x0046827d
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetAttackDamageModifierMax() const; //0x0093eb20
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetAttackDamageModifierMin() const; //0x0093eae9
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetCasterStateName() const; //0x0093ec35
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetCastExperience() const; //0x0093ebc7
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetEffectDuration() const; //0x0093eb90
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetManaCostModifier() const; //0x0093e927
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetManaCostUI() const; //0x0093e95e
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetManaCostUIModifier() const; //0x0093e995
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetPrefixModifierName() const; //0x00468329
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetRareModifier1Name() const; //0x00468331
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetRareModifier2Name() const; //0x00468335
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetSkillClass() const; //0x0093e7d3
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetStateName() const; //0x0093ebfe
	/*GoMagic*/ public: const gpbstring<char>& /*__thiscall*/ GetSuffixModifierName() const; //0x0046832d
	/*GoMagic*/ public: const Goid_* /*__thiscall*/ SCast(Go* unk1); //0x0093ff79
	/*GoMagic*/ public: eDamageType /*__thiscall*/ GetDamageType() const; //0x0093ed89
	/*GoMagic*/ public: eMagicClass /*__thiscall*/ GetMagicClass() const; //0x0093e8b5
	/*GoMagic*/ public: eTargetTypeFlags /*__thiscall*/ BuildTargetTypeFlags(Go* unk1, Go* unk2); //0x0093e032
	/*GoMagic*/ public: eTargetTypeFlags /*__thiscall*/ GetTargetTypeFlags() const; //0x0046786b
	/*GoMagic*/ public: eTargetTypeFlags /*__thiscall*/ GetTargetTypeFlagsNot() const; //0x0046786f
	/*GoMagic*/ public: eUsageContextFlags /*__thiscall*/ GetUsageContextFlags() const; //0x0093f4d1
	/*GoMagic*/ public: float /*__thiscall*/ EvaluateAttackDamageModifierMax(const Go* unk1, const Go* unk2) const; //0x0046784a
	/*GoMagic*/ public: float /*__thiscall*/ EvaluateAttackDamageModifierMin(const Go* unk1, const Go* unk2) const; //0x00467836
	/*GoMagic*/ public: float /*__thiscall*/ EvaluateCastExperience(const Go* unk1, const Go* unk2) const; //0x00467822
	/*GoMagic*/ public: float /*__thiscall*/ EvaluateEffectDuration(const Go* unk1, const Go* unk2) const; //0x0046780e
	/*GoMagic*/ public: float /*__thiscall*/ EvaluateManaCost(const Go* unk1, const Go* unk2) const; //0x004677fa
	/*GoMagic*/ public: float /*__thiscall*/ GetAutoCastChance() const; //0x0093e79a
	/*GoMagic*/ public: float /*__thiscall*/ GetCastRange() const; //0x0093ea3e
	/*GoMagic*/ public: float /*__thiscall*/ GetCastReloadDelay() const; //0x0093ea77
	/*GoMagic*/ public: float /*__thiscall*/ GetLongestAlteration(const Goid_* unk1, const Goid_* unk2); //0x00467902
	/*GoMagic*/ public: float /*__thiscall*/ GetMagicLevel(const Go* unk1); //0x0093f218
	/*GoMagic*/ public: float /*__thiscall*/ GetManaCost() const; //0x0093e8ee
	/*GoMagic*/ public: float /*__thiscall*/ GetMaxCastLevel() const; //0x0093e87c
	/*GoMagic*/ public: float /*__thiscall*/ GetMaxIntel() const; //0x0093edc2
	/*GoMagic*/ public: float /*__thiscall*/ GetPContentLevel() const; //0x0093e843
	/*GoMagic*/ public: float /*__thiscall*/ GetPotionFullRatio() const; //0x0093e726
	/*GoMagic*/ public: float /*__thiscall*/ GetRequiredCastLevel() const; //0x0093e80a
	/*GoMagic*/ public: float /*__thiscall*/ GetSpeedBias() const; //0x0093ea05
	/*GoMagic*/ public: unsigned int /*__thiscall*/ GetCastSubAnimation() const; //0x0093eb57
	/*GoMagic*/ public: void /*__thiscall*/ ApplyEnchantments(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5); //0x0093e138
	/*GoMagic*/ public: void /*__thiscall*/ ApplyEnchantments(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4); //0x004678e4
	/*GoMagic*/ public: void /*__thiscall*/ ApplyEnchantments(const char* unk1, const Goid_* unk2, const Goid_* unk3); //0x00468308
	/*GoMagic*/ public: void /*__thiscall*/ RCApplyEnchantments(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5); //0x0093e3ff
	/*GoMagic*/ public: void /*__thiscall*/ RCMemberCast(unsigned long unk1); //0x0093fd11
	/*GoMagic*/ public: void /*__thiscall*/ RCOneShotUsed(Go* unk1); //0x0093e046
	/*GoMagic*/ public: void /*__thiscall*/ RCSetIsPowerMaster(bool unk1); //0x0093e1c2
	/*GoMagic*/ public: void /*__thiscall*/ RCSetPotionAmount(float unk1); //0x0093fbdd
	/*GoMagic*/ public: void /*__thiscall*/ SApplyEnchantments(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5); //0x0093f651
	/*GoMagic*/ public: void /*__thiscall*/ SApplyEnchantments(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4); //0x004678c6
	/*GoMagic*/ public: void /*__thiscall*/ SApplyEnchantments(const char* unk1, const Goid_* unk2, const Goid_* unk3, float unk4); //0x004682c5
	/*GoMagic*/ public: void /*__thiscall*/ SApplyEnchantments(const char* unk1, const Goid_* unk2, const Goid_* unk3); //0x004682e7
	/*GoMagic*/ public: void /*__thiscall*/ SetIsPowerMaster(bool unk1); //0x00467916
	/*GoMagic*/ public: void /*__thiscall*/ SetTargetTypeFlags(eTargetTypeFlags unk1); //0x0046785e
	/*GoMagic*/ public: void /*__thiscall*/ SSetIsPowerMaster(bool unk1); //0x0093e534
};

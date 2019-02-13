#pragma once

#include "FuBi.h"

class GoMagic {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x467930, GoMagic*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoMagic*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoMagic* unk1); //0x00467927
	DefineMethod(CanReachNextLevel, 0x93f264, bool, Params(const Go* unk1), Args(const Go* unk1));
	DefineConstMethod(GetApplyEnchantmentsOnCast, 0x93eab0, bool, Params(), Args());
	DefineConstMethod(GetCanAutocast, 0x93ed50, bool, Params(), Args());
	DefineConstMethod(GetDoesDamagePerSecond, 0x93ed17, bool, Params(), Args());
	DefineConstMethod(GetIsAwpVisible, 0x93ee34, bool, Params(), Args());
	DefineConstMethod(GetIsBuff, 0x93ee6d, bool, Params(), Args());
	DefineConstMethod(GetIsCommandCast, 0x93e3e7, bool, Params(), Args());
	DefineConstMethod(GetIsDebuff, 0x93eea6, bool, Params(), Args());
	DefineConstMethod(GetIsModifierProc, 0x93ef51, bool, Params(), Args());
	DefineConstMethod(GetIsOneShot, 0x4678b4, bool, Params(), Args());
	DefineConstMethod(GetIsOneUse, 0x93ecde, bool, Params(), Args());
	DefineConstMethod(GetIsPower, 0x93ef18, bool, Params(), Args());
	DefineMethod(GetIsPowerMaster, 0x467923, bool, Params(), Args());
	DefineConstMethod(GetIsWeaponEnchant, 0x93eedf, bool, Params(), Args());
	DefineConstMethod(GetManaCostVaries, 0x93e9cc, bool, Params(), Args());
	DefineConstMethod(GetRequireMembershipCheck, 0x93eca5, bool, Params(), Args());
	DefineConstMethod(GetRequiresLineOfSight, 0x4678ad, bool, Params(), Args());
	DefineConstMethod(GetRequireStateCheck, 0x93ec6c, bool, Params(), Args());
	DefineConstMethod(GetUseIntelLevel, 0x93edfb, bool, Params(), Args());
	DefineConstMethod(GetUsesDamageOverTime, 0x93ef8a, bool, Params(), Args());
	DefineConstMethod(HasAlterationType, 0x93f54b, bool, Params(eAlteration unk1), Args(eAlteration unk1));
	DefineConstMethod(HasEnchantments, 0x4678bd, bool, Params(), Args());
	DefineMethod(HasNonInnateEnchantments, 0x93f62d, bool, Params(), Args());
	DefineConstMethod(HasTargetTypeFlags, 0x468257, bool, Params(eTargetTypeFlags unk1), Args(eTargetTypeFlags unk1));
	DefineConstMethod(HasTargetTypeFlagsNot, 0x46826a, bool, Params(eTargetTypeFlags unk1), Args(eTargetTypeFlags unk1));
	DefineMethod(IsAggressive, 0x468233, bool, Params(), Args());
	DefineMethod(IsCastableOn, 0x93f789, bool, Params(Go* unk1, bool unk2, bool unk3), Args(Go* unk1, bool unk2, bool unk3));
	DefineMethod(IsCastableOn, 0x467873, bool, Params(Go* unk1, bool unk2), Args(Go* unk1, bool unk2));
	DefineMethod(IsCastableOn, 0x467887, bool, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(IsCastableOnGround, 0x46829a, bool, Params(), Args());
	DefineMethod(IsDefensive, 0x46824b, bool, Params(), Args());
	DefineMethod(IsEnoughManaToCast, 0x93f753, bool, Params(Go* unk1, Go* unk2), Args(Go* unk1, Go* unk2));
	DefineMethod(IsEnoughManaToCast, 0x93fced, bool, Params(Go* unk1), Args(Go* unk1));
	DefineConstMethod(IsHealthPotion, 0x93f5c5, bool, Params(), Args());
	DefineMethod(IsLevelMetToCast, 0x93f50a, bool, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(IsLifeGiving, 0x4681f8, bool, Params(), Args());
	DefineMethod(IsLifeTaking, 0x468203, bool, Params(), Args());
	DefineMethod(IsManaGiving, 0x46820f, bool, Params(), Args());
	DefineConstMethod(IsManaPotion, 0x93f5f9, bool, Params(), Args());
	DefineMethod(IsManaTaking, 0x46821b, bool, Params(), Args());
	DefineMethod(IsOffensive, 0x46823f, bool, Params(), Args());
	DefineMethod(IsPassive, 0x468227, bool, Params(), Args());
	DefineConstMethod(IsPotion, 0x4682b9, bool, Params(), Args());
	DefineConstMethod(IsRejuvenationPotion, 0x93f577, bool, Params(), Args());
	DefineConstMethod(IsSpell, 0x4682ac, bool, Params(), Args());
	DefineConstMethod(IsTargetTypeFriendly, 0x46827d, bool, Params(), Args());
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
	DefineConstMethod(GetDamageType, 0x93ed89, eDamageType, Params(), Args());
	DefineConstMethod(GetMagicClass, 0x93e8b5, eMagicClass, Params(), Args());
	DefineMethod(BuildTargetTypeFlags, 0x93e032, eTargetTypeFlags, Params(Go* unk1, Go* unk2), Args(Go* unk1, Go* unk2));
	DefineConstMethod(GetTargetTypeFlags, 0x46786b, eTargetTypeFlags, Params(), Args());
	DefineConstMethod(GetTargetTypeFlagsNot, 0x46786f, eTargetTypeFlags, Params(), Args());
	DefineConstMethod(GetUsageContextFlags, 0x93f4d1, eUsageContextFlags, Params(), Args());
	DefineConstMethod(EvaluateAttackDamageModifierMax, 0x46784a, float, Params(const Go* unk1, const Go* unk2), Args(const Go* unk1, const Go* unk2));
	DefineConstMethod(EvaluateAttackDamageModifierMin, 0x467836, float, Params(const Go* unk1, const Go* unk2), Args(const Go* unk1, const Go* unk2));
	DefineConstMethod(EvaluateCastExperience, 0x467822, float, Params(const Go* unk1, const Go* unk2), Args(const Go* unk1, const Go* unk2));
	DefineConstMethod(EvaluateEffectDuration, 0x46780e, float, Params(const Go* unk1, const Go* unk2), Args(const Go* unk1, const Go* unk2));
	DefineConstMethod(EvaluateManaCost, 0x4677fa, float, Params(const Go* unk1, const Go* unk2), Args(const Go* unk1, const Go* unk2));
	DefineConstMethod(GetAutoCastChance, 0x93e79a, float, Params(), Args());
	DefineConstMethod(GetCastRange, 0x93ea3e, float, Params(), Args());
	DefineConstMethod(GetCastReloadDelay, 0x93ea77, float, Params(), Args());
	DefineMethod(GetLongestAlteration, 0x467902, float, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(GetMagicLevel, 0x93f218, float, Params(const Go* unk1), Args(const Go* unk1));
	DefineConstMethod(GetManaCost, 0x93e8ee, float, Params(), Args());
	DefineConstMethod(GetMaxCastLevel, 0x93e87c, float, Params(), Args());
	DefineConstMethod(GetMaxIntel, 0x93edc2, float, Params(), Args());
	DefineConstMethod(GetPContentLevel, 0x93e843, float, Params(), Args());
	DefineConstMethod(GetPotionFullRatio, 0x93e726, float, Params(), Args());
	DefineConstMethod(GetRequiredCastLevel, 0x93e80a, float, Params(), Args());
	DefineConstMethod(GetSpeedBias, 0x93ea05, float, Params(), Args());
	/*GoMagic*/ public: unsigned int /*__thiscall*/ GetCastSubAnimation() const; //0x0093eb57
	DefineMethod(ApplyEnchantments, 0x93e138, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5), Args(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5));
	DefineMethod(ApplyEnchantments, 0x4678e4, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4), Args(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4));
	DefineMethod(ApplyEnchantments, 0x468308, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3), Args(const char* unk1, const Goid_* unk2, const Goid_* unk3));
	DefineMethod(RCApplyEnchantments, 0x93e3ff, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5), Args(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5));
	DefineMethod(RCMemberCast, 0x93fd11, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCOneShotUsed, 0x93e046, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(RCSetIsPowerMaster, 0x93e1c2, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSetPotionAmount, 0x93fbdd, void, Params(float unk1), Args(float unk1));
	DefineMethod(SApplyEnchantments, 0x93f651, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5), Args(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, float unk5));
	DefineMethod(SApplyEnchantments, 0x4678c6, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4), Args(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4));
	DefineMethod(SApplyEnchantments, 0x4682c5, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, float unk4), Args(const char* unk1, const Goid_* unk2, const Goid_* unk3, float unk4));
	DefineMethod(SApplyEnchantments, 0x4682e7, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3), Args(const char* unk1, const Goid_* unk2, const Goid_* unk3));
	DefineMethod(SetIsPowerMaster, 0x467916, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetTargetTypeFlags, 0x46785e, void, Params(eTargetTypeFlags unk1), Args(eTargetTypeFlags unk1));
	DefineMethod(SSetIsPowerMaster, 0x93e534, void, Params(bool unk1), Args(bool unk1));
};

#pragma once

#include "ClassMacros.h"

enum eAggroType;
enum eDamageType;

class Rules {
public:
	DefineSingleton(Rules, 0x40a637);

	/*Rules*/ private: /*static*/ Rules* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a637
	DefineMethod(CanHit, 0x842bfe, bool, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3));
	DefineMethod(DamageGo, 0x842d4a, bool, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, bool unk5, bool unk6), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, bool unk5, bool unk6));
	DefineMethod(DamageGoMagicPower, 0x842cc7, bool, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, double unk4), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, double unk4));
	DefineMethod(DamageGoPower, 0x842cee, bool, Params(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, double unk5), Args(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, double unk5));
	DefineMethod(DamageGoVolume, 0x842d18, bool, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, float unk5, bool unk6), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, float unk5, bool unk6));
	DefineMethod(GetDamageRange, 0x842c1d, bool, Params(const Goid_* unk1, const Goid_* unk2, range_2& unk3), Args(const Goid_* unk1, const Goid_* unk2, range_2& unk3));
	DefineMethod(IsQuestOrLoreItem, 0x845d10, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(STrySpawnLootThief, 0x84501d, bool, Params(Go* unk1, Go* unk2), Args(Go* unk1, Go* unk2));
	/*Rules*/ public: const Goid_* /*__thiscall*/ GetLootThiefGoid() const; //0x004096e5
	DefineMethod(CalculateExperience, 0x842eba, double, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, double unk4), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, double unk4));
	DefineMethod(GetDifficultyComputerValue, 0x409656, double, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(GetDifficultyPlayerValue, 0x40963f, double, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineConstMethod(GetNextLevelXP, 0x842d77, double, Params(float unk1), Args(float unk1));
	DefineConstMethod(LevelToXP, 0x842dd9, double, Params(float unk1), Args(float unk1));
	DefineMethod(ComputeCustomDamage, 0x843ab4, float, Params(Go* unk1, Go* unk2, Go* unk3, bool unk4), Args(Go* unk1, Go* unk2, Go* unk3, bool unk4));
	DefineMethod(ComputeCustomDamageFromType, 0x843c62, float, Params(Go* unk1, Go* unk2, Go* unk3, eDamageType unk4, bool unk5), Args(Go* unk1, Go* unk2, Go* unk3, eDamageType unk4, bool unk5));
	DefineMethod(GetAveragePartyLevel, 0x84314c, float, Params(Go* unk1), Args(Go* unk1));
	DefineConstMethod(GetConsciousnessLifePercent, 0x4096e1, float, Params(), Args());
	DefineConstMethod(GetLootThiefChance, 0x4096f6, float, Params(), Args());
	DefineConstMethod(GetMaxLevel, 0x40a617, float, Params(), Args());
	DefineMethod(GetMaxResistanceValue, 0x4096dd, float, Params(), Args());
	DefineMethod(GetTotalAveragePartyLevels, 0x843212, float, Params(const GopColl& unk1), Args(const GopColl& unk1));
	DefineMethod(GetTotalDefense, 0x841fdf, float, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(GetTotalDefense, 0x841fc6, float, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineConstMethod(XPToLevel, 0x842e38, float, Params(double unk1), Args(double unk1));
	DefineMethod(GetTotalLevelingPartyMembers, 0x8431b0, int, Params(Go* unk1, const FrustumId_* unk2), Args(Go* unk1, const FrustumId_* unk2));
	DefineMethod(ChangeLife, 0x84474b, void, Params(const Goid_* unk1, const Goid_* unk2, float unk3, unsigned long unk4), Args(const Goid_* unk1, const Goid_* unk2, float unk3, unsigned long unk4));
	DefineMethod(ChangeLife, 0x40966d, void, Params(const Goid_* unk1, const Goid_* unk2, float unk3), Args(const Goid_* unk1, const Goid_* unk2, float unk3));
	DefineMethod(ChangeLifeLocal, 0x409688, void, Params(const Goid_* unk1, const Goid_* unk2, float unk3), Args(const Goid_* unk1, const Goid_* unk2, float unk3));
	DefineMethod(ChangeMana, 0x842f4a, void, Params(const Goid_* unk1, float unk2, unsigned long unk3), Args(const Goid_* unk1, float unk2, unsigned long unk3));
	DefineMethod(ChangeMana, 0x4096a8, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(ChangeManaLocal, 0x4096c0, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(DamageGoMagic, 0x84208d, void, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3));
	DefineMethod(DamageGoMagicObject, 0x8420ac, void, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3));
	DefineMethod(DamageGoMelee, 0x841ffb, void, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3));
	DefineMethod(DamageGoMeleeMultiplier, 0x84201a, void, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, bool unk5), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, bool unk5));
	DefineMethod(DamageGoRanged, 0x842044, void, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3));
	DefineMethod(DamageGoRangedMultiplier, 0x842063, void, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, bool unk5), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, bool unk5));
	DefineMethod(RCAwardPrimaryExperience, 0x845d9e, void, Params(const Goid_* unk1, unsigned long unk2, double unk3), Args(const Goid_* unk1, unsigned long unk2, double unk3));
	DefineMethod(RCOnPartyMemberMadeMonsterAngry, 0x841eb0, void, Params(Go* unk1, Go* unk2, eAggroType unk3), Args(Go* unk1, Go* unk2, eAggroType unk3));
	DefineMethod(RCPlayLevelUpSoundAndText, 0x8456c0, void, Params(const Goid_* unk1, const char* unk2), Args(const Goid_* unk1, const char* unk2));
	DefineMethod(RSPlayCombatSound, 0x84305c, void, Params(const Goid_* unk1, const Goid_* unk2, bool unk3), Args(const Goid_* unk1, const Goid_* unk2, bool unk3));
	DefineMethod(SAwardExperience, 0x8420e7, void, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, double unk4), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, double unk4));
	DefineMethod(SAwardPrimaryExperience, 0x84665f, void, Params(const Goid_* unk1, const char* unk2, double unk3, bool unk4), Args(const Goid_* unk1, const char* unk2, double unk3, bool unk4));
	DefineMethod(SetLootThiefChance, 0x4096fa, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetLootThiefGoid, 0x4096e9, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetPackMemberStats, 0x84211e, void, Params(const Goid_* unk1, bool unk2), Args(const Goid_* unk1, bool unk2));
	DefineMethod(SOnPartyMemberAdded, 0x8420cb, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(SPlayLevelUpSoundAndText, 0x845d95, void, Params(const Goid_* unk1, const char* unk2), Args(const Goid_* unk1, const char* unk2));
	DefineMethod(UpdateClassDesignation, 0x845b93, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
};

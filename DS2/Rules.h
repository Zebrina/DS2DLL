#pragma once

#include "ClassMacros.h"

enum eAggroType;
enum eDamageType;

class Rules {
public:
	DefineSingleton(Rules, 0x40a637);

	/*Rules*/ private: /*static*/ Rules* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a637
	/*Rules*/ public: bool /*__thiscall*/ CanHit(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3); //0x00842bfe
	/*Rules*/ public: bool /*__thiscall*/ DamageGo(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, bool unk5, bool unk6); //0x00842d4a
	/*Rules*/ public: bool /*__thiscall*/ DamageGoMagicPower(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, double unk4); //0x00842cc7
	/*Rules*/ public: bool /*__thiscall*/ DamageGoPower(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, double unk5); //0x00842cee
	/*Rules*/ public: bool /*__thiscall*/ DamageGoVolume(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, float unk5, bool unk6); //0x00842d18
	/*Rules*/ public: bool /*__thiscall*/ GetDamageRange(const Goid_* unk1, const Goid_* unk2, range_2& unk3); //0x00842c1d
	/*Rules*/ public: bool /*__thiscall*/ IsQuestOrLoreItem(const char* unk1); //0x00845d10
	/*Rules*/ public: bool /*__thiscall*/ STrySpawnLootThief(Go* unk1, Go* unk2); //0x0084501d
	/*Rules*/ public: const Goid_* /*__thiscall*/ GetLootThiefGoid() const; //0x004096e5
	/*Rules*/ public: double /*__thiscall*/ CalculateExperience(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, double unk4); //0x00842eba
	/*Rules*/ public: double /*__thiscall*/ GetDifficultyComputerValue(unsigned int unk1); //0x00409656
	/*Rules*/ public: double /*__thiscall*/ GetDifficultyPlayerValue(unsigned int unk1); //0x0040963f
	/*Rules*/ public: double /*__thiscall*/ GetNextLevelXP(float unk1) const; //0x00842d77
	/*Rules*/ public: double /*__thiscall*/ LevelToXP(float unk1) const; //0x00842dd9
	/*Rules*/ public: float /*__thiscall*/ ComputeCustomDamage(Go* unk1, Go* unk2, Go* unk3, bool unk4); //0x00843ab4
	/*Rules*/ public: float /*__thiscall*/ ComputeCustomDamageFromType(Go* unk1, Go* unk2, Go* unk3, eDamageType unk4, bool unk5); //0x00843c62
	/*Rules*/ public: float /*__thiscall*/ GetAveragePartyLevel(Go* unk1); //0x0084314c
	/*Rules*/ public: float /*__thiscall*/ GetConsciousnessLifePercent() const; //0x004096e1
	/*Rules*/ public: float /*__thiscall*/ GetLootThiefChance() const; //0x004096f6
	/*Rules*/ public: float /*__thiscall*/ GetMaxLevel() const; //0x0040a617
	/*Rules*/ public: float /*__thiscall*/ GetMaxResistanceValue(); //0x004096dd
	/*Rules*/ public: float /*__thiscall*/ GetTotalAveragePartyLevels(const GopColl& unk1); //0x00843212
	/*Rules*/ public: float /*__thiscall*/ GetTotalDefense(const Goid_* unk1, const Goid_* unk2); //0x00841fdf
	/*Rules*/ public: float /*__thiscall*/ GetTotalDefense(const Goid_* unk1); //0x00841fc6
	/*Rules*/ public: float /*__thiscall*/ XPToLevel(double unk1) const; //0x00842e38
	/*Rules*/ public: int /*__thiscall*/ GetTotalLevelingPartyMembers(Go* unk1, const FrustumId_* unk2); //0x008431b0
	/*Rules*/ public: void /*__thiscall*/ ChangeLife(const Goid_* unk1, const Goid_* unk2, float unk3, unsigned long unk4); //0x0084474b
	/*Rules*/ public: void /*__thiscall*/ ChangeLife(const Goid_* unk1, const Goid_* unk2, float unk3); //0x0040966d
	/*Rules*/ public: void /*__thiscall*/ ChangeLifeLocal(const Goid_* unk1, const Goid_* unk2, float unk3); //0x00409688
	/*Rules*/ public: void /*__thiscall*/ ChangeMana(const Goid_* unk1, float unk2, unsigned long unk3); //0x00842f4a
	/*Rules*/ public: void /*__thiscall*/ ChangeMana(const Goid_* unk1, float unk2); //0x004096a8
	/*Rules*/ public: void /*__thiscall*/ ChangeManaLocal(const Goid_* unk1, float unk2); //0x004096c0
	/*Rules*/ public: void /*__thiscall*/ DamageGoMagic(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3); //0x0084208d
	/*Rules*/ public: void /*__thiscall*/ DamageGoMagicObject(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3); //0x008420ac
	/*Rules*/ public: void /*__thiscall*/ DamageGoMelee(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3); //0x00841ffb
	/*Rules*/ public: void /*__thiscall*/ DamageGoMeleeMultiplier(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, bool unk5); //0x0084201a
	/*Rules*/ public: void /*__thiscall*/ DamageGoRanged(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3); //0x00842044
	/*Rules*/ public: void /*__thiscall*/ DamageGoRangedMultiplier(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, float unk4, bool unk5); //0x00842063
	/*Rules*/ public: void /*__thiscall*/ RCAwardPrimaryExperience(const Goid_* unk1, unsigned long unk2, double unk3); //0x00845d9e
	/*Rules*/ public: void /*__thiscall*/ RCOnPartyMemberMadeMonsterAngry(Go* unk1, Go* unk2, eAggroType unk3); //0x00841eb0
	/*Rules*/ public: void /*__thiscall*/ RCPlayLevelUpSoundAndText(const Goid_* unk1, const char* unk2); //0x008456c0
	/*Rules*/ public: void /*__thiscall*/ RSPlayCombatSound(const Goid_* unk1, const Goid_* unk2, bool unk3); //0x0084305c
	/*Rules*/ public: void /*__thiscall*/ SAwardExperience(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, double unk4); //0x008420e7
	/*Rules*/ public: void /*__thiscall*/ SAwardPrimaryExperience(const Goid_* unk1, const char* unk2, double unk3, bool unk4); //0x0084665f
	/*Rules*/ public: void /*__thiscall*/ SetLootThiefChance(float unk1); //0x004096fa
	/*Rules*/ public: void /*__thiscall*/ SetLootThiefGoid(const Goid_* unk1); //0x004096e9
	/*Rules*/ public: void /*__thiscall*/ SetPackMemberStats(const Goid_* unk1, bool unk2); //0x0084211e
	/*Rules*/ public: void /*__thiscall*/ SOnPartyMemberAdded(const Goid_* unk1, const Goid_* unk2); //0x008420cb
	/*Rules*/ public: void /*__thiscall*/ SPlayLevelUpSoundAndText(const Goid_* unk1, const char* unk2); //0x00845d95
	/*Rules*/ public: void /*__thiscall*/ UpdateClassDesignation(const Goid_* unk1); //0x00845b93
};

#pragma once

#include "Enums.h"
#include "Goid.h"
#include "GPBString.h"

class Skill;

class Skills {
public:
	DefineSingleton(Skills, 0x40a2ca);

  DefineConstMethod(GetMaxLevelUber, 0x40855a, float, NO_PARAMS, NO_ARGS);
  void SetMaxLevelUber(float newValue) {
    maxLevelUber = newValue;
  }
	DefineMethod(CanUseSkillOnObject, 0x7f4d51, bool, Params(const gpbstring<char>& unk1, Go* unk2, Go* unk3), Args(unk1, unk2, unk3));
	DefineMethod(CanUseSkillOnTerrain, 0x7f4d3c, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetIsSkillDelayed, 0x7f4cb0, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSkillAnimUsesStance, 0x7f4bd2, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSkillSubValueExists, 0x7f2853, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSkillFireFlick, 0x7f4a45, gpbstring<char>, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSkillHitFlick, 0x7f4a97, gpbstring<char>, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSkillIcon, 0x7f4c19, gpbstring<char>, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSkillPreLaunchFlick, 0x7f4ae9, gpbstring<char>, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSkillTemplate, 0x7f4b3b, gpbstring<char>, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSkillTargetType, 0x7f4cf7, eTargetTypeFlags, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSecondarySkillRange, 0x7f4dd5, float, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSkillSubValue, 0x408561, float, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, Go* unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetSkillSubValue, 0x7f464e, float, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(GetSkillAnimFourCC, 0x7f4b8d, int, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetSkillCost, 0x7f4825, int, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(GetSkillPreLaunchAnim, 0x7f4c6b, int, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(PlayLevelUpIndicator, 0x7f2160, void, Params(const Goid_* unk1, Skill* unk2), Args(unk1, unk2));

  // 0x00
  float maxLevelUber;
};

class Skill {
public:
	DefineStaticMethod(FUBI_PodGetSize, 0x408531, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetName, 0x40853b, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExperience, 0x40853e, double, NO_PARAMS, NO_ARGS);
	DefineMethod(AwardExperience, 0x7f0ffb, bool, Params(double unk1, bool unk2), Args(unk1, unk2));
	DefineConstMethod(GetNaturalLevel, 0x40a283, float, NO_PARAMS, NO_ARGS);
  void SetNaturalLevel(float newValue) {
    naturalLevel = newValue;
  }
	DefineConstMethod(GetNaturalLevelMasteryRatio, 0x40a2ae, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLevelBias, 0x40854e, float, NO_PARAMS, NO_ARGS);
  void SetLevelBias(float newValue) {
    levelBias = newValue;
  }
	DefineConstMethod(GetLevelNoBias, 0x40a28e, float, NO_PARAMS, NO_ARGS);
  void SetLevelNoBias(float newValue) {
    levelNoBias = newValue;
  }
	DefineConstMethod(GetLevel, 0x40a287, float, NO_PARAMS, NO_ARGS); // GetLevelNoBias + GetLevelBias
	DefineConstMethod(GetLevelMasteryRatio, 0x40a292, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxLevel, 0x408546, float, NO_PARAMS, NO_ARGS);
  void SetMaxLevel(float newValue) {
    maxLevel = newValue;
  }
	DefineConstMethod(GetMaxBonusLevel, 0x40854a, float, NO_PARAMS, NO_ARGS);
  void SetMaxBonusLevel(float newValue) {
    maxBonusLevel = newValue;
  }

  // 0x00
  gpbstring<char> name;
  // 0x04
  FillStruct(0x04, 0x08);
  // 0x08
  double experience;
  // 0x10
  float naturalLevel;
  // 0x14
  float levelNoBias;
  // 0x18
  float levelBias;
  // 0x1c
  float maxLevel;
  // 0x20
  float maxBonusLevel;
};

STATIC_ASSERT_OFFSETOF(Skill, maxBonusLevel, 0x20);

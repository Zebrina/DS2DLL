#pragma once

#include "DS2DLL.h"
#include "GoidScid.h"
#include "GPString.h"

class Skill {
public:
	Skill() = default;
	Skill(const Skill&) = default;
	~Skill() = default;

	Skill& operator=(const Skill&) = default;

	$ConstMethod(0x0040853b, GetName, const GPBString&);
	$ConstMethod(0x0040853e, GetExperience, double);
	$Method(0x007f0ffb, AwardExperience, bool, double amount, bool unk2);
	$ConstMethod(0x0040a283, GetNaturalLevel, float);
    FEX void SetNaturalLevel(float value);
	$ConstMethod(0x0040a2ae, GetNaturalLevelMasteryRatio, float);
	$ConstMethod(0x0040854e, GetLevelBias, float);
    FEX void SetLevelBias(float value);
	$ConstMethod(0x0040a28e, GetLevelNoBias, float);
    FEX void SetLevelNoBias(float value);
	$ConstMethod(0x0040a287, GetLevel, float); // GetLevelNoBias + GetLevelBias
	$ConstMethod(0x0040a292, GetLevelMasteryRatio, float);
	$ConstMethod(0x00408546, GetMaxLevel, float);
    FEX void SetMaxLevel(float value);
	$ConstMethod(0x0040854a, GetMaxBonusLevel, float);
    FEX void SetMaxBonusLevel(float value);

    // 0x00
    GPBString name;
    // 0x04
    $Padding(0x04, 0x08);
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
    // 0x24
    $Padding(0x24, 0x28);
};

// Size confirmed.
STATIC_ASSERT(sizeof(Skill) == 0x28);
STATIC_ASSERT_OFFSETOF(Skill, maxBonusLevel, 0x20);

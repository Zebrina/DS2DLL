#pragma once

#include "GoidScid.h"
#include "GPString.h"
#include "Skill.h"

class Skills {
public:
    $Singleton(Skills, 0x0040a2ca);

    $ConstMethod(0x0040855a, GetMaxLevelUber, float);
    FEX void SetMaxLevelUber(float value);
    $Method(0x007f4d51, CanUseSkillOnObject, bool, const GPBString& unk1, Go* unk2, Go* unk3);
    $Method(0x007f4d3c, CanUseSkillOnTerrain, bool, const GPBString& unk1);
    $Method(0x007f4cb0, GetIsSkillDelayed, bool, const GPBString& unk1);
    $Method(0x007f4bd2, GetSkillAnimUsesStance, bool, const GPBString& unk1);
    $Method(0x007f2853, GetSkillSubValueExists, bool, const GPBString& unk1);
    $Method(0x007f4a45, GetSkillFireFlick, GPBString, const GPBString& unk1);
    $Method(0x007f4a97, GetSkillHitFlick, GPBString, const GPBString& unk1);
    $Method(0x007f4c19, GetSkillIcon, GPBString, const GPBString& unk1);
    $Method(0x007f4ae9, GetSkillPreLaunchFlick, GPBString, const GPBString& unk1);
    $Method(0x007f4b3b, GetSkillTemplate, GPBString, const GPBString& unk1);
    $Method(0x007f4cf7, GetSkillTargetType, eTargetTypeFlags, const GPBString& unk1);
    $Method(0x007f4dd5, GetSecondarySkillRange, float, const GPBString& unk1);
    $Method(0x007f464e, GetSkillSubValue, float, const Goid* unk1, const GPBString& subValueName);
    $Method(0x00408561, GetSkillSubValue, float, const GPBString& skillName, const GPBString& subValueName, Go* go);
    $Method(0x007f4b8d, GetSkillAnimFourCC, int, const GPBString& unk1);
    $Method(0x007f4825, GetSkillCost, int, const GPBString& unk1, int unk2);
    $Method(0x007f4c6b, GetSkillPreLaunchAnim, int, const GPBString& unk1);
    $Method(0x007f2160, PlayLevelUpIndicator, void, const Goid* unk1, Skill* unk2);

    // 0x00
    float maxLevelUber;
    // 0x04
    $Padding(0x04, 0x68);
};

typedef Skills SkillManager;

STATIC_ASSERT(sizeof(Skills) == 0x68);

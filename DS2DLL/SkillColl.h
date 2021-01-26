#pragma once

#include "GPFastVector.h"
#include "Skill.h"

class SkillColl : public GPFastVector<Skill*> { // ??
public:
    $ConstMethod(0x007f1f70, GetSkill, bool, const char* skillName, Skill** skillOut);
    $ConstMethod(0x007f2310, GetExperience, double, const char* skillName);

private:
    $ConstMethod(0x007f1aaa, GetSkillInternal, Skill*, const char* skillName); // Case sensitive comparison.
};

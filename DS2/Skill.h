#pragma once

class Skill {
public:
	DefineStaticMethod(FUBI_PodGetSize, 0x408531, unsigned int, NO_PARAMS, NO_ARGS);
	DefineMethod(AwardExperience, 0x7f0ffb, bool, Params(double unk1, bool unk2), Args(unk1, unk2));
	DefineConstMethod(GetName, 0x40853b, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExperience, 0x40853e, double, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLevel, 0x40a287, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLevelBias, 0x40854e, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLevelMasteryRatio, 0x40a292, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLevelNoBias, 0x40a28e, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxBonusLevel, 0x40854a, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxLevel, 0x408546, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNaturalLevel, 0x40a283, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNaturalLevelMasteryRatio, 0x40a2ae, float, NO_PARAMS, NO_ARGS);
};

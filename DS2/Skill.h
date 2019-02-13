#pragma once

class Skill {
public:
	/*Skill*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00408531
	DefineMethod(AwardExperience, 0x7f0ffb, bool, Params(double unk1, bool unk2), Args(double unk1, bool unk2));
	/*Skill*/ public: const gpbstring<char>& /*__thiscall*/ GetName() const; //0x0040853b
	DefineConstMethod(GetExperience, 0x40853e, double, Params(), Args());
	DefineConstMethod(GetLevel, 0x40a287, float, Params(), Args());
	DefineConstMethod(GetLevelBias, 0x40854e, float, Params(), Args());
	DefineConstMethod(GetLevelMasteryRatio, 0x40a292, float, Params(), Args());
	DefineConstMethod(GetLevelNoBias, 0x40a28e, float, Params(), Args());
	DefineConstMethod(GetMaxBonusLevel, 0x40854a, float, Params(), Args());
	DefineConstMethod(GetMaxLevel, 0x408546, float, Params(), Args());
	DefineConstMethod(GetNaturalLevel, 0x40a283, float, Params(), Args());
	DefineConstMethod(GetNaturalLevelMasteryRatio, 0x40a2ae, float, Params(), Args());
};

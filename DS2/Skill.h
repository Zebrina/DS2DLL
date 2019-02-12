#pragma once

class Skill {
public:
	/*Skill*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00408531
	/*Skill*/ public: bool /*__thiscall*/ AwardExperience(double unk1, bool unk2); //0x007f0ffb
	/*Skill*/ public: const gpbstring<char>& /*__thiscall*/ GetName() const; //0x0040853b
	/*Skill*/ public: double /*__thiscall*/ GetExperience() const; //0x0040853e
	/*Skill*/ public: float /*__thiscall*/ GetLevel() const; //0x0040a287
	/*Skill*/ public: float /*__thiscall*/ GetLevelBias() const; //0x0040854e
	/*Skill*/ public: float /*__thiscall*/ GetLevelMasteryRatio() const; //0x0040a292
	/*Skill*/ public: float /*__thiscall*/ GetLevelNoBias() const; //0x0040a28e
	/*Skill*/ public: float /*__thiscall*/ GetMaxBonusLevel() const; //0x0040854a
	/*Skill*/ public: float /*__thiscall*/ GetMaxLevel() const; //0x00408546
	/*Skill*/ public: float /*__thiscall*/ GetNaturalLevel() const; //0x0040a283
	/*Skill*/ public: float /*__thiscall*/ GetNaturalLevelMasteryRatio() const; //0x0040a2ae
};

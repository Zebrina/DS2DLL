#pragma once

#include "ClassMacros.h"

enum eTargetTypeFlags;

class Skills {
public:
	DefineSingleton(Skills, 0x40a2ca);

	/*Skills*/ private: /*static*/ Skills* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a2ca
	/*Skills*/ public: bool /*__thiscall*/ CanUseSkillOnObject(const gpbstring<char>& unk1, Go* unk2, Go* unk3); //0x007f4d51
	/*Skills*/ public: bool /*__thiscall*/ CanUseSkillOnTerrain(const gpbstring<char>& unk1); //0x007f4d3c
	/*Skills*/ public: bool /*__thiscall*/ GetIsSkillDelayed(const gpbstring<char>& unk1); //0x007f4cb0
	/*Skills*/ public: bool /*__thiscall*/ GetSkillAnimUsesStance(const gpbstring<char>& unk1); //0x007f4bd2
	/*Skills*/ public: bool /*__thiscall*/ GetSkillSubValueExists(const gpbstring<char>& unk1); //0x007f2853
	/*Skills*/ public: gpbstring<char> /*__thiscall*/ GetSkillFireFlick(const gpbstring<char>& unk1); //0x007f4a45
	/*Skills*/ public: gpbstring<char> /*__thiscall*/ GetSkillHitFlick(const gpbstring<char>& unk1); //0x007f4a97
	/*Skills*/ public: gpbstring<char> /*__thiscall*/ GetSkillIcon(const gpbstring<char>& unk1); //0x007f4c19
	/*Skills*/ public: gpbstring<char> /*__thiscall*/ GetSkillPreLaunchFlick(const gpbstring<char>& unk1); //0x007f4ae9
	/*Skills*/ public: gpbstring<char> /*__thiscall*/ GetSkillTemplate(const gpbstring<char>& unk1); //0x007f4b3b
	/*Skills*/ public: eTargetTypeFlags /*__thiscall*/ GetSkillTargetType(const gpbstring<char>& unk1); //0x007f4cf7
	/*Skills*/ public: float /*__thiscall*/ GetMaxLevelUber() const; //0x0040855a
	/*Skills*/ public: float /*__thiscall*/ GetSecondarySkillRange(const gpbstring<char>& unk1); //0x007f4dd5
	/*Skills*/ public: float /*__thiscall*/ GetSkillSubValue(const gpbstring<char>& unk1, const gpbstring<char>& unk2, Go* unk3); //0x00408561
	/*Skills*/ public: float /*__thiscall*/ GetSkillSubValue(const Goid_* unk1, const gpbstring<char>& unk2); //0x007f464e
	/*Skills*/ public: int /*__thiscall*/ GetSkillAnimFourCC(const gpbstring<char>& unk1); //0x007f4b8d
	/*Skills*/ public: int /*__thiscall*/ GetSkillCost(const gpbstring<char>& unk1, int unk2); //0x007f4825
	/*Skills*/ public: int /*__thiscall*/ GetSkillPreLaunchAnim(const gpbstring<char>& unk1); //0x007f4c6b
	/*Skills*/ public: void /*__thiscall*/ PlayLevelUpIndicator(const Goid_* unk1, Skill* unk2); //0x007f2160
};

#pragma once

#include "ClassMacros.h"

enum eTargetTypeFlags;

class Skills {
public:
	DefineSingleton(Skills, 0x40a2ca);

	/*Skills*/ private: /*static*/ Skills* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a2ca
	DefineMethod(CanUseSkillOnObject, 0x7f4d51, bool, Params(const gpbstring<char>& unk1, Go* unk2, Go* unk3), Args(const gpbstring<char>& unk1, Go* unk2, Go* unk3));
	DefineMethod(CanUseSkillOnTerrain, 0x7f4d3c, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetIsSkillDelayed, 0x7f4cb0, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetSkillAnimUsesStance, 0x7f4bd2, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetSkillSubValueExists, 0x7f2853, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	/*Skills*/ public: gpbstring<char> /*__thiscall*/ GetSkillFireFlick(const gpbstring<char>& unk1); //0x007f4a45
	/*Skills*/ public: gpbstring<char> /*__thiscall*/ GetSkillHitFlick(const gpbstring<char>& unk1); //0x007f4a97
	/*Skills*/ public: gpbstring<char> /*__thiscall*/ GetSkillIcon(const gpbstring<char>& unk1); //0x007f4c19
	/*Skills*/ public: gpbstring<char> /*__thiscall*/ GetSkillPreLaunchFlick(const gpbstring<char>& unk1); //0x007f4ae9
	/*Skills*/ public: gpbstring<char> /*__thiscall*/ GetSkillTemplate(const gpbstring<char>& unk1); //0x007f4b3b
	DefineMethod(GetSkillTargetType, 0x7f4cf7, eTargetTypeFlags, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineConstMethod(GetMaxLevelUber, 0x40855a, float, Params(), Args());
	DefineMethod(GetSecondarySkillRange, 0x7f4dd5, float, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetSkillSubValue, 0x408561, float, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, Go* unk3), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, Go* unk3));
	DefineMethod(GetSkillSubValue, 0x7f464e, float, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(const Goid_* unk1, const gpbstring<char>& unk2));
	DefineMethod(GetSkillAnimFourCC, 0x7f4b8d, int, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetSkillCost, 0x7f4825, int, Params(const gpbstring<char>& unk1, int unk2), Args(const gpbstring<char>& unk1, int unk2));
	DefineMethod(GetSkillPreLaunchAnim, 0x7f4c6b, int, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(PlayLevelUpIndicator, 0x7f2160, void, Params(const Goid_* unk1, Skill* unk2), Args(const Goid_* unk1, Skill* unk2));
};

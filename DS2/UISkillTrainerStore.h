#pragma once

#include "ClassMacros.h"

class UISkillTrainerStore {
public:
	DefineSingleton(UISkillTrainerStore, 0x474008);

	/*UISkillTrainerStore*/ private: /*static*/ UISkillTrainerStore* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00474008
	DefineMethod(BuyNextUpgrade, 0x4cf7d2, void, Params(), Args());
	DefineMethod(ConfirmNextUpgrade, 0x4cfa19, void, Params(), Args());
	DefineMethod(HideSelectedDescription, 0x4cf1c6, void, Params(), Args());
	DefineMethod(RCPurchaseSkill, 0x4cf405, void, Params(const Goid_* unk1, const gpbstring<char>& unk2, int unk3), Args(const Goid_* unk1, const gpbstring<char>& unk2, int unk3));
	DefineMethod(ResetDescriptionTimer, 0x4cf995, void, Params(const gpbstring<char>& unk1, int unk2), Args(const gpbstring<char>& unk1, int unk2));
	DefineMethod(RSPurchaseSkill, 0x4cf628, void, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(const Goid_* unk1, const gpbstring<char>& unk2));
	DefineMethod(SetActivePage, 0x47eb48, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetRolloverSkill, 0x47eb5e, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(UpdateSelectedDescription, 0x4cfc12, void, Params(), Args());
};

#pragma once

#include "ClassMacros.h"

class UISkillTrainerStore {
public:
	DefineSingleton(UISkillTrainerStore, 0x474008);

	/*UISkillTrainerStore*/ private: /*static*/ UISkillTrainerStore* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00474008
	/*UISkillTrainerStore*/ public: void /*__thiscall*/ BuyNextUpgrade(); //0x004cf7d2
	/*UISkillTrainerStore*/ public: void /*__thiscall*/ ConfirmNextUpgrade(); //0x004cfa19
	/*UISkillTrainerStore*/ public: void /*__thiscall*/ HideSelectedDescription(); //0x004cf1c6
	/*UISkillTrainerStore*/ public: void /*__thiscall*/ RCPurchaseSkill(const Goid_* unk1, const gpbstring<char>& unk2, int unk3); //0x004cf405
	/*UISkillTrainerStore*/ public: void /*__thiscall*/ ResetDescriptionTimer(const gpbstring<char>& unk1, int unk2); //0x004cf995
	/*UISkillTrainerStore*/ public: void /*__thiscall*/ RSPurchaseSkill(const Goid_* unk1, const gpbstring<char>& unk2); //0x004cf628
	/*UISkillTrainerStore*/ public: void /*__thiscall*/ SetActivePage(const gpbstring<char>& unk1); //0x0047eb48
	/*UISkillTrainerStore*/ public: void /*__thiscall*/ SetRolloverSkill(const gpbstring<char>& unk1); //0x0047eb5e
	/*UISkillTrainerStore*/ public: void /*__thiscall*/ UpdateSelectedDescription(); //0x004cfc12
};

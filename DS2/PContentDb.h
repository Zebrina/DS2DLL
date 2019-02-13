#pragma once

#include "ClassMacros.h"

enum eItemSkillType;

class PContentDb {
public:
	DefineSingleton(PContentDb, 0x40a437);

	/*PContentDb*/ private: /*static*/ PContentDb* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a437
	DefineMethod(GetForceBestDrops, 0x408e7f, bool, Params(), Args());
	DefineMethod(IsFighterType, 0x40a406, bool, Params(eItemSkillType unk1), Args(eItemSkillType unk1));
	DefineMethod(IsMageType, 0x40a425, bool, Params(eItemSkillType unk1), Args(eItemSkillType unk1));
	DefineMethod(IsRangerType, 0x40a415, bool, Params(eItemSkillType unk1), Args(eItemSkillType unk1));
	/*PContentDb*/ public: gpbstring<char> /*__thiscall*/ GetHighestSkill(const Goid_* unk1, const gpbstring<char>& unk2); //0x008fb685
	/*PContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateAddress(Skrit::RecordWrapper* unk1) const; //0x008faefe
	/*PContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateName(Skrit::RecordWrapper* unk1) const; //0x008fae80
	/*PContentDb*/ public: const FuBi::IFdtTable* /*__thiscall*/ GetItemDb(); //0x00408e90
	/*PContentDb*/ public: const Goid_* /*__thiscall*/ GetRandomCharacterFromParty(const Goid_* unk1); //0x008f8795
	DefineMethod(GetAvgPartySkillLevel, 0x8f92f6, int, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(const Goid_* unk1, const gpbstring<char>& unk2));
	DefineMethod(GetHighestPartySkillLevel, 0x8f9376, int, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(const Goid_* unk1, const gpbstring<char>& unk2));
	DefineMethod(GetTotalCharacterCount, 0x408e94, int, Params(), Args());
	DefineMethod(RCSyncOnMachine, 0x8fe734, FuBi::Cookie__*, Params(const_mem_ptr unk1, unsigned long unk2), Args(const_mem_ptr unk1, unsigned long unk2));
	DefineMethod(RCSetCharacterToAnalyze, 0x8f7644, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCSetHighestGoldBonusPercent, 0x8f7812, void, Params(float unk1), Args(float unk1));
	DefineMethod(RCSetHighestMagicFindChance, 0x8f7729, void, Params(float unk1), Args(float unk1));
	DefineMethod(RCSetTotalCharacterCount, 0x8f79aa, void, Params(int unk1), Args(int unk1));
	DefineMethod(RSSetCharacterToAnalyze, 0x8f8a73, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SCalcTotalCharacterCount, 0x8f93e5, void, Params(), Args());
	DefineMethod(SetForceBestDrops, 0x408e72, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetHighestGoldBonusPercent, 0x408e83, void, Params(float unk1), Args(float unk1));
	DefineMethod(SSetHighestGoldBonusPercent, 0x8f8be0, void, Params(float unk1), Args(float unk1));
	DefineMethod(SSetHighestMagicFindChance, 0x8f8bcd, void, Params(float unk1), Args(float unk1));
	DefineMethod(SSetTotalCharacterCount, 0x8f8d94, void, Params(int unk1), Args(int unk1));
};

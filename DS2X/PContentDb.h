#pragma once

#include "Enums.h"
#include "FuBi.h"

class PContentDb {
public:
	DefineSingleton(PContentDb, 0x40a437);

	DefineMethod(GetForceBestDrops, 0x408e7f, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsFighterType, 0x40a406, bool, Params(eItemSkillType itemSkillType), Args(itemSkillType));
	DefineMethod(IsRangerType, 0x40a415, bool, Params(eItemSkillType itemSkillType), Args(itemSkillType));
	DefineMethod(IsMageType, 0x40a425, bool, Params(eItemSkillType itemSkillType), Args(itemSkillType));
	DefineMethod(GetHighestSkill, 0x8fb685, gpbstring<char>, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineConstMethod(GetTemplateAddress, 0x8faefe, gpbstring<char>, Params(Skrit::RecordWrapper* unk1), Args(unk1));
	DefineConstMethod(GetTemplateName, 0x8fae80, gpbstring<char>, Params(Skrit::RecordWrapper* unk1), Args(unk1));
	DefineMethod(GetItemDb, 0x408e90, const FuBi::IFdtTable*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetRandomCharacterFromParty, 0x8f8795, const Goid_*, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(GetAvgPartySkillLevel, 0x8f92f6, int, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(GetHighestPartySkillLevel, 0x8f9376, int, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
  float GetHighestGoldBonusPercent() const {
    return highestGoldBonusPercent;
  }
	DefineMethod(SetHighestGoldBonusPercent, 0x408e83, void, Params(float newValue), Args(newValue));
	DefineMethod(GetTotalCharacterCount, 0x408e94, int, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSyncOnMachine, 0x8fe734, FuBi::Cookie__*, Params(const_mem_ptr unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCSetCharacterToAnalyze, 0x8f7644, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCSetHighestGoldBonusPercent, 0x8f7812, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetHighestMagicFindChance, 0x8f7729, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetTotalCharacterCount, 0x8f79aa, void, Params(int unk1), Args(unk1));
	DefineMethod(RSSetCharacterToAnalyze, 0x8f8a73, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SCalcTotalCharacterCount, 0x8f93e5, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetForceBestDrops, 0x408e72, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetHighestGoldBonusPercent, 0x8f8be0, void, Params(float newValue), Args(newValue));
	DefineMethod(SSetHighestMagicFindChance, 0x8f8bcd, void, Params(float newValue), Args(newValue));
	DefineMethod(SSetTotalCharacterCount, 0x8f8d94, void, Params(int unk1), Args(unk1));

  // 0x00
  FillStruct(0x00, 0x08);
  // 0x08
  FuBi::IFdtTable* itemDb;
  // 0x0c
  FillStruct(0x0c, 0x54);
  // 0x54
  float highestGoldBonusPercent;
  // 0x58
  FillStruct(0x58, 0x60);
  // 0x60
  bool forceBestDrops;
  // 0x61
  FillStruct(0x61, 0x74);
  // 0x74
  int totalCharacterCount;
};

STATIC_ASSERT_OFFSETOF(PContentDb, highestGoldBonusPercent, 0x54);
STATIC_ASSERT_OFFSETOF(PContentDb, totalCharacterCount, 0x74);

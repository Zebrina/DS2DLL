#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "FuBi.h"
#include "GPString.h"
#include "Memory.h"
#include "Skrit.h"

// Parameterized Content Database
class PContentDb {
public:
	$Singleton(PContentDb, 0x0040a437);

	FEX float GetHighestMagicFindChance() const;
	void SetHighestMagicFindChance(float newValue); // 0x008f7470
	FEX float GetHighestGoldBonusPercent() const;
	void SetHighestGoldBonusPercent(float newValue); // 0x00408e83
	bool GetForceBestDrops() const; // 0x00408e7f
	void SetForceBestDrops(bool flag); // 0x00408e72
	int GetTotalCharacterCount() const; // 0x00408e94
	void SetTotalCharacterCount(int newValue); // 0x008f747d

	$Method(0x0040a406, IsFighterType, bool, eItemSkillType itemSkillType);
	$Method(0x0040a415, IsRangerType, bool, eItemSkillType itemSkillType);
	$Method(0x0040a425, IsMageType, bool, eItemSkillType itemSkillType);
	$Method(0x008fb685, GetHighestSkill, GPBString, const Goid* unk1, const GPBString& unk2);
	$ConstMethod(0x008faefe, GetTemplateAddress, GPBString, Skrit::RecordWrapper* unk1);
	$ConstMethod(0x008fae80, GetTemplateName, GPBString, Skrit::RecordWrapper* unk1);
	$Method(0x00408e90, GetItemDb, const FuBi::IFdtTable*);
	$Method(0x008f8795, GetRandomCharacterFromParty, const Goid*, const Goid* unk1);
	$Method(0x008f92f6, GetAvgPartySkillLevel, int, const Goid* unk1, const GPBString& unk2);
	$Method(0x008f9376, GetHighestPartySkillLevel, int, const Goid* unk1, const GPBString& unk2);
	$Method(0x008fe734, RCSyncOnMachine, FuBiCookie*, const_mem_ptr unk1, uint unk2);
	$Method(0x008f7644, RCSetCharacterToAnalyze, void, const Goid* unk1);
	$Method(0x008f7812, RCSetHighestGoldBonusPercent, void, float newValue);
	$Method(0x008f7729, RCSetHighestMagicFindChance, void, float newValue);
	$Method(0x008f79aa, RCSetTotalCharacterCount, void, int newValue);
	$Method(0x008f8a73, RSSetCharacterToAnalyze, void, const Goid* unk1);
	$Method(0x008f93e5, SCalcTotalCharacterCount, void);
	$Method(0x008f8be0, SSetHighestGoldBonusPercent, void, float newValue);
	$Method(0x008f8bcd, SSetHighestMagicFindChance, void, float newValue);
	$Method(0x008f8d94, SSetTotalCharacterCount, void, int unk1); // Jumps to SSetTotalCharacterCount.

	// 0x00
	$Padding(0x00, 0x08);
	// 0x08
	FuBi::IFdtTable* itemDb;
	// 0x0c
	$Padding(0x0c, 0x4c);
    // 0x4c
    Goid* goid4C = Goid::Invalid;
    // 0x50
	float highestMagicFindChance;
	// 0x54
	float highestGoldBonusPercent;
	// 0x58
	$Padding(0x58, 0x60);
	// 0x60
	bool forceBestDrops;
	// 0x61
	$Padding(0x64, 0x74);
	// 0x74
	int totalCharacterCount;
};

STATIC_ASSERT_OFFSETOF(PContentDb, highestGoldBonusPercent, 0x54);
STATIC_ASSERT_OFFSETOF(PContentDb, totalCharacterCount, 0x74);

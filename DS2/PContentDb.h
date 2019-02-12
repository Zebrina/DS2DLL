#pragma once

#include "ClassMacros.h"

enum eItemSkillType;

class PContentDb {
public:
	DefineSingleton(PContentDb, 0x40a437);

	/*PContentDb*/ private: /*static*/ PContentDb* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a437
	/*PContentDb*/ public: bool /*__thiscall*/ GetForceBestDrops(); //0x00408e7f
	/*PContentDb*/ public: bool /*__thiscall*/ IsFighterType(eItemSkillType unk1); //0x0040a406
	/*PContentDb*/ public: bool /*__thiscall*/ IsMageType(eItemSkillType unk1); //0x0040a425
	/*PContentDb*/ public: bool /*__thiscall*/ IsRangerType(eItemSkillType unk1); //0x0040a415
	/*PContentDb*/ public: gpbstring<char> /*__thiscall*/ GetHighestSkill(const Goid_* unk1, const gpbstring<char>& unk2); //0x008fb685
	/*PContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateAddress(Skrit::RecordWrapper* unk1) const; //0x008faefe
	/*PContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateName(Skrit::RecordWrapper* unk1) const; //0x008fae80
	/*PContentDb*/ public: const FuBi::IFdtTable* /*__thiscall*/ GetItemDb(); //0x00408e90
	/*PContentDb*/ public: const Goid_* /*__thiscall*/ GetRandomCharacterFromParty(const Goid_* unk1); //0x008f8795
	/*PContentDb*/ public: int /*__thiscall*/ GetAvgPartySkillLevel(const Goid_* unk1, const gpbstring<char>& unk2); //0x008f92f6
	/*PContentDb*/ public: int /*__thiscall*/ GetHighestPartySkillLevel(const Goid_* unk1, const gpbstring<char>& unk2); //0x008f9376
	/*PContentDb*/ public: int /*__thiscall*/ GetTotalCharacterCount(); //0x00408e94
	/*PContentDb*/ public: FuBi::Cookie__* /*__thiscall*/ RCSyncOnMachine(const_mem_ptr unk1, unsigned long unk2); //0x008fe734
	/*PContentDb*/ public: void /*__thiscall*/ RCSetCharacterToAnalyze(const Goid_* unk1); //0x008f7644
	/*PContentDb*/ public: void /*__thiscall*/ RCSetHighestGoldBonusPercent(float unk1); //0x008f7812
	/*PContentDb*/ public: void /*__thiscall*/ RCSetHighestMagicFindChance(float unk1); //0x008f7729
	/*PContentDb*/ public: void /*__thiscall*/ RCSetTotalCharacterCount(int unk1); //0x008f79aa
	/*PContentDb*/ public: void /*__thiscall*/ RSSetCharacterToAnalyze(const Goid_* unk1); //0x008f8a73
	/*PContentDb*/ public: void /*__thiscall*/ SCalcTotalCharacterCount(); //0x008f93e5
	/*PContentDb*/ public: void /*__thiscall*/ SetForceBestDrops(bool unk1); //0x00408e72
	/*PContentDb*/ public: void /*__thiscall*/ SetHighestGoldBonusPercent(float unk1); //0x00408e83
	/*PContentDb*/ public: void /*__thiscall*/ SSetHighestGoldBonusPercent(float unk1); //0x008f8be0
	/*PContentDb*/ public: void /*__thiscall*/ SSetHighestMagicFindChance(float unk1); //0x008f8bcd
	/*PContentDb*/ public: void /*__thiscall*/ SSetTotalCharacterCount(int unk1); //0x008f8d94
};

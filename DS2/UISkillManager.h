#pragma once

#include "ClassMacros.h"

class UISkillManager {
public:
	DefineSingleton(UISkillManager, 0x456e6c);

	/*UISkillManager*/ private: /*static*/ UISkillManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00456e6c
	/*UISkillManager*/ public: bool /*__thiscall*/ GetFlashConfirm(); //0x00456ab2
	/*UISkillManager*/ public: const gpbstring<char>& /*__thiscall*/ GetCurrentSkillPage(); //0x00456ab6
	/*UISkillManager*/ public: const gpbstring<char>& /*__thiscall*/ GetRolloverSkill(); //0x00456ab9
	/*UISkillManager*/ public: int /*__thiscall*/ GetAvailablePoints(); //0x00456aca
	/*UISkillManager*/ public: void /*__thiscall*/ ConfirmPurchaseSkills(); //0x004c3d7a
	/*UISkillManager*/ public: void /*__thiscall*/ ContextEquipPower(int unk1); //0x004c2342
	/*UISkillManager*/ public: void /*__thiscall*/ DecrementSkill(const gpbstring<char>& unk1); //0x004c2ad1
	/*UISkillManager*/ public: void /*__thiscall*/ HideSelectedDescription(); //0x004c1d18
	/*UISkillManager*/ public: void /*__thiscall*/ IncrementSkill(const gpbstring<char>& unk1); //0x004c2957
	/*UISkillManager*/ public: void /*__thiscall*/ OnPowerRolloff(int unk1); //0x004c25c2
	/*UISkillManager*/ public: void /*__thiscall*/ OnSkillLevelRolloff(); //0x004c25aa
	/*UISkillManager*/ public: void /*__thiscall*/ OnSkillLevelRollover(); //0x004c256d
	/*UISkillManager*/ public: void /*__thiscall*/ OpenSkillsInterface(int unk1); //0x004c37e9
	/*UISkillManager*/ public: void /*__thiscall*/ PickupPower(int unk1); //0x004c20dc
	/*UISkillManager*/ public: void /*__thiscall*/ PurchaseSkills(); //0x004c3971
	/*UISkillManager*/ public: void /*__thiscall*/ RCLearnPower(const Goid_* unk1, const gpbstring<char>& unk2, int unk3); //0x004c2b47
	/*UISkillManager*/ public: void /*__thiscall*/ RCOnSkillPointReady(const Goid_* unk1); //0x004c0b52
	/*UISkillManager*/ public: void /*__thiscall*/ RCResetMemberSkills(const Goid_* unk1, unsigned long unk2); //0x004c0ce2
	/*UISkillManager*/ public: void /*__thiscall*/ RCResetSkillPoints(unsigned long unk1); //0x004c1399
	/*UISkillManager*/ public: void /*__thiscall*/ RCSetPartyPowers(bool unk1, const Goid_* unk2); //0x004bf532
	/*UISkillManager*/ public: void /*__thiscall*/ RefreshMousePosition(); //0x004c2f2c
	/*UISkillManager*/ public: void /*__thiscall*/ ResetDescriptionTimer(const gpbstring<char>& unk1); //0x004c1f3d
	/*UISkillManager*/ public: void /*__thiscall*/ ResetPowerDescriptionTimer(int unk1); //0x004c1ff6
	/*UISkillManager*/ public: void /*__thiscall*/ ResetSkillPoints(); //0x004c1246
	/*UISkillManager*/ public: void /*__thiscall*/ RSCheckPowers(const Goid_* unk1); //0x004c319e
	/*UISkillManager*/ public: void /*__thiscall*/ RSRefreshPartyPowers(const Goid_* unk1); //0x004c09fd
	/*UISkillManager*/ public: void /*__thiscall*/ RSResetMemberSkills(const Goid_* unk1); //0x004c33fe
	/*UISkillManager*/ public: void /*__thiscall*/ RSResetSkillPoints(const Goid_* unk1); //0x004c15ff
	/*UISkillManager*/ public: void /*__thiscall*/ RSSetPartyPowers(bool unk1, const Goid_* unk2); //0x004bf7c4
	/*UISkillManager*/ public: void /*__thiscall*/ RSSetPartyPowers(bool unk1); //0x004bf987
	/*UISkillManager*/ public: void /*__thiscall*/ SelectPower(int unk1); //0x004c247a
	/*UISkillManager*/ public: void /*__thiscall*/ SetCurrentSkillPage(const gpbstring<char>& unk1); //0x004c2ffb
	/*UISkillManager*/ public: void /*__thiscall*/ SOnSkillPointReady(const Goid_* unk1); //0x004c0cb4
	/*UISkillManager*/ public: void /*__thiscall*/ UpdateSelectedDescription(); //0x004c17bb
};

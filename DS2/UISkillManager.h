#pragma once

#include "ClassMacros.h"

class UISkillManager {
public:
	DefineSingleton(UISkillManager, 0x456e6c);

	/*UISkillManager*/ private: /*static*/ UISkillManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00456e6c
	DefineMethod(GetFlashConfirm, 0x456ab2, bool, Params(), Args());
	/*UISkillManager*/ public: const gpbstring<char>& /*__thiscall*/ GetCurrentSkillPage(); //0x00456ab6
	/*UISkillManager*/ public: const gpbstring<char>& /*__thiscall*/ GetRolloverSkill(); //0x00456ab9
	DefineMethod(GetAvailablePoints, 0x456aca, int, Params(), Args());
	DefineMethod(ConfirmPurchaseSkills, 0x4c3d7a, void, Params(), Args());
	DefineMethod(ContextEquipPower, 0x4c2342, void, Params(int unk1), Args(int unk1));
	DefineMethod(DecrementSkill, 0x4c2ad1, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(HideSelectedDescription, 0x4c1d18, void, Params(), Args());
	DefineMethod(IncrementSkill, 0x4c2957, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(OnPowerRolloff, 0x4c25c2, void, Params(int unk1), Args(int unk1));
	DefineMethod(OnSkillLevelRolloff, 0x4c25aa, void, Params(), Args());
	DefineMethod(OnSkillLevelRollover, 0x4c256d, void, Params(), Args());
	DefineMethod(OpenSkillsInterface, 0x4c37e9, void, Params(int unk1), Args(int unk1));
	DefineMethod(PickupPower, 0x4c20dc, void, Params(int unk1), Args(int unk1));
	DefineMethod(PurchaseSkills, 0x4c3971, void, Params(), Args());
	DefineMethod(RCLearnPower, 0x4c2b47, void, Params(const Goid_* unk1, const gpbstring<char>& unk2, int unk3), Args(const Goid_* unk1, const gpbstring<char>& unk2, int unk3));
	DefineMethod(RCOnSkillPointReady, 0x4c0b52, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCResetMemberSkills, 0x4c0ce2, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCResetSkillPoints, 0x4c1399, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCSetPartyPowers, 0x4bf532, void, Params(bool unk1, const Goid_* unk2), Args(bool unk1, const Goid_* unk2));
	DefineMethod(RefreshMousePosition, 0x4c2f2c, void, Params(), Args());
	DefineMethod(ResetDescriptionTimer, 0x4c1f3d, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(ResetPowerDescriptionTimer, 0x4c1ff6, void, Params(int unk1), Args(int unk1));
	DefineMethod(ResetSkillPoints, 0x4c1246, void, Params(), Args());
	DefineMethod(RSCheckPowers, 0x4c319e, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSRefreshPartyPowers, 0x4c09fd, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSResetMemberSkills, 0x4c33fe, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSResetSkillPoints, 0x4c15ff, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSSetPartyPowers, 0x4bf7c4, void, Params(bool unk1, const Goid_* unk2), Args(bool unk1, const Goid_* unk2));
	DefineMethod(RSSetPartyPowers, 0x4bf987, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SelectPower, 0x4c247a, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetCurrentSkillPage, 0x4c2ffb, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SOnSkillPointReady, 0x4c0cb4, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(UpdateSelectedDescription, 0x4c17bb, void, Params(), Args());
};

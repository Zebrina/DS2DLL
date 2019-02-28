#pragma once



class UISkillManager {
public:
	DefineSingleton(UISkillManager, 0x456e6c);

	DefineMethod(GetFlashConfirm, 0x456ab2, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCurrentSkillPage, 0x456ab6, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetRolloverSkill, 0x456ab9, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetAvailablePoints, 0x456aca, int, NO_PARAMS, NO_ARGS);
	DefineMethod(ConfirmPurchaseSkills, 0x4c3d7a, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ContextEquipPower, 0x4c2342, void, Params(int unk1), Args(unk1));
	DefineMethod(DecrementSkill, 0x4c2ad1, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(HideSelectedDescription, 0x4c1d18, void, NO_PARAMS, NO_ARGS);
	DefineMethod(IncrementSkill, 0x4c2957, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(OnPowerRolloff, 0x4c25c2, void, Params(int unk1), Args(unk1));
	DefineMethod(OnSkillLevelRolloff, 0x4c25aa, void, NO_PARAMS, NO_ARGS);
	DefineMethod(OnSkillLevelRollover, 0x4c256d, void, NO_PARAMS, NO_ARGS);
	DefineMethod(OpenSkillsInterface, 0x4c37e9, void, Params(int unk1), Args(unk1));
	DefineMethod(PickupPower, 0x4c20dc, void, Params(int unk1), Args(unk1));
	DefineMethod(PurchaseSkills, 0x4c3971, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCLearnPower, 0x4c2b47, void, Params(const Goid_* unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCOnSkillPointReady, 0x4c0b52, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCResetMemberSkills, 0x4c0ce2, void, Params(const Goid_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCResetSkillPoints, 0x4c1399, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCSetPartyPowers, 0x4bf532, void, Params(bool unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RefreshMousePosition, 0x4c2f2c, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ResetDescriptionTimer, 0x4c1f3d, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(ResetPowerDescriptionTimer, 0x4c1ff6, void, Params(int unk1), Args(unk1));
	DefineMethod(ResetSkillPoints, 0x4c1246, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSCheckPowers, 0x4c319e, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RSRefreshPartyPowers, 0x4c09fd, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RSResetMemberSkills, 0x4c33fe, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RSResetSkillPoints, 0x4c15ff, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RSSetPartyPowers, 0x4bf7c4, void, Params(bool unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RSSetPartyPowers, 0x4bf987, void, Params(bool unk1), Args(unk1));
	DefineMethod(SelectPower, 0x4c247a, void, Params(int unk1), Args(unk1));
	DefineMethod(SetCurrentSkillPage, 0x4c2ffb, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SOnSkillPointReady, 0x4c0cb4, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(UpdateSelectedDescription, 0x4c17bb, void, NO_PARAMS, NO_ARGS);
};

#pragma once



class UISkillTrainerStore {
public:
	DefineSingleton(UISkillTrainerStore, 0x474008);

	DefineMethod(BuyNextUpgrade, 0x4cf7d2, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ConfirmNextUpgrade, 0x4cfa19, void, NO_PARAMS, NO_ARGS);
	DefineMethod(HideSelectedDescription, 0x4cf1c6, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCPurchaseSkill, 0x4cf405, void, Params(const Goid_* unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(ResetDescriptionTimer, 0x4cf995, void, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(RSPurchaseSkill, 0x4cf628, void, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(SetActivePage, 0x47eb48, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetRolloverSkill, 0x47eb5e, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(UpdateSelectedDescription, 0x4cfc12, void, NO_PARAMS, NO_ARGS);
};

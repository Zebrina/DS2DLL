#pragma once

class GoPet {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x485ab4, GoPet*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x485aab, unsigned long, Params(GoPet* unk1), Args(unk1));
	DefineMethod(GetPetClass, 0x485aa7, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPetEmanation, 0x485aa3, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPetSpell, 0x485a9f, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPetWeapon, 0x485a9b, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetFullPetLevel, 0x485a88, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPetLevelProgress, 0x485a8f, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPetLevel, 0x485a84, int, NO_PARAMS, NO_ARGS);
	DefineMethod(EatItem, 0x958284, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCBuildPetEquipment, 0x95672d, void, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetPetBonus, 0x956b31, void, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineMethod(RCSetPetLevel, 0x9547ad, void, Params(int unk1), Args(unk1));
	DefineMethod(RCSetPetStats, 0x957235, void, Params(bool unk1), Args(unk1));
	DefineMethod(RSFinishPetLevelUp, 0x954e00, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSRequestStatRefresh, 0x958ae6, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSSetPetBonus, 0x957f10, void, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineMethod(RSSetPetLevel, 0x954f3e, void, Params(int unk1), Args(unk1));
	DefineMethod(RSSetPetStats, 0x95807b, void, Params(const Goid_* unk1, bool unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(SBuildPetStats, 0x958a66, void, Params(bool unk1, bool unk2), Args(unk1, unk2));
};

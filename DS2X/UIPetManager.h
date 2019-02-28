#pragma once



class UIPetManager {
public:
	DefineSingleton(UIPetManager, 0x456e66);

	DefineMethod(AttemptPetFeed, 0x4bdcff, void, NO_PARAMS, NO_ARGS);
	DefineMethod(OnGrowthBarRolloff, 0x4bd7a1, void, NO_PARAMS, NO_ARGS);
	DefineMethod(OnGrowthBarRollover, 0x4bd784, void, Params(int unk1), Args(unk1));
	DefineMethod(OnPetPowerRolloff, 0x4bd7ab, void, NO_PARAMS, NO_ARGS);
	DefineMethod(OnPetPowerRollover, 0x4be7b9, void, NO_PARAMS, NO_ARGS);
	DefineMethod(OnPetWeaponRolloff, 0x4bd7a6, void, NO_PARAMS, NO_ARGS);
	DefineMethod(OnPetWeaponRollover, 0x4be043, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowNextPetInventoryPage, 0x4bdae7, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowPreviousPetInventoryPage, 0x4bdb49, void, NO_PARAMS, NO_ARGS);
};

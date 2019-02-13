#pragma once

#include "ClassMacros.h"

class UIPetManager {
public:
	DefineSingleton(UIPetManager, 0x456e66);

	/*UIPetManager*/ private: /*static*/ UIPetManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00456e66
	DefineMethod(AttemptPetFeed, 0x4bdcff, void, Params(), Args());
	DefineMethod(OnGrowthBarRolloff, 0x4bd7a1, void, Params(), Args());
	DefineMethod(OnGrowthBarRollover, 0x4bd784, void, Params(int unk1), Args(int unk1));
	DefineMethod(OnPetPowerRolloff, 0x4bd7ab, void, Params(), Args());
	DefineMethod(OnPetPowerRollover, 0x4be7b9, void, Params(), Args());
	DefineMethod(OnPetWeaponRolloff, 0x4bd7a6, void, Params(), Args());
	DefineMethod(OnPetWeaponRollover, 0x4be043, void, Params(), Args());
	DefineMethod(ShowNextPetInventoryPage, 0x4bdae7, void, Params(), Args());
	DefineMethod(ShowPreviousPetInventoryPage, 0x4bdb49, void, Params(), Args());
};

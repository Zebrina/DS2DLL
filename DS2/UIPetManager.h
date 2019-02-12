#pragma once

#include "ClassMacros.h"

class UIPetManager {
public:
	DefineSingleton(UIPetManager, 0x456e66);

	/*UIPetManager*/ private: /*static*/ UIPetManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00456e66
	/*UIPetManager*/ public: void /*__thiscall*/ AttemptPetFeed(); //0x004bdcff
	/*UIPetManager*/ public: void /*__thiscall*/ OnGrowthBarRolloff(); //0x004bd7a1
	/*UIPetManager*/ public: void /*__thiscall*/ OnGrowthBarRollover(int unk1); //0x004bd784
	/*UIPetManager*/ public: void /*__thiscall*/ OnPetPowerRolloff(); //0x004bd7ab
	/*UIPetManager*/ public: void /*__thiscall*/ OnPetPowerRollover(); //0x004be7b9
	/*UIPetManager*/ public: void /*__thiscall*/ OnPetWeaponRolloff(); //0x004bd7a6
	/*UIPetManager*/ public: void /*__thiscall*/ OnPetWeaponRollover(); //0x004be043
	/*UIPetManager*/ public: void /*__thiscall*/ ShowNextPetInventoryPage(); //0x004bdae7
	/*UIPetManager*/ public: void /*__thiscall*/ ShowPreviousPetInventoryPage(); //0x004bdb49
};

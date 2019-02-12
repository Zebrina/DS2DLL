#pragma once

#include "ClassMacros.h"

class UIPetStore {
public:
	DefineSingleton(UIPetStore, 0x4a5722);

	/*UIPetStore*/ private: /*static*/ UIPetStore* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004a5722
	/*UIPetStore*/ public: const Goid_* /*__thiscall*/ GetLastPurchasedPet(); //0x004a44ad
	/*UIPetStore*/ public: int /*__thiscall*/ GetSelectedSlot(); //0x004a449e
	/*UIPetStore*/ public: void /*__thiscall*/ BuySelectedPet(); //0x004ce8ff
	/*UIPetStore*/ public: void /*__thiscall*/ PetPageNext(); //0x004cea51
	/*UIPetStore*/ public: void /*__thiscall*/ PetPagePrevious(); //0x004cea3e
	/*UIPetStore*/ public: void /*__thiscall*/ RCCreatePetMember(const Goid_* unk1, unsigned long unk2); //0x004ce0cd
	/*UIPetStore*/ public: void /*__thiscall*/ RCCreateSelectedPetForView(const Goid_* unk1, unsigned long unk2); //0x004cda94
	/*UIPetStore*/ public: void /*__thiscall*/ RSCreatePetMember(const Goid_* unk1, const gpbstring<char>& unk2); //0x004ce20e
	/*UIPetStore*/ public: void /*__thiscall*/ RSCreateSelectedPetForView(const gpbstring<char>& unk1, const Goid_* unk2); //0x004cddbd
	/*UIPetStore*/ public: void /*__thiscall*/ RSSetScreenNameForPet(const gpbstring<unsigned short>& unk1, const Goid_* unk2); //0x004cdc25
	/*UIPetStore*/ public: void /*__thiscall*/ SelectPetSlot(int unk1); //0x004cd9bc
	/*UIPetStore*/ public: void /*__thiscall*/ SetNewPetName(const gpbstring<char>& unk1); //0x004ce011
	/*UIPetStore*/ public: void /*__thiscall*/ SetSelectedSlot(int unk1); //0x004a44a1
	/*UIPetStore*/ public: void /*__thiscall*/ ViewSelectedPet(); //0x004ce598
};

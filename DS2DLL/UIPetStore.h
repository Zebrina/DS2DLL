#pragma once

#include "GoidScid.h"
#include "GPString.h"

class UIPetStore {
public:
	$Singleton(UIPetStore, 0x004a5722);

	$Method(0x004a44ad, GetLastPurchasedPet, const Goid*);
	$Method(0x004a449e, GetSelectedSlot, int);
	$Method(0x004ce8ff, BuySelectedPet, void);
	$Method(0x004cea51, PetPageNext, void);
	$Method(0x004cea3e, PetPagePrevious, void);
	$Method(0x004ce0cd, RCCreatePetMember, void, const Goid* unk1, uint unk2);
	$Method(0x004cda94, RCCreateSelectedPetForView, void, const Goid* unk1, uint unk2);
	$Method(0x004ce20e, RSCreatePetMember, void, const Goid* unk1, const GPBString& unk2);
	$Method(0x004cddbd, RSCreateSelectedPetForView, void, const GPBString& unk1, const Goid* unk2);
	$Method(0x004cdc25, RSSetScreenNameForPet, void, const GPWString& newName, const Goid* pet);
	$Method(0x004cd9bc, SelectPetSlot, void, int unk1);
	$Method(0x004ce011, SetNewPetName, void, const GPBString& unk1);
	$Method(0x004a44a1, SetSelectedSlot, void, int unk1);
	$Method(0x004ce598, ViewSelectedPet, void);

    // 0x00
    $Padding(0x00, 0x1c);
    // 0x1c
    Goid* goid1C = Goid::Invalid;
};

STATIC_ASSERT(sizeof(UIPetStore) == 0x20);

#pragma once

#include "ClassMacros.h"

class UIPetStore {
public:
	DefineSingleton(UIPetStore, 0x4a5722);

	/*UIPetStore*/ private: /*static*/ UIPetStore* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004a5722
	/*UIPetStore*/ public: const Goid_* /*__thiscall*/ GetLastPurchasedPet(); //0x004a44ad
	DefineMethod(GetSelectedSlot, 0x4a449e, int, Params(), Args());
	DefineMethod(BuySelectedPet, 0x4ce8ff, void, Params(), Args());
	DefineMethod(PetPageNext, 0x4cea51, void, Params(), Args());
	DefineMethod(PetPagePrevious, 0x4cea3e, void, Params(), Args());
	DefineMethod(RCCreatePetMember, 0x4ce0cd, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCCreateSelectedPetForView, 0x4cda94, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RSCreatePetMember, 0x4ce20e, void, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(const Goid_* unk1, const gpbstring<char>& unk2));
	DefineMethod(RSCreateSelectedPetForView, 0x4cddbd, void, Params(const gpbstring<char>& unk1, const Goid_* unk2), Args(const gpbstring<char>& unk1, const Goid_* unk2));
	DefineMethod(RSSetScreenNameForPet, 0x4cdc25, void, Params(const gpbstring<unsigned short>& unk1, const Goid_* unk2), Args(const gpbstring<unsigned short>& unk1, const Goid_* unk2));
	DefineMethod(SelectPetSlot, 0x4cd9bc, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetNewPetName, 0x4ce011, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetSelectedSlot, 0x4a44a1, void, Params(int unk1), Args(int unk1));
	DefineMethod(ViewSelectedPet, 0x4ce598, void, Params(), Args());
};

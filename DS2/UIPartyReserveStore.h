#pragma once

#include "ClassMacros.h"

class UIPartyReserveStore {
public:
	DefineSingleton(UIPartyReserveStore, 0x414312);

	/*UIPartyReserveStore*/ private: /*static*/ UIPartyReserveStore* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414312
	/*UIPartyReserveStore*/ public: int /*__thiscall*/ GetSelectedSlot(); //0x00412f20
	/*UIPartyReserveStore*/ public: void /*__thiscall*/ FinishViewSelectedReservist(const Goid_* unk1); //0x004cccc0
	/*UIPartyReserveStore*/ public: void /*__thiscall*/ LoadSelectedReservist(); //0x004cd190
	/*UIPartyReserveStore*/ public: void /*__thiscall*/ RequestReleaseSelectedReservist(); //0x004cd299
	/*UIPartyReserveStore*/ public: void /*__thiscall*/ ReservePageNext(); //0x004cd9a2
	/*UIPartyReserveStore*/ public: void /*__thiscall*/ ReservePagePrevious(); //0x004cd98f
	/*UIPartyReserveStore*/ public: void /*__thiscall*/ RSRestoreReservist(const Goid_* unk1); //0x004ccd10
	/*UIPartyReserveStore*/ public: void /*__thiscall*/ SelectReserveSlot(int unk1); //0x004cd0ba
	/*UIPartyReserveStore*/ public: void /*__thiscall*/ SetSelectedSlot(int unk1); //0x00412f23
	/*UIPartyReserveStore*/ public: void /*__thiscall*/ ViewSelectedReservist(); //0x004ccf79
};

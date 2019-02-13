#pragma once

#include "ClassMacros.h"

class UIPartyReserveStore {
public:
	DefineSingleton(UIPartyReserveStore, 0x414312);

	/*UIPartyReserveStore*/ private: /*static*/ UIPartyReserveStore* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414312
	DefineMethod(GetSelectedSlot, 0x412f20, int, Params(), Args());
	DefineMethod(FinishViewSelectedReservist, 0x4cccc0, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(LoadSelectedReservist, 0x4cd190, void, Params(), Args());
	DefineMethod(RequestReleaseSelectedReservist, 0x4cd299, void, Params(), Args());
	DefineMethod(ReservePageNext, 0x4cd9a2, void, Params(), Args());
	DefineMethod(ReservePagePrevious, 0x4cd98f, void, Params(), Args());
	DefineMethod(RSRestoreReservist, 0x4ccd10, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SelectReserveSlot, 0x4cd0ba, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetSelectedSlot, 0x412f23, void, Params(int unk1), Args(int unk1));
	DefineMethod(ViewSelectedReservist, 0x4ccf79, void, Params(), Args());
};

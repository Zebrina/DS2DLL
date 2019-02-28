#pragma once



class UIPartyReserveStore {
public:
	DefineSingleton(UIPartyReserveStore, 0x414312);

	DefineMethod(GetSelectedSlot, 0x412f20, int, NO_PARAMS, NO_ARGS);
	DefineMethod(FinishViewSelectedReservist, 0x4cccc0, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(LoadSelectedReservist, 0x4cd190, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RequestReleaseSelectedReservist, 0x4cd299, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ReservePageNext, 0x4cd9a2, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ReservePagePrevious, 0x4cd98f, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSRestoreReservist, 0x4ccd10, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SelectReserveSlot, 0x4cd0ba, void, Params(int unk1), Args(unk1));
	DefineMethod(SetSelectedSlot, 0x412f23, void, Params(int unk1), Args(unk1));
	DefineMethod(ViewSelectedReservist, 0x4ccf79, void, NO_PARAMS, NO_ARGS);
};

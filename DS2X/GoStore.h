#pragma once

#include "FuBi.h"

class GoStore {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x46d8ce, GoStore*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x46d8c5, unsigned long, Params(GoStore* unk1), Args(unk1));
	DefineMethod(RSAddPackmule, 0x9440ac, FuBi::Cookie__*, Params(Go* unk1, Go* unk2), Args(unk1, unk2));
	DefineMethod(RCSyncReceipts, 0x946374, void, Params(const_mem_ptr unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RSSyncReceipts, 0x946c81, void, Params(const Goid_* unk1), Args(unk1));
	DefineConstMethod(IsShopOpen, 0x46dd7f, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetItemMarkup, 0x46d8b4, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetNumHires, 0x943a61, int, NO_PARAMS, NO_ARGS);
	DefineMethod(RCAddToStore, 0x948721, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCRefreshStoreView, 0x94862c, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCRemoveFromStore, 0x9483a7, void, Params(const Goid_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCRemoveItemFromGrid, 0x943318, void, Params(const Goid_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RSAddShopper, 0x944a60, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RSAddToStore, 0x948f4a, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RSRemoveFromStore, 0x948805, void, Params(const Goid_* unk1, const Goid_* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSRemoveLocalItemFromStore, 0x948b87, void, Params(const gpbstring<char>& unk1, unsigned long unk2, const Goid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSRemoveShopper, 0x9437f2, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RSSellAllOf, 0x948dad, void, Params(const_mem_ptr unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RSSellAllOfTrait, 0x9490ee, void, Params(eQueryTrait unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(SetItemMarkup, 0x46d8b8, void, Params(float unk1), Args(unk1));

	// 0x00
	FillStruct(0x00, 0x5c);
	// 0x5c
	float itemMarkup;
};

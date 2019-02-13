#pragma once

class GoStore {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x46d8ce, GoStore*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoStore*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoStore* unk1); //0x0046d8c5
	DefineMethod(RSAddPackmule, 0x9440ac, FuBi::Cookie__*, Params(Go* unk1, Go* unk2), Args(Go* unk1, Go* unk2));
	DefineMethod(RCSyncReceipts, 0x946374, void, Params(const_mem_ptr unk1, unsigned long unk2), Args(const_mem_ptr unk1, unsigned long unk2));
	DefineMethod(RSSyncReceipts, 0x946c81, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineConstMethod(IsShopOpen, 0x46dd7f, bool, Params(), Args());
	DefineMethod(GetItemMarkup, 0x46d8b4, float, Params(), Args());
	DefineMethod(GetNumHires, 0x943a61, int, Params(), Args());
	DefineMethod(RCAddToStore, 0x948721, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCRefreshStoreView, 0x94862c, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCRemoveFromStore, 0x9483a7, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCRemoveItemFromGrid, 0x943318, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RSAddShopper, 0x944a60, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSAddToStore, 0x948f4a, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(RSRemoveFromStore, 0x948805, void, Params(const Goid_* unk1, const Goid_* unk2, bool unk3), Args(const Goid_* unk1, const Goid_* unk2, bool unk3));
	DefineMethod(RSRemoveLocalItemFromStore, 0x948b87, void, Params(const gpbstring<char>& unk1, unsigned long unk2, const Goid_* unk3, bool unk4), Args(const gpbstring<char>& unk1, unsigned long unk2, const Goid_* unk3, bool unk4));
	DefineMethod(RSRemoveShopper, 0x9437f2, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSSellAllOf, 0x948dad, void, Params(const_mem_ptr unk1, const Goid_* unk2), Args(const_mem_ptr unk1, const Goid_* unk2));
	DefineMethod(RSSellAllOfTrait, 0x9490ee, void, Params(eQueryTrait unk1, const Goid_* unk2), Args(eQueryTrait unk1, const Goid_* unk2));
	DefineMethod(SetItemMarkup, 0x46d8b8, void, Params(float unk1), Args(float unk1));
};

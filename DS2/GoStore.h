#pragma once

class GoStore {
public:
	/*GoStore*/ private: /*static*/ GoStore* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x0046d8ce
	/*GoStore*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoStore* unk1); //0x0046d8c5
	/*GoStore*/ private: FuBi::Cookie__* /*__thiscall*/ RSAddPackmule(Go* unk1, Go* unk2); //0x009440ac
	/*GoStore*/ private: void /*__thiscall*/ RCSyncReceipts(const_mem_ptr unk1, unsigned long unk2); //0x00946374
	/*GoStore*/ private: void /*__thiscall*/ RSSyncReceipts(const Goid_* unk1); //0x00946c81
	/*GoStore*/ public: bool /*__thiscall*/ IsShopOpen() const; //0x0046dd7f
	/*GoStore*/ public: float /*__thiscall*/ GetItemMarkup(); //0x0046d8b4
	/*GoStore*/ public: int /*__thiscall*/ GetNumHires(); //0x00943a61
	/*GoStore*/ public: void /*__thiscall*/ RCAddToStore(unsigned long unk1); //0x00948721
	/*GoStore*/ public: void /*__thiscall*/ RCRefreshStoreView(unsigned long unk1); //0x0094862c
	/*GoStore*/ public: void /*__thiscall*/ RCRemoveFromStore(const Goid_* unk1, unsigned long unk2); //0x009483a7
	/*GoStore*/ public: void /*__thiscall*/ RCRemoveItemFromGrid(const Goid_* unk1, unsigned long unk2); //0x00943318
	/*GoStore*/ public: void /*__thiscall*/ RSAddShopper(const Goid_* unk1); //0x00944a60
	/*GoStore*/ public: void /*__thiscall*/ RSAddToStore(const Goid_* unk1, const Goid_* unk2); //0x00948f4a
	/*GoStore*/ public: void /*__thiscall*/ RSRemoveFromStore(const Goid_* unk1, const Goid_* unk2, bool unk3); //0x00948805
	/*GoStore*/ public: void /*__thiscall*/ RSRemoveLocalItemFromStore(const gpbstring<char>& unk1, unsigned long unk2, const Goid_* unk3, bool unk4); //0x00948b87
	/*GoStore*/ public: void /*__thiscall*/ RSRemoveShopper(const Goid_* unk1); //0x009437f2
	/*GoStore*/ public: void /*__thiscall*/ RSSellAllOf(const_mem_ptr unk1, const Goid_* unk2); //0x00948dad
	/*GoStore*/ public: void /*__thiscall*/ RSSellAllOfTrait(eQueryTrait unk1, const Goid_* unk2); //0x009490ee
	/*GoStore*/ public: void /*__thiscall*/ SetItemMarkup(float unk1); //0x0046d8b8
};

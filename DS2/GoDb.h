#pragma once

#include "ClassMacros.h"

class GoDb {
public:
	DefineSingleton(GoDb, 0x40a3b8);

	/*GoDb*/ private: /*static*/ GoDb* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a3b8
	/*GoDb*/ public: bool /*__thiscall*/ AddToHotGroup(const Goid_* unk1, bool unk2); //0x00813eb4
	/*GoDb*/ public: bool /*__thiscall*/ AddToHotGroup(const Goid_* unk1); //0x00408aec
	/*GoDb*/ public: bool /*__thiscall*/ CancelExpiration(Go* unk1, bool unk2); //0x0081b6cf
	/*GoDb*/ public: bool /*__thiscall*/ Deselect(const Goid_* unk1); //0x00408ad9
	/*GoDb*/ public: bool /*__thiscall*/ GetScidBit(const Scid_* unk1, int unk2, bool unk3) const; //0x00813df8
	/*GoDb*/ public: bool /*__thiscall*/ GetScidBit(const Scid_* unk1, int unk2) const; //0x00408a4b
	/*GoDb*/ public: bool /*__thiscall*/ HasEnchantment(const Goid_* unk1, const gpbstring<char>& unk2); //0x00814434
	/*GoDb*/ public: bool /*__thiscall*/ HasEnchantmentNamed(const Goid_* unk1, const gpbstring<char>& unk2); //0x008144e2
	/*GoDb*/ public: bool /*__thiscall*/ HasEnchantments(const Goid_* unk1); //0x00814495
	/*GoDb*/ public: bool /*__thiscall*/ HasGoWithScid(const Scid_* unk1) const; //0x00408b1f
	/*GoDb*/ public: bool /*__thiscall*/ IsBeingWatched(const Goid_* unk1) const; //0x008141a2
	/*GoDb*/ public: bool /*__thiscall*/ IsBeingWatchedBy(const Goid_* unk1, const Goid_* unk2); //0x008141e4
	/*GoDb*/ public: bool /*__thiscall*/ IsConstructingStandaloneGo() const; //0x0080a9a8
	/*GoDb*/ public: bool /*__thiscall*/ IsEditMode() const; //0x004088a8
	/*GoDb*/ public: bool /*__thiscall*/ IsEditorCreating() const; //0x004088ab
	/*GoDb*/ public: bool /*__thiscall*/ IsExpiring(Go* unk1) const; //0x00408ab5
	/*GoDb*/ public: bool /*__thiscall*/ IsInHotGroup(const Goid_* unk1); //0x0080aa53
	/*GoDb*/ public: bool /*__thiscall*/ IsMouseShadowed(const Goid_* unk1) const; //0x0080aa80
	/*GoDb*/ public: bool /*__thiscall*/ IsScidRetired(const Scid_* unk1) const; //0x00814756
	/*GoDb*/ public: bool /*__thiscall*/ IsSelected(const Goid_* unk1) const; //0x0080a9f7
	/*GoDb*/ public: bool /*__thiscall*/ IsShuttingDown() const; //0x0080a945
	/*GoDb*/ public: bool /*__thiscall*/ IsWatching(const Goid_* unk1) const; //0x00814160
	/*GoDb*/ public: bool /*__thiscall*/ RemoveFromHotGroup(const Goid_* unk1); //0x00408afd
	/*GoDb*/ public: bool /*__thiscall*/ SAutoRetire(const Scid_* unk1); //0x0081bb68
	/*GoDb*/ public: bool /*__thiscall*/ Select(const Goid_* unk1, bool unk2, bool unk3); //0x0081b7a3
	/*GoDb*/ public: bool /*__thiscall*/ Select(const Goid_* unk1); //0x00408ac6
	/*GoDb*/ public: bool /*__thiscall*/ SetScidBit(const Scid_* unk1, int unk2, bool unk3); //0x00408a73
	/*GoDb*/ public: bool /*__thiscall*/ SetSessionScidBit(const Scid_* unk1, int unk2, bool unk3); //0x00408a9e
	/*GoDb*/ public: bool /*__thiscall*/ SSetScidBit(const Scid_* unk1, int unk2, bool unk3); //0x0081d5c6
	/*GoDb*/ public: bool /*__thiscall*/ SSetSessionScidBit(const Scid_* unk1, int unk2, bool unk3); //0x0081d616
	/*GoDb*/ public: bool /*__thiscall*/ StartExpiration(Go* unk1, bool unk2); //0x00820a87
	/*GoDb*/ public: const Goid_* /*__thiscall*/ CloneLocalGo(const GoCloneReq& unk1, const char* unk2); //0x0081fed8
	/*GoDb*/ public: const Goid_* /*__thiscall*/ CloneLocalGo(const GoCloneReq& unk1); //0x008200d8
	/*GoDb*/ public: const Goid_* /*__thiscall*/ FindCloneSource(const char* unk1); //0x0081ec1a
	/*GoDb*/ public: const Goid_* /*__thiscall*/ FindGoidByScid(const Scid_* unk1) const; //0x00408b0e
	/*GoDb*/ public: const Goid_* /*__thiscall*/ GetFocusGo() const; //0x00814146
	/*GoDb*/ public: const Goid_* /*__thiscall*/ GetFocusGo(const PlayerId_* unk1) const; //0x00814103
	/*GoDb*/ public: const Goid_* /*__thiscall*/ GetSingletonGoid(const char* unk1); //0x0081548b
	/*GoDb*/ public: const Goid_* /*__thiscall*/ SCloneGo(const GoCloneReq& unk1, const char* unk2); //0x00824008
	/*GoDb*/ public: const Goid_* /*__thiscall*/ SCloneGo(const GoCloneReq& unk1); //0x00824028
	/*GoDb*/ public: const Goid_* /*__thiscall*/ SCreateGo(const GoCreateReq& unk1); //0x008214e7
	/*GoDb*/ public: float /*__thiscall*/ GetLongestAlteration(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4); //0x008145a4
	/*GoDb*/ public: int /*__thiscall*/ GetNodeOccupants(const siege::database_guid& unk1, GoidColl& unk2) const; //0x00813cdb
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ RCAssignFrustumToGo(unsigned long unk1, const FrustumId_* unk2, const Goid_* unk3); //0x0081d641
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ RCClearFocusGo(unsigned long unk1, const PlayerId_* unk2); //0x008152d5
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ RCClientSyncAllClientsGos(unsigned long unk1, const_mem_ptr unk2); //0x00824085
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ RCReleaseFrustumFromGo(unsigned long unk1, const Goid_* unk2, bool unk3); //0x0081cedf
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetFocusGo(unsigned long unk1, const Goid_* unk2); //0x0081596d
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ RSClearFocusGo(const PlayerId_* unk1); //0x00815a63
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ RSCloneGo(const GoCloneReq& unk1, const char* unk2); //0x008245af
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ RSCloneGo(const GoCloneReq& unk1); //0x00825127
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetFocusGo(const Goid_* unk1); //0x00818691
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ SAssignFrustumToGo(const FrustumId_* unk1, const Goid_* unk2); //0x0081d73a
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ SCreateFrustumForGo(const Goid_* unk1); //0x0081d785
	/*GoDb*/ public: FuBi::Cookie__* /*__thiscall*/ SReleaseFrustumFromGo(const Goid_* unk1, bool unk2); //0x0081cfd8
	/*GoDb*/ public: unsigned long /*__thiscall*/ GetScidBits(const Scid_* unk1, unsigned long unk2) const; //0x00813dab
	/*GoDb*/ public: unsigned long /*__thiscall*/ GetScidBits(const Scid_* unk1) const; //0x00408a3a
	/*GoDb*/ public: unsigned long /*__thiscall*/ SetScidBits(const Scid_* unk1, unsigned long unk2); //0x00408a5f
	/*GoDb*/ public: unsigned long /*__thiscall*/ SetSessionScidBits(const Scid_* unk1, unsigned long unk2); //0x00408a8a
	/*GoDb*/ public: unsigned long /*__thiscall*/ SSetScidBits(const Scid_* unk1, unsigned long unk2); //0x0081d5a1
	/*GoDb*/ public: unsigned long /*__thiscall*/ SSetSessionScidBits(const Scid_* unk1, unsigned long unk2); //0x0081d5f1
	/*GoDb*/ public: void /*__thiscall*/ DeselectAll(); //0x0081b89f
	/*GoDb*/ public: void /*__thiscall*/ PreloadCloneSource(Go* unk1, const char* unk2); //0x0081ed8c
	/*GoDb*/ public: void /*__thiscall*/ RCClearEnchantments(const Goid_* unk1, unsigned long unk2); //0x0081e134
	/*GoDb*/ public: void /*__thiscall*/ RCSetScidBit(const Scid_* unk1, int unk2, bool unk3); //0x0081cb89
	/*GoDb*/ public: void /*__thiscall*/ RCSetScidBits(const Scid_* unk1, unsigned long unk2); //0x0081ca9d
	/*GoDb*/ public: void /*__thiscall*/ RCSetSessionScidBit(const Scid_* unk1, int unk2, bool unk3); //0x0081cd64
	/*GoDb*/ public: void /*__thiscall*/ RCSetSessionScidBits(const Scid_* unk1, unsigned long unk2); //0x0081cc78
	/*GoDb*/ public: void /*__thiscall*/ RCSyncOnMachine(unsigned long unk1, const_mem_ptr unk2); //0x0081d927
	/*GoDb*/ public: void /*__thiscall*/ RemoveAllFromHotGroup(); //0x0080fcef
	/*GoDb*/ public: void /*__thiscall*/ RemoveEnchantments(const Goid_* unk1, const Goid_* unk2, bool unk3); //0x0081bab0
	/*GoDb*/ public: void /*__thiscall*/ ReplaceHotGroup(const GopColl& unk1); //0x00813f35
	/*GoDb*/ public: void /*__thiscall*/ RSMarkForDeletion(Go* unk1, bool unk2, bool unk3, bool unk4); //0x008200e9
	/*GoDb*/ public: void /*__thiscall*/ RSMarkForDeletion(const Goid_* unk1, bool unk2, bool unk3, bool unk4); //0x008207ae
	/*GoDb*/ public: void /*__thiscall*/ RSMarkForDeletion(const Scid_* unk1, bool unk2, bool unk3, bool unk4); //0x008206bb
	/*GoDb*/ public: void /*__thiscall*/ RSMarkGoAndChildrenForDeletion(Go* unk1, bool unk2, bool unk3, bool unk4); //0x008208dc
	/*GoDb*/ public: void /*__thiscall*/ RSMarkGoAndChildrenForDeletion(const Goid_* unk1, bool unk2, bool unk3, bool unk4); //0x0082101c
	/*GoDb*/ public: void /*__thiscall*/ RSMarkGoAndChildrenForDeletion(const Scid_* unk1, bool unk2, bool unk3, bool unk4); //0x00820f29
	/*GoDb*/ public: void /*__thiscall*/ SClearEnchantments(const Goid_* unk1); //0x0081f12a
	/*GoDb*/ public: void /*__thiscall*/ SetEnchantmentDoneMessage(const Goid_* unk1, const gpbstring<char>& unk2, const Goid_* unk3, eWorldEvent unk4); //0x0081460d
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(Go* unk1, bool unk2, bool unk3, bool unk4); //0x0081efb8
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(Go* unk1, bool unk2, bool unk3); //0x004088dc
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(Go* unk1, bool unk2); //0x0040891f
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(Go* unk1); //0x0040895f
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(const Goid_* unk1, bool unk2, bool unk3, bool unk4); //0x008202c1
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(const Goid_* unk1, bool unk2, bool unk3); //0x004088c5
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(const Goid_* unk1, bool unk2); //0x00408909
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(const Goid_* unk1); //0x0040894a
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(const Scid_* unk1, bool unk2, bool unk3, bool unk4); //0x00820219
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(const Scid_* unk1, bool unk2, bool unk3); //0x004088ae
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(const Scid_* unk1, bool unk2); //0x004088f3
	/*GoDb*/ public: void /*__thiscall*/ SMarkForDeletion(const Scid_* unk1); //0x00408935
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(Go* unk1, bool unk2, bool unk3, bool unk4); //0x008202f0
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(Go* unk1, bool unk2, bool unk3); //0x004089a2
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(Go* unk1, bool unk2); //0x004089e5
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(Go* unk1); //0x00408a25
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(const Goid_* unk1, bool unk2, bool unk3, bool unk4); //0x00820a58
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(const Goid_* unk1, bool unk2, bool unk3); //0x0040898b
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(const Goid_* unk1, bool unk2); //0x004089cf
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(const Goid_* unk1); //0x00408a10
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(const Scid_* unk1, bool unk2, bool unk3, bool unk4); //0x00820a16
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(const Scid_* unk1, bool unk2, bool unk3); //0x00408974
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(const Scid_* unk1, bool unk2); //0x004089b9
	/*GoDb*/ public: void /*__thiscall*/ SMarkGoAndChildrenForDeletion(const Scid_* unk1); //0x004089fb
	/*GoDb*/ public: void /*__thiscall*/ StartWatching(const Goid_* unk1, const Goid_* unk2); //0x0081d023
	/*GoDb*/ public: void /*__thiscall*/ StopWatching(const Goid_* unk1, const Goid_* unk2); //0x0081b9ee
};

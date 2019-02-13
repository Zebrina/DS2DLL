#pragma once

#include "ClassMacros.h"

class GoDb {
public:
	DefineSingleton(GoDb, 0x40a3b8);

	/*GoDb*/ private: /*static*/ GoDb* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a3b8
	DefineMethod(AddToHotGroup, 0x813eb4, bool, Params(const Goid_* unk1, bool unk2), Args(const Goid_* unk1, bool unk2));
	DefineMethod(AddToHotGroup, 0x408aec, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(CancelExpiration, 0x81b6cf, bool, Params(Go* unk1, bool unk2), Args(Go* unk1, bool unk2));
	DefineMethod(Deselect, 0x408ad9, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineConstMethod(GetScidBit, 0x813df8, bool, Params(const Scid_* unk1, int unk2, bool unk3), Args(const Scid_* unk1, int unk2, bool unk3));
	DefineConstMethod(GetScidBit, 0x408a4b, bool, Params(const Scid_* unk1, int unk2), Args(const Scid_* unk1, int unk2));
	DefineMethod(HasEnchantment, 0x814434, bool, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(const Goid_* unk1, const gpbstring<char>& unk2));
	DefineMethod(HasEnchantmentNamed, 0x8144e2, bool, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(const Goid_* unk1, const gpbstring<char>& unk2));
	DefineMethod(HasEnchantments, 0x814495, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineConstMethod(HasGoWithScid, 0x408b1f, bool, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineConstMethod(IsBeingWatched, 0x8141a2, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(IsBeingWatchedBy, 0x8141e4, bool, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineConstMethod(IsConstructingStandaloneGo, 0x80a9a8, bool, Params(), Args());
	DefineConstMethod(IsEditMode, 0x4088a8, bool, Params(), Args());
	DefineConstMethod(IsEditorCreating, 0x4088ab, bool, Params(), Args());
	DefineConstMethod(IsExpiring, 0x408ab5, bool, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(IsInHotGroup, 0x80aa53, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineConstMethod(IsMouseShadowed, 0x80aa80, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineConstMethod(IsScidRetired, 0x814756, bool, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineConstMethod(IsSelected, 0x80a9f7, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineConstMethod(IsShuttingDown, 0x80a945, bool, Params(), Args());
	DefineConstMethod(IsWatching, 0x814160, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RemoveFromHotGroup, 0x408afd, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SAutoRetire, 0x81bb68, bool, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineMethod(Select, 0x81b7a3, bool, Params(const Goid_* unk1, bool unk2, bool unk3), Args(const Goid_* unk1, bool unk2, bool unk3));
	DefineMethod(Select, 0x408ac6, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetScidBit, 0x408a73, bool, Params(const Scid_* unk1, int unk2, bool unk3), Args(const Scid_* unk1, int unk2, bool unk3));
	DefineMethod(SetSessionScidBit, 0x408a9e, bool, Params(const Scid_* unk1, int unk2, bool unk3), Args(const Scid_* unk1, int unk2, bool unk3));
	DefineMethod(SSetScidBit, 0x81d5c6, bool, Params(const Scid_* unk1, int unk2, bool unk3), Args(const Scid_* unk1, int unk2, bool unk3));
	DefineMethod(SSetSessionScidBit, 0x81d616, bool, Params(const Scid_* unk1, int unk2, bool unk3), Args(const Scid_* unk1, int unk2, bool unk3));
	DefineMethod(StartExpiration, 0x820a87, bool, Params(Go* unk1, bool unk2), Args(Go* unk1, bool unk2));
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
	DefineMethod(GetLongestAlteration, 0x8145a4, float, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4));
	DefineConstMethod(GetNodeOccupants, 0x813cdb, int, Params(const siege::database_guid& unk1, GoidColl& unk2), Args(const siege::database_guid& unk1, GoidColl& unk2));
	DefineMethod(RCAssignFrustumToGo, 0x81d641, FuBi::Cookie__*, Params(unsigned long unk1, const FrustumId_* unk2, const Goid_* unk3), Args(unsigned long unk1, const FrustumId_* unk2, const Goid_* unk3));
	DefineMethod(RCClearFocusGo, 0x8152d5, FuBi::Cookie__*, Params(unsigned long unk1, const PlayerId_* unk2), Args(unsigned long unk1, const PlayerId_* unk2));
	DefineMethod(RCClientSyncAllClientsGos, 0x824085, FuBi::Cookie__*, Params(unsigned long unk1, const_mem_ptr unk2), Args(unsigned long unk1, const_mem_ptr unk2));
	DefineMethod(RCReleaseFrustumFromGo, 0x81cedf, FuBi::Cookie__*, Params(unsigned long unk1, const Goid_* unk2, bool unk3), Args(unsigned long unk1, const Goid_* unk2, bool unk3));
	DefineMethod(RCSetFocusGo, 0x81596d, FuBi::Cookie__*, Params(unsigned long unk1, const Goid_* unk2), Args(unsigned long unk1, const Goid_* unk2));
	DefineMethod(RSClearFocusGo, 0x815a63, FuBi::Cookie__*, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RSCloneGo, 0x8245af, FuBi::Cookie__*, Params(const GoCloneReq& unk1, const char* unk2), Args(const GoCloneReq& unk1, const char* unk2));
	DefineMethod(RSCloneGo, 0x825127, FuBi::Cookie__*, Params(const GoCloneReq& unk1), Args(const GoCloneReq& unk1));
	DefineMethod(RSSetFocusGo, 0x818691, FuBi::Cookie__*, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SAssignFrustumToGo, 0x81d73a, FuBi::Cookie__*, Params(const FrustumId_* unk1, const Goid_* unk2), Args(const FrustumId_* unk1, const Goid_* unk2));
	DefineMethod(SCreateFrustumForGo, 0x81d785, FuBi::Cookie__*, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SReleaseFrustumFromGo, 0x81cfd8, FuBi::Cookie__*, Params(const Goid_* unk1, bool unk2), Args(const Goid_* unk1, bool unk2));
	/*GoDb*/ public: unsigned long /*__thiscall*/ GetScidBits(const Scid_* unk1, unsigned long unk2) const; //0x00813dab
	/*GoDb*/ public: unsigned long /*__thiscall*/ GetScidBits(const Scid_* unk1) const; //0x00408a3a
	/*GoDb*/ public: unsigned long /*__thiscall*/ SetScidBits(const Scid_* unk1, unsigned long unk2); //0x00408a5f
	/*GoDb*/ public: unsigned long /*__thiscall*/ SetSessionScidBits(const Scid_* unk1, unsigned long unk2); //0x00408a8a
	/*GoDb*/ public: unsigned long /*__thiscall*/ SSetScidBits(const Scid_* unk1, unsigned long unk2); //0x0081d5a1
	/*GoDb*/ public: unsigned long /*__thiscall*/ SSetSessionScidBits(const Scid_* unk1, unsigned long unk2); //0x0081d5f1
	DefineMethod(DeselectAll, 0x81b89f, void, Params(), Args());
	DefineMethod(PreloadCloneSource, 0x81ed8c, void, Params(Go* unk1, const char* unk2), Args(Go* unk1, const char* unk2));
	DefineMethod(RCClearEnchantments, 0x81e134, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCSetScidBit, 0x81cb89, void, Params(const Scid_* unk1, int unk2, bool unk3), Args(const Scid_* unk1, int unk2, bool unk3));
	DefineMethod(RCSetScidBits, 0x81ca9d, void, Params(const Scid_* unk1, unsigned long unk2), Args(const Scid_* unk1, unsigned long unk2));
	DefineMethod(RCSetSessionScidBit, 0x81cd64, void, Params(const Scid_* unk1, int unk2, bool unk3), Args(const Scid_* unk1, int unk2, bool unk3));
	DefineMethod(RCSetSessionScidBits, 0x81cc78, void, Params(const Scid_* unk1, unsigned long unk2), Args(const Scid_* unk1, unsigned long unk2));
	DefineMethod(RCSyncOnMachine, 0x81d927, void, Params(unsigned long unk1, const_mem_ptr unk2), Args(unsigned long unk1, const_mem_ptr unk2));
	DefineMethod(RemoveAllFromHotGroup, 0x80fcef, void, Params(), Args());
	DefineMethod(RemoveEnchantments, 0x81bab0, void, Params(const Goid_* unk1, const Goid_* unk2, bool unk3), Args(const Goid_* unk1, const Goid_* unk2, bool unk3));
	DefineMethod(ReplaceHotGroup, 0x813f35, void, Params(const GopColl& unk1), Args(const GopColl& unk1));
	DefineMethod(RSMarkForDeletion, 0x8200e9, void, Params(Go* unk1, bool unk2, bool unk3, bool unk4), Args(Go* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(RSMarkForDeletion, 0x8207ae, void, Params(const Goid_* unk1, bool unk2, bool unk3, bool unk4), Args(const Goid_* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(RSMarkForDeletion, 0x8206bb, void, Params(const Scid_* unk1, bool unk2, bool unk3, bool unk4), Args(const Scid_* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(RSMarkGoAndChildrenForDeletion, 0x8208dc, void, Params(Go* unk1, bool unk2, bool unk3, bool unk4), Args(Go* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(RSMarkGoAndChildrenForDeletion, 0x82101c, void, Params(const Goid_* unk1, bool unk2, bool unk3, bool unk4), Args(const Goid_* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(RSMarkGoAndChildrenForDeletion, 0x820f29, void, Params(const Scid_* unk1, bool unk2, bool unk3, bool unk4), Args(const Scid_* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(SClearEnchantments, 0x81f12a, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetEnchantmentDoneMessage, 0x81460d, void, Params(const Goid_* unk1, const gpbstring<char>& unk2, const Goid_* unk3, eWorldEvent unk4), Args(const Goid_* unk1, const gpbstring<char>& unk2, const Goid_* unk3, eWorldEvent unk4));
	DefineMethod(SMarkForDeletion, 0x81efb8, void, Params(Go* unk1, bool unk2, bool unk3, bool unk4), Args(Go* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(SMarkForDeletion, 0x4088dc, void, Params(Go* unk1, bool unk2, bool unk3), Args(Go* unk1, bool unk2, bool unk3));
	DefineMethod(SMarkForDeletion, 0x40891f, void, Params(Go* unk1, bool unk2), Args(Go* unk1, bool unk2));
	DefineMethod(SMarkForDeletion, 0x40895f, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(SMarkForDeletion, 0x8202c1, void, Params(const Goid_* unk1, bool unk2, bool unk3, bool unk4), Args(const Goid_* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(SMarkForDeletion, 0x4088c5, void, Params(const Goid_* unk1, bool unk2, bool unk3), Args(const Goid_* unk1, bool unk2, bool unk3));
	DefineMethod(SMarkForDeletion, 0x408909, void, Params(const Goid_* unk1, bool unk2), Args(const Goid_* unk1, bool unk2));
	DefineMethod(SMarkForDeletion, 0x40894a, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SMarkForDeletion, 0x820219, void, Params(const Scid_* unk1, bool unk2, bool unk3, bool unk4), Args(const Scid_* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(SMarkForDeletion, 0x4088ae, void, Params(const Scid_* unk1, bool unk2, bool unk3), Args(const Scid_* unk1, bool unk2, bool unk3));
	DefineMethod(SMarkForDeletion, 0x4088f3, void, Params(const Scid_* unk1, bool unk2), Args(const Scid_* unk1, bool unk2));
	DefineMethod(SMarkForDeletion, 0x408935, void, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x8202f0, void, Params(Go* unk1, bool unk2, bool unk3, bool unk4), Args(Go* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x4089a2, void, Params(Go* unk1, bool unk2, bool unk3), Args(Go* unk1, bool unk2, bool unk3));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x4089e5, void, Params(Go* unk1, bool unk2), Args(Go* unk1, bool unk2));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x408a25, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x820a58, void, Params(const Goid_* unk1, bool unk2, bool unk3, bool unk4), Args(const Goid_* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x40898b, void, Params(const Goid_* unk1, bool unk2, bool unk3), Args(const Goid_* unk1, bool unk2, bool unk3));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x4089cf, void, Params(const Goid_* unk1, bool unk2), Args(const Goid_* unk1, bool unk2));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x408a10, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x820a16, void, Params(const Scid_* unk1, bool unk2, bool unk3, bool unk4), Args(const Scid_* unk1, bool unk2, bool unk3, bool unk4));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x408974, void, Params(const Scid_* unk1, bool unk2, bool unk3), Args(const Scid_* unk1, bool unk2, bool unk3));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x4089b9, void, Params(const Scid_* unk1, bool unk2), Args(const Scid_* unk1, bool unk2));
	DefineMethod(SMarkGoAndChildrenForDeletion, 0x4089fb, void, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineMethod(StartWatching, 0x81d023, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(StopWatching, 0x81b9ee, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
};

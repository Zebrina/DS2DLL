#pragma once

#include "FuBi.h"
#include "Go.h"
#include "GoCloneReq.h"
#include "GoCreateReq.h"
#include "GoDbImpl.h"
#include "GoidScid.h"
#include "Siege.h"

class GoDb : public GoDbImpl {
public:
	$Singleton(GoDb, 0x0040a3b8);

	$Method(0x00813eb4, AddToHotGroup, bool, const Goid* goid, bool unk2);
	$Method(0x00408aec, AddToHotGroup, bool, const Goid* goid);
	$Method(0x0081b6cf, CancelExpiration, bool, Go* unk1, bool unk2);
	$Method(0x00408ad9, Deselect, bool, const Goid* goid);
	$ConstMethod(0x00813df8, GetScidBit, bool, const Scid* scid, int unk2, bool unk3);
	$ConstMethod(0x00408a4b, GetScidBit, bool, const Scid* scid, int unk2);
	$Method(0x00814434, HasEnchantment, bool, const Goid* goid, const GPBString& unk2);
	$Method(0x008144e2, HasEnchantmentNamed, bool, const Goid* goid, const GPBString& unk2);
	$Method(0x00814495, HasEnchantments, bool, const Goid* goid);
	$ConstMethod(0x00408b1f, HasGoWithScid, bool, const Scid* scid);
	$ConstMethod(0x008141a2, IsBeingWatched, bool, const Goid* goid);
	$Method(0x008141e4, IsBeingWatchedBy, bool, const Goid* unk1, const Goid* unk2);
	$ConstMethod(0x0080a9a8, IsConstructingStandaloneGo, bool);
	//$ConstMethod(0x004088a8, IsEditMode, bool); // Always returns false.
	//$ConstMethod(0x004088ab, IsEditorCreating, bool); // Always returns false.
	$ConstMethod(0x00408ab5, IsExpiring, bool, Go* unk1);
	$Method(0x0080aa53, IsInHotGroup, bool, const Goid* goid);
	$ConstMethod(0x0080aa80, IsMouseShadowed, bool, const Goid* goid);
	$ConstMethod(0x00814756, IsScidRetired, bool, const Scid* scid);
	$ConstMethod(0x0080a9f7, IsSelected, bool, const Goid* goid);
	$ConstMethod(0x0080a945, IsShuttingDown, bool);
	$ConstMethod(0x00814160, IsWatching, bool, const Goid* goid);
	$Method(0x00408afd, RemoveFromHotGroup, bool, const Goid* goid);
	$Method(0x0081bb68, SAutoRetire, bool, const Scid* scid);
	$Method(0x0081b7a3, Select, bool, const Goid* goid, bool unk2, bool unk3);
	$Method(0x00408ac6, Select, bool, const Goid* goid);
	$Method(0x00408a73, SetScidBit, bool, const Scid* scid, int unk2, bool unk3);
	$Method(0x00408a9e, SetSessionScidBit, bool, const Scid* scid, int unk2, bool unk3);
	$Method(0x0081d5c6, SSetScidBit, bool, const Scid* scid, int unk2, bool unk3);
	$Method(0x0081d616, SSetSessionScidBit, bool, const Scid* scid, int unk2, bool unk3);
	$Method(0x00820a87, StartExpiration, bool, Go* unk1, bool unk2);
	$Method(0x0081fed8, CloneLocalGo, const Goid*, const GoCloneReq& unk1, const char* unk2);
	$Method(0x008200d8, CloneLocalGo, const Goid*, const GoCloneReq& unk1);
	$Method(0x0081ec1a, FindCloneSource, const Goid*, const char* unk1);
	$ConstMethod(0x00408b0e, FindGoidByScid, const Goid*, const Scid* scid);
	$ConstMethod(0x00814146, GetFocusGo, const Goid*);
	$ConstMethod(0x00814103, GetFocusGo, const Goid*, const PlayerId* unk1);
	$Method(0x0081548b, GetSingletonGoid, const Goid*, const char* unk1);
	$Method(0x00824008, SCloneGo, const Goid*, const GoCloneReq& unk1, const char* unk2);
	$Method(0x00824028, SCloneGo, const Goid*, const GoCloneReq& unk1);
	$Method(0x008214e7, SCreateGo, const Goid*, const GoCreateReq& unk1);
	$Method(0x008145a4, GetLongestAlteration, float, const Goid* unk1, const Goid* unk2, const Goid* unk3, const Goid* unk4);
	$ConstMethod(0x00813cdb, GetNodeOccupants, int, const siege::database_guid& unk1, GoidColl& unk2);
	$Method(0x0081d641, RCAssignFrustumToGo, FuBiCookie*, uint unk1, const FrustumId* unk2, const Goid* goid);
	$Method(0x008152d5, RCClearFocusGo, FuBiCookie*, uint unk1, const PlayerId* unk2);
	$Method(0x00824085, RCClientSyncAllClientsGos, FuBiCookie*, uint unk1, const_mem_ptr unk2);
	$Method(0x0081cedf, RCReleaseFrustumFromGo, FuBiCookie*, uint unk1, const Goid* goid, bool unk3);
	$Method(0x0081596d, RCSetFocusGo, FuBiCookie*, uint unk1, const Goid* goid);
	$Method(0x00815a63, RSClearFocusGo, FuBiCookie*, const PlayerId* unk1);
	$Method(0x008245af, RSCloneGo, FuBiCookie*, const GoCloneReq& unk1, const char* unk2);
	$Method(0x00825127, RSCloneGo, FuBiCookie*, const GoCloneReq& unk1);
	$Method(0x00818691, RSSetFocusGo, FuBiCookie*, const Goid* goid);
	$Method(0x0081d73a, SAssignFrustumToGo, FuBiCookie*, const FrustumId* unk1, const Goid* goid);
	$Method(0x0081d785, SCreateFrustumForGo, FuBiCookie*, const Goid* goid);
	$Method(0x0081cfd8, SReleaseFrustumFromGo, FuBiCookie*, const Goid* goid, bool unk2);
	$ConstMethod(0x00813dab, GetScidBits, uint, const Scid* scid, uint unk2);
	$ConstMethod(0x00408a3a, GetScidBits, uint, const Scid* scid);
	$Method(0x00408a5f, SetScidBits, uint, const Scid* scid, uint unk2);
	$Method(0x00408a8a, SetSessionScidBits, uint, const Scid* scid, uint unk2);
	$Method(0x0081d5a1, SSetScidBits, uint, const Scid* scid, uint unk2);
	$Method(0x0081d5f1, SSetSessionScidBits, uint, const Scid* scid, uint unk2);
	$Method(0x0081b89f, DeselectAll, void);
	$Method(0x0081ed8c, PreloadCloneSource, void, Go* unk1, const char* unk2);
	$Method(0x0081e134, RCClearEnchantments, void, const Goid* goid, uint unk2);
	$Method(0x0081cb89, RCSetScidBit, void, const Scid* scid, int unk2, bool unk3);
	$Method(0x0081ca9d, RCSetScidBits, void, const Scid* scid, uint unk2);
	$Method(0x0081cd64, RCSetSessionScidBit, void, const Scid* scid, int unk2, bool unk3);
	$Method(0x0081cc78, RCSetSessionScidBits, void, const Scid* scid, uint unk2);
	$Method(0x0081d927, RCSyncOnMachine, void, uint unk1, const_mem_ptr unk2);
	$Method(0x0080fcef, RemoveAllFromHotGroup, void);
	$Method(0x0081bab0, RemoveEnchantments, void, const Goid* unk1, const Goid* unk2, bool unk3);
	$Method(0x00813f35, ReplaceHotGroup, void, const GopColl& unk1);
	$Method(0x008200e9, RSMarkForDeletion, void, Go* unk1, bool unk2, bool unk3, bool unk4);
	$Method(0x008207ae, RSMarkForDeletion, void, const Goid* goid, bool unk2, bool unk3, bool unk4);
	$Method(0x008206bb, RSMarkForDeletion, void, const Scid* scid, bool unk2, bool unk3, bool unk4);
	$Method(0x008208dc, RSMarkGoAndChildrenForDeletion, void, Go* unk1, bool unk2, bool unk3, bool unk4);
	$Method(0x0082101c, RSMarkGoAndChildrenForDeletion, void, const Goid* goid, bool unk2, bool unk3, bool unk4);
	$Method(0x00820f29, RSMarkGoAndChildrenForDeletion, void, const Scid* scid, bool unk2, bool unk3, bool unk4);
	$Method(0x0081f12a, SClearEnchantments, void, const Goid* goid);
	$Method(0x0081460d, SetEnchantmentDoneMessage, void, const Goid* unk1, const GPBString& unk2, const Goid* unk3, eWorldEvent unk4);
	$Method(0x0040895f, SMarkForDeletion, void, Go* go);
	$Method(0x0040891f, SMarkForDeletion, void, Go* go, bool unk2);
	$Method(0x004088dc, SMarkForDeletion, void, Go* go, bool unk2, bool unk3);
	$Method(0x0081efb8, SMarkForDeletion, void, Go* go, bool unk2, bool unk3, bool unk4);
	$Method(0x0040894a, SMarkForDeletion, void, const Goid* goid);
	$Method(0x00408909, SMarkForDeletion, void, const Goid* goid, bool unk2);
	$Method(0x004088c5, SMarkForDeletion, void, const Goid* goid, bool unk2, bool unk3);
	$Method(0x008202c1, SMarkForDeletion, void, const Goid* goid, bool unk2, bool unk3, bool unk4);
	$Method(0x00408935, SMarkForDeletion, void, const Scid* scid);
	$Method(0x004088f3, SMarkForDeletion, void, const Scid* scid, bool unk2);
	$Method(0x004088ae, SMarkForDeletion, void, const Scid* scid, bool unk2, bool unk3);
	$Method(0x00820219, SMarkForDeletion, void, const Scid* scid, bool unk2, bool unk3, bool unk4);
	$Method(0x00408a25, SMarkGoAndChildrenForDeletion, void, Go* go);
	$Method(0x004089e5, SMarkGoAndChildrenForDeletion, void, Go* go, bool unk2);
	$Method(0x004089a2, SMarkGoAndChildrenForDeletion, void, Go* go, bool unk2, bool unk3);
	$Method(0x008202f0, SMarkGoAndChildrenForDeletion, void, Go* go, bool unk2, bool unk3, bool unk4);
	$Method(0x00408a10, SMarkGoAndChildrenForDeletion, void, const Goid* goid);
	$Method(0x004089cf, SMarkGoAndChildrenForDeletion, void, const Goid* goid, bool unk2);
	$Method(0x0040898b, SMarkGoAndChildrenForDeletion, void, const Goid* goid, bool unk2, bool unk3);
	$Method(0x00820a58, SMarkGoAndChildrenForDeletion, void, const Goid* goid, bool unk2, bool unk3, bool unk4);
	$Method(0x004089fb, SMarkGoAndChildrenForDeletion, void, const Scid* scid);
	$Method(0x004089b9, SMarkGoAndChildrenForDeletion, void, const Scid* scid, bool unk2);
	$Method(0x00408974, SMarkGoAndChildrenForDeletion, void, const Scid* scid, bool unk2, bool unk3);
	$Method(0x00820a16, SMarkGoAndChildrenForDeletion, void, const Scid* scid, bool unk2, bool unk3, bool unk4);
	$Method(0x0081d023, StartWatching, void, const Goid* unk1, const Goid* unk2);
	$Method(0x0081b9ee, StopWatching, void, const Goid* unk1, const Goid* unk2);

	// 0x000
	$Padding(0x000, 0x010);
	// 0x010
	// 0x0049b8f3
	void* ptr010;
    // 0x014
    $Padding(0x014, 0x390);
    // 0x390
    DWORD primaryThreadId;
    // 0x394
    $Padding(0x394, 0x3d0);
};

STATIC_ASSERT(sizeof(GoDb) == 0x3d0);

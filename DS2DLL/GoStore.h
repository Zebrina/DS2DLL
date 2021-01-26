#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "Go.h"
#include "GoComponent.h"
#include "GPString.h"
#include "Memory.h"

class GoStore : public GoComponent {
public:
	$StaticMethod(0x0046d8ce, FUBI_NetToInstance, GoStore*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x0046d8c5, FUBI_InstanceToNet, uint, GoStore* unk1);
	$Method(0x009440ac, RSAddPackmule, FuBiCookie*, Go* unk1, Go* unk2);
	$Method(0x00946374, RCSyncReceipts, void, const_mem_ptr unk1, uint unk2);
	$Method(0x00946c81, RSSyncReceipts, void, const Goid* unk1);
	$ConstMethod(0x0046dd7f, IsShopOpen, bool);
	$Method(0x0046d8b4, GetItemMarkup, float);
	$Method(0x00943a61, GetNumHires, int);
	$Method(0x00948721, RCAddToStore, void, uint unk1);
	$Method(0x0094862c, RCRefreshStoreView, void, uint unk1);
	$Method(0x009483a7, RCRemoveFromStore, void, const Goid* unk1, uint unk2);
	$Method(0x00943318, RCRemoveItemFromGrid, void, const Goid* unk1, uint unk2);
	$Method(0x00944a60, RSAddShopper, void, const Goid* unk1);
	$Method(0x00948f4a, RSAddToStore, void, const Goid* unk1, const Goid* unk2);
	$Method(0x00948805, RSRemoveFromStore, void, const Goid* unk1, const Goid* unk2, bool unk3);
	$Method(0x00948b87, RSRemoveLocalItemFromStore, void, const GPBString& unk1, uint unk2, const Goid* unk3, bool unk4);
	$Method(0x009437f2, RSRemoveShopper, void, const Goid* unk1);
	$Method(0x00948dad, RSSellAllOf, void, const_mem_ptr unk1, const Goid* unk2);
	$Method(0x009490ee, RSSellAllOfTrait, void, eQueryTrait unk1, const Goid* unk2);
	$Method(0x0046d8b8, SetItemMarkup, void, float unk1);

	// 0x14
	$Padding(0x14, 0x5c);
	// 0x5c
	float itemMarkup;
};

STATIC_ASSERT_OFFSETOF(GoStore, itemMarkup, 0x5c);

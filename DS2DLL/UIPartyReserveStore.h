#pragma once

#include "GoidScid.h"

class UIPartyReserveStore {
public:
	$Singleton(UIPartyReserveStore, 0x00414312);

	$Method(0x00412f20, GetSelectedSlot, int);
	$Method(0x004cccc0, FinishViewSelectedReservist, void, const Goid* unk1);
	$Method(0x004cd190, LoadSelectedReservist, void);
	$Method(0x004cd299, RequestReleaseSelectedReservist, void);
	$Method(0x004cd9a2, ReservePageNext, void);
	$Method(0x004cd98f, ReservePagePrevious, void);
	$Method(0x004ccd10, RSRestoreReservist, void, const Goid* unk1);
	$Method(0x004cd0ba, SelectReserveSlot, void, int unk1);
	$Method(0x00412f23, SetSelectedSlot, void, int unk1);
	$Method(0x004ccf79, ViewSelectedReservist, void);

	// 0x00
	int selectedSlot;
    // 0x04
    $Padding(0x04, 0x20);
};

STATIC_ASSERT(sizeof(UIPartyReserveStore) == 0x20);

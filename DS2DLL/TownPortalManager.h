#pragma once

#include "FuBi.h"
#include "Memory.h"
#include "SiegePos.h"

class TownPortalManager {
public:
	$Singleton(TownPortalManager, 0x004243d7);

	$Method(0x00900949, GetInsideTownPortalPos, bool, const PlayerId* playerId, SiegePos& position);
	$Method(0x00900987, GetOutsideTownPortalPos, bool, const PlayerId* playerId, SiegePos& position);
	$Method(0x0090138c, UpdatePortalName, void, const Goid* unk1);
	$Method(0x00901d4f, SCreateInsideTownPortal, bool, const Go* unk1, const Goid* unk2);
	$Method(0x00901bef, SCreateOutsideTownPortal, bool, const Go* unk1, const Goid* unk2);
	$Method(0x00900ea2, RSSetInsideTownPortalInfo, FuBiCookie*, const Go* unk1, const GPBString& unk2);
	$Method(0x009016a8, RCCreateInsideTownPortal, FuBiCookie*, const PlayerId* unk1, uint unk2);
	$Method(0x0090149b, RCCreateOutsideTownPortal, FuBiCookie*, const PlayerId* unk1, uint unk2);
	$Method(0x00901149, RCRequestInsideTownPortalInfo, FuBiCookie*, const Go* unk1, uint unk2);
	$Method(0x00901e2b, RCSyncOnMachine, FuBiCookie*, const_mem_ptr unk1, uint unk2);
	$Method(0x00900d31, RCDestroyTownPortal, void, const PlayerId* unk1);
};

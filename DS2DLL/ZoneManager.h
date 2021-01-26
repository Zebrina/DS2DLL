#pragma once

#include "GoidScid.h"
#include "SiegePos.h"

class ZoneManager {
public:
	$Singleton(ZoneManager, 0x00429e42);

	$Method(0x0090ad34, SClearSpotRequest, bool, const Goid* unk1);
	$Method(0x0090b2e3, SGetSpotRequest, bool, const Goid* unk1, SiegePos& unk2);
	$Method(0x00909fbb, SHasSpotRequest, bool, const Goid* unk1);
	$Method(0x00428473, SRequestBackLeftSpot, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
	$Method(0x0042848a, SRequestBackRightSpot, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
	$Method(0x00428400, SRequestBackSpot, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
	$Method(0x0090d8b8, SRequestClosestSpot, bool, const Goid* unk1, const Goid* unk2, const SiegePos& unk3, SiegePos& unk4);
	$Method(0x004284a1, SRequestFlankSpot, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
	$Method(0x00428445, SRequestFrontLeftSpot, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
	$Method(0x0042845c, SRequestFrontRightSpot, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
	$Method(0x004283e9, SRequestFrontSpot, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
	$Method(0x00428417, SRequestLeftSpot, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
	$Method(0x004284bb, SRequestRandomSpot, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
	$Method(0x0042842e, SRequestRightSpot, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
	$Method(0x0090d820, SRequestSpot, bool, const Goid* unk1, const Goid* unk2, uint unk3, SiegePos& unk4);
};

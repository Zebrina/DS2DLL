#pragma once

#include "FuBi.h"
#include "GPString.h"
#include "Memory.h"
#include "Player.h"

class UITeleport {
public:
	$Singleton(UITeleport, 0x004243d1);

	$ConstMethod(0x00423b2f, GetLocalTeleporterDestinations, const GPBString&);
	$ConstMethod(0x00423b36, GetLocalTeleporterCatalyst, const Goid*);
	$Method(0x004c69e4, RSRequestTeleporterTeleport, bool, const GPBString& unk1);
	$Method(0x004ca563, SRequestTownPortalTeleport, bool, const Goid* unk1, const Goid* unk2);
	$Method(0x004c6c0b, RCCreateTeleporterInterface, FuBiCookie*, const Go* unk1, const GPBString& unk2, bool unk3, uint unk4);
	$Method(0x004c7165, RCFinishTeleport, FuBiCookie*, const FrustumId* unk1);
	$Method(0x004c7c51, RCRequestTeleport, FuBiCookie*, const_mem_ptr unk1);
	$Method(0x004c62f1, RCRequestTeleporterTeleport, FuBiCookie*, const GPBString& unk1, uint unk2);
	$Method(0x004ca2a4, RCRequestTownPortalTeleport, FuBiCookie*, const Goid* unk1, const Goid* unk2, const_mem_ptr unk3, uint unk4);
	$Method(0x004c9da4, RSFinishTownPortalTeleport, FuBiCookie*, const_mem_ptr unk1, const Goid* unk2);
	$Method(0x004c64d9, RSRequestTeleporterTeleport, FuBiCookie*, const Go* unk1, const GPBString& unk2);
	$Method(0x004c628d, CancelTeleporterInterface, void);
	$Method(0x004c621f, ClearTeleportsForPlayer, void, const PlayerId* unk1);
	$Method(0x004c5fbe, RCRequestEndWarp, void, const FrustumId* unk1, uint unk2);
	$Method(0x004c7b50, RSCreateTeleporterInterface, void, const Go* unk1, const GPBString& unk2, bool unk3);
	$Method(0x004c8895, SFinishTeleport, void, const TeleportInfo& unk1);
	$Method(0x004c9b0e, SRequestTeleport, void, Player* unk1, const GoidColl& unk2, const SiegePos& unk3, const CameraPosition& unk4, const GPBString& unk5, const GPBString& unk6, bool unk7, bool unk8);

    // 0x00000
    $Padding(0x00000, 0x23a80);
};

// Suspicious...
STATIC_ASSERT(sizeof(UITeleport) == 0x23a80);

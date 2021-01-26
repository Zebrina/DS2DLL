#pragma once

#include "GPMath.h"
#include "Player.h"
#include "SiegePos.h"

struct GoCloneReq {
	GoCloneReq() = default;
	GoCloneReq(const GoCloneReq&) = default;
	~GoCloneReq() = default;

	GoCloneReq& operator=(const GoCloneReq&) = default;

	$Method(0x00846b86, Init, void);
	$Method(0x00846d4d, Init, void, const char* unk1, const PlayerId* unk2);
	$Method(0x00846d81, Init, void, const char* unk1);
	$Method(0x00846ce1, Init, void, const Goid* unk1, const char* unk2, const PlayerId* unk3);
	$Method(0x00846d1a, Init, void, const Goid* unk1, const char* unk2);
	$Method(0x00846baa, Init, void, const Goid* unk1, const Goid* unk2, const PlayerId* unk3);
	$Method(0x00846bc7, Init, void, const Goid* unk1, const Goid* unk2);
	$Method(0x00846bde, Init, void, const Goid* unk1, const PlayerId* unk2);
	$Method(0x00846bf6, Init, void, const Goid* unk1);
	$Method(0x00502e62, SetFadeIn, void, bool unk1);
	$Method(0x004133e8, SetForceClientAllowed, void, bool unk1);
	$Method(0x00435bc2, SetForcePosition, void, bool unk1);
	$Method(0x00435bd7, SetForceServerOnly, void, bool unk1);
	$Method(0x00502e77, SetNoStartupFx, void, bool unk1);
	$Method(0x0044a584, SetOmni, void, bool unk1);
	$Method(0x0044a599, SetPrepareToDrawNow, void, bool unk1);
	$Method(0x00435bad, SetSnapToTerrain, void, bool unk1);
	$Method(0x00502e48, SetStartingOrient, void, const Quat& unk1);
	$Method(0x008472d9, SetStartingPos, void, const SiegePos& unk1);

    // 0x00
    $Padding(0x00, 0x48);
    // 0x48
    bool b49;
    bool b4A;
};

// Size confirmed.
STATIC_ASSERT(sizeof(GoCloneReq) == 0x4a);

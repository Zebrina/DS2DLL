#pragma once

#include "GoidScid.h"
#include "Player.h"
#include "GPMath.h"
#include "SiegePos.h"

#pragma pack(push, 1)

struct GoCloneReq {
	GoCloneReq() = default;
	GoCloneReq(const GoCloneReq&) = default;
	~GoCloneReq() = default;

	GoCloneReq& operator=(const GoCloneReq&) = default;

	$Method(0x00846b86, Init, void);
	$Method(0x00846d81, Init, void, const char* unk1);
	$Method(0x00846d4d, Init, void, const char* unk1, const PlayerId* unk2);
	$Method(0x00846bf6, Init, void, const Goid* unk1);
	$Method(0x00846d1a, Init, void, const Goid* unk1, const char* unk2);
	$Method(0x00846bc7, Init, void, const Goid* unk1, const Goid* unk2);
	$Method(0x00846bde, Init, void, const Goid* unk1, const PlayerId* playerId);
	$Method(0x00846ce1, Init, void, const Goid* unk1, const char* unk2, const PlayerId* playerId);
	$Method(0x00846baa, Init, void, const Goid* goid1, const Goid* goid2, const PlayerId* playerId);
	$Method(0x00502e62, SetFadeIn, void, bool unk1);
	$Method(0x004133e8, SetForceClientAllowed, void, bool unk1);
	$Method(0x00435bd7, SetForceServerOnly, void, bool unk1);
	$Method(0x0044a599, SetPrepareToDrawNow, void, bool unk1);
	$Method(0x00435bad, SetSnapToTerrain, void, bool flag);
	$Method(0x0044a584, SetOmni, void, bool flag);
	$Method(0x00435bc2, SetForcePosition, void, bool flag);
	$Method(0x00502e77, SetNoStartupFx, void, bool flag);
	$Method(0x008472d9, SetStartingPos, void, const SiegePos& pos);
	$Method(0x00502e48, SetStartingOrient, void, const Quat& quat);

	enum Flags : ushort {
		STARTING_POS_SET	= EnumFlag(1), // ??
		STARTING_ORIENT_SET = EnumFlag(2), // ??
		SNAP_TO_TERRAIN		= EnumFlag(3),
		OMNI				= EnumFlag(4),
		FORCE_POSITION		= EnumFlag(7),
		NO_STARTUP_FX		= EnumFlag(9),
	};

    // 0x00
	Goid* goid1;
	// 0x04
	Goid* goid2;
	// 0x08
	PlayerId* playerId;
	// 0x0c
    $Padding(0x0c, 0x10);
	// 0x10
	SiegePos startingPos; // Size of SiegePos unconfirmed, but atleast 20(0x14) bytes.
	// 0x24
	$Padding(0x24, 0x38);
	// 0x38
	Quat startingOrient;
    // 0x48
	Flags flags;
};

#pragma pack(pop)

// Size confirmed.
STATIC_ASSERT(sizeof(GoCloneReq) == 0x4a);
STATIC_ASSERT_OFFSETOF(GoCloneReq, goid1, 0x00);
STATIC_ASSERT_OFFSETOF(GoCloneReq, playerId, 0x08);
STATIC_ASSERT_OFFSETOF(GoCloneReq, startingPos, 0x10);
STATIC_ASSERT_OFFSETOF(GoCloneReq, startingOrient, 0x38);
STATIC_ASSERT_OFFSETOF(GoCloneReq, flags, 0x48);

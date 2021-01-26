#pragma once

struct GoCreateReq {
	GoCreateReq() = default;
	GoCreateReq(const GoCreateReq&) = default;
	~GoCreateReq() = default;

	GoCreateReq& operator=(const GoCreateReq&) = default;

	$Method(0x00502df1, SetFadeIn, void, bool unk1);
	$Method(0x00502e06, SetForcePosition, void, bool unk1);
	$Method(0x00502e32, SetNoStartupFx, void, bool unk1);
	$Method(0x00502e1b, SetPrepareToDrawNow, void, bool unk1);
	$Method(0x00502ddc, SetSnapToTerrain, void, bool unk1);
	$Method(0x00502dc2, SetStartingOrient, void, const Quat& unk1);
	$Method(0x00847185, SetStartingPos, void, const SiegePos& unk1);

    // 0x00
    $Padding(0x00, 0x48);
    // 0x48
    bool b49;
    bool b4A;
};

// Size confirmed.
STATIC_ASSERT(sizeof(GoCreateReq) == 0x4a);

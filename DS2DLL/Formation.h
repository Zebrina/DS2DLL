#pragma once

#include "DecalId.h"
#include "DS2DLL.h"
#include "Enums.h"
#include "GoidScid.h"
#include "GPString.h"
#include "GPMath.h"
#include "SiegePos.h"

// See world\ai\formations.gas for a better understanding on formations.

class Formation {
public:
	static int const& MaxPartySize;

	$Method(0x0041261e, GetPosition, const SiegePos&);
	$Method(0x008798bd, SetPosition, void, const SiegePos& unk1);
	$Method(0x00412622, GetDirection, const Vector3&);
	$Method(0x0087a70c, SetDirection, void, const Vector3& unk1);
	$Method(0x00412626, GetMemberDirection, const Vector3&);
	$Method(0x0087a787, SetMemberDirection, void, const Vector3& unk1);
	$Method(0x0041260d, SetShape, void, const GPBString& shape);
	$Method(0x0087ed22, SetShape, void, const GPBString& shape, bool unk2);
	$Method(0x0087faf8, Move, bool, eQPlace unk1, eActionOrigin unk2, bool unk3, bool unk4, bool unk5, bool unk6, bool unk7);
	$Method(0x00878752, Rotate, bool, float unk1);

	// Not exported.
	$Method(0x0087fd4c, GetSpotPosition, bool, const Goid* unk1, SiegePos& positionOut);

	// 0x00
	$Padding(0x00, 0x04);
	// 0x04
	DecalId* reservedDecal;
	// 0x08
	DecalId* freeDecal;
	// 0x0c
	DecalId* leaderDecal;
	// 0x10
	DecalId* terrainBlockDecal;
	// 0x14
	$Padding(0x14, 0x40);
	// 0x40
	SiegePos position;
	// 0x54
	$Padding(0x54, 0x78);
	// 0x78
	Vector3 direction;
	// 0x84
	Vector3 memberDirection;
	// 0x90
	float initialSpacing;
	// 0x94
	float minSpacing;
	// 0x98
	float maxSpacing;
	// 0x9c
	GPointF spot;
	// 0xa4
	GPoint center;
};

STATIC_ASSERT_OFFSETOF(Formation, position, 0x40);
STATIC_ASSERT_OFFSETOF(Formation, direction, 0x78);
STATIC_ASSERT_OFFSETOF(Formation, memberDirection, 0x84);
STATIC_ASSERT_OFFSETOF(Formation, initialSpacing, 0x90);
STATIC_ASSERT_OFFSETOF(Formation, spot, 0x9c);
STATIC_ASSERT_OFFSETOF(Formation, center, 0xa4);

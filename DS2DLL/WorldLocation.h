#pragma once

#include "GPString.h"
#include "GPMath.h"

struct WorldLocation {
	WorldLocation() = default;
	WorldLocation(const WorldLocation&) = default;
	~WorldLocation() = default;

	WorldLocation& operator=(const WorldLocation&) = default;

	$ConstMethod(0x00403ee2, GetId, int);
	$ConstMethod(0x00403ee5, GetMinor, bool);
	$ConstMethod(0x0040609e, GetName, GPBString);
	$ConstMethod(0x00405341, GetScreenNameAnsi, GPBString);
	$ConstMethod(0x00403ee9, GetClothMapPos, const Vector3&);
	$ConstMethod(0x004060f6, GetClothMapWindow, GPBString);
	$ConstMethod(0x004060e0, GetClothMapHideGroup, GPBString);
	$ConstMethod(0x004060ca, GetClothMapShowGroup, GPBString);
	$ConstMethod(0x004060b4, GetClothMapRollover, GPBString);

    // 0x00
    int id;
    // 0x04
    $Padding(0x04, 0x08);
    // 0x08
    bool minor;
    // 0x0c
    $Padding(0x0c, 0x20);
    // 0x20
    Vector3 clothMapPos;
};

// Size confirmed.
STATIC_ASSERT(sizeof(WorldLocation) == 0x2c);
STATIC_ASSERT_OFFSETOF(WorldLocation, clothMapPos, 0x20);

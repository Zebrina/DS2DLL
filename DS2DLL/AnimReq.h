#pragma once

#include "Enums.h"

struct AnimReq {
	AnimReq() = default;
	AnimReq(const AnimReq&) = default;
	~AnimReq() = default;

	AnimReq& operator=(const AnimReq&) = default;

	$ConstMethod(0x0047246e, GetReqChore, eAnimChore);
	$Method(0x00472471, SetReqChore, void, eAnimChore chore);
	$ConstMethod(0x0047247d, GetReqBlock, uint);
	$Method(0x00472481, SetReqBlock, void, uint unk1);
	$ConstMethod(0x0047248e, GetReqStance, eAnimStance);
	$Method(0x00472492, SetReqStance, void, eAnimStance stance);
	$ConstMethod(0x0047249f, GetReqSubAnim, int);
	$Method(0x004724a3, SetReqSubAnim, void, int unk1);
	$ConstMethod(0x004724b0, GetReqFlags, uint);
	$Method(0x004724b4, SetReqFlags, void, uint unk1);
	$ConstMethod(0x004724c1, GetReqSpeed, float);
	$Method(0x004724c5, SetReqSpeed, void, float unk1);

    // 0x00
    eAnimChore reqChore;
    // 0x04
    uint reqBlock;
    // 0x08
    eAnimStance reqStance;
    // 0x0c
    int reqSubAnim;
    // 0x10
    uint reqFlags;
    // 0x14
    float reqSpeed;
};

// Size confirmed.
STATIC_ASSERT(sizeof(AnimReq) == 0x18);

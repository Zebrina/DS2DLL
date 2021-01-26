#pragma once

#include "FuBi.h"
#include "GoComponent.h"
#include "GoidScid.h"

class GoGold : public GoComponent {
public:
	$StaticMethod(0x007c84c1, FUBI_NetToInstance, GoGold*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x007c84b8, FUBI_InstanceToNet, uint, GoGold* gold);
	$ConstMethod(0x007c84b4, GetDroppedBy, const Goid*);
	$Method(0x00964eb2, RCDepositSelfIn, FuBiCookie*, Go* targetGo);

	// 0x14
	Goid* droppedBy;
};

STATIC_ASSERT_OFFSETOF(GoGold, droppedBy, 0x14);

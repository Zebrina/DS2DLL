#pragma once

#include "FuBi.h"
#include "GoComponent.h"
#include "GoidScid.h"

class GoCorpse : public GoComponent {
public:
	$StaticMethod(0x00472530, FUBI_NetToInstance, GoCorpse*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00472527, FUBI_InstanceToNet, uint, GoCorpse* unk1);
	$Method(0x00472523, GetInStasis, bool);
	$Method(0x0047251f, GetCorpseOwner, const Goid*);
	$Method(0x00472512, AssignOwner, void, const Goid* unk1);
	$Method(0x0094d372, RCActivateStasis, void, const Goid* unk1);
	$Method(0x0094bba1, RCAssignOwner, void, const Goid* unk1, const Goid* unk2);
	$Method(0x0094dc33, RCPickup, void, const Goid* unk1);
	$Method(0x0094b2bf, RCPickupSuccess, void);
	$Method(0x0094d95d, RSActivateStasis, void);
	$Method(0x0094b763, RSPickupSuccess, void);
	$Method(0x0094adf2, RSSetPickupSuccess, void, bool unk1);
	$Method(0x0094c0d9, SAssignOwner, void, const Goid* unk1);
	$Method(0x0094e997, SRequestPickup, void, const Goid* unk1, bool unk2);
};

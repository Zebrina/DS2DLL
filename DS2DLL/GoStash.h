#pragma once

#include "FuBi.h"
#include "GoComponent.h"
#include "GoidScid.h"

class GoStash : public GoComponent {
public:
	$StaticMethod(0x00472780, FUBI_NetToInstance, GoStash*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00472777, FUBI_InstanceToNet, uint, GoStash* unk1);
	$ConstMethod(0x009507ad, GetActivateRange, float);
	$Method(0x0095089d, RCAddToStash, void, const Goid* unk1, uint unk2);
	$Method(0x0095051e, RCDisableOmniStatus, void, const Goid* unk1, const Goid* unk2);
	$Method(0x009503d3, RCEnableOmniStatus, void, const Goid* unk1);
	$Method(0x00950a42, RCRemoveFromStash, void, const Goid* unk1, uint unk2);
	$Method(0x00950c52, RSAddToStash, void, const Goid* unk1, const Goid* unk2);
	$Method(0x00950eb8, RSRemoveFromStash, void, const Goid* unk1, const Goid* unk2, bool unk3);
};

#pragma once

#include "FuBi.h"

class GoGold {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x7c84c1, GoGold*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x7c84b8, unsigned long, Params(GoGold* unk1), Args(unk1));
	DefineConstMethod(GetDroppedBy, 0x7c84b4, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(RCDepositSelfIn, 0x964eb2, FuBi::Cookie__*, Params(Go* unk1), Args(unk1));
};

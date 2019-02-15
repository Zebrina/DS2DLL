#pragma once

#include "FuBi.h"

class GoPotion {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x7c84d3, GoPotion*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x7c84ca, unsigned long, Params(GoPotion* unk1), Args(unk1));
};

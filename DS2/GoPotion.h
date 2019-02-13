#pragma once

#include "FuBi.h"

class GoPotion {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x7c84d3, GoPotion*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoPotion*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoPotion* unk1); //0x007c84ca
};

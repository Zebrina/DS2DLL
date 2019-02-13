#pragma once

#include "FuBi.h"

class GoGold {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x7c84c1, GoGold*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoGold*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoGold* unk1); //0x007c84b8
	/*GoGold*/ public: const Goid_* /*__thiscall*/ GetDroppedBy() const; //0x007c84b4
	DefineMethod(RCDepositSelfIn, 0x964eb2, FuBi::Cookie__*, Params(Go* unk1), Args(Go* unk1));
};

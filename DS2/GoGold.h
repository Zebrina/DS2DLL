#pragma once

#include "FuBi.h"

class GoGold {
public:
	/*GoGold*/ private: /*static*/ GoGold* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x007c84c1
	/*GoGold*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoGold* unk1); //0x007c84b8
	/*GoGold*/ public: const Goid_* /*__thiscall*/ GetDroppedBy() const; //0x007c84b4
	/*GoGold*/ public: FuBi::Cookie__* /*__thiscall*/ RCDepositSelfIn(Go* unk1); //0x00964eb2
};

#pragma once

#include "ClassMacros.h"

class TownPortalManager {
public:
	DefineSingleton(TownPortalManager, 0x4243d7);

	/*TownPortalManager*/ private: /*static*/ TownPortalManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004243d7
	/*TownPortalManager*/ private: FuBi::Cookie__* /*__thiscall*/ RCRequestInsideTownPortalInfo(const Go* unk1, unsigned long unk2); //0x00901149
	/*TownPortalManager*/ private: FuBi::Cookie__* /*__thiscall*/ RSSetInsideTownPortalInfo(const Go* unk1, const gpbstring<char>& unk2); //0x00900ea2
	/*TownPortalManager*/ public: bool /*__thiscall*/ GetInsideTownPortalPos(const PlayerId_* unk1, SiegePos& unk2); //0x00900949
	/*TownPortalManager*/ public: bool /*__thiscall*/ GetOutsideTownPortalPos(const PlayerId_* unk1, SiegePos& unk2); //0x00900987
	/*TownPortalManager*/ public: bool /*__thiscall*/ SCreateInsideTownPortal(const Go* unk1, const Goid_* unk2); //0x00901d4f
	/*TownPortalManager*/ public: bool /*__thiscall*/ SCreateOutsideTownPortal(const Go* unk1, const Goid_* unk2); //0x00901bef
	/*TownPortalManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCCreateInsideTownPortal(const PlayerId_* unk1, unsigned long unk2); //0x009016a8
	/*TownPortalManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCCreateOutsideTownPortal(const PlayerId_* unk1, unsigned long unk2); //0x0090149b
	/*TownPortalManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCSyncOnMachine(const_mem_ptr unk1, unsigned long unk2); //0x00901e2b
	/*TownPortalManager*/ public: void /*__thiscall*/ RCDestroyTownPortal(const PlayerId_* unk1); //0x00900d31
	/*TownPortalManager*/ public: void /*__thiscall*/ UpdatePortalName(const Goid_* unk1); //0x0090138c
};

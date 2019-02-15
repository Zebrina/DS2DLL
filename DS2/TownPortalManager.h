#pragma once

#include "ClassMacros.h"

class TownPortalManager {
public:
	DefineSingleton(TownPortalManager, 0x4243d7);

	DefineMethod(RCRequestInsideTownPortalInfo, 0x901149, FuBi::Cookie__*, Params(const Go* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RSSetInsideTownPortalInfo, 0x900ea2, FuBi::Cookie__*, Params(const Go* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(GetInsideTownPortalPos, 0x900949, bool, Params(const PlayerId_* unk1, SiegePos& unk2), Args(unk1, unk2));
	DefineMethod(GetOutsideTownPortalPos, 0x900987, bool, Params(const PlayerId_* unk1, SiegePos& unk2), Args(unk1, unk2));
	DefineMethod(SCreateInsideTownPortal, 0x901d4f, bool, Params(const Go* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(SCreateOutsideTownPortal, 0x901bef, bool, Params(const Go* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RCCreateInsideTownPortal, 0x9016a8, FuBi::Cookie__*, Params(const PlayerId_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCCreateOutsideTownPortal, 0x90149b, FuBi::Cookie__*, Params(const PlayerId_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCSyncOnMachine, 0x901e2b, FuBi::Cookie__*, Params(const_mem_ptr unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCDestroyTownPortal, 0x900d31, void, Params(const PlayerId_* unk1), Args(unk1));
	DefineMethod(UpdatePortalName, 0x90138c, void, Params(const Goid_* unk1), Args(unk1));
};

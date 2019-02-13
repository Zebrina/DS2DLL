#pragma once

#include "Goid.h"
#include "SiegePos.h"

#include "ClassMacros.h"

class ZoneManager {
public:
	DefineSingleton(ZoneManager, 0x429e42);

	/*ZoneManager*/ private: /*static*/ ZoneManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429e42
	DefineMethod(SClearSpotRequest, 0x90ad34, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SGetSpotRequest, 0x90b2e3, bool, Params(const Goid_* unk1, SiegePos& unk2), Args(const Goid_* unk1, SiegePos& unk2));
	DefineMethod(SHasSpotRequest, 0x909fbb, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SRequestBackLeftSpot, 0x428473, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
	DefineMethod(SRequestBackRightSpot, 0x42848a, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
	DefineMethod(SRequestBackSpot, 0x428400, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
	DefineMethod(SRequestClosestSpot, 0x90d8b8, bool, Params(const Goid_* unk1, const Goid_* unk2, const SiegePos& unk3, SiegePos& unk4), Args(const Goid_* unk1, const Goid_* unk2, const SiegePos& unk3, SiegePos& unk4));
	DefineMethod(SRequestFlankSpot, 0x4284a1, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
	DefineMethod(SRequestFrontLeftSpot, 0x428445, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
	DefineMethod(SRequestFrontRightSpot, 0x42845c, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
	DefineMethod(SRequestFrontSpot, 0x4283e9, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
	DefineMethod(SRequestLeftSpot, 0x428417, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
	DefineMethod(SRequestRandomSpot, 0x4284bb, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
	DefineMethod(SRequestRightSpot, 0x42842e, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
	DefineMethod(SRequestSpot, 0x90d820, bool, Params(const Goid_* unk1, const Goid_* unk2, unsigned long unk3, SiegePos& unk4), Args(const Goid_* unk1, const Goid_* unk2, unsigned long unk3, SiegePos& unk4));
};

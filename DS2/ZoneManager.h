#pragma once

#include "Goid.h"
#include "SiegePos.h"

#include "ClassMacros.h"

class ZoneManager {
public:
	DefineSingleton(ZoneManager, 0x429e42);

	/*ZoneManager*/ private: /*static*/ ZoneManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429e42
	/*ZoneManager*/ public: bool /*__thiscall*/ SClearSpotRequest(const Goid_* unk1); //0x0090ad34
	/*ZoneManager*/ public: bool /*__thiscall*/ SGetSpotRequest(const Goid_* unk1, SiegePos& unk2); //0x0090b2e3
	/*ZoneManager*/ public: bool /*__thiscall*/ SHasSpotRequest(const Goid_* unk1); //0x00909fbb
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestBackLeftSpot(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x00428473
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestBackRightSpot(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x0042848a
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestBackSpot(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x00428400
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestClosestSpot(const Goid_* unk1, const Goid_* unk2, const SiegePos& unk3, SiegePos& unk4); //0x0090d8b8
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestFlankSpot(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x004284a1
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestFrontLeftSpot(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x00428445
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestFrontRightSpot(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x0042845c
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestFrontSpot(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x004283e9
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestLeftSpot(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x00428417
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestRandomSpot(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x004284bb
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestRightSpot(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x0042842e
	/*ZoneManager*/ public: bool /*__thiscall*/ SRequestSpot(const Goid_* unk1, const Goid_* unk2, unsigned long unk3, SiegePos& unk4); //0x0090d820
};

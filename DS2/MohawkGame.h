#pragma once

#include "CameraAgent.h"
#include "FuBi.h"
#include "GPBString.h"
#include "Memory.h"
#include "RapiAppModule.h"

#include "ClassMacros.h"

// ???
class MohawkGame {
public:
	DefineSingleton(MohawkGame, 0x40a5a5);

	DefineStaticMethod(FUBI_Inheritance, 0x4091e7, int, Params(RapiAppModule* unk1), Args(unk1));
	DefineMethod(RCUserPause, 0x42a78f, void, Params(bool unk1, double unk2, const PlayerId_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSPauseAllClients, 0x42b73f, void, Params(bool unk1, const PlayerId_* unk2), Args(unk1, unk2));
	DefineMethod(AutoSaveGameNow, 0x42c2aa, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(AutoSaveParty, 0x42a1b0, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(CheckAutoSaveParty, 0x4091c8, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(CheckAutoSaveParty, 0x42a201, bool, Params(bool unk1), Args(unk1));
	DefineMethod(GetActiveMovie, 0x4091e0, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(RCDisableTimeoutsUntil, 0x42a321, FuBi::Cookie__*, Params(double unk1), Args(unk1));
	DefineMethod(RCRequestInGameMovie, 0x432f80, FuBi::Cookie__*, Params(const gpbstring<char>& unk1, float unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCRequestInGameMovie, 0x432e45, FuBi::Cookie__*, Params(const SiegePos& unk1, const gpbstring<char>& unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCTeleportPlayerParty, 0x42eb63, FuBi::Cookie__*, Params(const Goid_* unk1, float unk2, const char* unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RCTeleportPlayerParty, 0x42d05f, FuBi::Cookie__*, Params(const Goid_* unk1, float unk2, const SiegePos& unk3, const CameraPosition& unk4, unsigned long unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RSDisableTimeoutsUntil, 0x42b2e2, FuBi::Cookie__*, Params(double unk1), Args(unk1));
	DefineMethod(RSRequestInGameMovie, 0x4335b3, FuBi::Cookie__*, Params(const Goid_* unk1, const gpbstring<char>& unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSTeleportPlayerParty, 0x42d24c, FuBi::Cookie__*, Params(const_mem_ptr unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSTeleportPlayerParty, 0x42c585, FuBi::Cookie__*, Params(const_mem_ptr unk1, const SiegePos& unk2, const CameraPosition& unk3), Args(unk1, unk2, unk3));
	DefineMethod(ExitGame, 0x42a18e, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSUserPause, 0x42c762, void, Params(bool unk1, const PlayerId_* unk2), Args(unk1, unk2));
	DefineMethod(SetMPSendFrequency, 0x42c888, void, Params(int unk1), Args(unk1));
	DefineMethod(SetMPSleep, 0x4091d0, void, Params(int unk1), Args(unk1));
	DefineMethod(STeleportPlayer, 0x42ce32, void, Params(const GoidColl& unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(STeleportPlayer, 0x42cf62, void, Params(const GopColl& unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineMethod(STeleportPlayer, 0x42c39c, void, Params(const GopColl& unk1, const SiegePos& unk2, const CameraPosition& unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(STeleportPlayer, 0x42c4ec, void, Params(const PlayerId_* unk1, const SiegePos& unk2, const CameraPosition& unk3), Args(unk1, unk2, unk3));
	DefineMethod(STeleportPlayer, 0x42c41a, void, Params(const PlayerId_* unk1, const SiegePos& unk2), Args(unk1, unk2));
	DefineMethod(STeleportPlayerParty, 0x43123d, void, Params(const Goid_* unk1, float unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineMethod(STeleportPlayerParty, 0x42eaad, void, Params(const Goid_* unk1, float unk2, const SiegePos& unk3, const CameraPosition& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(TeleportLocalParty, 0x42d3fb, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
};

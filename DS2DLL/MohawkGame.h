#pragma once

#include "CameraAgent.h"
#include "FuBi.h"
#include "GPString.h"
#include "Memory.h"
#include "Player.h"
#include "RapiAppModule.h"

class MohawkGame : public RapiAppModule {
public:
	$Singleton(MohawkGame, 0x0040a5a5);

	$Method(0x0042a78f, RCUserPause, void, bool unk1, double unk2, const PlayerId* unk3);
	$Method(0x0042b73f, RSPauseAllClients, void, bool unk1, const PlayerId* unk2);
	$Method(0x0042c2aa, AutoSaveGameNow, bool);
	$Method(0x0042a1b0, AutoSaveParty, bool);
	$Method(0x004091c8, CheckAutoSaveParty, bool);
	$Method(0x0042a201, CheckAutoSaveParty, bool, bool unk1);
	$Method(0x004091e0, GetActiveMovie, const GPBString&);
	$Method(0x0042a321, RCDisableTimeoutsUntil, FuBiCookie*, double unk1);
	$Method(0x00432f80, RCRequestInGameMovie, FuBiCookie*, const GPBString& unk1, float unk2, uint unk3);
	$Method(0x00432e45, RCRequestInGameMovie, FuBiCookie*, const SiegePos& unk1, const GPBString& unk2, float unk3);
	$Method(0x0042eb63, RCTeleportPlayerParty, FuBiCookie*, const Goid* unk1, float unk2, const char* unk3, uint unk4);
	$Method(0x0042d05f, RCTeleportPlayerParty, FuBiCookie*, const Goid* unk1, float unk2, const SiegePos& unk3, const CameraPosition& unk4, uint unk5);
	$Method(0x0042b2e2, RSDisableTimeoutsUntil, FuBiCookie*, double unk1);
	$Method(0x004335b3, RSRequestInGameMovie, FuBiCookie*, const Goid* unk1, const GPBString& unk2, float unk3);
	$Method(0x0042d24c, RSTeleportPlayerParty, FuBiCookie*, const_mem_ptr unk1, const char* unk2, const char* unk3);
	$Method(0x0042c585, RSTeleportPlayerParty, FuBiCookie*, const_mem_ptr unk1, const SiegePos& unk2, const CameraPosition& unk3);
	$Method(0x0042a18e, ExitGame, void);
	$Method(0x0042c762, RSUserPause, void, bool unk1, const PlayerId* unk2);
	$Method(0x0042c888, SetMPSendFrequency, void, int unk1);
	$Method(0x004091d0, SetMPSleep, void, int unk1);
	$Method(0x0042ce32, STeleportPlayer, void, const GoidColl& unk1, const char* unk2, bool unk3);
	$Method(0x0042cf62, STeleportPlayer, void, const GopColl& unk1, const char* unk2, const char* unk3);
	$Method(0x0042c39c, STeleportPlayer, void, const GopColl& unk1, const SiegePos& unk2, const CameraPosition& unk3, const GPBString& unk4);
	$Method(0x0042c4ec, STeleportPlayer, void, const PlayerId* unk1, const SiegePos& unk2, const CameraPosition& unk3);
	$Method(0x0042c41a, STeleportPlayer, void, const PlayerId* unk1, const SiegePos& unk2);
	$Method(0x0043123d, STeleportPlayerParty, void, const Goid* unk1, float unk2, const char* unk3);
	$Method(0x0042eaad, STeleportPlayerParty, void, const Goid* unk1, float unk2, const SiegePos& unk3, const CameraPosition& unk4);
	$Method(0x0042d3fb, TeleportLocalParty, void, const char* unk1, const char* unk2);

private:
	// 0x1d8
	$Padding(0x1d8, 0x270);
};

STATIC_ASSERT(sizeof(MohawkGame) == 0x270);

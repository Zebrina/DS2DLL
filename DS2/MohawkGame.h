#pragma once

#include "ClassMacros.h"

// ???
class MohawkGame {
public:
	DefineSingleton(MohawkGame, 0x40a5a5);

	/*MohawkGame*/ private: /*static*/ MohawkGame* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5a5
	/*MohawkGame*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(RapiAppModule* unk1); //0x004091e7
	/*MohawkGame*/ private: void /*__thiscall*/ RCUserPause(bool unk1, double unk2, const PlayerId_* unk3); //0x0042a78f
	/*MohawkGame*/ private: void /*__thiscall*/ RSPauseAllClients(bool unk1, const PlayerId_* unk2); //0x0042b73f
	/*MohawkGame*/ public: bool /*__thiscall*/ AutoSaveGameNow(); //0x0042c2aa
	/*MohawkGame*/ public: bool /*__thiscall*/ AutoSaveParty(); //0x0042a1b0
	/*MohawkGame*/ public: bool /*__thiscall*/ CheckAutoSaveParty(); //0x004091c8
	/*MohawkGame*/ public: bool /*__thiscall*/ CheckAutoSaveParty(bool unk1); //0x0042a201
	/*MohawkGame*/ public: const gpbstring<char>& /*__thiscall*/ GetActiveMovie(); //0x004091e0
	/*MohawkGame*/ public: FuBi::Cookie__* /*__thiscall*/ RCDisableTimeoutsUntil(double unk1); //0x0042a321
	/*MohawkGame*/ public: FuBi::Cookie__* /*__thiscall*/ RCRequestInGameMovie(const gpbstring<char>& unk1, float unk2, unsigned long unk3); //0x00432f80
	/*MohawkGame*/ public: FuBi::Cookie__* /*__thiscall*/ RCRequestInGameMovie(const SiegePos& unk1, const gpbstring<char>& unk2, float unk3); //0x00432e45
	/*MohawkGame*/ public: FuBi::Cookie__* /*__thiscall*/ RCTeleportPlayerParty(const Goid_* unk1, float unk2, const char* unk3, unsigned long unk4); //0x0042eb63
	/*MohawkGame*/ public: FuBi::Cookie__* /*__thiscall*/ RCTeleportPlayerParty(const Goid_* unk1, float unk2, const SiegePos& unk3, const CameraPosition& unk4, unsigned long unk5); //0x0042d05f
	/*MohawkGame*/ public: FuBi::Cookie__* /*__thiscall*/ RSDisableTimeoutsUntil(double unk1); //0x0042b2e2
	/*MohawkGame*/ public: FuBi::Cookie__* /*__thiscall*/ RSRequestInGameMovie(const Goid_* unk1, const gpbstring<char>& unk2, float unk3); //0x004335b3
	/*MohawkGame*/ public: FuBi::Cookie__* /*__thiscall*/ RSTeleportPlayerParty(const_mem_ptr unk1, const char* unk2, const char* unk3); //0x0042d24c
	/*MohawkGame*/ public: FuBi::Cookie__* /*__thiscall*/ RSTeleportPlayerParty(const_mem_ptr unk1, const SiegePos& unk2, const CameraPosition& unk3); //0x0042c585
	/*MohawkGame*/ public: void /*__thiscall*/ ExitGame(); //0x0042a18e
	/*MohawkGame*/ public: void /*__thiscall*/ RSUserPause(bool unk1, const PlayerId_* unk2); //0x0042c762
	/*MohawkGame*/ public: void /*__thiscall*/ SetMPSendFrequency(int unk1); //0x0042c888
	/*MohawkGame*/ public: void /*__thiscall*/ SetMPSleep(int unk1); //0x004091d0
	/*MohawkGame*/ public: void /*__thiscall*/ STeleportPlayer(const GoidColl& unk1, const char* unk2, bool unk3); //0x0042ce32
	/*MohawkGame*/ public: void /*__thiscall*/ STeleportPlayer(const GopColl& unk1, const char* unk2, const char* unk3); //0x0042cf62
	/*MohawkGame*/ public: void /*__thiscall*/ STeleportPlayer(const GopColl& unk1, const SiegePos& unk2, const CameraPosition& unk3, const gpbstring<char>& unk4); //0x0042c39c
	/*MohawkGame*/ public: void /*__thiscall*/ STeleportPlayer(const PlayerId_* unk1, const SiegePos& unk2, const CameraPosition& unk3); //0x0042c4ec
	/*MohawkGame*/ public: void /*__thiscall*/ STeleportPlayer(const PlayerId_* unk1, const SiegePos& unk2); //0x0042c41a
	/*MohawkGame*/ public: void /*__thiscall*/ STeleportPlayerParty(const Goid_* unk1, float unk2, const char* unk3); //0x0043123d
	/*MohawkGame*/ public: void /*__thiscall*/ STeleportPlayerParty(const Goid_* unk1, float unk2, const SiegePos& unk3, const CameraPosition& unk4); //0x0042eaad
	/*MohawkGame*/ public: void /*__thiscall*/ TeleportLocalParty(const char* unk1, const char* unk2); //0x0042d3fb
};

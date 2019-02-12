#pragma once

#include "ClassMacros.h"

class UITeleport {
public:
	DefineSingleton(UITeleport, 0x4243d1);

	/*UITeleport*/ private: /*static*/ UITeleport* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004243d1
	/*UITeleport*/ private: const gpbstring<char>& /*__thiscall*/ GetLocalTeleporterDestinations() const; //0x00423b2f
	/*UITeleport*/ private: const Goid_* /*__thiscall*/ GetLocalTeleporterCatalyst() const; //0x00423b36
	/*UITeleport*/ public: bool /*__thiscall*/ RSRequestTeleporterTeleport(const gpbstring<char>& unk1); //0x004c69e4
	/*UITeleport*/ public: bool /*__thiscall*/ SRequestTownPortalTeleport(const Goid_* unk1, const Goid_* unk2); //0x004ca563
	/*UITeleport*/ public: FuBi::Cookie__* /*__thiscall*/ RCCreateTeleporterInterface(const Go* unk1, const gpbstring<char>& unk2, bool unk3, unsigned long unk4); //0x004c6c0b
	/*UITeleport*/ public: FuBi::Cookie__* /*__thiscall*/ RCFinishTeleport(const FrustumId_* unk1); //0x004c7165
	/*UITeleport*/ public: FuBi::Cookie__* /*__thiscall*/ RCRequestTeleport(const_mem_ptr unk1); //0x004c7c51
	/*UITeleport*/ public: FuBi::Cookie__* /*__thiscall*/ RCRequestTeleporterTeleport(const gpbstring<char>& unk1, unsigned long unk2); //0x004c62f1
	/*UITeleport*/ public: FuBi::Cookie__* /*__thiscall*/ RCRequestTownPortalTeleport(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3, unsigned long unk4); //0x004ca2a4
	/*UITeleport*/ public: FuBi::Cookie__* /*__thiscall*/ RSFinishTownPortalTeleport(const_mem_ptr unk1, const Goid_* unk2); //0x004c9da4
	/*UITeleport*/ public: FuBi::Cookie__* /*__thiscall*/ RSRequestTeleporterTeleport(const Go* unk1, const gpbstring<char>& unk2); //0x004c64d9
	/*UITeleport*/ public: void /*__thiscall*/ CancelTeleporterInterface(); //0x004c628d
	/*UITeleport*/ public: void /*__thiscall*/ ClearTeleportsForPlayer(const PlayerId_* unk1); //0x004c621f
	/*UITeleport*/ public: void /*__thiscall*/ RCRequestEndWarp(const FrustumId_* unk1, unsigned long unk2); //0x004c5fbe
	/*UITeleport*/ public: void /*__thiscall*/ RSCreateTeleporterInterface(const Go* unk1, const gpbstring<char>& unk2, bool unk3); //0x004c7b50
	/*UITeleport*/ public: void /*__thiscall*/ SFinishTeleport(const TeleportInfo& unk1); //0x004c8895
	/*UITeleport*/ public: void /*__thiscall*/ SRequestTeleport(Player* unk1, const GoidColl& unk2, const SiegePos& unk3, const CameraPosition& unk4, const gpbstring<char>& unk5, const gpbstring<char>& unk6, bool unk7, bool unk8); //0x004c9b0e
};

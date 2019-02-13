#pragma once

#include "ClassMacros.h"

class UITeleport {
public:
	DefineSingleton(UITeleport, 0x4243d1);

	/*UITeleport*/ private: /*static*/ UITeleport* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004243d1
	/*UITeleport*/ private: const gpbstring<char>& /*__thiscall*/ GetLocalTeleporterDestinations() const; //0x00423b2f
	/*UITeleport*/ private: const Goid_* /*__thiscall*/ GetLocalTeleporterCatalyst() const; //0x00423b36
	DefineMethod(RSRequestTeleporterTeleport, 0x4c69e4, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SRequestTownPortalTeleport, 0x4ca563, bool, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(RCCreateTeleporterInterface, 0x4c6c0b, FuBi::Cookie__*, Params(const Go* unk1, const gpbstring<char>& unk2, bool unk3, unsigned long unk4), Args(const Go* unk1, const gpbstring<char>& unk2, bool unk3, unsigned long unk4));
	DefineMethod(RCFinishTeleport, 0x4c7165, FuBi::Cookie__*, Params(const FrustumId_* unk1), Args(const FrustumId_* unk1));
	DefineMethod(RCRequestTeleport, 0x4c7c51, FuBi::Cookie__*, Params(const_mem_ptr unk1), Args(const_mem_ptr unk1));
	DefineMethod(RCRequestTeleporterTeleport, 0x4c62f1, FuBi::Cookie__*, Params(const gpbstring<char>& unk1, unsigned long unk2), Args(const gpbstring<char>& unk1, unsigned long unk2));
	DefineMethod(RCRequestTownPortalTeleport, 0x4ca2a4, FuBi::Cookie__*, Params(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3, unsigned long unk4), Args(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3, unsigned long unk4));
	DefineMethod(RSFinishTownPortalTeleport, 0x4c9da4, FuBi::Cookie__*, Params(const_mem_ptr unk1, const Goid_* unk2), Args(const_mem_ptr unk1, const Goid_* unk2));
	DefineMethod(RSRequestTeleporterTeleport, 0x4c64d9, FuBi::Cookie__*, Params(const Go* unk1, const gpbstring<char>& unk2), Args(const Go* unk1, const gpbstring<char>& unk2));
	DefineMethod(CancelTeleporterInterface, 0x4c628d, void, Params(), Args());
	DefineMethod(ClearTeleportsForPlayer, 0x4c621f, void, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RCRequestEndWarp, 0x4c5fbe, void, Params(const FrustumId_* unk1, unsigned long unk2), Args(const FrustumId_* unk1, unsigned long unk2));
	DefineMethod(RSCreateTeleporterInterface, 0x4c7b50, void, Params(const Go* unk1, const gpbstring<char>& unk2, bool unk3), Args(const Go* unk1, const gpbstring<char>& unk2, bool unk3));
	DefineMethod(SFinishTeleport, 0x4c8895, void, Params(const TeleportInfo& unk1), Args(const TeleportInfo& unk1));
	DefineMethod(SRequestTeleport, 0x4c9b0e, void, Params(Player* unk1, const GoidColl& unk2, const SiegePos& unk3, const CameraPosition& unk4, const gpbstring<char>& unk5, const gpbstring<char>& unk6, bool unk7, bool unk8), Args(Player* unk1, const GoidColl& unk2, const SiegePos& unk3, const CameraPosition& unk4, const gpbstring<char>& unk5, const gpbstring<char>& unk6, bool unk7, bool unk8));
};

#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "GPString.h"
#include "Siege.h"
#include "SiegePos.h"

struct SiegeId;
struct TTMessages;

class WorldTerrain {
public:
	$Singleton(WorldTerrain, 0x0040a60b);

	$Method(0x0083eb60, RCSyncNodalFlagStatesOnMachine, FuBiCookie*, uint unk1, const_mem_ptr unk2, const_mem_ptr unk3);
	$Method(0x0083ea26, RCSyncNodalTexStatesOnMachine, FuBiCookie*, uint unk1, const_mem_ptr unk2, const_mem_ptr unk3);
	$Method(0x0083fb0d, RCSyncTransitionOnMachine, FuBiCookie*, uint unk1, const_mem_ptr unk2);
	$Method(0x0083e061, GetNodalTextureAnimationState, bool, const SiegeId* unk1, int unk2);
	$Method(0x0083deb7, IsNodalPathingConnected, bool, const SiegeId* unk1, const SiegeId* unk2);
	$Method(0x0083e1c6, GetNodalTextureAnimationSpeed, float, const SiegeId* unk1, int unk2);
	$Method(0x0083defa, FindNodalTextureIndex, int, const SiegeId* unk1, const GPBString& unk2);
	$Method(0x0083e351, RCGlobalNodeFade, FuBiCookie*, int unk1, int unk2, int unk3, int unk4, int unk5, unsigned char unk6);
	$Method(0x0083f912, RCRegisterWorldFrustumOnMachine, FuBiCookie*, uint unk1, const PlayerId* unk2, const FrustumId* unk3);
	$Method(0x0083e20b, RCReplaceNodalTexture, FuBiCookie*, const SiegeId* unk1, const GPBString& unk2, const GPBString& unk3);
	$Method(0x0083dd88, RCRequestNodeConnection, FuBiCookie*, const SiegeId* unk1, uint unk2, const SiegeId* unk3, uint unk4, bool unk5, bool unk6);
	$Method(0x0083db28, RCRequestNodeTransition, FuBiCookie*, const SiegeId* unk1, uint unk2, const SiegeId* unk3, uint unk4, double unk5, double unk6, eAxisHint unk7, ePosHint unk8, const Scid* unk9, bool unk10, bool unk11, bool unk12, TTMessages* unk13);
	$Method(0x004095f1, RCRequestNodeTransition, FuBiCookie*, const SiegeId* unk1, uint unk2, const SiegeId* unk3, uint unk4, double unk5, double unk6, eAxisHint unk7, ePosHint unk8, const Scid* unk9, bool unk10, bool unk11, bool unk12);
	$Method(0x0083e0a2, RCSetNodalTextureAnimationSpeed, FuBiCookie*, const SiegeId* unk1, int unk2, float unk3);
	$Method(0x0083df41, RCSetNodalTextureAnimationState, FuBiCookie*, const SiegeId* unk1, int unk2, bool unk3);
	$Method(0x0083e684, RCSetNodeBoundsCamera, FuBiCookie*, uint unk1, bool unk2);
	$Method(0x0083e7a3, RCSetNodeCameraFade, FuBiCookie*, uint unk1, unsigned char unk2);
	$Method(0x0083e8c2, RCSetNodeDisabled, FuBiCookie*, uint unk1, bool unk2);
	$Method(0x0083e565, RCSetNodeOccludesCamera, FuBiCookie*, uint unk1, bool unk2);
	$Method(0x0083e45a, RCSyncGlobalNodeFade, FuBiCookie*, uint unk1, int unk2, int unk3, int unk4, int unk5, unsigned char unk6);
	$Method(0x0083e331, ClearNodalDeformation, void, const siege::database_guid& unk1);
	$Method(0x0083fa8f, NodalWaveDeformation, void, const SiegePos& unk1, float unk2, float unk3, float unk4);
	$Method(0x0083f4ef, SGlobalNodeFade, void, int unk1, int unk2, int unk3, int unk4, int unk5, eFadeType unk6);
	$Method(0x0083f330, SReplaceNodalTexture, void, const SiegeId* unk1, const GPBString& unk2, const GPBString& unk3);
	$Method(0x0083f305, SRequestNodeConnection, void, const SiegeId* unk1, uint unk2, const SiegeId* unk3, uint unk4, bool unk5, bool unk6);
	$Method(0x0083f23d, SRequestNodeTransition, void, const SiegeId* unk1, uint unk2, const SiegeId* unk3, uint unk4, float unk5, eAxisHint unk6, ePosHint unk7, const Goid* unk8, bool unk9, bool unk10, bool unk11, TTMessages* unk12);
	$Method(0x004095be, SRequestNodeTransition, void, const SiegeId* unk1, uint unk2, const SiegeId* unk3, uint unk4, float unk5, eAxisHint unk6, ePosHint unk7, const Goid* unk8, bool unk9, bool unk10, bool unk11);
	$Method(0x0083f317, SSetNodalTextureAnimationSpeed, void, const SiegeId* unk1, int unk2, float unk3);
	$Method(0x0083f30e, SSetNodalTextureAnimationState, void, const SiegeId* unk1, int unk2, bool unk3);
	$Method(0x00841422, StartWatchingLightRegistration, void, const Goid* unk1);
	$Method(0x008414b5, StopWatchingLightRegistration, void, const Goid* unk1);

    // 0x00
    $Padding(0x00, 0x28);
};

STATIC_ASSERT(sizeof(WorldTerrain) == 0x28)

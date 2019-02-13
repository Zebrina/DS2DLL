#pragma once

#include "ClassMacros.h"

class WorldTerrain {
public:
	DefineSingleton(WorldTerrain, 0x40a60b);

	/*WorldTerrain*/ private: /*static*/ WorldTerrain* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a60b
	DefineMethod(RCSyncNodalFlagStatesOnMachine, 0x83eb60, FuBi::Cookie__*, Params(unsigned long unk1, const_mem_ptr unk2, const_mem_ptr unk3), Args(unsigned long unk1, const_mem_ptr unk2, const_mem_ptr unk3));
	DefineMethod(RCSyncNodalTexStatesOnMachine, 0x83ea26, FuBi::Cookie__*, Params(unsigned long unk1, const_mem_ptr unk2, const_mem_ptr unk3), Args(unsigned long unk1, const_mem_ptr unk2, const_mem_ptr unk3));
	DefineMethod(RCSyncTransitionOnMachine, 0x83fb0d, FuBi::Cookie__*, Params(unsigned long unk1, const_mem_ptr unk2), Args(unsigned long unk1, const_mem_ptr unk2));
	DefineMethod(GetNodalTextureAnimationState, 0x83e061, bool, Params(const SiegeId_* unk1, int unk2), Args(const SiegeId_* unk1, int unk2));
	DefineMethod(IsNodalPathingConnected, 0x83deb7, bool, Params(const SiegeId_* unk1, const SiegeId_* unk2), Args(const SiegeId_* unk1, const SiegeId_* unk2));
	DefineMethod(GetNodalTextureAnimationSpeed, 0x83e1c6, float, Params(const SiegeId_* unk1, int unk2), Args(const SiegeId_* unk1, int unk2));
	DefineMethod(FindNodalTextureIndex, 0x83defa, int, Params(const SiegeId_* unk1, const gpbstring<char>& unk2), Args(const SiegeId_* unk1, const gpbstring<char>& unk2));
	DefineMethod(RCGlobalNodeFade, 0x83e351, FuBi::Cookie__*, Params(int unk1, int unk2, int unk3, int unk4, int unk5, unsigned char unk6), Args(int unk1, int unk2, int unk3, int unk4, int unk5, unsigned char unk6));
	DefineMethod(RCRegisterWorldFrustumOnMachine, 0x83f912, FuBi::Cookie__*, Params(unsigned int unk1, const PlayerId_* unk2, const FrustumId_* unk3), Args(unsigned int unk1, const PlayerId_* unk2, const FrustumId_* unk3));
	DefineMethod(RCReplaceNodalTexture, 0x83e20b, FuBi::Cookie__*, Params(const SiegeId_* unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(const SiegeId_* unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3));
	DefineMethod(RCRequestNodeConnection, 0x83dd88, FuBi::Cookie__*, Params(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, bool unk5, bool unk6), Args(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, bool unk5, bool unk6));
	DefineMethod(RCRequestNodeTransition, 0x83db28, FuBi::Cookie__*, Params(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, double unk5, double unk6, eAxisHint unk7, ePosHint unk8, const Scid_* unk9, bool unk10, bool unk11, bool unk12, TTMessages* unk13), Args(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, double unk5, double unk6, eAxisHint unk7, ePosHint unk8, const Scid_* unk9, bool unk10, bool unk11, bool unk12, TTMessages* unk13));
	DefineMethod(RCRequestNodeTransition, 0x4095f1, FuBi::Cookie__*, Params(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, double unk5, double unk6, eAxisHint unk7, ePosHint unk8, const Scid_* unk9, bool unk10, bool unk11, bool unk12), Args(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, double unk5, double unk6, eAxisHint unk7, ePosHint unk8, const Scid_* unk9, bool unk10, bool unk11, bool unk12));
	DefineMethod(RCSetNodalTextureAnimationSpeed, 0x83e0a2, FuBi::Cookie__*, Params(const SiegeId_* unk1, int unk2, float unk3), Args(const SiegeId_* unk1, int unk2, float unk3));
	DefineMethod(RCSetNodalTextureAnimationState, 0x83df41, FuBi::Cookie__*, Params(const SiegeId_* unk1, int unk2, bool unk3), Args(const SiegeId_* unk1, int unk2, bool unk3));
	DefineMethod(RCSetNodeBoundsCamera, 0x83e684, FuBi::Cookie__*, Params(unsigned int unk1, bool unk2), Args(unsigned int unk1, bool unk2));
	DefineMethod(RCSetNodeCameraFade, 0x83e7a3, FuBi::Cookie__*, Params(unsigned int unk1, unsigned char unk2), Args(unsigned int unk1, unsigned char unk2));
	DefineMethod(RCSetNodeDisabled, 0x83e8c2, FuBi::Cookie__*, Params(unsigned int unk1, bool unk2), Args(unsigned int unk1, bool unk2));
	DefineMethod(RCSetNodeOccludesCamera, 0x83e565, FuBi::Cookie__*, Params(unsigned int unk1, bool unk2), Args(unsigned int unk1, bool unk2));
	DefineMethod(RCSyncGlobalNodeFade, 0x83e45a, FuBi::Cookie__*, Params(unsigned long unk1, int unk2, int unk3, int unk4, int unk5, unsigned char unk6), Args(unsigned long unk1, int unk2, int unk3, int unk4, int unk5, unsigned char unk6));
	DefineMethod(ClearNodalDeformation, 0x83e331, void, Params(const siege::database_guid& unk1), Args(const siege::database_guid& unk1));
	DefineMethod(NodalWaveDeformation, 0x83fa8f, void, Params(const SiegePos& unk1, float unk2, float unk3, float unk4), Args(const SiegePos& unk1, float unk2, float unk3, float unk4));
	DefineMethod(SGlobalNodeFade, 0x83f4ef, void, Params(int unk1, int unk2, int unk3, int unk4, int unk5, eFadeType unk6), Args(int unk1, int unk2, int unk3, int unk4, int unk5, eFadeType unk6));
	DefineMethod(SReplaceNodalTexture, 0x83f330, void, Params(const SiegeId_* unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(const SiegeId_* unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3));
	DefineMethod(SRequestNodeConnection, 0x83f305, void, Params(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, bool unk5, bool unk6), Args(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, bool unk5, bool unk6));
	DefineMethod(SRequestNodeTransition, 0x83f23d, void, Params(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, float unk5, eAxisHint unk6, ePosHint unk7, const Goid_* unk8, bool unk9, bool unk10, bool unk11, TTMessages* unk12), Args(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, float unk5, eAxisHint unk6, ePosHint unk7, const Goid_* unk8, bool unk9, bool unk10, bool unk11, TTMessages* unk12));
	DefineMethod(SRequestNodeTransition, 0x4095be, void, Params(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, float unk5, eAxisHint unk6, ePosHint unk7, const Goid_* unk8, bool unk9, bool unk10, bool unk11), Args(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, float unk5, eAxisHint unk6, ePosHint unk7, const Goid_* unk8, bool unk9, bool unk10, bool unk11));
	DefineMethod(SSetNodalTextureAnimationSpeed, 0x83f317, void, Params(const SiegeId_* unk1, int unk2, float unk3), Args(const SiegeId_* unk1, int unk2, float unk3));
	DefineMethod(SSetNodalTextureAnimationState, 0x83f30e, void, Params(const SiegeId_* unk1, int unk2, bool unk3), Args(const SiegeId_* unk1, int unk2, bool unk3));
	DefineMethod(StartWatchingLightRegistration, 0x841422, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(StopWatchingLightRegistration, 0x8414b5, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
};

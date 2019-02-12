#pragma once

#include "ClassMacros.h"

class WorldTerrain {
public:
	DefineSingleton(WorldTerrain, 0x40a60b);

	/*WorldTerrain*/ private: /*static*/ WorldTerrain* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a60b
	/*WorldTerrain*/ private: FuBi::Cookie__* /*__thiscall*/ RCSyncNodalFlagStatesOnMachine(unsigned long unk1, const_mem_ptr unk2, const_mem_ptr unk3); //0x0083eb60
	/*WorldTerrain*/ private: FuBi::Cookie__* /*__thiscall*/ RCSyncNodalTexStatesOnMachine(unsigned long unk1, const_mem_ptr unk2, const_mem_ptr unk3); //0x0083ea26
	/*WorldTerrain*/ private: FuBi::Cookie__* /*__thiscall*/ RCSyncTransitionOnMachine(unsigned long unk1, const_mem_ptr unk2); //0x0083fb0d
	/*WorldTerrain*/ public: bool /*__thiscall*/ GetNodalTextureAnimationState(const SiegeId_* unk1, int unk2); //0x0083e061
	/*WorldTerrain*/ public: bool /*__thiscall*/ IsNodalPathingConnected(const SiegeId_* unk1, const SiegeId_* unk2); //0x0083deb7
	/*WorldTerrain*/ public: float /*__thiscall*/ GetNodalTextureAnimationSpeed(const SiegeId_* unk1, int unk2); //0x0083e1c6
	/*WorldTerrain*/ public: int /*__thiscall*/ FindNodalTextureIndex(const SiegeId_* unk1, const gpbstring<char>& unk2); //0x0083defa
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCGlobalNodeFade(int unk1, int unk2, int unk3, int unk4, int unk5, unsigned char unk6); //0x0083e351
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCRegisterWorldFrustumOnMachine(unsigned int unk1, const PlayerId_* unk2, const FrustumId_* unk3); //0x0083f912
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCReplaceNodalTexture(const SiegeId_* unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3); //0x0083e20b
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCRequestNodeConnection(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, bool unk5, bool unk6); //0x0083dd88
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCRequestNodeTransition(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, double unk5, double unk6, eAxisHint unk7, ePosHint unk8, const Scid_* unk9, bool unk10, bool unk11, bool unk12, TTMessages* unk13); //0x0083db28
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCRequestNodeTransition(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, double unk5, double unk6, eAxisHint unk7, ePosHint unk8, const Scid_* unk9, bool unk10, bool unk11, bool unk12); //0x004095f1
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetNodalTextureAnimationSpeed(const SiegeId_* unk1, int unk2, float unk3); //0x0083e0a2
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetNodalTextureAnimationState(const SiegeId_* unk1, int unk2, bool unk3); //0x0083df41
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetNodeBoundsCamera(unsigned int unk1, bool unk2); //0x0083e684
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetNodeCameraFade(unsigned int unk1, unsigned char unk2); //0x0083e7a3
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetNodeDisabled(unsigned int unk1, bool unk2); //0x0083e8c2
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetNodeOccludesCamera(unsigned int unk1, bool unk2); //0x0083e565
	/*WorldTerrain*/ public: FuBi::Cookie__* /*__thiscall*/ RCSyncGlobalNodeFade(unsigned long unk1, int unk2, int unk3, int unk4, int unk5, unsigned char unk6); //0x0083e45a
	/*WorldTerrain*/ public: void /*__thiscall*/ ClearNodalDeformation(const siege::database_guid& unk1); //0x0083e331
	/*WorldTerrain*/ public: void /*__thiscall*/ NodalWaveDeformation(const SiegePos& unk1, float unk2, float unk3, float unk4); //0x0083fa8f
	/*WorldTerrain*/ public: void /*__thiscall*/ SGlobalNodeFade(int unk1, int unk2, int unk3, int unk4, int unk5, eFadeType unk6); //0x0083f4ef
	/*WorldTerrain*/ public: void /*__thiscall*/ SReplaceNodalTexture(const SiegeId_* unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3); //0x0083f330
	/*WorldTerrain*/ public: void /*__thiscall*/ SRequestNodeConnection(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, bool unk5, bool unk6); //0x0083f305
	/*WorldTerrain*/ public: void /*__thiscall*/ SRequestNodeTransition(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, float unk5, eAxisHint unk6, ePosHint unk7, const Goid_* unk8, bool unk9, bool unk10, bool unk11, TTMessages* unk12); //0x0083f23d
	/*WorldTerrain*/ public: void /*__thiscall*/ SRequestNodeTransition(const SiegeId_* unk1, unsigned long unk2, const SiegeId_* unk3, unsigned long unk4, float unk5, eAxisHint unk6, ePosHint unk7, const Goid_* unk8, bool unk9, bool unk10, bool unk11); //0x004095be
	/*WorldTerrain*/ public: void /*__thiscall*/ SSetNodalTextureAnimationSpeed(const SiegeId_* unk1, int unk2, float unk3); //0x0083f317
	/*WorldTerrain*/ public: void /*__thiscall*/ SSetNodalTextureAnimationState(const SiegeId_* unk1, int unk2, bool unk3); //0x0083f30e
	/*WorldTerrain*/ public: void /*__thiscall*/ StartWatchingLightRegistration(const Goid_* unk1); //0x00841422
	/*WorldTerrain*/ public: void /*__thiscall*/ StopWatchingLightRegistration(const Goid_* unk1); //0x008414b5
};

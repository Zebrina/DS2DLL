#pragma once

#include "ClassMacros.h"

class World {
public:
	DefineSingleton(World, 0x40a5ff);

	/*World*/ private: /*static*/ World* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5ff
	/*World*/ public: bool /*__thiscall*/ IsMultiPlayer() const; //0x00839765
	/*World*/ public: bool /*__thiscall*/ IsSinglePlayer() const; //0x0083974b
	/*World*/ public: FuBi::Cookie__* /*__thiscall*/ RCDialogueCallback(unsigned long unk1, const Goid_* unk2, const Goid_* unk3); //0x0083a0b4
	/*World*/ public: void /*__thiscall*/ DrawDebugArc(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4, bool unk5); //0x00838bd2
	/*World*/ public: void /*__thiscall*/ DrawDebugBoxStack(const SiegePos& unk1, float unk2, unsigned long unk3, float unk4, const matrix_3x3& unk5); //0x00838bd5
	/*World*/ public: void /*__thiscall*/ DrawDebugCircle(const SiegePos& unk1, float unk2, unsigned long unk3, const gpbstring<char>& unk4); //0x00838ba5
	/*World*/ public: void /*__thiscall*/ DrawDebugCylinderSides(const SiegePos& unk1, const vector_3& unk2, float unk3, float unk4, float unk5, unsigned long unk6, const gpbstring<char>& unk7); //0x00838bab
	/*World*/ public: void /*__thiscall*/ DrawDebugDashedLine(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4); //0x00838b93
	/*World*/ public: void /*__thiscall*/ DrawDebugDirectedCircle(const SiegePos& unk1, const vector_3& unk2, float unk3, float unk4, unsigned long unk5, const gpbstring<char>& unk6); //0x00838ba8
	/*World*/ public: void /*__thiscall*/ DrawDebugDirectedLine(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4); //0x00838b9c
	/*World*/ public: void /*__thiscall*/ DrawDebugLine(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4, float unk5); //0x00838b99
	/*World*/ public: void /*__thiscall*/ DrawDebugLine(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4); //0x00838b96
	/*World*/ public: void /*__thiscall*/ DrawDebugLinkedTerrainPoints(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4); //0x00838b90
	/*World*/ public: void /*__thiscall*/ DrawDebugOrientedWedge(const SiegePos& unk1, const Quat& unk2, float unk3, float unk4, float unk5, unsigned long unk6, bool unk7); //0x00838bb7
	/*World*/ public: void /*__thiscall*/ DrawDebugPoint(const SiegePos& unk1, float unk2, unsigned long unk3, const gpbstring<char>& unk4, float unk5); //0x00838bc6
	/*World*/ public: void /*__thiscall*/ DrawDebugPoint(const SiegePos& unk1, float unk2, unsigned long unk3, const gpbstring<char>& unk4); //0x00838bc3
	/*World*/ public: void /*__thiscall*/ DrawDebugPoint(const SiegePos& unk1, float unk2, unsigned long unk3, float unk4, const gpbstring<char>& unk5, unsigned long unk6); //0x00838bcf
	/*World*/ public: void /*__thiscall*/ DrawDebugPulsePolygon(const SiegePos& unk1, float unk2, float unk3, float unk4, unsigned int unk5, unsigned long unk6, const gpbstring<char>& unk7); //0x00838ba2
	/*World*/ public: void /*__thiscall*/ DrawDebugScreenLabel(const SiegePos& unk1, const gpbstring<char>& unk2); //0x00409367
	/*World*/ public: void /*__thiscall*/ DrawDebugScreenLabelColor(const SiegePos& unk1, const gpbstring<char>& unk2, unsigned long unk3); //0x00838bc9
	/*World*/ public: void /*__thiscall*/ DrawDebugSphere(const SiegePos& unk1, float unk2, unsigned long unk3, const gpbstring<char>& unk4); //0x00838bba
	/*World*/ public: void /*__thiscall*/ DrawDebugSphereConeSection(const SiegePos& unk1, const vector_3& unk2, float unk3, float unk4, unsigned long unk5, const gpbstring<char>& unk6); //0x00838bc0
	/*World*/ public: void /*__thiscall*/ DrawDebugSphereOffsetAngle(const SiegePos& unk1, float unk2, float unk3, unsigned long unk4, const gpbstring<char>& unk5); //0x00838bbd
	/*World*/ public: void /*__thiscall*/ DrawDebugTriangle(const SiegePos& unk1, float unk2, unsigned long unk3, const gpbstring<char>& unk4); //0x00838b9f
	/*World*/ public: void /*__thiscall*/ DrawDebugWedge(const SiegePos& unk1, float unk2, const SiegePos& unk3, float unk4, unsigned long unk5, bool unk6); //0x00838bb1
	/*World*/ public: void /*__thiscall*/ DrawDebugWedge(const SiegePos& unk1, float unk2, const vector_3& unk3, float unk4, unsigned long unk5, bool unk6); //0x00838bae
	/*World*/ public: void /*__thiscall*/ DrawDebugWedge(const SiegePos& unk1, float unk2, float unk3, float unk4, unsigned long unk5, bool unk6); //0x00838bb4
	/*World*/ public: void /*__thiscall*/ DrawDebugWorldLabelScroll(const SiegePos& unk1, const gpbstring<char>& unk2, unsigned long unk3, float unk4, bool unk5); //0x00838bcc
	/*World*/ public: void /*__thiscall*/ RestoreWorldViewport(float unk1); //0x0083a083
	/*World*/ public: void /*__thiscall*/ SetWorldViewport(float unk1, float unk2, float unk3, float unk4); //0x00839f6f
	/*World*/ public: void /*__thiscall*/ SetWorldViewportFov(float unk1, float unk2); //0x0083a053
};

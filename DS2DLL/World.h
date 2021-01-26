#pragma once

#include "CameraAgent.h"
#include "FuBi.h"
#include "GPString.h"
#include "GPMath.h"
#include "LocalJournal.h"
#include "Mood.h"
#include "PhysicsControl.h"
#include "Rules.h"
#include "SiegePos.h"
#include "Sim.h"
#include "Skills.h"
#include "TimeOfDay.h"
#include "UITextureManager.h"
#include "Weather.h"
#include "WorldEffectsManager.h"
#include "WorldJournal.h"
#include "WorldTerrain.h"

class World {
public:
	$Singleton(World, 0x0040a5ff);

	$ConstMethod(0x0083974b, IsSinglePlayer, bool);
	$ConstMethod(0x00839765, IsMultiPlayer, bool);
	$Method(0x0083a0b4, RCDialogueCallback, FuBiCookie*, uint unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x00838bd2, DrawDebugArc, void, const SiegePos& startPosition, const SiegePos& endPosition, uint unk3, const GPBString& unk4, bool unk5);
	$Method(0x00838bd5, DrawDebugBoxStack, void, const SiegePos& position, float unk2, uint unk3, float unk4, const Matrix3x3& unk5);
	$Method(0x00838ba5, DrawDebugCircle, void, const SiegePos& position, float unk2, uint unk3, const GPBString& unk4);
	$Method(0x00838bab, DrawDebugCylinderSides, void, const SiegePos& position, const Vector3& unk2, float unk3, float unk4, float unk5, uint unk6, const GPBString& unk7);
	$Method(0x00838b93, DrawDebugDashedLine, void, const SiegePos& startPosition, const SiegePos& endPosition, uint unk3, const GPBString& unk4);
	$Method(0x00838ba8, DrawDebugDirectedCircle, void, const SiegePos& position, const Vector3& unk2, float unk3, float unk4, uint unk5, const GPBString& unk6);
	$Method(0x00838b9c, DrawDebugDirectedLine, void, const SiegePos& startPosition, const SiegePos& endPosition, uint unk3, const GPBString& unk4);
	$Method(0x00838b99, DrawDebugLine, void, const SiegePos& startPosition, const SiegePos& endPosition, uint unk3, const GPBString& unk4, float unk5);
	$Method(0x00838b96, DrawDebugLine, void, const SiegePos& startPosition, const SiegePos& endPosition, uint unk3, const GPBString& unk4);
	$Method(0x00838b90, DrawDebugLinkedTerrainPoints, void, const SiegePos& startPosition, const SiegePos& endPosition, uint unk3, const GPBString& unk4);
	$Method(0x00838bb7, DrawDebugOrientedWedge, void, const SiegePos& position, const Quat& unk2, float unk3, float unk4, float unk5, uint unk6, bool unk7);
	$Method(0x00838bc6, DrawDebugPoint, void, const SiegePos& position, float unk2, uint unk3, const GPBString& unk4, float unk5);
	$Method(0x00838bc3, DrawDebugPoint, void, const SiegePos& position, float unk2, uint unk3, const GPBString& unk4);
	$Method(0x00838bcf, DrawDebugPoint, void, const SiegePos& position, float unk2, uint unk3, float unk4, const GPBString& unk5, uint unk6);
	$Method(0x00838ba2, DrawDebugPulsePolygon, void, const SiegePos& position, float unk2, float unk3, float unk4, uint unk5, uint unk6, const GPBString& unk7);
	$Method(0x00409367, DrawDebugScreenLabel, void, const SiegePos& position, const GPBString& unk2);
	$Method(0x00838bc9, DrawDebugScreenLabelColor, void, const SiegePos& position, const GPBString& unk2, uint unk3);
	$Method(0x00838bba, DrawDebugSphere, void, const SiegePos& position, float unk2, uint unk3, const GPBString& unk4);
	$Method(0x00838bc0, DrawDebugSphereConeSection, void, const SiegePos& position, const Vector3& unk2, float unk3, float unk4, uint unk5, const GPBString& unk6);
	$Method(0x00838bbd, DrawDebugSphereOffsetAngle, void, const SiegePos& position, float unk2, float unk3, uint unk4, const GPBString& unk5);
	$Method(0x00838b9f, DrawDebugTriangle, void, const SiegePos& position, float unk2, uint unk3, const GPBString& unk4);
	$Method(0x00838bb1, DrawDebugWedge, void, const SiegePos& unk1, float unk2, const SiegePos& unk3, float unk4, uint unk5, bool unk6);
	$Method(0x00838bae, DrawDebugWedge, void, const SiegePos& position, float unk2, const Vector3& unk3, float unk4, uint unk5, bool unk6);
	$Method(0x00838bb4, DrawDebugWedge, void, const SiegePos& position, float unk2, float unk3, float unk4, uint unk5, bool unk6);
	$Method(0x00838bcc, DrawDebugWorldLabelScroll, void, const SiegePos& position, const GPBString& unk2, uint unk3, float unk4, bool unk5);
	$Method(0x0083a083, RestoreWorldViewport, void, float unk1);
	$Method(0x00839f6f, SetWorldViewport, void, float unk1, float unk2, float unk3, float unk4);
	$Method(0x0083a053, SetWorldViewportFov, void, float unk1, float unk2);

    // 0x000
    $Padding(0x000, 0x108);
    // 0x108
    WorldEffectsManager* worldEffectsManager;
    // 0x10c
    Sim* sim;
    // 0x110
    IPhysicsControl* physicsControl;
    // 0x114
    TimeOfDay* timeOfDay;
    // 0x118
    CameraAgent* cameraAgent;
    // 0x11c
    Rules* rules;
    // 0x120
    Skills* skills;
    // 0x124
    Weather* weather;
    // 0x128
    Mood* mood;
    // 0x12c
    WorldTerrain* worldTerrain;
    // 0x130
    void* ptr130;
    // 0x134
    $Padding(0x134, 0x138);
    // 0x138
    LocalJournal* localJournal;
    // 0x13c
    WorldJournal* worldJournal;
    // 0x140
    $Padding(0x140, 0x144);
};

STATIC_ASSERT(sizeof(World) == 0x144);

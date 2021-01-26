#pragma once

#include "CameraAgent.h"
#include "Enums.h"
#include "FuBi.h"
#include "GoidScid.h"
#include "GPString.h"
#include "Memory.h"
#include "Player.h"
#include "ServerNISInfo.h"

// Non-Interactive Sequence Manager
class NISManager {
public:
	$Singleton(NISManager, 0x0040a5f9);

	$Method(0x00434ed2, CameraShake, bool, const Goid* unk1, const Goid* unk2, const Vector3& unk3, float unk4, float unk5);
	$Method(0x0043abee, SCameraFlyTo, bool, const PlayerId* unk1, const Scid* unk2, eCameraInterp unk3, float unk4);
	$Method(0x0043aa96, SCameraFollowSpline, bool, const PlayerId* unk1, const Scid* unk2, const Scid* unk3, eCameraInterp unk4, float unk5);
	$Method(0x0043ad40, SCameraFov, bool, const PlayerId* unk1, float unk2, float unk3);
	$Method(0x0043ae6c, SCameraMood, bool, const PlayerId* unk1, const GPBString& unk2);
	$Method(0x0043a96b, SCameraSetup, bool, const PlayerId* unk1, const Scid* unk2, float unk3);
	$ConstMethod(0x0043787a, SCanPlayerJoinNIS, bool, Player* unk1, bool unk2);
	$ConstMethod(0x00437c02, SCanPlayerJoinNIS, bool, const PlayerId* unk1, bool unk2);
	$Method(0x0043c7e6, SCreateNIS, bool, const GPBString& unk1, const Goid* unk2, const Goid* unk3, bool unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float unk10, int unk11, float unk12);
	$Method(0x0043bf31, SEndNIS, bool, const PlayerId* unk1);
	$Method(0x00437929, SIsPlayerInNIS, bool, const PlayerId* unk1);
	$Method(0x0043c315, SJoinNIS, bool, const PlayerId* unk1, ServerNISInfo& unk2);
	$Method(0x0043a4a2, SMarkNISForShutdown, bool, const PlayerId* unk1);
	$Method(0x0043b722, SRequestInGameMovie, bool, const PlayerId* unk1, const GPBString& unk2, float unk3);
	$Method(0x0043b43a, SStartConversation, bool, const PlayerId* unk1, const Goid* unk2, const Goid* unk3, const GPBString& unk4);
	$Method(0x0043cf05, SStartNIS, bool, const PlayerId* unk1);
	$Method(0x004388fc, GetNISConverseEndTime, float, const GPBString& unk1);
	$Method(0x004384d7, RCCameraFlyTo, FuBiCookie*, const Scid* unk1, eCameraInterp unk2, float unk3, uint unk4);
	$Method(0x00437f93, RCCameraFollowSpline, FuBiCookie*, const Scid* unk1, const Scid* unk2, eCameraInterp unk3, float unk4, uint unk5);
	$Method(0x00435f0f, RCCameraFov, FuBiCookie*, float unk1, float unk2, uint unk3);
	$Method(0x004389c9, RCCameraMood, FuBiCookie*, const GPBString& unk1, uint unk2);
	$Method(0x00437c26, RCCameraSetup, FuBiCookie*, const Scid* unk1, float unk2, uint unk3);
	$Method(0x004360eb, RCCameraShake, FuBiCookie*, const Goid* unk1, const Goid* unk2, const Vector3& unk3, float unk4, float unk5, uint unk6);
	$Method(0x0043a5ca, RCEndNIS, FuBiCookie*, uint unk1);
	$Method(0x0043b8d5, RCJoinNIS, FuBiCookie*, const_mem_ptr unk1, const FrustumId* unk2, float unk3, uint unk4);
	$Method(0x00435ce9, RCStartNIS, FuBiCookie*, uint unk1);
	$Method(0x004368e6, RCStartNISConversation, FuBiCookie*, const Goid* unk1, const Goid* unk2, const GPBString& unk3, uint unk4);
	$Method(0x0043af0a, RSCameraShake, FuBiCookie*, const Goid* unk1, const Vector3& unk2, float unk3, float unk4, const PlayerId* unk5);
	$Method(0x004399ca, RSEndNISComplete, FuBiCookie*, const PlayerId* unk1);
	$Method(0x00439ebb, RSJoinNISComplete, FuBiCookie*, const PlayerId* unk1);
	$Method(0x0043a37c, RSSetJoinNISCameraPos, FuBiCookie*, const PlayerId* unk1, const CameraQuatPosition& unk2);
};

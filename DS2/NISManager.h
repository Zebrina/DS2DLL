#pragma once

#include "ClassMacros.h"

enum eCameraInterp;

class NISManager {
public:
	DefineSingleton(NISManager, 0x40a5f9);

	/*NISManager*/ private: /*static*/ NISManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5f9
	DefineMethod(CameraShake, 0x434ed2, bool, Params(const Goid_* unk1, const Goid_* unk2, const vector_3& unk3, float unk4, float unk5), Args(const Goid_* unk1, const Goid_* unk2, const vector_3& unk3, float unk4, float unk5));
	DefineMethod(SCameraFlyTo, 0x43abee, bool, Params(const PlayerId_* unk1, const Scid_* unk2, eCameraInterp unk3, float unk4), Args(const PlayerId_* unk1, const Scid_* unk2, eCameraInterp unk3, float unk4));
	DefineMethod(SCameraFollowSpline, 0x43aa96, bool, Params(const PlayerId_* unk1, const Scid_* unk2, const Scid_* unk3, eCameraInterp unk4, float unk5), Args(const PlayerId_* unk1, const Scid_* unk2, const Scid_* unk3, eCameraInterp unk4, float unk5));
	DefineMethod(SCameraFov, 0x43ad40, bool, Params(const PlayerId_* unk1, float unk2, float unk3), Args(const PlayerId_* unk1, float unk2, float unk3));
	DefineMethod(SCameraMood, 0x43ae6c, bool, Params(const PlayerId_* unk1, const gpbstring<char>& unk2), Args(const PlayerId_* unk1, const gpbstring<char>& unk2));
	DefineMethod(SCameraSetup, 0x43a96b, bool, Params(const PlayerId_* unk1, const Scid_* unk2, float unk3), Args(const PlayerId_* unk1, const Scid_* unk2, float unk3));
	DefineConstMethod(SCanPlayerJoinNIS, 0x43787a, bool, Params(Player* unk1, bool unk2), Args(Player* unk1, bool unk2));
	DefineConstMethod(SCanPlayerJoinNIS, 0x437c02, bool, Params(const PlayerId_* unk1, bool unk2), Args(const PlayerId_* unk1, bool unk2));
	DefineMethod(SCreateNIS, 0x43c7e6, bool, Params(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, bool unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float unk10, int unk11, float unk12), Args(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, bool unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float unk10, int unk11, float unk12));
	DefineMethod(SEndNIS, 0x43bf31, bool, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(SIsPlayerInNIS, 0x437929, bool, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(SJoinNIS, 0x43c315, bool, Params(const PlayerId_* unk1, ServerNISInfo& unk2), Args(const PlayerId_* unk1, ServerNISInfo& unk2));
	DefineMethod(SMarkNISForShutdown, 0x43a4a2, bool, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(SRequestInGameMovie, 0x43b722, bool, Params(const PlayerId_* unk1, const gpbstring<char>& unk2, float unk3), Args(const PlayerId_* unk1, const gpbstring<char>& unk2, float unk3));
	DefineMethod(SStartConversation, 0x43b43a, bool, Params(const PlayerId_* unk1, const Goid_* unk2, const Goid_* unk3, const gpbstring<char>& unk4), Args(const PlayerId_* unk1, const Goid_* unk2, const Goid_* unk3, const gpbstring<char>& unk4));
	DefineMethod(SStartNIS, 0x43cf05, bool, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(GetNISConverseEndTime, 0x4388fc, float, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RCCameraFlyTo, 0x4384d7, FuBi::Cookie__*, Params(const Scid_* unk1, eCameraInterp unk2, float unk3, unsigned long unk4), Args(const Scid_* unk1, eCameraInterp unk2, float unk3, unsigned long unk4));
	DefineMethod(RCCameraFollowSpline, 0x437f93, FuBi::Cookie__*, Params(const Scid_* unk1, const Scid_* unk2, eCameraInterp unk3, float unk4, unsigned long unk5), Args(const Scid_* unk1, const Scid_* unk2, eCameraInterp unk3, float unk4, unsigned long unk5));
	DefineMethod(RCCameraFov, 0x435f0f, FuBi::Cookie__*, Params(float unk1, float unk2, unsigned long unk3), Args(float unk1, float unk2, unsigned long unk3));
	DefineMethod(RCCameraMood, 0x4389c9, FuBi::Cookie__*, Params(const gpbstring<char>& unk1, unsigned long unk2), Args(const gpbstring<char>& unk1, unsigned long unk2));
	DefineMethod(RCCameraSetup, 0x437c26, FuBi::Cookie__*, Params(const Scid_* unk1, float unk2, unsigned long unk3), Args(const Scid_* unk1, float unk2, unsigned long unk3));
	DefineMethod(RCCameraShake, 0x4360eb, FuBi::Cookie__*, Params(const Goid_* unk1, const Goid_* unk2, const vector_3& unk3, float unk4, float unk5, unsigned long unk6), Args(const Goid_* unk1, const Goid_* unk2, const vector_3& unk3, float unk4, float unk5, unsigned long unk6));
	DefineMethod(RCEndNIS, 0x43a5ca, FuBi::Cookie__*, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCJoinNIS, 0x43b8d5, FuBi::Cookie__*, Params(const_mem_ptr unk1, const FrustumId_* unk2, float unk3, unsigned long unk4), Args(const_mem_ptr unk1, const FrustumId_* unk2, float unk3, unsigned long unk4));
	DefineMethod(RCStartNIS, 0x435ce9, FuBi::Cookie__*, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCStartNISConversation, 0x4368e6, FuBi::Cookie__*, Params(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3, unsigned long unk4), Args(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3, unsigned long unk4));
	DefineMethod(RSCameraShake, 0x43af0a, FuBi::Cookie__*, Params(const Goid_* unk1, const vector_3& unk2, float unk3, float unk4, const PlayerId_* unk5), Args(const Goid_* unk1, const vector_3& unk2, float unk3, float unk4, const PlayerId_* unk5));
	DefineMethod(RSEndNISComplete, 0x4399ca, FuBi::Cookie__*, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RSJoinNISComplete, 0x439ebb, FuBi::Cookie__*, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RSSetJoinNISCameraPos, 0x43a37c, FuBi::Cookie__*, Params(const PlayerId_* unk1, const CameraQuatPosition& unk2), Args(const PlayerId_* unk1, const CameraQuatPosition& unk2));
};

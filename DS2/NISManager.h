#pragma once

#include "ClassMacros.h"

enum eCameraInterp;

class NISManager {
public:
	DefineSingleton(NISManager, 0x40a5f9);

	/*NISManager*/ private: /*static*/ NISManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5f9
	/*NISManager*/ public: bool /*__thiscall*/ CameraShake(const Goid_* unk1, const Goid_* unk2, const vector_3& unk3, float unk4, float unk5); //0x00434ed2
	/*NISManager*/ public: bool /*__thiscall*/ SCameraFlyTo(const PlayerId_* unk1, const Scid_* unk2, eCameraInterp unk3, float unk4); //0x0043abee
	/*NISManager*/ public: bool /*__thiscall*/ SCameraFollowSpline(const PlayerId_* unk1, const Scid_* unk2, const Scid_* unk3, eCameraInterp unk4, float unk5); //0x0043aa96
	/*NISManager*/ public: bool /*__thiscall*/ SCameraFov(const PlayerId_* unk1, float unk2, float unk3); //0x0043ad40
	/*NISManager*/ public: bool /*__thiscall*/ SCameraMood(const PlayerId_* unk1, const gpbstring<char>& unk2); //0x0043ae6c
	/*NISManager*/ public: bool /*__thiscall*/ SCameraSetup(const PlayerId_* unk1, const Scid_* unk2, float unk3); //0x0043a96b
	/*NISManager*/ public: bool /*__thiscall*/ SCanPlayerJoinNIS(Player* unk1, bool unk2) const; //0x0043787a
	/*NISManager*/ public: bool /*__thiscall*/ SCanPlayerJoinNIS(const PlayerId_* unk1, bool unk2) const; //0x00437c02
	/*NISManager*/ public: bool /*__thiscall*/ SCreateNIS(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, bool unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float unk10, int unk11, float unk12); //0x0043c7e6
	/*NISManager*/ public: bool /*__thiscall*/ SEndNIS(const PlayerId_* unk1); //0x0043bf31
	/*NISManager*/ public: bool /*__thiscall*/ SIsPlayerInNIS(const PlayerId_* unk1); //0x00437929
	/*NISManager*/ public: bool /*__thiscall*/ SJoinNIS(const PlayerId_* unk1, ServerNISInfo& unk2); //0x0043c315
	/*NISManager*/ public: bool /*__thiscall*/ SMarkNISForShutdown(const PlayerId_* unk1); //0x0043a4a2
	/*NISManager*/ public: bool /*__thiscall*/ SRequestInGameMovie(const PlayerId_* unk1, const gpbstring<char>& unk2, float unk3); //0x0043b722
	/*NISManager*/ public: bool /*__thiscall*/ SStartConversation(const PlayerId_* unk1, const Goid_* unk2, const Goid_* unk3, const gpbstring<char>& unk4); //0x0043b43a
	/*NISManager*/ public: bool /*__thiscall*/ SStartNIS(const PlayerId_* unk1); //0x0043cf05
	/*NISManager*/ public: float /*__thiscall*/ GetNISConverseEndTime(const gpbstring<char>& unk1); //0x004388fc
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCCameraFlyTo(const Scid_* unk1, eCameraInterp unk2, float unk3, unsigned long unk4); //0x004384d7
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCCameraFollowSpline(const Scid_* unk1, const Scid_* unk2, eCameraInterp unk3, float unk4, unsigned long unk5); //0x00437f93
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCCameraFov(float unk1, float unk2, unsigned long unk3); //0x00435f0f
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCCameraMood(const gpbstring<char>& unk1, unsigned long unk2); //0x004389c9
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCCameraSetup(const Scid_* unk1, float unk2, unsigned long unk3); //0x00437c26
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCCameraShake(const Goid_* unk1, const Goid_* unk2, const vector_3& unk3, float unk4, float unk5, unsigned long unk6); //0x004360eb
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCEndNIS(unsigned long unk1); //0x0043a5ca
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCJoinNIS(const_mem_ptr unk1, const FrustumId_* unk2, float unk3, unsigned long unk4); //0x0043b8d5
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCStartNIS(unsigned long unk1); //0x00435ce9
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCStartNISConversation(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3, unsigned long unk4); //0x004368e6
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSCameraShake(const Goid_* unk1, const vector_3& unk2, float unk3, float unk4, const PlayerId_* unk5); //0x0043af0a
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSEndNISComplete(const PlayerId_* unk1); //0x004399ca
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSJoinNISComplete(const PlayerId_* unk1); //0x00439ebb
	/*NISManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetJoinNISCameraPos(const PlayerId_* unk1, const CameraQuatPosition& unk2); //0x0043a37c
};

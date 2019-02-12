#pragma once

#include "ClassMacros.h"

class CameraAgent {
public:
	DefineSingleton(CameraAgent, 0x40a5ab);

	/*CameraAgent*/ private: /*static*/ CameraAgent* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5ab
	/*CameraAgent*/ public: eCameraInterp /*__thiscall*/ GetInterpolationMode() const; //0x00409273
	/*CameraAgent*/ public: void /*__thiscall*/ ClearCameraPositionCache(); //0x0092c5b8
	/*CameraAgent*/ public: void /*__thiscall*/ ClearOrders(); //0x0092bfc7
	/*CameraAgent*/ public: void /*__thiscall*/ ClearPosition(); //0x0092c5c0
	/*CameraAgent*/ public: void /*__thiscall*/ FinishOrders(); //0x0092d67a
	/*CameraAgent*/ public: void /*__thiscall*/ RemoveCameraPosition(const gpbstring<char>& unk1); //0x0092bf95
	/*CameraAgent*/ public: void /*__thiscall*/ SetInterpolationMode(eCameraInterp unk1); //0x0092c05f
	/*CameraAgent*/ public: void /*__thiscall*/ SubmitCameraOffset(const SiegePos& unk1); //0x009297b5
	/*CameraAgent*/ public: void /*__thiscall*/ SubmitCameraOffset(const vector_3& unk1); //0x009290d4
	/*CameraAgent*/ public: void /*__thiscall*/ SubmitCameraPosition(const gpbstring<char>& unk1, const CameraEulerPosition& unk2); //0x0092d241
	/*CameraAgent*/ public: void /*__thiscall*/ SubmitCameraPosition(const gpbstring<char>& unk1, const CameraMatrixPosition& unk2); //0x0092d34b
	/*CameraAgent*/ public: void /*__thiscall*/ SubmitCameraPosition(const gpbstring<char>& unk1, const CameraPosition& unk2); //0x0092d1b4
	/*CameraAgent*/ public: void /*__thiscall*/ SubmitCameraPosition(const gpbstring<char>& unk1, const CameraQuatPosition& unk2); //0x0092d404
	/*CameraAgent*/ public: void /*__thiscall*/ SubmitCameraPosition(const gpbstring<char>& unk1, const CameraVectorToCameraPosition& unk2); //0x0092d579
	/*CameraAgent*/ public: void /*__thiscall*/ SubmitCameraPosition(const gpbstring<char>& unk1, const CameraVectorToTargetPosition& unk2); //0x0092d4cb
	/*CameraAgent*/ public: void /*__thiscall*/ SubmitOrder(const gpbstring<char>& unk1, eCameraOrder unk2, float unk3, bool unk4, const Scid_* unk5, eCameraInterp unk6); //0x0092d627
};

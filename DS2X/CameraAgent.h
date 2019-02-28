#pragma once

#include "Enums.h"
#include "GPBString.h"
#include "Quat.h"
#include "Scid.h"
#include "SiegePos.h"
#include "Vector3.h"

struct CameraEulerPosition;
struct CameraMatrixPosition;
struct CameraPosition;
struct CameraQuatPosition;
struct CameraVectorToCameraPosition;
struct CameraVectorToTargetPosition;

class CameraAgent {
public:
	DefineSingleton(CameraAgent, 0x40a5ab);

	DefineConstMethod(GetInterpolationMode, 0x409273, eCameraInterp, NO_PARAMS, NO_ARGS);
	DefineMethod(ClearCameraPositionCache, 0x92c5b8, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ClearOrders, 0x92bfc7, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ClearPosition, 0x92c5c0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(FinishOrders, 0x92d67a, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RemoveCameraPosition, 0x92bf95, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetInterpolationMode, 0x92c05f, void, Params(eCameraInterp unk1), Args(unk1));
	DefineMethod(SubmitCameraOffset, 0x9297b5, void, Params(const SiegePos& unk1), Args(unk1));
	DefineMethod(SubmitCameraOffset, 0x9290d4, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(SubmitCameraPosition, 0x92d241, void, Params(const gpbstring<char>& unk1, const CameraEulerPosition& unk2), Args(unk1, unk2));
	DefineMethod(SubmitCameraPosition, 0x92d34b, void, Params(const gpbstring<char>& unk1, const CameraMatrixPosition& unk2), Args(unk1, unk2));
	DefineMethod(SubmitCameraPosition, 0x92d1b4, void, Params(const gpbstring<char>& unk1, const CameraPosition& unk2), Args(unk1, unk2));
	DefineMethod(SubmitCameraPosition, 0x92d404, void, Params(const gpbstring<char>& unk1, const CameraQuatPosition& unk2), Args(unk1, unk2));
	DefineMethod(SubmitCameraPosition, 0x92d579, void, Params(const gpbstring<char>& unk1, const CameraVectorToCameraPosition& unk2), Args(unk1, unk2));
	DefineMethod(SubmitCameraPosition, 0x92d4cb, void, Params(const gpbstring<char>& unk1, const CameraVectorToTargetPosition& unk2), Args(unk1, unk2));
	DefineMethod(SubmitOrder, 0x92d627, void, Params(const gpbstring<char>& unk1, eCameraOrder unk2, float unk3, bool unk4, const Scid_* unk5, eCameraInterp unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));

  // 0x00
  FillStruct(0x00, 0xb0);
	// 0xb0
	eCameraInterp interpolationMode;
};

struct CameraEulerPosition {

};

struct CameraMatrixPosition {

};

struct CameraPosition {
	DefineStaticMethod(FUBI_PodGetSize, 0x502d71, unsigned int, NO_PARAMS, NO_ARGS);
	DefineMethod(SetPosition, 0x929660, void, Params(const SiegePos& unk1, const Quat& unk2, float unk3), Args(unk1, unk2, unk3));
};

struct CameraQuatPosition {
	DefineStaticMethod(FUBI_PodGetSize, 0x502d75, unsigned int, NO_PARAMS, NO_ARGS);
	DefineMethod(SetPosition, 0x928f68, void, Params(const SiegePos& unk1, const Quat& unk2), Args(unk1, unk2));
};

struct CameraVectorToCameraPosition {

};

struct CameraVectorToTargetPosition {

};

DefineFunction(GetCurrentCameraPosition, 0x928fa5, void, Params(CameraPosition& position), Args(position));
DefineFunction(GetCurrentCameraQuat, 0x9290b9, void, Params(Quat& quat), Args(quat));
DefineFunction(GetCurrentCameraQuatPosition, 0x929042, void, Params(CameraQuatPosition& quatPosition), Args(quatPosition));
DefineFunction(GetCurrentCameraSiegePosition, 0x929013, void, Params(SiegePos& position), Args(position));

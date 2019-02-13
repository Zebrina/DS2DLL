#pragma once

#include "Enums.h"
#include "GPBString.h"
#include "Quat.h"
#include "Scid.h"
#include "SiegePos.h"
#include "Vector3.h"

#include "ClassMacros.h"

struct CameraEulerPosition;
struct CameraMatrixPosition;
struct CameraPosition;
struct CameraQuatPosition;
struct CameraVectorToCameraPosition;
struct CameraVectorToTargetPosition;

class CameraAgent {
public:
	DefineSingleton(CameraAgent, 0x40a5ab);

	DefineConstMethod(GetInterpolationMode, 0x409273, eCameraInterp, Params(), Args());
	DefineMethod(ClearCameraPositionCache, 0x92c5b8, void, Params(), Args());
	DefineMethod(ClearOrders, 0x92bfc7, void, Params(), Args());
	DefineMethod(ClearPosition, 0x92c5c0, void, Params(), Args());
	DefineMethod(FinishOrders, 0x92d67a, void, Params(), Args());
	DefineMethod(RemoveCameraPosition, 0x92bf95, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetInterpolationMode, 0x92c05f, void, Params(eCameraInterp unk1), Args(eCameraInterp unk1));
	DefineMethod(SubmitCameraOffset, 0x9297b5, void, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineMethod(SubmitCameraOffset, 0x9290d4, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
	DefineMethod(SubmitCameraPosition, 0x92d241, void, Params(const gpbstring<char>& unk1, const CameraEulerPosition& unk2), Args(const gpbstring<char>& unk1, const CameraEulerPosition& unk2));
	DefineMethod(SubmitCameraPosition, 0x92d34b, void, Params(const gpbstring<char>& unk1, const CameraMatrixPosition& unk2), Args(const gpbstring<char>& unk1, const CameraMatrixPosition& unk2));
	DefineMethod(SubmitCameraPosition, 0x92d1b4, void, Params(const gpbstring<char>& unk1, const CameraPosition& unk2), Args(const gpbstring<char>& unk1, const CameraPosition& unk2));
	DefineMethod(SubmitCameraPosition, 0x92d404, void, Params(const gpbstring<char>& unk1, const CameraQuatPosition& unk2), Args(const gpbstring<char>& unk1, const CameraQuatPosition& unk2));
	DefineMethod(SubmitCameraPosition, 0x92d579, void, Params(const gpbstring<char>& unk1, const CameraVectorToCameraPosition& unk2), Args(const gpbstring<char>& unk1, const CameraVectorToCameraPosition& unk2));
	DefineMethod(SubmitCameraPosition, 0x92d4cb, void, Params(const gpbstring<char>& unk1, const CameraVectorToTargetPosition& unk2), Args(const gpbstring<char>& unk1, const CameraVectorToTargetPosition& unk2));
	DefineMethod(SubmitOrder, 0x92d627, void, Params(const gpbstring<char>& unk1, eCameraOrder unk2, float unk3, bool unk4, const Scid_* unk5, eCameraInterp unk6), Args(const gpbstring<char>& unk1, eCameraOrder unk2, float unk3, bool unk4, const Scid_* unk5, eCameraInterp unk6));
};

struct CameraEulerPosition {

};

struct CameraMatrixPosition {

};

struct CameraPosition {
	/*CameraPosition*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00502d71
	DefineMethod(SetPosition, 0x929660, void, Params(const SiegePos& unk1, const Quat& unk2, float unk3), Args(const SiegePos& unk1, const Quat& unk2, float unk3));
};

struct CameraQuatPosition {
	/*CameraQuatPosition*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00502d75
	DefineMethod(SetPosition, 0x928f68, void, Params(const SiegePos& unk1, const Quat& unk2), Args(const SiegePos& unk1, const Quat& unk2));
};

struct CameraVectorToCameraPosition {

};

struct CameraVectorToTargetPosition {

};

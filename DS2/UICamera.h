#pragma once

#include "ClassMacros.h"

enum eCameraMode;

class UICamera {
public:
	DefineSingleton(UICamera, 0x40a5e1);

	/*UICamera*/ private: /*static*/ UICamera* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5e1
	DefineConstMethod(GetCameraMode, 0x40928d, eCameraMode, Params(), Args());
	DefineConstMethod(GetPreviousMode, 0x409290, eCameraMode, Params(), Args());
	DefineMethod(MouseDeltaZ, 0x464ff6, float, Params(int unk1), Args(int unk1));
	DefineMethod(MouseDeltaY, 0x46491c, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetCameraMode, 0x4661be, void, Params(eCameraMode mode, bool unk2, eCameraInterp unk3), Args(eCameraMode mode, bool unk2, eCameraInterp unk3));
	DefineMethod(SetCameraMode, 0x40927a, void, Params(eCameraMode mode), Args(eCameraMode mode));
	DefineMethod(SetFollowCam, 0x46661d, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetFollowCamSmoothing, 0x409294, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetFreeLook, 0x467012, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetMaxDistance, 0x40a5c9, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetMinDistance, 0x40a5b1, void, Params(float unk1), Args(float unk1));
};

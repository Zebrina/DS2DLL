#pragma once

#include "Enums.h"

enum eCameraMode {

};

class UICamera {
public:
	$Singleton(UICamera, 0x0040a5e1);

	$ConstMethod(0x0040928d, GetCameraMode, eCameraMode);
	$ConstMethod(0x00409290, GetPreviousMode, eCameraMode);
	$Method(0x00464ff6, MouseDeltaZ, float, int unk1);
	$Method(0x0046491c, MouseDeltaY, void, int unk1);
	$Method(0x004661be, SetCameraMode, void, eCameraMode mode, bool unk2, eCameraInterp unk3);
	$Method(0x0040927a, SetCameraMode, void, eCameraMode mode);
	$Method(0x0046661d, SetFollowCam, void, bool unk1);
	$Method(0x00409294, SetFollowCamSmoothing, void, bool unk1);
	$Method(0x00467012, SetFreeLook, void, bool unk1);
	$Method(0x0040a5c9, SetMaxDistance, void, float unk1);
	$Method(0x0040a5b1, SetMinDistance, void, float unk1);

    // 0x000
    $Padding(0x000, 0x210);
};

STATIC_ASSERT(sizeof(UICamera) == 0x210);

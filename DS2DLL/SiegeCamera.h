#pragma once

#include "GPMath.h"
#include "SiegePos.h"

namespace siege {
    class SiegeCamera {
    public:
        $ConstMethod(0x00409265, GetMatrixOrientation, const Matrix3x3&);
        $ConstMethod(0x0040926c, GetQuatOrientation, const Quat&);
        $ConstMethod(0x00409242, GetCameraSiegePos, const SiegePos&);
        $ConstMethod(0x00409250, GetTargetSiegePos, const SiegePos&);
        $ConstMethod(0x0040923b, GetCameraPosition, const Vector3&);
        $ConstMethod(0x00409249, GetTargetPosition, const Vector3&);
        $ConstMethod(0x00409257, GetUpVector, const Vector3&);
        $ConstMethod(0x0040925e, GetVectorOrientation, const Vector3&);
        $ConstMethod(0x004091f8, GetFieldOfView, float);
        $ConstMethod(0x004091ff, GetMaxAzimuth, float);
        $ConstMethod(0x0040922d, GetMaxDistance, float);
        $ConstMethod(0x00409206, GetMinAzimuth, float);
        $ConstMethod(0x00409234, GetMinDistance, float);
        $ConstMethod(0x004091f1, GetViewportNormalizedHeight, float);
        $ConstMethod(0x004091ea, GetViewportNormalizedWidth, float);
        $ConstMethod(0x006e4bc0, GetViewportHeight, uint);
        $ConstMethod(0x006e4b90, GetViewportWidth, uint);
    };
}

typedef siege::SiegeCamera SiegeCamera;

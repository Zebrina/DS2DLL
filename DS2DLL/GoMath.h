#pragma once

#include "GoidScid.h"

namespace GoMath {
	$Function(0x007d703f, GetAngleToWind, float, const Goid* unk1);
	$Function(0x007d6de7, OrbitAngleToTarget, float, const Goid* unk1, const Goid* unk2);
	$Function(0x007d6f21, AzimuthAngleToTarget, float, const Goid* unk1, const Goid* unk2);
	$Function(0x007d6dd3, RandomInt, int, int unk1);
	$Function(0x007d6db8, RandomInt, int, int unk1, int unk2);
	$Function(0x007d6da4, RandomFloat, float, float unk1);
	$Function(0x007d6d84, RandomFloat, float, float unk1, float unk2);
}

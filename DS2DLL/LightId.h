#pragma once

#include "SiegePos.h"

struct LightId_ {
	$StaticMethod(0x00408376, GetInvalidLightId, const LightId_*);

	$ConstMethod(0x0040836b, IsValid, bool);
	$ConstMethod(0x007d6b40, GetActive, bool);
	$Method(0x007d6bfc, SetActive, void, bool unk1);
	$ConstMethod(0x007d6b65, GetIntensity, float);
	$Method(0x007d6c35, SetIntensity, void, float unk1);
	$ConstMethod(0x007d6b1b, GetColor, hexcolorcode);
	$Method(0x007d6bc3, SetColor, void, hexcolorcode color);
	$ConstMethod(0x007d6b8a, GetPosition, void, SiegePos& posOut);
} typedef LightId;

$Function(0x0040835b, MakeInt, uint, const LightId* lightId);
$Function(0x00408363, MakeLightId, const LightId*, uint value);
$Function(0x007d78fd, StartLightFx, bool, const LightId* lightId, const char* unk2);
$Function(0x007d787e, StartLightFx, bool, const LightId* lightId, const char* unk2, const char* unk3);

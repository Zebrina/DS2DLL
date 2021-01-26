#pragma once

struct GUInterface {
	$Method(0x007ace50, CallSkritFunction, bool, const char* unk1);
	$Method(0x007ace20, LoadSkritProperties, bool, const char* unk1);
	$Method(0x007acf60, SetupFade, void, float unk1, bool unk2, bool unk3);
};

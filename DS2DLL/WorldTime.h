#pragma once

class WorldTime {
public:
	$Singleton(WorldTime, 0x0040a611);

	$Method(0x0083a6f6, RCSetServerTime, void, double unk1);
	$ConstMethod(0x00409631, GetRealTime, double);
	$ConstMethod(0x0040962d, GetTime, double);
	$ConstMethod(0x00409637, GetSecondsElapsed, float);
	$ConstMethod(0x0040963b, GetSimCount, uint);

    // 0x00
    $Padding(0x00, 0x20);
};

STATIC_ASSERT(sizeof(WorldTime) == 0x20);

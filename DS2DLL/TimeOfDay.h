#pragma once

class TimeOfDay {
public:
	$Singleton(TimeOfDay, 0x0041426b);

	$ConstMethod(0x004126d4, GetHour, uint);
    $ConstMethod(0x004126d8, GetMinute, uint);
    $Method(0x008ffd7f, RCSetTime, void, uint unk1, uint unk2);

    // 0x00
    $Padding(0x00, 0x08);
    // 0x08
    uint hour;
    // 0x0c
    uint minute;
    // 0x10
    $Padding(0x10, 0x38);
};

STATIC_ASSERT(sizeof(TimeOfDay) == 0x38);

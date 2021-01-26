#pragma once

class UIStagingAreaGameSettings {
public:
	$Singleton(UIStagingAreaGameSettings, 0x004f7cac);

    // 0x00
    bool b00 = false;
    bool b01 = false;
    bool b02 = false;
};

STATIC_ASSERT(sizeof(UIStagingAreaGameSettings) == 3);

#pragma once

class UIStagingAreaMapSettings {
public:
	$Singleton(UIStagingAreaMapSettings, 0x004f7cb2);

    // 0x00
    bool b00 = false;;
    bool b01 = false;
    bool b02 = false;
    bool b03;
    // 0x04
    $Padding(0x04, 0x10);
};

STATIC_ASSERT(sizeof(UIStagingAreaMapSettings) == 0x10);

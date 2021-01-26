#pragma once

class UIStagingArea {
public:
	$Singleton(UIStagingArea, 0x004da4f1);

    $Method(0x004f973f, ShowMapSettingsTab, void);
	$Method(0x004f9713, ShowGameSettingsTab, void);
	$Method(0x004f8c05, ShowPlayersTab, void);

    // 0x00
    $Padding(0x00, 0x5c);
};

STATIC_ASSERT(sizeof(UIStagingArea) == 0x5c);

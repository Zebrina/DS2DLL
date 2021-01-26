#pragma once

class Weather {
public:
	$Singleton(Weather, 0x00429eb4);

    // 0x00
    $Padding(0x00, 0x38);
};

STATIC_ASSERT(sizeof(Weather) == 0x38);

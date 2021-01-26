#pragma once

class UIOptions {
public:
	$Singleton(UIOptions, 0x00429ea8);

    // 0x00
    bool b00;
    bool b01;
    bool b02;
    bool b03;
    // 0x04
    $Padding(0x04, 0x48);
    // 0x48
    void* ptr48;
    // 0x4c
    $Padding(0x4c, 0x88);
    // 0x88
    double dbl88;
    // 0x90
    $Padding(0x90, 0xb0);
};

STATIC_ASSERT(sizeof(UIOptions) == 0xb0);

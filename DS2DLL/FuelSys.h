#pragma once

class FuelSys {
public:
	$Singleton(FuelSys, 0x0040a63d);

	$Method(0x00409714, DebugShowHandleAccess, bool);
	$Method(0x00409707, DebugSetShowHandleAccess, void, bool unk1);
	$Method(0x00640c04, SetUncachingEnabled, void, bool unk1);
	$Method(0x00640b84, Unload, void);

    // 0x00
    $Padding(0x00, 0x34);
};

STATIC_ASSERT(sizeof(FuelSys) == 0x34);

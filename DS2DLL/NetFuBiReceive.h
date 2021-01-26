#pragma once

class NetFuBiReceive {
public:
	$Singleton(NetFuBiReceive, 0x00424373);

    // 0x00
    $Padding(0x00, 0x70);
};

STATIC_ASSERT(sizeof(NetFuBiReceive) == 0x70);

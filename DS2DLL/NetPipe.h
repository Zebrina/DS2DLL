#pragma once

class NetPipe {
public:
	$Singleton(NetPipe, 0x0042434e);

    // 0x000
    $Padding(0x000, 0x180);
};

STATIC_ASSERT(sizeof(NetPipe) == 0x180);

#pragma once

class NetFuBiSend {
public:
	$Singleton(NetFuBiSend, 0x00424367);

	$Method(0x00423a33, SetSendDelay, void, float unk1);

    // 0x00
    $Padding(0x00, 0x68);
};

STATIC_ASSERT(sizeof(NetFuBiSend) == 0x68);

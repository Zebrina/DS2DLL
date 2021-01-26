#pragma once

class UIStagingAreaPartySupport {
public:
	$Singleton(UIStagingAreaPartySupport, 0x004f7cb8);

    // 0x00
    $Padding(0x00, 0x3c);
};

STATIC_ASSERT(sizeof(UIStagingAreaPartySupport) == 0x3c);

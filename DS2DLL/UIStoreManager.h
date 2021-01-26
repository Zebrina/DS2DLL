#pragma once

#include "GoidScid.h"
#include "GPString.h"

class UIStoreManager {
public:
	$Singleton(UIStoreManager, 0x00429ea2);

	$Method(0x004d1a07, DoesPartyHaveTemplate, bool, const GPBString& path);
	$Method(0x00428d5f, GetActiveStoreBuyer, const Goid*);

	// 0x00
	$Padding(0x00, 0x04);
	// 0x04
	Goid* activeStoreBuyer;
	// 0x08
	$Padding(0x08, 0x2c);
};

STATIC_ASSERT(sizeof(UIStoreManager) == 0x2c);

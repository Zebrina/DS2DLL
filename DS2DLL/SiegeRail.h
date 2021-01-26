#pragma once

#include "GPString.h"

struct SiegeRail {
    // 0x00
    $Padding(0x00, 0xc8);
};

STATIC_ASSERT(sizeof(SiegeRail) == 0xc8);

$Function(0x006d4260, ToString, GPBString, const SiegeRail& siegeRail);

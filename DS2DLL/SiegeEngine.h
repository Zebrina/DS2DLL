#pragma once

#include "SiegeCamera.h"
#include "SiegeEffectsManager.h"
#include "SiegePos.h"

namespace siege {
    class SiegeEngine {
    public:
        $Singleton(SiegeEngine, 0x00503562);

        $Method(0x006bd900, IsPositionInLogicalMeshBounds, bool, const SiegePos& unk1);
        $ConstMethod(0x0050268c, GetCamera, const SiegeCamera&);

        // 0x000
        $Padding(0x000, 0x0b4);
        // 0x0b4
        SiegeEffectsManager* siegeEffectsManager;
        // 0x0b8
        $Padding(0x0b8, 0x340);
    };
}

STATIC_ASSERT(sizeof(siege::SiegeEngine) == 0x340);

typedef siege::SiegeEngine SiegeEngine;

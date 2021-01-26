#pragma once

namespace siege {
    class SiegeEffectsMgr {
    public:
        $Singleton(SiegeEffectsMgr, 0x0050354c);

        // 0x00
        $Padding(0x00, 0x74);
    };
}

STATIC_ASSERT(sizeof(siege::SiegeEffectsMgr) == 0x74);

typedef siege::SiegeEffectsMgr SiegeEffectsManager;

#pragma once

#include "GoidScid.h"
#include "Memory.h"

class UIItemEnchanterStore {
public:
	$Singleton(UIItemEnchanterStore, 0x00456e60);

	$Method(0x004cc9b1, EnchantSelectedItem, void);
	$Method(0x004cc186, ItemPlaced, void);
	$Method(0x004cbfc3, RCCreateRecipeItem, void, const Goid* unk1, const Goid* unk2);
	$Method(0x004cbd23, RCEnchantItem, void, const Goid* unk1, const Goid* unk2, const_mem_ptr unk3);
	$Method(0x004cb9c3, Refresh, void);
	$Method(0x004cb424, RefreshGridSize, void);
	$Method(0x004cb6ff, RefreshReagentInfo, void);
	$Method(0x004cc371, RSEnchantItem, void, const Goid* unk1, const Goid* unk2, const_mem_ptr unk3, int unk4);

    // 0x00
    $Padding(0x00, 0x18);
};

STATIC_ASSERT(sizeof(UIItemEnchanterStore) == 0x18);

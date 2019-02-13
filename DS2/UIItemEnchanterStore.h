#pragma once

#include "ClassMacros.h"

class UIItemEnchanterStore {
public:
	DefineSingleton(UIItemEnchanterStore, 0x456e60);

	/*UIItemEnchanterStore*/ private: /*static*/ UIItemEnchanterStore* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00456e60
	DefineMethod(EnchantSelectedItem, 0x4cc9b1, void, Params(), Args());
	DefineMethod(ItemPlaced, 0x4cc186, void, Params(), Args());
	DefineMethod(RCCreateRecipeItem, 0x4cbfc3, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(RCEnchantItem, 0x4cbd23, void, Params(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3), Args(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3));
	DefineMethod(Refresh, 0x4cb9c3, void, Params(), Args());
	DefineMethod(RefreshGridSize, 0x4cb424, void, Params(), Args());
	DefineMethod(RefreshReagentInfo, 0x4cb6ff, void, Params(), Args());
	DefineMethod(RSEnchantItem, 0x4cc371, void, Params(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3, int unk4), Args(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3, int unk4));
};

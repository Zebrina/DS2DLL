#pragma once



class UIItemEnchanterStore {
public:
	DefineSingleton(UIItemEnchanterStore, 0x456e60);

	DefineMethod(EnchantSelectedItem, 0x4cc9b1, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ItemPlaced, 0x4cc186, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCCreateRecipeItem, 0x4cbfc3, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RCEnchantItem, 0x4cbd23, void, Params(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3), Args(unk1, unk2, unk3));
	DefineMethod(Refresh, 0x4cb9c3, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RefreshGridSize, 0x4cb424, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RefreshReagentInfo, 0x4cb6ff, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSEnchantItem, 0x4cc371, void, Params(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3, int unk4), Args(unk1, unk2, unk3, unk4));
};

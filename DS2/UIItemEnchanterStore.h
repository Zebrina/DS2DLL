#pragma once

#include "ClassMacros.h"

class UIItemEnchanterStore {
public:
	DefineSingleton(UIItemEnchanterStore, 0x456e60);

	/*UIItemEnchanterStore*/ private: /*static*/ UIItemEnchanterStore* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00456e60
	/*UIItemEnchanterStore*/ public: void /*__thiscall*/ EnchantSelectedItem(); //0x004cc9b1
	/*UIItemEnchanterStore*/ public: void /*__thiscall*/ ItemPlaced(); //0x004cc186
	/*UIItemEnchanterStore*/ public: void /*__thiscall*/ RCCreateRecipeItem(const Goid_* unk1, const Goid_* unk2); //0x004cbfc3
	/*UIItemEnchanterStore*/ public: void /*__thiscall*/ RCEnchantItem(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3); //0x004cbd23
	/*UIItemEnchanterStore*/ public: void /*__thiscall*/ Refresh(); //0x004cb9c3
	/*UIItemEnchanterStore*/ public: void /*__thiscall*/ RefreshGridSize(); //0x004cb424
	/*UIItemEnchanterStore*/ public: void /*__thiscall*/ RefreshReagentInfo(); //0x004cb6ff
	/*UIItemEnchanterStore*/ public: void /*__thiscall*/ RSEnchantItem(const Goid_* unk1, const Goid_* unk2, const_mem_ptr unk3, int unk4); //0x004cc371
};

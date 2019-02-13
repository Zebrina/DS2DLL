#pragma once

#include "ClassMacros.h"

class UIStagingArea {
public:
	DefineSingleton(UIStagingArea, 0x4da4f1);

	/*UIStagingArea*/ private: /*static*/ UIStagingArea* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004da4f1
	DefineMethod(ShowGameSettingsTab, 0x4f9713, void, Params(), Args());
	DefineMethod(ShowMapSettingsTab, 0x4f973f, void, Params(), Args());
	DefineMethod(ShowPlayersTab, 0x4f8c05, void, Params(), Args());
};

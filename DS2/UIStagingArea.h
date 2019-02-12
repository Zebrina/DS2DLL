#pragma once

#include "ClassMacros.h"

class UIStagingArea {
public:
	DefineSingleton(UIStagingArea, 0x4da4f1);

	/*UIStagingArea*/ private: /*static*/ UIStagingArea* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004da4f1
	/*UIStagingArea*/ private: void /*__thiscall*/ ShowGameSettingsTab(); //0x004f9713
	/*UIStagingArea*/ private: void /*__thiscall*/ ShowMapSettingsTab(); //0x004f973f
	/*UIStagingArea*/ private: void /*__thiscall*/ ShowPlayersTab(); //0x004f8c05
};

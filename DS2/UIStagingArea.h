#pragma once

#include "ClassMacros.h"

class UIStagingArea {
public:
	DefineSingleton(UIStagingArea, 0x4da4f1);

	DefineMethod(ShowGameSettingsTab, 0x4f9713, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowMapSettingsTab, 0x4f973f, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowPlayersTab, 0x4f8c05, void, NO_PARAMS, NO_ARGS);
};

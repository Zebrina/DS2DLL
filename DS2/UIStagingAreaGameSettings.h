#pragma once

#include "ClassMacros.h"

class UIStagingAreaGameSettings {
public:
	DefineSingleton(UIStagingAreaGameSettings, 0x4f7cac);

	DefineStaticMethod(FUBI_GetClassSingleton$, 0x4f7cac, UIStagingAreaGameSettings*, NO_PARAMS, NO_ARGS);
};

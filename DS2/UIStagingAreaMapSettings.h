#pragma once

#include "ClassMacros.h"

class UIStagingAreaMapSettings {
public:
	DefineSingleton(UIStagingAreaMapSettings, 0x4f7cb2);

	DefineStaticMethod(FUBI_GetClassSingleton$, 0x4f7cb2, UIStagingAreaMapSettings*, NO_PARAMS, NO_ARGS);
};

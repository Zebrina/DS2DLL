#pragma once

#include "ClassMacros.h"

class UIStagingAreaPartySupport {
public:
	DefineSingleton(UIStagingAreaPartySupport, 0x4f7cb8);

	DefineStaticMethod(FUBI_GetClassSingleton$, 0x4f7cb8, UIStagingAreaPartySupport*, NO_PARAMS, NO_ARGS);
};

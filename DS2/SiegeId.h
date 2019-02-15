#pragma once

#include "ClassMacros.h"

struct SiegeId_ {
	DefineStaticMethod(GetInvalidSiegeId, 0x4083c0, const SiegeId_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsValid, 0x4083b5, bool, NO_PARAMS, NO_ARGS);
} typedef SiegeId;

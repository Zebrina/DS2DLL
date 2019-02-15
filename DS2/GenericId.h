#pragma once

struct GenericId_ {
	DefineStaticMethod(GetInvalidGenericId, 0x502d6e, const GenericId_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsValid, 0x502d66, bool, NO_PARAMS, NO_ARGS);
} typedef GenericId;

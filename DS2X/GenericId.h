#pragma once



struct GenericId_ {
	DefineStaticMethod(GetInvalidGenericId, 0x502d6e, const GenericId_*, NO_PARAMS, NO_ARGS); // Returns nullptr
	DefineConstMethod(IsValid, 0x502d66, bool, NO_PARAMS, NO_ARGS); // Basically this != nullptr
} typedef GenericId;

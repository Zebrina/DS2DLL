#pragma once

#include "Go.h"
#include "Scid.h"

struct Goid_ {
	DefineStaticMethod(GetAnyGoid, 0x502cf4, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineStaticMethod(GetInvalidGoid, 0x502cee, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineStaticMethod(GetNoneGoid, 0x502cfa, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsValid, 0x502ccb, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsValidMp, 0x502cd6, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGo, 0x502cde, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetScid, 0x502ce6, const Scid_*, NO_PARAMS, NO_ARGS);
} typedef Goid;

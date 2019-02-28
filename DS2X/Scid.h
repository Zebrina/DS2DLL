#pragma once

class Go;
struct Goid_;

struct Scid_ {
	DefineStaticMethod(GetInvalidScid, 0x502d26, const Scid_*, NO_PARAMS, NO_ARGS);
	DefineStaticMethod(GetSpawnedScid, 0x502d2c, const Scid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInstance, 0x502d0b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsValid, 0x502d00, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGo, 0x502d1e, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoid, 0x502d16, const Goid_*, NO_PARAMS, NO_ARGS);
} typedef ScId;

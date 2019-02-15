#pragma once

#include "GPBString.h"

#include "ClassMacros.h"

class Go;
class GoDataComponent;
struct Goid_;
struct Scid_;

class GoComponent {
public:
	DefineConstMethod(FUBI_RENAME_GetGo, 0x502e90, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_GetData, 0x502e94, const GoDataComponent*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetName, 0x7b10cd, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoid, 0x7b10d5, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetScid, 0x7b10dc, const Scid_*, NO_PARAMS, NO_ARGS);
};

// Only referenced by GoComponent;
class GoDataComponent {
public:
};

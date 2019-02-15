#pragma once

#include "ClassMacros.h"

class Config {
public:
	DefineSingleton(Config, 0x4013e9);

	DefineConstMethod(FUBI_RENAME_GetBool, 0x401fe5, bool, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineConstMethod(FUBI_RENAME_GetBool, 0x401ff1, bool, Params(const char* unk1), Args(unk1));
	DefineConstMethod(FUBI_RENAME_GetString, 0x4023a7, gpbstring<char>, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(FUBI_RENAME_GetString, 0x4023da, gpbstring<char>, Params(const char* unk1), Args(unk1));
	DefineConstMethod(FUBI_RENAME_GetFloat, 0x402025, float, Params(const char* unk1, float unk2), Args(unk1, unk2));
	DefineConstMethod(FUBI_RENAME_GetFloat, 0x40203e, float, Params(const char* unk1), Args(unk1));
	DefineConstMethod(FUBI_RENAME_GetInt, 0x402005, int, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineConstMethod(FUBI_RENAME_GetInt, 0x402011, int, Params(const char* unk1), Args(unk1));
};

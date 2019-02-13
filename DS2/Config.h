#pragma once

#include "ClassMacros.h"

class Config {
public:
	DefineSingleton(Config, 0x4013e9);

	/*Config*/ private: /*static*/ Config* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004013e9
	DefineConstMethod(FUBI_RENAME_GetBool, 0x401fe5, bool, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineConstMethod(FUBI_RENAME_GetBool, 0x401ff1, bool, Params(const char* unk1), Args(const char* unk1));
	/*Config*/ public: gpbstring<char> /*__thiscall*/ FUBI_RENAME_GetString(const char* unk1, const char* unk2) const; //0x004023a7
	/*Config*/ public: gpbstring<char> /*__thiscall*/ FUBI_RENAME_GetString(const char* unk1) const; //0x004023da
	DefineConstMethod(FUBI_RENAME_GetFloat, 0x402025, float, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
	DefineConstMethod(FUBI_RENAME_GetFloat, 0x40203e, float, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(FUBI_RENAME_GetInt, 0x402005, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineConstMethod(FUBI_RENAME_GetInt, 0x402011, int, Params(const char* unk1), Args(const char* unk1));
};

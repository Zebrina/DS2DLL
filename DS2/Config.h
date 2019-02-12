#pragma once

#include "ClassMacros.h"

class Config {
public:
	DefineSingleton(Config, 0x4013e9);

	/*Config*/ private: /*static*/ Config* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004013e9
	/*Config*/ public: bool /*__thiscall*/ FUBI_RENAME_GetBool(const char* unk1, bool unk2) const; //0x00401fe5
	/*Config*/ public: bool /*__thiscall*/ FUBI_RENAME_GetBool(const char* unk1) const; //0x00401ff1
	/*Config*/ public: gpbstring<char> /*__thiscall*/ FUBI_RENAME_GetString(const char* unk1, const char* unk2) const; //0x004023a7
	/*Config*/ public: gpbstring<char> /*__thiscall*/ FUBI_RENAME_GetString(const char* unk1) const; //0x004023da
	/*Config*/ public: float /*__thiscall*/ FUBI_RENAME_GetFloat(const char* unk1, float unk2) const; //0x00402025
	/*Config*/ public: float /*__thiscall*/ FUBI_RENAME_GetFloat(const char* unk1) const; //0x0040203e
	/*Config*/ public: int /*__thiscall*/ FUBI_RENAME_GetInt(const char* unk1, int unk2) const; //0x00402005
	/*Config*/ public: int /*__thiscall*/ FUBI_RENAME_GetInt(const char* unk1) const; //0x00402011
};

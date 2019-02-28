#pragma once

class Config {
public:
	DefineSingleton(Config, 0x4013e9);

	DefineConstMethod(FUBI_RENAME_GetBool, 0x401ff1, bool, Params(const char* key), Args(key));
	DefineConstMethod(FUBI_RENAME_GetBool, 0x401fe5, bool, Params(const char* key, bool defaultValue), Args(key, defaultValue));
	DefineConstMethod(FUBI_RENAME_GetInt, 0x402011, int, Params(const char* key), Args(key));
	DefineConstMethod(FUBI_RENAME_GetInt, 0x402005, int, Params(const char* key, int defaultValue), Args(key, defaultValue));
	DefineConstMethod(FUBI_RENAME_GetFloat, 0x40203e, float, Params(const char* key), Args(key));
	DefineConstMethod(FUBI_RENAME_GetFloat, 0x402025, float, Params(const char* key, float defaultValue), Args(key, defaultValue));
	DefineConstMethod(FUBI_RENAME_GetString, 0x4023da, gpbstring<char>, Params(const char* key), Args(key));
	DefineConstMethod(FUBI_RENAME_GetString, 0x4023a7, gpbstring<char>, Params(const char* key, const char* defaultValue), Args(key, defaultValue));
};

#pragma once

class WorldJournal {
public:
	DefineSingleton(WorldJournal, 0x410443);

	DefineConstMethod(GetBool, 0x410006, bool, Params(const char* key, bool defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetBool, 0x41000f, bool, Params(const char* key), Args(key));
	DefineConstMethod(GetInt, 0x40fff4, int, Params(const char* key, int defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetInt, 0x40fffd, int, Params(const char* key), Args(key));
	DefineConstMethod(GetString, 0x410018, const gpbstring<char>&, Params(const char* key, const gpbstring<char>& defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetString, 0x410021, const gpbstring<char>&, Params(const char* key), Args(key));
	DefineConstMethod(GetSessionBool, 0x41003c, bool, Params(const char* key, bool defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetSessionBool, 0x410045, bool, Params(const char* key), Args(key));
	DefineConstMethod(GetSessionInt, 0x41002a, int, Params(const char* key, int defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetSessionInt, 0x410033, int, Params(const char* key), Args(key));
	DefineConstMethod(GetSessionString, 0x41004e, const gpbstring<char>&, Params(const char* key, const gpbstring<char>& defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetSessionString, 0x410057, const gpbstring<char>&, Params(const char* key), Args(key));
	DefineMethod(RCSetBool, 0x8503ad, FuBi::Cookie__*, Params(const char* key, bool value), Args(key, value));
	DefineMethod(RCSetInt, 0x8502b3, FuBi::Cookie__*, Params(const char* key, int value), Args(key, value));
	DefineMethod(RCSetString, 0x84f7ca, FuBi::Cookie__*, Params(const char* key, const gpbstring<char>& value), Args(key, value));
	DefineMethod(RCSetSessionBool, 0x8506bc, FuBi::Cookie__*, Params(const char* key, bool value), Args(key, value));
	DefineMethod(RCSetSessionInt, 0x8505c4, FuBi::Cookie__*, Params(const char* key, int value), Args(key, value));
	DefineMethod(RCSetSessionString, 0x84f8c4, FuBi::Cookie__*, Params(const char* key, const gpbstring<char>& value), Args(key, value));
	DefineMethod(RSSetBool, 0x851108, FuBi::Cookie__*, Params(const char* key, bool value), Args(key, value));
	DefineMethod(RSSetInt, 0x850ff2, FuBi::Cookie__*, Params(const char* key, int value), Args(key, value));
	DefineMethod(RSSetString, 0x8504a7, FuBi::Cookie__*, Params(const char* key, const gpbstring<char>& value), Args(key, value));
	DefineMethod(RSSetSessionBool, 0x85133a, FuBi::Cookie__*, Params(const char* key, bool value), Args(key, value));
	DefineMethod(RSSetSessionInt, 0x851224, FuBi::Cookie__*, Params(const char* key, int value), Args(key, value));
	DefineMethod(RSSetSessionString, 0x8507b4, FuBi::Cookie__*, Params(const char* key, const gpbstring<char>& value), Args(key, value));
	DefineMethod(RemoveEntry, 0x40ffeb, bool, Params(const char* key), Args(key));
	DefineMethod(RCSyncOnMachine, 0x852027, FuBi::Cookie__*, Params(const_mem_ptr unk1, unsigned long unk2), Args(unk1, unk2));

	// Not exported.
	DefineMethod($RemoveEntry, 0x84f17d, bool, Params(const char* key), Args(key));
};

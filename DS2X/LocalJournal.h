#pragma once

class LocalJournal {
public:
	DefineSingleton(LocalJournal, 0x41043d);

	DefineConstMethod(GetBool, 0x40ff76, bool, Params(const char* key, bool defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetBool, 0x40ff7f, bool, Params(const char* key), Args(key));
	DefineConstMethod(GetInt, 0x40ff64, int, Params(const char* key, int defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetInt, 0x40ff6d, int, Params(const char* key), Args(key));
	DefineConstMethod(GetString, 0x40ff88, const gpbstring<char>&, Params(const char* key, const gpbstring<char>& defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetString, 0x40ff91, const gpbstring<char>&, Params(const char* key), Args(key));
	DefineConstMethod(GetSessionBool, 0x40ffc7, bool, Params(const char* key, bool defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetSessionBool, 0x40ffd0, bool, Params(const char* key), Args(key));
	DefineConstMethod(GetSessionInt, 0x40ffb5, int, Params(const char* key, int defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetSessionInt, 0x40ffbe, int, Params(const char* key), Args(key));
	DefineConstMethod(GetSessionString, 0x40ffd9, const gpbstring<char>&, Params(const char* key, const gpbstring<char>& defaultValue), Args(key, defaultValue));
	DefineConstMethod(GetSessionString, 0x40ffe2, const gpbstring<char>&, Params(const char* key), Args(key));
	DefineMethod(AddInt, 0x84ff24, void, Params(const char* key, int value, bool unk3), Args(key, value, unk3));
	DefineMethod(AddInt, 0x40ff26, void, Params(const char* key, int value), Args(key, value));
	DefineMethod(RCAddInt, 0x850c6e, FuBi::Cookie__*, Params(const char* key, int value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RSAddInt, 0x851803, FuBi::Cookie__*, Params(const char* key, int value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RSAddTeamInt, 0x85169d, FuBi::Cookie__*, Params(const char* key, int value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RSAddTeamInt, 0x851b13, FuBi::Cookie__*, Params(const char* key, int value), Args(key, value));
	DefineMethod(SetBool, 0x850044, void, Params(const char* key, bool value, bool unk3), Args(key, value, unk3));
	DefineMethod(SetBool, 0x40ff3a, void, Params(const char* key, bool value), Args(key, value));
	DefineMethod(SetInt, 0x84ff1b, void, Params(const char* key, int value, bool unk3), Args(key, value, unk3));
	DefineMethod(SetInt, 0x40ff12, void, Params(const char* key, int value), Args(key, value));
	DefineMethod(SetString, 0x84f7c1, void, Params(const char* key, const gpbstring<char>& value, bool unk3), Args(key, value, unk3));
	DefineMethod(SetString, 0x40ff50, void, Params(const char* key, const gpbstring<char>& value), Args(key, value));
	DefineMethod(SetSessionBool, 0x40ffa3, void, Params(const char* key, bool value), Args(key, value));
	DefineMethod(SetSessionInt, 0x40ff9a, void, Params(const char* key, int value), Args(key, value));
	DefineMethod(SetSessionString, 0x40ffac, void, Params(const char* key, const gpbstring<char>& value), Args(key, value));
	DefineMethod(RCSetBool, 0x84ff48, FuBi::Cookie__*, Params(const char* key, bool value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RCSetInt, 0x84fe1f, FuBi::Cookie__*, Params(const char* key, int value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RCSetString, 0x84f6c5, FuBi::Cookie__*, Params(const char* key, const gpbstring<char>& value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RSSetBool, 0x850ece, FuBi::Cookie__*, Params(const char* key, bool value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RSSetInt, 0x850b6e, FuBi::Cookie__*, Params(const char* key, int value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RSSetString, 0x8501b3, FuBi::Cookie__*, Params(const char* key, const gpbstring<char>& value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RSSetTeamBool, 0x850d68, FuBi::Cookie__*, Params(const char* key, bool value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RSSetTeamBool, 0x851903, FuBi::Cookie__*, Params(const char* key, bool value), Args(key, value));
	DefineMethod(RSSetTeamInt, 0x850a08, FuBi::Cookie__*, Params(const char* key, int value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RSSetTeamInt, 0x851679, FuBi::Cookie__*, Params(const char* key, int value), Args(key, value));
	DefineMethod(RSSetTeamString, 0x85004d, FuBi::Cookie__*, Params(const char* key, const gpbstring<char>& value, unsigned long unk3), Args(key, value, unk3));
	DefineMethod(RSSetTeamString, 0x850fce, FuBi::Cookie__*, Params(const char* key, const gpbstring<char>& value), Args(key, value));
	DefineMethod(RemoveEntry, 0x40ff09, bool, Params(const char* key), Args(key));

	// Not exported.
	DefineConstMethod($GetBool, 0x84f224, bool, Params(const char* key, int defaultValue), Args(key, defaultValue));
	DefineConstMethod($GetBool, 0x84f24a, bool, Params(const char* key), Args(key));
	DefineConstMethod($GetInt, 0x84f1ed, int, Params(const char* key, int defaultValue), Args(key, defaultValue));
	DefineConstMethod($GetInt, 0x84f213, int, Params(const char* key), Args(key));
	DefineConstMethod($GetString, 0x84f08e, int, Params(const char* key, int defaultValue), Args(key, defaultValue));
	DefineConstMethod($GetString, 0x84f1c5, int, Params(const char* key), Args(key));
	DefineMethod($SetString, 0x84f586, int, Params(const char* key, const gpbstring<char>& value, unsigned long unk3), Args(key, value, unk3));
};

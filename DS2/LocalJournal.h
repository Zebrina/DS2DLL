#pragma once

#include "ClassMacros.h"

class LocalJournal {
public:
	DefineSingleton(LocalJournal, 0x41043d);

	/*LocalJournal*/ public: /*static*/ LocalJournal* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0041043d
	DefineConstMethod(GetBool, 0x40ff76, bool, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineConstMethod(GetBool, 0x40ff7f, bool, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(GetSessionBool, 0x40ffc7, bool, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineConstMethod(GetSessionBool, 0x40ffd0, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(RemoveEntry, 0x40ff09, bool, Params(const char* unk1), Args(const char* unk1));
	/*LocalJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetSessionString(const char* unk1, const gpbstring<char>& unk2) const; //0x0040ffd9
	/*LocalJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetSessionString(const char* unk1) const; //0x0040ffe2
	/*LocalJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetString(const char* unk1, const gpbstring<char>& unk2) const; //0x0040ff88
	/*LocalJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetString(const char* unk1) const; //0x0040ff91
	DefineConstMethod(GetInt, 0x40ff64, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineConstMethod(GetInt, 0x40ff6d, int, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(GetSessionInt, 0x40ffb5, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineConstMethod(GetSessionInt, 0x40ffbe, int, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(RCAddInt, 0x850c6e, FuBi::Cookie__*, Params(const char* unk1, int unk2, unsigned long unk3), Args(const char* unk1, int unk2, unsigned long unk3));
	DefineMethod(RCSetBool, 0x84ff48, FuBi::Cookie__*, Params(const char* unk1, bool unk2, unsigned long unk3), Args(const char* unk1, bool unk2, unsigned long unk3));
	DefineMethod(RCSetInt, 0x84fe1f, FuBi::Cookie__*, Params(const char* unk1, int unk2, unsigned long unk3), Args(const char* unk1, int unk2, unsigned long unk3));
	DefineMethod(RCSetString, 0x84f6c5, FuBi::Cookie__*, Params(const char* unk1, const gpbstring<char>& unk2, unsigned long unk3), Args(const char* unk1, const gpbstring<char>& unk2, unsigned long unk3));
	DefineMethod(RSAddInt, 0x851803, FuBi::Cookie__*, Params(const char* unk1, int unk2, unsigned long unk3), Args(const char* unk1, int unk2, unsigned long unk3));
	DefineMethod(RSAddTeamInt, 0x85169d, FuBi::Cookie__*, Params(const char* unk1, int unk2, unsigned long unk3), Args(const char* unk1, int unk2, unsigned long unk3));
	DefineMethod(RSAddTeamInt, 0x851b13, FuBi::Cookie__*, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(RSSetBool, 0x850ece, FuBi::Cookie__*, Params(const char* unk1, bool unk2, unsigned long unk3), Args(const char* unk1, bool unk2, unsigned long unk3));
	DefineMethod(RSSetInt, 0x850b6e, FuBi::Cookie__*, Params(const char* unk1, int unk2, unsigned long unk3), Args(const char* unk1, int unk2, unsigned long unk3));
	DefineMethod(RSSetString, 0x8501b3, FuBi::Cookie__*, Params(const char* unk1, const gpbstring<char>& unk2, unsigned long unk3), Args(const char* unk1, const gpbstring<char>& unk2, unsigned long unk3));
	DefineMethod(RSSetTeamBool, 0x850d68, FuBi::Cookie__*, Params(const char* unk1, bool unk2, unsigned long unk3), Args(const char* unk1, bool unk2, unsigned long unk3));
	DefineMethod(RSSetTeamBool, 0x851903, FuBi::Cookie__*, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(RSSetTeamInt, 0x850a08, FuBi::Cookie__*, Params(const char* unk1, int unk2, unsigned long unk3), Args(const char* unk1, int unk2, unsigned long unk3));
	DefineMethod(RSSetTeamInt, 0x851679, FuBi::Cookie__*, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(RSSetTeamString, 0x85004d, FuBi::Cookie__*, Params(const char* unk1, const gpbstring<char>& unk2, unsigned long unk3), Args(const char* unk1, const gpbstring<char>& unk2, unsigned long unk3));
	DefineMethod(RSSetTeamString, 0x850fce, FuBi::Cookie__*, Params(const char* unk1, const gpbstring<char>& unk2), Args(const char* unk1, const gpbstring<char>& unk2));
	DefineMethod(AddInt, 0x84ff24, void, Params(const char* unk1, int unk2, bool unk3), Args(const char* unk1, int unk2, bool unk3));
	DefineMethod(AddInt, 0x40ff26, void, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(SetBool, 0x850044, void, Params(const char* unk1, bool unk2, bool unk3), Args(const char* unk1, bool unk2, bool unk3));
	DefineMethod(SetBool, 0x40ff3a, void, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(SetInt, 0x84ff1b, void, Params(const char* unk1, int unk2, bool unk3), Args(const char* unk1, int unk2, bool unk3));
	DefineMethod(SetInt, 0x40ff12, void, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(SetSessionBool, 0x40ffa3, void, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(SetSessionInt, 0x40ff9a, void, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(SetSessionString, 0x40ffac, void, Params(const char* unk1, const gpbstring<char>& unk2), Args(const char* unk1, const gpbstring<char>& unk2));
	DefineMethod(SetString, 0x84f7c1, void, Params(const char* unk1, const gpbstring<char>& unk2, bool unk3), Args(const char* unk1, const gpbstring<char>& unk2, bool unk3));
	DefineMethod(SetString, 0x40ff50, void, Params(const char* unk1, const gpbstring<char>& unk2), Args(const char* unk1, const gpbstring<char>& unk2));
};

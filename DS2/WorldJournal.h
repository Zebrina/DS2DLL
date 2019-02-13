#pragma once

#include "ClassMacros.h"

class WorldJournal {
public:
	DefineSingleton(WorldJournal, 0x410443);

	/*WorldJournal*/ private: /*static*/ WorldJournal* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00410443
	DefineConstMethod(GetBool, 0x410006, bool, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineConstMethod(GetBool, 0x41000f, bool, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(GetSessionBool, 0x41003c, bool, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineConstMethod(GetSessionBool, 0x410045, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(RemoveEntry, 0x40ffeb, bool, Params(const char* unk1), Args(const char* unk1));
	/*WorldJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetSessionString(const char* unk1, const gpbstring<char>& unk2) const; //0x0041004e
	/*WorldJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetSessionString(const char* unk1) const; //0x00410057
	/*WorldJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetString(const char* unk1, const gpbstring<char>& unk2) const; //0x00410018
	/*WorldJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetString(const char* unk1) const; //0x00410021
	DefineConstMethod(GetInt, 0x40fff4, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineConstMethod(GetInt, 0x40fffd, int, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(GetSessionInt, 0x41002a, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineConstMethod(GetSessionInt, 0x410033, int, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(RCSetBool, 0x8503ad, FuBi::Cookie__*, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(RCSetInt, 0x8502b3, FuBi::Cookie__*, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(RCSetSessionBool, 0x8506bc, FuBi::Cookie__*, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(RCSetSessionInt, 0x8505c4, FuBi::Cookie__*, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(RCSetSessionString, 0x84f8c4, FuBi::Cookie__*, Params(const char* unk1, const gpbstring<char>& unk2), Args(const char* unk1, const gpbstring<char>& unk2));
	DefineMethod(RCSetString, 0x84f7ca, FuBi::Cookie__*, Params(const char* unk1, const gpbstring<char>& unk2), Args(const char* unk1, const gpbstring<char>& unk2));
	DefineMethod(RCSyncOnMachine, 0x852027, FuBi::Cookie__*, Params(const_mem_ptr unk1, unsigned long unk2), Args(const_mem_ptr unk1, unsigned long unk2));
	DefineMethod(RSSetBool, 0x851108, FuBi::Cookie__*, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(RSSetInt, 0x850ff2, FuBi::Cookie__*, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(RSSetSessionBool, 0x85133a, FuBi::Cookie__*, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(RSSetSessionInt, 0x851224, FuBi::Cookie__*, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(RSSetSessionString, 0x8507b4, FuBi::Cookie__*, Params(const char* unk1, const gpbstring<char>& unk2), Args(const char* unk1, const gpbstring<char>& unk2));
	DefineMethod(RSSetString, 0x8504a7, FuBi::Cookie__*, Params(const char* unk1, const gpbstring<char>& unk2), Args(const char* unk1, const gpbstring<char>& unk2));
};

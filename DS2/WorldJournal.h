#pragma once

#include "ClassMacros.h"

class WorldJournal {
public:
	DefineSingleton(WorldJournal, 0x410443);

	/*WorldJournal*/ private: /*static*/ WorldJournal* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00410443
	/*WorldJournal*/ public: bool /*__thiscall*/ GetBool(const char* unk1, bool unk2) const; //0x00410006
	/*WorldJournal*/ public: bool /*__thiscall*/ GetBool(const char* unk1) const; //0x0041000f
	/*WorldJournal*/ public: bool /*__thiscall*/ GetSessionBool(const char* unk1, bool unk2) const; //0x0041003c
	/*WorldJournal*/ public: bool /*__thiscall*/ GetSessionBool(const char* unk1) const; //0x00410045
	/*WorldJournal*/ public: bool /*__thiscall*/ RemoveEntry(const char* unk1); //0x0040ffeb
	/*WorldJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetSessionString(const char* unk1, const gpbstring<char>& unk2) const; //0x0041004e
	/*WorldJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetSessionString(const char* unk1) const; //0x00410057
	/*WorldJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetString(const char* unk1, const gpbstring<char>& unk2) const; //0x00410018
	/*WorldJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetString(const char* unk1) const; //0x00410021
	/*WorldJournal*/ public: int /*__thiscall*/ GetInt(const char* unk1, int unk2) const; //0x0040fff4
	/*WorldJournal*/ public: int /*__thiscall*/ GetInt(const char* unk1) const; //0x0040fffd
	/*WorldJournal*/ public: int /*__thiscall*/ GetSessionInt(const char* unk1, int unk2) const; //0x0041002a
	/*WorldJournal*/ public: int /*__thiscall*/ GetSessionInt(const char* unk1) const; //0x00410033
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetBool(const char* unk1, bool unk2); //0x008503ad
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetInt(const char* unk1, int unk2); //0x008502b3
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetSessionBool(const char* unk1, bool unk2); //0x008506bc
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetSessionInt(const char* unk1, int unk2); //0x008505c4
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetSessionString(const char* unk1, const gpbstring<char>& unk2); //0x0084f8c4
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetString(const char* unk1, const gpbstring<char>& unk2); //0x0084f7ca
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCSyncOnMachine(const_mem_ptr unk1, unsigned long unk2); //0x00852027
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetBool(const char* unk1, bool unk2); //0x00851108
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetInt(const char* unk1, int unk2); //0x00850ff2
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetSessionBool(const char* unk1, bool unk2); //0x0085133a
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetSessionInt(const char* unk1, int unk2); //0x00851224
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetSessionString(const char* unk1, const gpbstring<char>& unk2); //0x008507b4
	/*WorldJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetString(const char* unk1, const gpbstring<char>& unk2); //0x008504a7
};

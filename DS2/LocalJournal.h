#pragma once

#include "ClassMacros.h"

class LocalJournal {
public:
	DefineSingleton(LocalJournal, 0x41043d);

	/*LocalJournal*/ public: /*static*/ LocalJournal* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0041043d
	/*LocalJournal*/ public: bool /*__thiscall*/ GetBool(const char* unk1, bool unk2) const; //0x0040ff76
	/*LocalJournal*/ public: bool /*__thiscall*/ GetBool(const char* unk1) const; //0x0040ff7f
	/*LocalJournal*/ public: bool /*__thiscall*/ GetSessionBool(const char* unk1, bool unk2) const; //0x0040ffc7
	/*LocalJournal*/ public: bool /*__thiscall*/ GetSessionBool(const char* unk1) const; //0x0040ffd0
	/*LocalJournal*/ public: bool /*__thiscall*/ RemoveEntry(const char* unk1); //0x0040ff09
	/*LocalJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetSessionString(const char* unk1, const gpbstring<char>& unk2) const; //0x0040ffd9
	/*LocalJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetSessionString(const char* unk1) const; //0x0040ffe2
	/*LocalJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetString(const char* unk1, const gpbstring<char>& unk2) const; //0x0040ff88
	/*LocalJournal*/ public: const gpbstring<char>& /*__thiscall*/ GetString(const char* unk1) const; //0x0040ff91
	/*LocalJournal*/ public: int /*__thiscall*/ GetInt(const char* unk1, int unk2) const; //0x0040ff64
	/*LocalJournal*/ public: int /*__thiscall*/ GetInt(const char* unk1) const; //0x0040ff6d
	/*LocalJournal*/ public: int /*__thiscall*/ GetSessionInt(const char* unk1, int unk2) const; //0x0040ffb5
	/*LocalJournal*/ public: int /*__thiscall*/ GetSessionInt(const char* unk1) const; //0x0040ffbe
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCAddInt(const char* unk1, int unk2, unsigned long unk3); //0x00850c6e
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetBool(const char* unk1, bool unk2, unsigned long unk3); //0x0084ff48
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetInt(const char* unk1, int unk2, unsigned long unk3); //0x0084fe1f
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetString(const char* unk1, const gpbstring<char>& unk2, unsigned long unk3); //0x0084f6c5
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSAddInt(const char* unk1, int unk2, unsigned long unk3); //0x00851803
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSAddTeamInt(const char* unk1, int unk2, unsigned long unk3); //0x0085169d
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSAddTeamInt(const char* unk1, int unk2); //0x00851b13
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetBool(const char* unk1, bool unk2, unsigned long unk3); //0x00850ece
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetInt(const char* unk1, int unk2, unsigned long unk3); //0x00850b6e
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetString(const char* unk1, const gpbstring<char>& unk2, unsigned long unk3); //0x008501b3
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTeamBool(const char* unk1, bool unk2, unsigned long unk3); //0x00850d68
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTeamBool(const char* unk1, bool unk2); //0x00851903
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTeamInt(const char* unk1, int unk2, unsigned long unk3); //0x00850a08
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTeamInt(const char* unk1, int unk2); //0x00851679
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTeamString(const char* unk1, const gpbstring<char>& unk2, unsigned long unk3); //0x0085004d
	/*LocalJournal*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTeamString(const char* unk1, const gpbstring<char>& unk2); //0x00850fce
	/*LocalJournal*/ public: void /*__thiscall*/ AddInt(const char* unk1, int unk2, bool unk3); //0x0084ff24
	/*LocalJournal*/ public: void /*__thiscall*/ AddInt(const char* unk1, int unk2); //0x0040ff26
	/*LocalJournal*/ public: void /*__thiscall*/ SetBool(const char* unk1, bool unk2, bool unk3); //0x00850044
	/*LocalJournal*/ public: void /*__thiscall*/ SetBool(const char* unk1, bool unk2); //0x0040ff3a
	/*LocalJournal*/ public: void /*__thiscall*/ SetInt(const char* unk1, int unk2, bool unk3); //0x0084ff1b
	/*LocalJournal*/ public: void /*__thiscall*/ SetInt(const char* unk1, int unk2); //0x0040ff12
	/*LocalJournal*/ public: void /*__thiscall*/ SetSessionBool(const char* unk1, bool unk2); //0x0040ffa3
	/*LocalJournal*/ public: void /*__thiscall*/ SetSessionInt(const char* unk1, int unk2); //0x0040ff9a
	/*LocalJournal*/ public: void /*__thiscall*/ SetSessionString(const char* unk1, const gpbstring<char>& unk2); //0x0040ffac
	/*LocalJournal*/ public: void /*__thiscall*/ SetString(const char* unk1, const gpbstring<char>& unk2, bool unk3); //0x0084f7c1
	/*LocalJournal*/ public: void /*__thiscall*/ SetString(const char* unk1, const gpbstring<char>& unk2); //0x0040ff50
};

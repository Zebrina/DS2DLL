#pragma once

#include "Go.h"
#include "Scid.h"

struct Goid_ {
	/*Goid_*/ private: /*static*/ const Goid_* /*__cdecl*/ GetAnyGoid(); //0x00502cf4
	/*Goid_*/ private: /*static*/ const Goid_* /*__cdecl*/ GetInvalidGoid(); //0x00502cee
	/*Goid_*/ private: /*static*/ const Goid_* /*__cdecl*/ GetNoneGoid(); //0x00502cfa
	/*Goid_*/ private: bool /*__thiscall*/ IsValid() const; //0x00502ccb
	/*Goid_*/ private: bool /*__thiscall*/ IsValidMp() const; //0x00502cd6
	/*Goid_*/ private: Go* /*__thiscall*/ GetGo() const; //0x00502cde
	/*Goid_*/ private: const Scid_* /*__thiscall*/ GetScid() const; //0x00502ce6
} typedef Goid;

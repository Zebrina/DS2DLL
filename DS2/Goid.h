#pragma once

#include "Go.h"
#include "Scid.h"

struct Goid_ {
	/*Goid_*/ private: /*static*/ const Goid_* /*__cdecl*/ GetAnyGoid(); //0x00502cf4
	/*Goid_*/ private: /*static*/ const Goid_* /*__cdecl*/ GetInvalidGoid(); //0x00502cee
	/*Goid_*/ private: /*static*/ const Goid_* /*__cdecl*/ GetNoneGoid(); //0x00502cfa
	DefineConstMethod(IsValid, 0x502ccb, bool, Params(), Args());
	DefineConstMethod(IsValidMp, 0x502cd6, bool, Params(), Args());
	DefineConstMethod(GetGo, 0x502cde, Go*, Params(), Args());
	/*Goid_*/ private: const Scid_* /*__thiscall*/ GetScid() const; //0x00502ce6
} typedef Goid;

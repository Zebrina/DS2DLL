#pragma once

struct Scid_ {
	/*Scid_*/ private: /*static*/ const Scid_* /*__cdecl*/ GetInvalidScid(); //0x00502d26
	/*Scid_*/ private: /*static*/ const Scid_* /*__cdecl*/ GetSpawnedScid(); //0x00502d2c
	DefineConstMethod(IsInstance, 0x502d0b, bool, Params(), Args());
	DefineConstMethod(IsValid, 0x502d00, bool, Params(), Args());
	DefineConstMethod(GetGo, 0x502d1e, Go*, Params(), Args());
	/*Scid_*/ private: const Goid_* /*__thiscall*/ GetGoid() const; //0x00502d16
} typedef ScId;

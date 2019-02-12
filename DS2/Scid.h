#pragma once

struct Scid_ {
	/*Scid_*/ private: /*static*/ const Scid_* /*__cdecl*/ GetInvalidScid(); //0x00502d26
	/*Scid_*/ private: /*static*/ const Scid_* /*__cdecl*/ GetSpawnedScid(); //0x00502d2c
	/*Scid_*/ private: bool /*__thiscall*/ IsInstance() const; //0x00502d0b
	/*Scid_*/ private: bool /*__thiscall*/ IsValid() const; //0x00502d00
	/*Scid_*/ private: Go* /*__thiscall*/ GetGo() const; //0x00502d1e
	/*Scid_*/ private: const Goid_* /*__thiscall*/ GetGoid() const; //0x00502d16
} typedef ScId;

#pragma once

struct DecalId_ {
	/*DecalId_*/ private: /*static*/ const DecalId_* /*__cdecl*/ GetInvalidDecalId(); //0x0040839f
	DefineConstMethod(GetActive, 0x7d6cef, bool, Params(), Args());
	DefineConstMethod(IsValid, 0x40838c, bool, Params(), Args());
	/*DecalId_*/ private: unsigned char /*__thiscall*/ GetAlpha() const; //0x007d6d04
	DefineMethod(SetActive, 0x408397, void, Params(), Args());
	DefineMethod(SetActive, 0x7d6d1d, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetAlpha, 0x7d6d38, void, Params(unsigned char unk1), Args(unsigned char unk1));
} typedef DecalId;

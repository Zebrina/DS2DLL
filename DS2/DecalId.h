#pragma once

struct DecalId_ {
	/*DecalId_*/ private: /*static*/ const DecalId_* /*__cdecl*/ GetInvalidDecalId(); //0x0040839f
	/*DecalId_*/ private: bool /*__thiscall*/ GetActive() const; //0x007d6cef
	/*DecalId_*/ private: bool /*__thiscall*/ IsValid() const; //0x0040838c
	/*DecalId_*/ private: unsigned char /*__thiscall*/ GetAlpha() const; //0x007d6d04
	/*DecalId_*/ private: void /*__thiscall*/ SetActive(); //0x00408397
	/*DecalId_*/ private: void /*__thiscall*/ SetActive(bool unk1); //0x007d6d1d
	/*DecalId_*/ private: void /*__thiscall*/ SetAlpha(unsigned char unk1); //0x007d6d38
} typedef DecalId;

#pragma once

struct LightId_ {
	/*LightId_*/ private: /*static*/ const LightId_* /*__cdecl*/ GetInvalidLightId(); //0x00408376
	/*LightId_*/ private: bool /*__thiscall*/ GetActive() const; //0x007d6b40
	/*LightId_*/ private: bool /*__thiscall*/ IsValid() const; //0x0040836b
	/*LightId_*/ private: float /*__thiscall*/ GetIntensity() const; //0x007d6b65
	/*LightId_*/ private: unsigned long /*__thiscall*/ GetColor() const; //0x007d6b1b
	/*LightId_*/ private: void /*__thiscall*/ GetPosition(SiegePos& unk1) const; //0x007d6b8a
	/*LightId_*/ private: void /*__thiscall*/ SetActive(bool unk1); //0x007d6bfc
	/*LightId_*/ private: void /*__thiscall*/ SetColor(unsigned long unk1); //0x007d6bc3
	/*LightId_*/ private: void /*__thiscall*/ SetIntensity(float unk1); //0x007d6c35
} typedef LightId;

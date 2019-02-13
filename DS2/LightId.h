#pragma once

struct LightId_ {
	/*LightId_*/ private: /*static*/ const LightId_* /*__cdecl*/ GetInvalidLightId(); //0x00408376
	DefineConstMethod(GetActive, 0x7d6b40, bool, Params(), Args());
	DefineConstMethod(IsValid, 0x40836b, bool, Params(), Args());
	DefineConstMethod(GetIntensity, 0x7d6b65, float, Params(), Args());
	/*LightId_*/ private: unsigned long /*__thiscall*/ GetColor() const; //0x007d6b1b
	DefineConstMethod(GetPosition, 0x7d6b8a, void, Params(SiegePos& unk1), Args(SiegePos& unk1));
	DefineMethod(SetActive, 0x7d6bfc, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetColor, 0x7d6bc3, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetIntensity, 0x7d6c35, void, Params(float unk1), Args(float unk1));
} typedef LightId;

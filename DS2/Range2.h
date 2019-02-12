#pragma once

struct range_2 {
	/*range_2*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00502af9
	/*range_2*/ public: bool /*__thiscall*/ IsWithin(float unk1) const; //0x00502b23
	/*range_2*/ public: float /*__thiscall*/ FUBI_RENAME_GetMax() const; //0x00502b00
	/*range_2*/ public: float /*__thiscall*/ FUBI_RENAME_GetMin() const; //0x00502afd
	/*range_2*/ public: float /*__thiscall*/ Length() const; //0x00502b1d
	/*range_2*/ public: void /*__thiscall*/ FUBI_RENAME_SetMax(float unk1); //0x00502b10
	/*range_2*/ public: void /*__thiscall*/ FUBI_RENAME_SetMin(float unk1); //0x00502b04
} typedef Range2;

/*FuBi::Traits<range_2>*/ /*static*/ bool /*__cdecl*/ FromString(const char* unk1, range_2& unk2); //0x009d5740
/*FuBi::Traits<range_2>*/ /*static*/ void /*__cdecl*/ FUBI_GetHeaderSpec(FuBi::ClassHeaderSpec& unk1); //0x00503e92
/*FuBi::Traits<range_2>*/ /*static*/ void /*__cdecl*/ ToString(gpbstring<char>& unk1, const range_2& unk2, FuBi::eXfer unk3); //0x009d5716

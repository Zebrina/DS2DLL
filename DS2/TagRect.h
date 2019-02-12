#pragma once

struct tagRECT {
	float left;
	float top;
	float right;
	float bottom;
} typedef TagRect;

/*FuBi::Traits<tagRECT>*/ /*static*/ bool /*__cdecl*/ FromString(const char* unk1, tagRECT& unk2); //0x009d534f
/*FuBi::Traits<tagRECT>*/ /*static*/ void /*__cdecl*/ FUBI_GetHeaderSpec(FuBi::ClassHeaderSpec& unk1); //0x00503daf
/*FuBi::Traits<tagRECT>*/ /*static*/ void /*__cdecl*/ ToString(gpbstring<char>& unk1, const tagRECT& unk2, FuBi::eXfer unk3); //0x009d530e
/*FuBi::Traits<tagRECT>*/ long /*__thiscall*/ Getbottom() const; //0x00502c21
/*FuBi::Traits<tagRECT>*/ long /*__thiscall*/ Getleft() const; //0x00502bf0
/*FuBi::Traits<tagRECT>*/ long /*__thiscall*/ Getright() const; //0x00502c10
/*FuBi::Traits<tagRECT>*/ long /*__thiscall*/ Gettop() const; //0x00502bff
/*FuBi::Traits<tagRECT>*/ void /*__thiscall*/ Setbottom(long unk1); //0x00502c25
/*FuBi::Traits<tagRECT>*/ void /*__thiscall*/ Setleft(long unk1); //0x00502bf3
/*FuBi::Traits<tagRECT>*/ void /*__thiscall*/ Setright(long unk1); //0x00502c14
/*FuBi::Traits<tagRECT>*/ void /*__thiscall*/ Settop(long unk1); //0x00502c03

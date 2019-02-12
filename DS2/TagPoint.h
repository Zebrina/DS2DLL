#pragma once

struct tagPOINT {

} typedef TagPoint;

/*FuBi::Traits<tagPOINT>*/ /*static*/ bool /*__cdecl*/ FromString(const char* unk1, tagPOINT& unk2); //0x009d528d
/*FuBi::Traits<tagPOINT>*/ /*static*/ void /*__cdecl*/ FUBI_GetHeaderSpec(FuBi::ClassHeaderSpec& unk1); //0x00503d59
/*FuBi::Traits<tagPOINT>*/ /*static*/ void /*__cdecl*/ ToString(gpbstring<char>& unk1, const tagPOINT& unk2, FuBi::eXfer unk3); //0x009d5258
/*FuBi::Traits<tagPOINT>*/ long /*__thiscall*/ Getx() const; //0x00502b6c
/*FuBi::Traits<tagPOINT>*/ long /*__thiscall*/ Gety() const; //0x00502b7b
/*FuBi::Traits<tagPOINT>*/ void /*__thiscall*/ Setx(long unk1); //0x00502b6f
/*FuBi::Traits<tagPOINT>*/ void /*__thiscall*/ Sety(long unk1); //0x00502b7f

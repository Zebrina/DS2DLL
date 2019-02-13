#pragma once

struct tagSIZE {

} typedef TagSize;

DefineTemplateStaticMethod(FuBi::Traits<tagSIZE>, FromString, 0x9d52e8, bool, Params(const char* unk1, tagSIZE& unk2), Args(const char* unk1, tagSIZE& unk2));
DefineTemplateStaticMethod(FuBi::Traits<tagSIZE>, FUBI_GetHeaderSpec, 0x503d84, void, Params(FuBi::ClassHeaderSpec& unk1), Args(FuBi::ClassHeaderSpec& unk1));
DefineTemplateStaticMethod(FuBi::Traits<tagSIZE>, ToString, 0x9d52b3, void, Params(gpbstring<char>& unk1, const tagSIZE& unk2, FuBi::eXfer unk3), Args(gpbstring<char>& unk1, const tagSIZE& unk2, FuBi::eXfer unk3));
DefineTemplateConstMethod(FuBi::Traits<tagSIZE>, Getcx, 0x502bae, long, Params(), Args());
DefineTemplateConstMethod(FuBi::Traits<tagSIZE>, Getcy, 0x502bbd, long, Params(), Args());
DefineTemplateMethod(FuBi::Traits<tagSIZE>, Setcx, 0x502bb1, void, Params(long unk1), Args(long unk1));
DefineTemplateMethod(FuBi::Traits<tagSIZE>, Setcy, 0x502bc1, void, Params(long unk1), Args(long unk1));

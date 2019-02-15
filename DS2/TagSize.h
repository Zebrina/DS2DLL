#pragma once

#include "ClassMacros.h"

struct tagSIZE {

} typedef TagSize;

DefineTemplateStaticMethod(FuBi::Traits<tagSIZE>, FromString, 0x9d52e8, bool, Params(const char* unk1, tagSIZE& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<tagSIZE>, FUBI_GetHeaderSpec, 0x503d84, void, Params(FuBi::ClassHeaderSpec& unk1), Args(unk1));
DefineTemplateStaticMethod(FuBi::Traits<tagSIZE>, ToString, 0x9d52b3, void, Params(gpbstring<char>& unk1, const tagSIZE& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));
DefineTemplateConstMethod(FuBi::Traits<tagSIZE>, Getcx, 0x502bae, long, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<tagSIZE>, Getcy, 0x502bbd, long, NO_PARAMS, NO_ARGS);
DefineTemplateMethod(FuBi::Traits<tagSIZE>, Setcx, 0x502bb1, void, Params(long unk1), Args(unk1));
DefineTemplateMethod(FuBi::Traits<tagSIZE>, Setcy, 0x502bc1, void, Params(long unk1), Args(unk1));

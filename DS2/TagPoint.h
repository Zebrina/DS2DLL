#pragma once

#include "FuBi.h"

#include "ClassMacros.h"

struct tagPOINT {

} typedef TagPoint;

DefineTemplateStaticMethod(FuBi::Traits<tagPOINT>, FromString, 0x9d528d, bool, Params(const char* str, tagPOINT& valueOut), Args(str, valueOut));
DefineTemplateStaticMethod(FuBi::Traits<tagPOINT>, FUBI_GetHeaderSpec, 0x503d59, void, Params(FuBi::ClassHeaderSpec& headerSpec), Args(headerSpec));
DefineTemplateStaticMethod(FuBi::Traits<tagPOINT>, ToString, 0x9d5258, void, Params(gpbstring<char>& strOut, const tagPOINT& value, FuBi::eXfer unk3), Args(strOut, value, unk3));
DefineTemplateConstMethod(FuBi::Traits<tagPOINT>, Getx, 0x502b6c, long, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<tagPOINT>, Gety, 0x502b7b, long, NO_PARAMS, NO_ARGS);
DefineTemplateMethod(FuBi::Traits<tagPOINT>, Setx, 0x502b6f, void, Params(long x), Args(x));
DefineTemplateMethod(FuBi::Traits<tagPOINT>, Sety, 0x502b7f, void, Params(long y), Args(y));

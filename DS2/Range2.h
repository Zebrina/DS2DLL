#pragma once

#include "ClassMacros.h"

struct range_2 {
	DefineStaticMethod(FUBI_PodGetSize, 0x502af9, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsWithin, 0x502b23, bool, Params(float unk1), Args(unk1));
	DefineConstMethod(FUBI_RENAME_GetMax, 0x502b00, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_GetMin, 0x502afd, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Length, 0x502b1d, float, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_SetMax, 0x502b10, void, Params(float unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_SetMin, 0x502b04, void, Params(float unk1), Args(unk1));
} typedef Range2;

DefineTemplateStaticMethod(FuBi::Traits<range_2>, FromString, 0x9d5740, bool, Params(const char* unk1, range_2& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<range_2>, FUBI_GetHeaderSpec, 0x503e92, void, Params(FuBi::ClassHeaderSpec& unk1), Args(unk1));
DefineTemplateStaticMethod(FuBi::Traits<range_2>, ToString, 0x9d5716, void, Params(gpbstring<char>& unk1, const range_2& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));

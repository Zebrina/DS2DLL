#pragma once

#include "FuBi.h"

struct Range {
	int min_;
	int max_;
};

STATIC_ASSERT_SIZEOF(Range, 0x8);
STATIC_ASSERT_OFFSETOF(Range, max_, 0x4);

DefineTemplateConstMethod(FuBi::Traits<Range>, GetMinValue, 0x408dd7, int, NO_PARAMS, NO_ARGS);
DefineTemplateMethod(FuBi::Traits<Range>, SetMinValue, 0x408ddb, void, Params(int newValue), Args(newValue));
DefineTemplateConstMethod(FuBi::Traits<Range>, GetMaxValue, 0x408de8, int, NO_PARAMS, NO_ARGS);
DefineTemplateMethod(FuBi::Traits<Range>, SetMaxValue, 0x408dec, void, Params(int newValue), Args(newValue));

struct range_2 {
	DefineStaticMethod(FUBI_PodGetSize, 0x502af9, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsWithin, 0x502b23, bool, Params(float value), Args(value));
	DefineConstMethod(GetMin, 0x502afd, float, NO_PARAMS, NO_ARGS); // Exported as: FUBI_RENAME_GetMin
	DefineMethod(SetMin, 0x502b04, void, Params(float newValue), Args(newValue)); // Exported as: FUBI_RENAME_SetMin
	DefineConstMethod(GetMax, 0x502b00, float, NO_PARAMS, NO_ARGS); // Exported as: FUBI_RENAME_GetMax
	DefineMethod(SetMax, 0x502b10, void, Params(float newValue), Args(newValue)); // Exported as: FUBI_RENAME_SetMax
	DefineConstMethod(Length, 0x502b1d, float, NO_PARAMS, NO_ARGS);

  float min_;
  float max_;
} typedef Range2;

DefineTemplateStaticMethod(FuBi::Traits<range_2>, FUBI_GetHeaderSpec, 0x503e92, void, Params(FuBi::ClassHeaderSpec& unk1), Args(unk1));
DefineTemplateStaticMethod(FuBi::Traits<range_2>, FromString, 0x9d5740, bool, Params(const char* unk1, range_2& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<range_2>, ToString, 0x9d5716, void, Params(gpbstring<char>& unk1, const range_2& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));

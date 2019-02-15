#pragma once

#include "ClassMacros.h"

struct Range {

};

DefineTemplateConstMethod(FuBi::Traits<Range>, GetMaxValue, 0x408de8, int, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<Range>, GetMinValue, 0x408dd7, int, NO_PARAMS, NO_ARGS);
DefineTemplateMethod(FuBi::Traits<Range>, SetMaxValue, 0x408dec, void, Params(int unk1), Args(unk1));
DefineTemplateMethod(FuBi::Traits<Range>, SetMinValue, 0x408ddb, void, Params(int unk1), Args(unk1));

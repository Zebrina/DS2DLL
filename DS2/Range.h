#pragma once

struct Range {

};

DefineTemplateConstMethod(FuBi::Traits<Range>, GetMaxValue, 0x408de8, int, Params(), Args());
DefineTemplateConstMethod(FuBi::Traits<Range>, GetMinValue, 0x408dd7, int, Params(), Args());
DefineTemplateMethod(FuBi::Traits<Range>, SetMaxValue, 0x408dec, void, Params(int unk1), Args(int unk1));
DefineTemplateMethod(FuBi::Traits<Range>, SetMinValue, 0x408ddb, void, Params(int unk1), Args(int unk1));

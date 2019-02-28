#pragma once

#include "FuBi.h"

struct GRect : tagRECT {

};

STATIC_ASSERT_SIZEOF(GRect, 0x10);

DefineTemplateStaticMethod(FuBi::Traits<GRect>, FUBI_Inheritance, 0x502c38, int, Params(tagRECT* unk1), Args(unk1));

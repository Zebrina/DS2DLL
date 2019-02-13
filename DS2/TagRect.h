#pragma once

#include "FuBi.h"

#include "DebugMacros.h"

struct tagRECT {
	float left;
	float top;
	float right;
	float bottom;
} typedef TagRect;

ASSERT_SIZEOF(tagRECT, 0x10);

template <>
bool FuBi::Traits<tagRECT>::FromString(const char* unk1, tagRECT& unk2) {
	return ((FubI::Traits<tagRECT>::FromStringTemplate))(this, unk1, unk2);
	DefineTemplateStaticMethod(FuBi::Traits<tagRECT>, FromString, 0x9d534f, bool, Params(const char* unk1, tagRECT& unk2), Args(const char* unk1, tagRECT& unk2));
}

DefineTemplateStaticMethod(FuBi::Traits<tagRECT>, FUBI_GetHeaderSpec, 0x503daf, void, Params(FuBi::ClassHeaderSpec& unk1), Args(FuBi::ClassHeaderSpec& unk1));
DefineTemplateStaticMethod(FuBi::Traits<tagRECT>, ToString, 0x9d530e, void, Params(gpbstring<char>& unk1, const tagRECT& unk2, FuBi::eXfer unk3), Args(gpbstring<char>& unk1, const tagRECT& unk2, FuBi::eXfer unk3));
DefineTemplateConstMethod(FuBi::Traits<tagRECT>, Getbottom, 0x502c21, long, Params(), Args());
DefineTemplateConstMethod(FuBi::Traits<tagRECT>, Getleft, 0x502bf0, long, Params(), Args());
DefineTemplateConstMethod(FuBi::Traits<tagRECT>, Getright, 0x502c10, long, Params(), Args());
DefineTemplateConstMethod(FuBi::Traits<tagRECT>, Gettop, 0x502bff, long, Params(), Args());
DefineTemplateMethod(FuBi::Traits<tagRECT>, Setbottom, 0x502c25, void, Params(long unk1), Args(long unk1));
DefineTemplateMethod(FuBi::Traits<tagRECT>, Setleft, 0x502bf3, void, Params(long unk1), Args(long unk1));
DefineTemplateMethod(FuBi::Traits<tagRECT>, Setright, 0x502c14, void, Params(long unk1), Args(long unk1));
DefineTemplateMethod(FuBi::Traits<tagRECT>, Settop, 0x502c03, void, Params(long unk1), Args(long unk1));

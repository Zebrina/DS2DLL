#pragma once

struct Point2 {
	/*Point2*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00502623
	DefineConstMethod(FUBI_RENAME_IsZero, 0x503552, bool, Params(), Args());
	DefineConstMethod(FUBI_RENAME_GetX, 0x502627, float, Params(), Args());
	DefineConstMethod(FUBI_RENAME_GetY, 0x50262a, float, Params(), Args());
	DefineMethod(FUBI_RENAME_SetX, 0x50262e, void, Params(float unk1), Args(float unk1));
	DefineMethod(FUBI_RENAME_SetY, 0x50263a, void, Params(float unk1), Args(float unk1));
};

DefineTemplateStaticMethod(FuBi::Traits<Point2>, FromString, 0x9d5606, bool, Params(const char* unk1, Point2& unk2), Args(const char* unk1, Point2& unk2));
DefineTemplateStaticMethod(FuBi::Traits<Point2>, ToString, 0x9d55dc, void, Params(gpbstring<char>& unk1, const Point2& unk2, FuBi::eXfer unk3), Args(gpbstring<char>& unk1, const Point2& unk2, FuBi::eXfer unk3));

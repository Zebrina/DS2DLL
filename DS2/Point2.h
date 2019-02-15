#pragma once

struct Point2 {
	DefineStaticMethod(FUBI_PodGetSize, 0x502623, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_IsZero, 0x503552, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_GetX, 0x502627, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_GetY, 0x50262a, float, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_SetX, 0x50262e, void, Params(float unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_SetY, 0x50263a, void, Params(float unk1), Args(unk1));
};

DefineTemplateStaticMethod(FuBi::Traits<Point2>, FromString, 0x9d5606, bool, Params(const char* unk1, Point2& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<Point2>, ToString, 0x9d55dc, void, Params(gpbstring<char>& unk1, const Point2& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));

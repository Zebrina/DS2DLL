#pragma once

#include "ClassMacros.h"

struct vector_3 {
	DefineStaticMethod(FUBI_PodGetSize, 0x50241e, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_IsZero, 0x5033c9, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_GetX, 0x502422, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_GetY, 0x502425, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_GetZ, 0x502429, float, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_RotateX, 0x5033d9, void, Params(float unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_RotateY, 0x5033ec, void, Params(float unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_RotateZ, 0x5033ff, void, Params(float unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_SetX, 0x50242d, void, Params(float unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_SetY, 0x502439, void, Params(float unk1), Args(unk1));
	DefineMethod(FUBI_RENAME_SetZ, 0x502446, void, Params(float unk1), Args(unk1));
} typedef Vector3;

DefineTemplateStaticMethod(FuBi::Traits<vector_3>, FromString, 0x9d5481, bool, Params(const char* unk1, vector_3& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<vector_3>, FUBI_GetHeaderSpec, 0x503e00, void, Params(FuBi::ClassHeaderSpec& unk1), Args(unk1));
DefineTemplateStaticMethod(FuBi::Traits<vector_3>, ToString, 0x9d544c, void, Params(gpbstring<char>& unk1, const vector_3& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));

#pragma once

#include "FuBi.h"

struct vector_3 {
	DefineStaticMethod(FUBI_PodGetSize, 0x50241e, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsZero, 0x5033c9, bool, NO_PARAMS, NO_ARGS); // Exported as: FUBI_RENAME_IsZero
	DefineConstMethod(GetX, 0x502422, float, NO_PARAMS, NO_ARGS); // Exported as: FUBI_RENAME_GetX
	DefineMethod(SetX, 0x50242d, void, Params(float unk1), Args(unk1)); // Exported as: FUBI_RENAME_SetX
	DefineMethod(RotateX, 0x5033d9, void, Params(float unk1), Args(unk1)); // Exported as: FUBI_RENAME_RotateX
	DefineConstMethod(GetY, 0x502425, float, NO_PARAMS, NO_ARGS); // Exported as: FUBI_RENAME_GetY
	DefineMethod(SetY, 0x502439, void, Params(float unk1), Args(unk1)); // Exported as: FUBI_RENAME_SetY
	DefineMethod(RotateY, 0x5033ec, void, Params(float unk1), Args(unk1)); // Exported as: FUBI_RENAME_RotateY
	DefineConstMethod(GetZ, 0x502429, float, NO_PARAMS, NO_ARGS); // Exported as: FUBI_RENAME_GetZ
	DefineMethod(SetZ, 0x502446, void, Params(float unk1), Args(unk1)); // Exported as: FUBI_RENAME_SetZ
	DefineMethod(RotateZ, 0x5033ff, void, Params(float unk1), Args(unk1)); // Exported as: FUBI_RENAME_RotateZ

	float x;
	float y;
	float z;
} typedef Vector3;

STATIC_ASSERT_SIZEOF(vector_3, 0xc);
STATIC_ASSERT_OFFSETOF(vector_3, z, 0x8);

DefineTemplateStaticMethod(FuBi::Traits<vector_3>, FromString, 0x9d5481, bool, Params(const char* unk1, vector_3& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<vector_3>, FUBI_GetHeaderSpec, 0x503e00, void, Params(FuBi::ClassHeaderSpec& unk1), Args(unk1));
DefineTemplateStaticMethod(FuBi::Traits<vector_3>, ToString, 0x9d544c, void, Params(gpbstring<char>& unk1, const vector_3& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));

struct Vector3Coll {
	DefineConstMethod(Empty, 0x503481, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Size, 0x503475, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Get, 0x50348c, const vector_3&, Params(int index), Args(index));
	DefineMethod(Get, 0x50349e, vector_3&, Params(int index), Args(index));
	DefineMethod(Set, 0x5034b0, void, Params(int index, const vector_3& newItem), Args(index, newItem));
	DefineMethod(Append, 0x503c34, void, Params(const vector_3& newItem), Args(newItem));
};

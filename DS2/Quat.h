#pragma once

#include "FuBi.h"
#include "GPBString.h"
#include "Vector3.h"

struct Quat {
	/*Quat*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00502453
	DefineConstMethod(GetIsValid, 0x503412, bool, Params(), Args());
	DefineConstMethod(FUBI_RENAME_GetW, 0x502477, float, Params(), Args());
	DefineConstMethod(FUBI_RENAME_GetX, 0x50247b, float, Params(), Args());
	DefineConstMethod(FUBI_RENAME_GetY, 0x50247e, float, Params(), Args());
	DefineConstMethod(FUBI_RENAME_GetZ, 0x502482, float, Params(), Args());
	DefineMethod(FUBI_RENAME_Rotate, 0x503a18, void, Params(const vector_3& unk1, float unk2), Args(const vector_3& unk1, float unk2));
	DefineMethod(FUBI_RENAME_RotateX, 0x50343c, void, Params(float unk1), Args(float unk1));
	DefineMethod(FUBI_RENAME_RotateY, 0x50344f, void, Params(float unk1), Args(float unk1));
	DefineMethod(FUBI_RENAME_RotateZ, 0x503462, void, Params(float unk1), Args(float unk1));
	DefineMethod(FUBI_RENAME_SetW, 0x502486, void, Params(float unk1), Args(float unk1));
	DefineMethod(FUBI_RENAME_SetX, 0x502493, void, Params(float unk1), Args(float unk1));
	DefineMethod(FUBI_RENAME_SetY, 0x50249f, void, Params(float unk1), Args(float unk1));
	DefineMethod(FUBI_RENAME_SetZ, 0x5024ac, void, Params(float unk1), Args(float unk1));
};

DefineTemplateStaticMethod(FuBi::Traits<Quat>, FromString, 0x9d5525, bool, Params(const char* unk1, Quat& unk2), Args(const char* unk1, Quat& unk2));
/*FuBi::Traits<Quat>*/ /*static*/ const Quat& /*__cdecl*/ GetIDENTITY(); //0x00502c85
/*FuBi::Traits<Quat>*/ /*static*/ const Quat& /*__cdecl*/ GetINDEFINITE(); //0x00502c91
/*FuBi::Traits<Quat>*/ /*static*/ const Quat& /*__cdecl*/ GetINVALID(); //0x00502c8b
/*FuBi::Traits<Quat>*/ /*static*/ const Quat& /*__cdecl*/ GetZERO(); //0x00502c7f
DefineTemplateStaticMethod(FuBi::Traits<Quat>, FUBI_GetHeaderSpec, 0x503e41, void, Params(FuBi::ClassHeaderSpec& unk1), Args(FuBi::ClassHeaderSpec& unk1));
DefineTemplateStaticMethod(FuBi::Traits<Quat>, ToString, 0x9d54e5, void, Params(gpbstring<char>& unk1, const Quat& unk2, FuBi::eXfer unk3), Args(gpbstring<char>& unk1, const Quat& unk2, FuBi::eXfer unk3));

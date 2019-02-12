#pragma once

#include "FuBi.h"
#include "GPBString.h"
#include "Vector3.h"

struct Quat {
	/*Quat*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00502453
	/*Quat*/ public: bool /*__thiscall*/ GetIsValid() const; //0x00503412
	/*Quat*/ public: float /*__thiscall*/ FUBI_RENAME_GetW() const; //0x00502477
	/*Quat*/ public: float /*__thiscall*/ FUBI_RENAME_GetX() const; //0x0050247b
	/*Quat*/ public: float /*__thiscall*/ FUBI_RENAME_GetY() const; //0x0050247e
	/*Quat*/ public: float /*__thiscall*/ FUBI_RENAME_GetZ() const; //0x00502482
	/*Quat*/ public: void /*__thiscall*/ FUBI_RENAME_Rotate(const vector_3& unk1, float unk2); //0x00503a18
	/*Quat*/ public: void /*__thiscall*/ FUBI_RENAME_RotateX(float unk1); //0x0050343c
	/*Quat*/ public: void /*__thiscall*/ FUBI_RENAME_RotateY(float unk1); //0x0050344f
	/*Quat*/ public: void /*__thiscall*/ FUBI_RENAME_RotateZ(float unk1); //0x00503462
	/*Quat*/ public: void /*__thiscall*/ FUBI_RENAME_SetW(float unk1); //0x00502486
	/*Quat*/ public: void /*__thiscall*/ FUBI_RENAME_SetX(float unk1); //0x00502493
	/*Quat*/ public: void /*__thiscall*/ FUBI_RENAME_SetY(float unk1); //0x0050249f
	/*Quat*/ public: void /*__thiscall*/ FUBI_RENAME_SetZ(float unk1); //0x005024ac
};

/*FuBi::Traits<Quat>*/ /*static*/ bool /*__cdecl*/ FromString(const char* unk1, Quat& unk2); //0x009d5525
/*FuBi::Traits<Quat>*/ /*static*/ const Quat& /*__cdecl*/ GetIDENTITY(); //0x00502c85
/*FuBi::Traits<Quat>*/ /*static*/ const Quat& /*__cdecl*/ GetINDEFINITE(); //0x00502c91
/*FuBi::Traits<Quat>*/ /*static*/ const Quat& /*__cdecl*/ GetINVALID(); //0x00502c8b
/*FuBi::Traits<Quat>*/ /*static*/ const Quat& /*__cdecl*/ GetZERO(); //0x00502c7f
/*FuBi::Traits<Quat>*/ /*static*/ void /*__cdecl*/ FUBI_GetHeaderSpec(FuBi::ClassHeaderSpec& unk1); //0x00503e41
/*FuBi::Traits<Quat>*/ /*static*/ void /*__cdecl*/ ToString(gpbstring<char>& unk1, const Quat& unk2, FuBi::eXfer unk3); //0x009d54e5

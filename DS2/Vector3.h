#pragma once

struct vector_3 {
	/*vector_3*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x0050241e
	/*vector_3*/ public: bool /*__thiscall*/ FUBI_RENAME_IsZero() const; //0x005033c9
	/*vector_3*/ public: float /*__thiscall*/ FUBI_RENAME_GetX() const; //0x00502422
	/*vector_3*/ public: float /*__thiscall*/ FUBI_RENAME_GetY() const; //0x00502425
	/*vector_3*/ public: float /*__thiscall*/ FUBI_RENAME_GetZ() const; //0x00502429
	/*vector_3*/ public: void /*__thiscall*/ FUBI_RENAME_RotateX(float unk1); //0x005033d9
	/*vector_3*/ public: void /*__thiscall*/ FUBI_RENAME_RotateY(float unk1); //0x005033ec
	/*vector_3*/ public: void /*__thiscall*/ FUBI_RENAME_RotateZ(float unk1); //0x005033ff
	/*vector_3*/ public: void /*__thiscall*/ FUBI_RENAME_SetX(float unk1); //0x0050242d
	/*vector_3*/ public: void /*__thiscall*/ FUBI_RENAME_SetY(float unk1); //0x00502439
	/*vector_3*/ public: void /*__thiscall*/ FUBI_RENAME_SetZ(float unk1); //0x00502446
} typedef Vector3;

/*FuBi::Traits<vector_3>*/ /*static*/ bool /*__cdecl*/ FromString(const char* unk1, vector_3& unk2); //0x009d5481
/*FuBi::Traits<vector_3>*/ /*static*/ void /*__cdecl*/ FUBI_GetHeaderSpec(FuBi::ClassHeaderSpec& unk1); //0x00503e00
/*FuBi::Traits<vector_3>*/ /*static*/ void /*__cdecl*/ ToString(gpbstring<char>& unk1, const vector_3& unk2, FuBi::eXfer unk3); //0x009d544c

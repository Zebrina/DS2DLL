#pragma once

struct Point2 {
	/*Point2*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00502623
	/*Point2*/ public: bool /*__thiscall*/ FUBI_RENAME_IsZero() const; //0x00503552
	/*Point2*/ public: float /*__thiscall*/ FUBI_RENAME_GetX() const; //0x00502627
	/*Point2*/ public: float /*__thiscall*/ FUBI_RENAME_GetY() const; //0x0050262a
	/*Point2*/ public: void /*__thiscall*/ FUBI_RENAME_SetX(float unk1); //0x0050262e
	/*Point2*/ public: void /*__thiscall*/ FUBI_RENAME_SetY(float unk1); //0x0050263a
};

/*FuBi::Traits<Point2>*/ /*static*/ bool /*__cdecl*/ FromString(const char* unk1, Point2& unk2); //0x009d5606
/*FuBi::Traits<Point2>*/ /*static*/ void /*__cdecl*/ ToString(gpbstring<char>& unk1, const Point2& unk2, FuBi::eXfer unk3); //0x009d55dc

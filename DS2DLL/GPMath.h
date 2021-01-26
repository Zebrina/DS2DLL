#pragma once

/*
#include "FuBi.h"
*/

struct Quat;
typedef struct vector_3 Vector3;

/***
*                    _    _
*      /\/\    __ _ | |_ | |__
*     /    \  / _` || __|| '_ \
*    / /\/\ \| (_| || |_ | | | |
*    \/    \/ \__,_| \__||_| |_|
*
*/
namespace Math {
	$Function(0x0099656f, IsEqual, bool, float unk1, float unk2, float unk3);
	$Function(0x0099659b, IsEqual, bool, float unk1, float unk2);
	$Function(0x00996613, IsNegative, bool, float unk1, float unk2);
	$Function(0x00996638, IsNegative, bool, float unk1);
	$Function(0x0099667a, IsOne, bool, const Vector3& unk1);
	$Function(0x0099652e, IsOne, bool, float unk1, float unk2);
	$Function(0x0099655d, IsOne, bool, float unk1);
	$Function(0x009965ca, IsPositive, bool, float unk1, float unk2);
	$Function(0x009965ed, IsPositive, bool, float unk1);
	$Function(0x00996660, IsZero, bool, const Vector3& unk1);
	$Function(0x009964d9, IsZero, bool, float unk1, float unk2);
	$Function(0x00996502, IsZero, bool, float unk1);
	$Function(0x009963e8, Abs, float, float unk1);
	$Function(0x009963c6, Atan, float, float unk1);
	$Function(0x009964a5, Ceil, float, float unk1);
	$Function(0x009967f4, ClampFloat, float, float unk1, float unk2, float unk3);
	$Function(0x009963d7, Cos, float, float unk1);
	$Function(0x009964cb, DegreesToRadians, float, float unk1);
	$Function(0x009966c2, DotProduct, float, const Vector3& unk1, const Vector3& unk2);
	$Function(0x0099687f, FilterEaseBetween, float, float unk1);
	$Function(0x0099688e, FilterEaseIn, float, float unk1);
	$Function(0x009968da, FilterEaseOut, float, float unk1);
	$Function(0x00996824, FilterSmoothStep, float, float unk1, float unk2, float unk3);
	$Function(0x0099648d, Floor, float, float unk1);
	$Function(0x00996930, FromPercent, float, float unk1);
	$Function(0x00996694, Length, float, const Vector3& unk1);
	$Function(0x009966a2, Length2, float, const Vector3& unk1);
	$Function(0x0099679a, MaxFloat, float, float unk1, float unk2);
	$Function(0x009967c7, MinFloat, float, float unk1, float unk2);
	$Function(0x0099691a, Pi, float);
	$Function(0x00996925, PiHalf, float);
	$Function(0x009964bd, RadiansToDegrees, float, float unk1);
	$Function(0x0099633d, RandomFloat, float, float unk1, float unk2);
	$Function(0x00996358, RandomFloat, float, float unk1);
	$Function(0x00996440, RoundToFloat, float, float unk1);
	$Function(0x009963b5, Sin, float, float unk1);
	$Function(0x0099674a, MaxInt, int, int unk1, int unk2);
	$Function(0x00996772, MinInt, int, int unk1, int unk2);
	$Function(0x0099636b, RandomInt, int, int unk1, int unk2);
	$Function(0x00996393, RandomInt, int, int unk1);
	$Function(0x009963f6, Round, int, float unk1);
	$Function(0x009966ed, CrossProduct, void, Vector3& unk1, const Vector3& unk2, const Vector3& unk3);
	$Function(0x009966af, Normalize, void, Vector3& unk1);
	$Function(0x00996703, QuatFromDirection, void, Quat& unk1, const Vector3& unk2);
}
   
struct Range {
	int min;
	int max;
};

/*
$TemplateConstMethod(0x00408dd7, FuBi::Traits<Range>::GetMinValue, int);
$TemplateMethod(0x00408ddb, FuBi::Traits<Range>::SetMinValue, void, int value);
$TemplateConstMethod(0x00408de8, FuBi::Traits<Range>::GetMaxValue, int);
$TemplateMethod(0x00408dec, FuBi::Traits<Range>::SetMaxValue, void, int value);
*/

struct range_2 {
	$ConstMethod(0x00502b23, IsWithin, bool, float value);
	$ConstMethod(0x00502afd, GetMin, float);
	$Method(0x00502b04, SetMin, void, float value);
	$ConstMethod(0x00502b00, GetMax, float);
	$Method(0x00502b10, SetMax, void, float value);
	$ConstMethod(0x00502b1d, Length, float);

	float min;
	float max;
} typedef RangeF;

/*
$TemplateStaticMethod(0x009d5716, FuBi::Traits<RangeF>::ToString, void, GPBString& strOut, const RangeF& range, FuBi::eXfer unk3);
$TemplateStaticMethod(0x009d5740, FuBi::Traits<RangeF>::FromString, bool, const char* str, RangeF& rangeOut);
$TemplateStaticMethod(0x00503e92, FuBi::Traits<RangeF>::FUBI_GetHeaderSpec, void, FuBi::ClassHeaderSpec& unk1);
*/

struct GPoint {
	int x;
	int y;
};

struct Point2 {
	$ConstMethod(0x00503552, IsZero, bool);
	$ConstMethod(0x00502627, GetX, float);
	$Method(0x0050262e, SetX, void, float value);
	$ConstMethod(0x0050262a, GetY, float);
	$Method(0x0050263a, SetY, void, float value);

	float x;
	float y;
} typedef GPointF;

/*
$TemplateStaticMethod(0x009d55dc, FuBi::Traits<GPointF>::ToString, void, GPBString& strOut, const GPointF& point, FuBi::eXfer unk3);
$TemplateStaticMethod(0x009d5606, FuBi::Traits<GPointF>::FromString, bool, const char* str, GPointF& pointOut);
*/

struct GSize {
	int cx;
	int cy;
};

struct vector_3 {
	$ConstMethod(0x005033c9, IsZero, bool);
	$ConstMethod(0x00502422, GetX, float);
	$Method(0x0050242d, SetX, void, float value);
	$Method(0x005033d9, RotateX, void, float radians);
	$ConstMethod(0x00502425, GetY, float);
	$Method(0x00502439, SetY, void, float value);
	$Method(0x005033ec, RotateY, void, float radians);
	$ConstMethod(0x00502429, GetZ, float);
	$Method(0x00502446, SetZ, void, float value);
	$Method(0x005033ff, RotateZ, void, float radians);

	float x;
	float y;
	float z;
} typedef Vector3;

/*
$TemplateStaticMethod(0x009d544c, FuBi::Traits<Vector3>::ToString, void, GPBString& unk1, const Vector3& unk2, FuBi::eXfer unk3);
$TemplateStaticMethod(0x009d5481, FuBi::Traits<Vector3>::FromString, bool, const char* unk1, Vector3& unk2);
$TemplateStaticMethod(0x00503e00, FuBi::Traits<Vector3>::FUBI_GetHeaderSpec, void, FuBi::ClassHeaderSpec& unk1);
*/

struct Vector3Coll {
	$ConstMethod(0x00503481, Empty, bool);
	$ConstMethod(0x00503475, Size, int);
	$ConstMethod(0x0050348c, Get, const Vector3&, int index);
	$Method(0x0050349e, Get, Vector3&, int index);
	$Method(0x005034b0, Set, void, int index, const Vector3& item);
	$Method(0x00503c34, Append, void, const Vector3& item);
};

struct GRect {
	int left;
	int top;
	int right;
	int bottom;
};

STATIC_ASSERT(sizeof(GRect) == 0x10);

struct Quat {
	Quat() = default;
	~Quat() = default;

	$ConstMethod(0x00503412, GetIsValid, bool);
	$ConstMethod(0x0050247b, GetX, float);
	$Method(0x00502493, SetX, void, float value);
	$Method(0x0050343c, RotateX, void, float radians);
	$ConstMethod(0x0050247e, GetY, float);
	$Method(0x0050249f, SetY, void, float value);
	$Method(0x0050344f, RotateY, void, float radians);
	$ConstMethod(0x00502482, GetZ, float);
	$Method(0x005024ac, SetZ, void, float value);
	$Method(0x00503462, RotateZ, void, float radians);
	$ConstMethod(0x00502477, GetW, float);
	$Method(0x00502486, SetW, void, float value);
	$Method(0x00503a18, Rotate, void, const Vector3& rotationMatrix, float radians);

	float x;
	float y;
	float z;
	float w;
};

// Size confirmed.
STATIC_ASSERT(sizeof(Quat) == 0x10);
STATIC_ASSERT_OFFSETOF(Quat, w, 0xc);

/*
$TemplateStaticMethod(0x009d5525, FuBi::Traits<Quat>::FromString, bool, const char* unk1, Quat& unk2);
$TemplateStaticMethod(0x009d54e5, FuBi::Traits<Quat>::ToString, void, GPBString& unk1, const Quat& unk2, FuBi::eXfer unk3);
$TemplateStaticMethod(0x00502c85, FuBi::Traits<Quat>::GetIDENTITY, const Quat&);
$TemplateStaticMethod(0x00502c91, FuBi::Traits<Quat>::GetINDEFINITE, const Quat&);
$TemplateStaticMethod(0x00502c8b, FuBi::Traits<Quat>::GetINVALID, const Quat&);
$TemplateStaticMethod(0x00502c7f, FuBi::Traits<Quat>::GetZERO, const Quat&);
$TemplateStaticMethod(0x00503e41, FuBi::Traits<Quat>::FUBI_GetHeaderSpec, void, FuBi::ClassHeaderSpec& unk1);
*/

struct QuatColl {
	$ConstMethod(0x005034d5, Empty, bool);
	$ConstMethod(0x005034e0, Get, const Quat&, int unk1);
	$ConstMethod(0x005034cc, Size, int);
	$Method(0x005034ef, Get, Quat&, int unk1);
	$Method(0x00503c3d, Append, void, const Quat& unk1);
	$Method(0x005034fe, Set, void, int unk1, const Quat& unk2);
};

struct matrix_3x3 {
	float x;
	float y;
} typedef Matrix3x3;

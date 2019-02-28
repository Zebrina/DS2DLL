#pragma once



struct Quat;
struct vector_3;

namespace Math {
	DefineFunction(IsEqual, 0x99656f, bool, Params(float unk1, float unk2, float unk3), Args(unk1, unk2, unk3));
	DefineFunction(IsEqual, 0x99659b, bool, Params(float unk1, float unk2), Args(unk1, unk2));
	DefineFunction(IsNegative, 0x996613, bool, Params(float unk1, float unk2), Args(unk1, unk2));
	DefineFunction(IsNegative, 0x996638, bool, Params(float unk1), Args(unk1));
	DefineFunction(IsOne, 0x99667a, bool, Params(const vector_3& unk1), Args(unk1));
	DefineFunction(IsOne, 0x99652e, bool, Params(float unk1, float unk2), Args(unk1, unk2));
	DefineFunction(IsOne, 0x99655d, bool, Params(float unk1), Args(unk1));
	DefineFunction(IsPositive, 0x9965ca, bool, Params(float unk1, float unk2), Args(unk1, unk2));
	DefineFunction(IsPositive, 0x9965ed, bool, Params(float unk1), Args(unk1));
	DefineFunction(IsZero, 0x996660, bool, Params(const vector_3& unk1), Args(unk1));
	DefineFunction(IsZero, 0x9964d9, bool, Params(float unk1, float unk2), Args(unk1, unk2));
	DefineFunction(IsZero, 0x996502, bool, Params(float unk1), Args(unk1));
	DefineFunction(Abs, 0x9963e8, float, Params(float unk1), Args(unk1));
	DefineFunction(Atan, 0x9963c6, float, Params(float unk1), Args(unk1));
	DefineFunction(Ceil, 0x9964a5, float, Params(float unk1), Args(unk1));
	DefineFunction(ClampFloat, 0x9967f4, float, Params(float unk1, float unk2, float unk3), Args(unk1, unk2, unk3));
	DefineFunction(Cos, 0x9963d7, float, Params(float unk1), Args(unk1));
	DefineFunction(DegreesToRadians, 0x9964cb, float, Params(float unk1), Args(unk1));
	DefineFunction(DotProduct, 0x9966c2, float, Params(const vector_3& unk1, const vector_3& unk2), Args(unk1, unk2));
	DefineFunction(FilterEaseBetween, 0x99687f, float, Params(float unk1), Args(unk1));
	DefineFunction(FilterEaseIn, 0x99688e, float, Params(float unk1), Args(unk1));
	DefineFunction(FilterEaseOut, 0x9968da, float, Params(float unk1), Args(unk1));
	DefineFunction(FilterSmoothStep, 0x996824, float, Params(float unk1, float unk2, float unk3), Args(unk1, unk2, unk3));
	DefineFunction(Floor, 0x99648d, float, Params(float unk1), Args(unk1));
	DefineFunction(FromPercent, 0x996930, float, Params(float unk1), Args(unk1));
	DefineFunction(Length, 0x996694, float, Params(const vector_3& unk1), Args(unk1));
	DefineFunction(Length2, 0x9966a2, float, Params(const vector_3& unk1), Args(unk1));
	DefineFunction(MaxFloat, 0x99679a, float, Params(float unk1, float unk2), Args(unk1, unk2));
	DefineFunction(MinFloat, 0x9967c7, float, Params(float unk1, float unk2), Args(unk1, unk2));
	DefineFunction(Pi, 0x99691a, float, NO_PARAMS, NO_ARGS);
	DefineFunction(PiHalf, 0x996925, float, NO_PARAMS, NO_ARGS);
	DefineFunction(RadiansToDegrees, 0x9964bd, float, Params(float unk1), Args(unk1));
	DefineFunction(RandomFloat, 0x99633d, float, Params(float unk1, float unk2), Args(unk1, unk2));
	DefineFunction(RandomFloat, 0x996358, float, Params(float unk1), Args(unk1));
	DefineFunction(RoundToFloat, 0x996440, float, Params(float unk1), Args(unk1));
	DefineFunction(Sin, 0x9963b5, float, Params(float unk1), Args(unk1));
	DefineFunction(MaxInt, 0x99674a, int, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineFunction(MinInt, 0x996772, int, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineFunction(RandomInt, 0x99636b, int, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineFunction(RandomInt, 0x996393, int, Params(int unk1), Args(unk1));
	DefineFunction(Round, 0x9963f6, int, Params(float unk1), Args(unk1));
	DefineFunction(CrossProduct, 0x9966ed, void, Params(vector_3& unk1, const vector_3& unk2, const vector_3& unk3), Args(unk1, unk2, unk3));
	DefineFunction(Normalize, 0x9966af, void, Params(vector_3& unk1), Args(unk1));
	DefineFunction(QuatFromDirection, 0x996703, void, Params(Quat& unk1, const vector_3& unk2), Args(unk1, unk2));
}

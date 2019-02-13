#pragma once

class UISlider {
public:
	DefineMethod(GetSliderButtonVisible, 0x5029ac, bool, Params(), Args());
	DefineMethod(GetValueRatio, 0x780b40, float, Params(), Args());
	DefineMethod(GetMax, 0x456d51, int, Params(), Args());
	DefineMethod(GetMin, 0x5029b3, int, Params(), Args());
	DefineMethod(GetValue, 0x456d58, int, Params(), Args());
	DefineMethod(SetMax, 0x780af0, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetMin, 0x780ab0, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetRange, 0x781740, void, Params(int unk1, int unk2), Args(int unk1, int unk2));
	DefineMethod(SetValue, 0x781390, void, Params(int unk1, bool unk2), Args(int unk1, bool unk2));
	DefineMethod(SetValue, 0x7814e0, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetValueRatio, 0x781470, void, Params(float unk1, bool unk2), Args(float unk1, bool unk2));
	DefineMethod(SetValueRatio, 0x781500, void, Params(float unk1), Args(float unk1));
};

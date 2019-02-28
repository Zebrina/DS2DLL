#pragma once

class UISlider {
public:
	DefineMethod(GetSliderButtonVisible, 0x5029ac, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetValueRatio, 0x780b40, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMax, 0x456d51, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMin, 0x5029b3, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetValue, 0x456d58, int, NO_PARAMS, NO_ARGS);
	DefineMethod(SetMax, 0x780af0, void, Params(int unk1), Args(unk1));
	DefineMethod(SetMin, 0x780ab0, void, Params(int unk1), Args(unk1));
	DefineMethod(SetRange, 0x781740, void, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineMethod(SetValue, 0x781390, void, Params(int unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SetValue, 0x7814e0, void, Params(int unk1), Args(unk1));
	DefineMethod(SetValueRatio, 0x781470, void, Params(float unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SetValueRatio, 0x781500, void, Params(float unk1), Args(unk1));
};

#pragma once

struct GUInterface {
	DefineMethod(CallSkritFunction, 0x7ace50, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(LoadSkritProperties, 0x7ace20, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(SetupFade, 0x7acf60, void, Params(float unk1, bool unk2, bool unk3), Args(float unk1, bool unk2, bool unk3));
};

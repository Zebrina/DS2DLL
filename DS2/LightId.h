#pragma once

struct LightId_ {
	DefineStaticMethod(GetInvalidLightId, 0x408376, const LightId_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetActive, 0x7d6b40, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsValid, 0x40836b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIntensity, 0x7d6b65, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetColor, 0x7d6b1b, unsigned long, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPosition, 0x7d6b8a, void, Params(SiegePos& unk1), Args(unk1));
	DefineMethod(SetActive, 0x7d6bfc, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetColor, 0x7d6bc3, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetIntensity, 0x7d6c35, void, Params(float unk1), Args(unk1));
} typedef LightId;

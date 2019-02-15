#pragma once

namespace GoMath {
	DefineFunction(AzimuthAngleToTarget, 0x7d6f21, float, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineFunction(GetAngleToWind, 0x7d703f, float, Params(const Goid_* unk1), Args(unk1));
	DefineFunction(OrbitAngleToTarget, 0x7d6de7, float, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineFunction(RandomFloat, 0x7d6d84, float, Params(float unk1, float unk2), Args(unk1, unk2));
	DefineFunction(RandomFloat, 0x7d6da4, float, Params(float unk1), Args(unk1));
	DefineFunction(RandomInt, 0x7d6db8, int, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineFunction(RandomInt, 0x7d6dd3, int, Params(int unk1), Args(unk1));
}

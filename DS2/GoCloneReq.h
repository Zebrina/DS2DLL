#pragma once

struct GoCloneReq {
	DefineStaticMethod(FUBI_PodGetSize, 0x502e44, unsigned int, NO_PARAMS, NO_ARGS);
	DefineMethod(Init, 0x846b86, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Init, 0x846d4d, void, Params(const char* unk1, const PlayerId_* unk2), Args(unk1, unk2));
	DefineMethod(Init, 0x846d81, void, Params(const char* unk1), Args(unk1));
	DefineMethod(Init, 0x846ce1, void, Params(const Goid_* unk1, const char* unk2, const PlayerId_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(Init, 0x846d1a, void, Params(const Goid_* unk1, const char* unk2), Args(unk1, unk2));
	DefineMethod(Init, 0x846baa, void, Params(const Goid_* unk1, const Goid_* unk2, const PlayerId_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(Init, 0x846bc7, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(Init, 0x846bde, void, Params(const Goid_* unk1, const PlayerId_* unk2), Args(unk1, unk2));
	DefineMethod(Init, 0x846bf6, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetFadeIn, 0x502e62, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetForceClientAllowed, 0x4133e8, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetForcePosition, 0x435bc2, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetForceServerOnly, 0x435bd7, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetNoStartupFx, 0x502e77, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetOmni, 0x44a584, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetPrepareToDrawNow, 0x44a599, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetSnapToTerrain, 0x435bad, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetStartingOrient, 0x502e48, void, Params(const Quat& unk1), Args(unk1));
	DefineMethod(SetStartingPos, 0x8472d9, void, Params(const SiegePos& unk1), Args(unk1));
};

#pragma once

struct GoCreateReq {
	DefineStaticMethod(FUBI_PodGetSize, 0x502dbe, unsigned int, NO_PARAMS, NO_ARGS);
	DefineMethod(SetFadeIn, 0x502df1, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetForcePosition, 0x502e06, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetNoStartupFx, 0x502e32, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetPrepareToDrawNow, 0x502e1b, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetSnapToTerrain, 0x502ddc, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetStartingOrient, 0x502dc2, void, Params(const Quat& unk1), Args(unk1));
	DefineMethod(SetStartingPos, 0x847185, void, Params(const SiegePos& unk1), Args(unk1));
};

#pragma once

class GoCorpse {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x472530, GoCorpse*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x472527, unsigned long, Params(GoCorpse* unk1), Args(unk1));
	DefineMethod(GetInStasis, 0x472523, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCorpseOwner, 0x47251f, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(AssignOwner, 0x472512, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCActivateStasis, 0x94d372, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCAssignOwner, 0x94bba1, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RCPickup, 0x94dc33, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCPickupSuccess, 0x94b2bf, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSActivateStasis, 0x94d95d, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSPickupSuccess, 0x94b763, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSSetPickupSuccess, 0x94adf2, void, Params(bool unk1), Args(unk1));
	DefineMethod(SAssignOwner, 0x94c0d9, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SRequestPickup, 0x94e997, void, Params(const Goid_* unk1, bool unk2), Args(unk1, unk2));
};

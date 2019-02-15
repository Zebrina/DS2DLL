#pragma once

class GoStash {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x472780, GoStash*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x472777, unsigned long, Params(GoStash* unk1), Args(unk1));
	DefineConstMethod(GetActivateRange, 0x9507ad, float, NO_PARAMS, NO_ARGS);
	DefineMethod(RCAddToStash, 0x95089d, void, Params(const Goid_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCDisableOmniStatus, 0x95051e, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RCEnableOmniStatus, 0x9503d3, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCRemoveFromStash, 0x950a42, void, Params(const Goid_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RSAddToStash, 0x950c52, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RSRemoveFromStash, 0x950eb8, void, Params(const Goid_* unk1, const Goid_* unk2, bool unk3), Args(unk1, unk2, unk3));
};

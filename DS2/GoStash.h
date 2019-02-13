#pragma once

class GoStash {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x472780, GoStash*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoStash*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoStash* unk1); //0x00472777
	DefineConstMethod(GetActivateRange, 0x9507ad, float, Params(), Args());
	DefineMethod(RCAddToStash, 0x95089d, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCDisableOmniStatus, 0x95051e, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(RCEnableOmniStatus, 0x9503d3, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCRemoveFromStash, 0x950a42, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RSAddToStash, 0x950c52, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(RSRemoveFromStash, 0x950eb8, void, Params(const Goid_* unk1, const Goid_* unk2, bool unk3), Args(const Goid_* unk1, const Goid_* unk2, bool unk3));
};

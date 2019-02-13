#pragma once

class GoCorpse {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x472530, GoCorpse*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoCorpse*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoCorpse* unk1); //0x00472527
	DefineMethod(GetInStasis, 0x472523, bool, Params(), Args());
	/*GoCorpse*/ public: const Goid_* /*__thiscall*/ GetCorpseOwner(); //0x0047251f
	DefineMethod(AssignOwner, 0x472512, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCActivateStasis, 0x94d372, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCAssignOwner, 0x94bba1, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(RCPickup, 0x94dc33, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCPickupSuccess, 0x94b2bf, void, Params(), Args());
	DefineMethod(RSActivateStasis, 0x94d95d, void, Params(), Args());
	DefineMethod(RSPickupSuccess, 0x94b763, void, Params(), Args());
	DefineMethod(RSSetPickupSuccess, 0x94adf2, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SAssignOwner, 0x94c0d9, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SRequestPickup, 0x94e997, void, Params(const Goid_* unk1, bool unk2), Args(const Goid_* unk1, bool unk2));
};

#pragma once

class GoCoach {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x80a844, GoCoach*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x80a83b, unsigned long, Params(GoCoach* unk1), Args(unk1));
	DefineMethod(AddMember, 0x967139, bool, Params(Go* unk1), Args(unk1));
	DefineMethod(GetMember, 0x966e40, Go*, Params(eJobAttribute unk1), Args(unk1));
	DefineConstMethod(GetMembers, 0x80a830, const GoidColl&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxMemberCount, 0x96707b, int, NO_PARAMS, NO_ARGS);
	DefineMethod(RemoveAllMembers, 0x966fbb, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RemoveMember, 0x9670b4, void, Params(Go* unk1), Args(unk1));
	DefineMethod(RemoveMember, 0x966eea, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetAllowNewMemebers, 0x80a823, void, Params(bool unk1), Args(unk1));
};

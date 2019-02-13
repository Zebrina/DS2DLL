#pragma once

class GoCoach {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x80a844, GoCoach*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoCoach*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoCoach* unk1); //0x0080a83b
	DefineMethod(AddMember, 0x967139, bool, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(GetMember, 0x966e40, Go*, Params(eJobAttribute unk1), Args(eJobAttribute unk1));
	/*GoCoach*/ public: const GoidColl& /*__thiscall*/ GetMembers() const; //0x0080a830
	DefineConstMethod(GetMaxMemberCount, 0x96707b, int, Params(), Args());
	DefineMethod(RemoveAllMembers, 0x966fbb, void, Params(), Args());
	DefineMethod(RemoveMember, 0x9670b4, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(RemoveMember, 0x966eea, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetAllowNewMemebers, 0x80a823, void, Params(bool unk1), Args(bool unk1));
};

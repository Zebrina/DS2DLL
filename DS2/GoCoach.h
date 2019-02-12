#pragma once

class GoCoach {
public:
	/*GoCoach*/ private: /*static*/ GoCoach* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x0080a844
	/*GoCoach*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoCoach* unk1); //0x0080a83b
	/*GoCoach*/ public: bool /*__thiscall*/ AddMember(Go* unk1); //0x00967139
	/*GoCoach*/ public: Go* /*__thiscall*/ GetMember(eJobAttribute unk1); //0x00966e40
	/*GoCoach*/ public: const GoidColl& /*__thiscall*/ GetMembers() const; //0x0080a830
	/*GoCoach*/ public: int /*__thiscall*/ GetMaxMemberCount() const; //0x0096707b
	/*GoCoach*/ public: void /*__thiscall*/ RemoveAllMembers(); //0x00966fbb
	/*GoCoach*/ public: void /*__thiscall*/ RemoveMember(Go* unk1); //0x009670b4
	/*GoCoach*/ public: void /*__thiscall*/ RemoveMember(const Goid_* unk1); //0x00966eea
	/*GoCoach*/ public: void /*__thiscall*/ SetAllowNewMemebers(bool unk1); //0x0080a823
};

#pragma once

class GoCorpse {
public:
	/*GoCorpse*/ private: /*static*/ GoCorpse* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00472530
	/*GoCorpse*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoCorpse* unk1); //0x00472527
	/*GoCorpse*/ public: bool /*__thiscall*/ GetInStasis(); //0x00472523
	/*GoCorpse*/ public: const Goid_* /*__thiscall*/ GetCorpseOwner(); //0x0047251f
	/*GoCorpse*/ public: void /*__thiscall*/ AssignOwner(const Goid_* unk1); //0x00472512
	/*GoCorpse*/ public: void /*__thiscall*/ RCActivateStasis(const Goid_* unk1); //0x0094d372
	/*GoCorpse*/ public: void /*__thiscall*/ RCAssignOwner(const Goid_* unk1, const Goid_* unk2); //0x0094bba1
	/*GoCorpse*/ public: void /*__thiscall*/ RCPickup(const Goid_* unk1); //0x0094dc33
	/*GoCorpse*/ public: void /*__thiscall*/ RCPickupSuccess(); //0x0094b2bf
	/*GoCorpse*/ public: void /*__thiscall*/ RSActivateStasis(); //0x0094d95d
	/*GoCorpse*/ public: void /*__thiscall*/ RSPickupSuccess(); //0x0094b763
	/*GoCorpse*/ public: void /*__thiscall*/ RSSetPickupSuccess(bool unk1); //0x0094adf2
	/*GoCorpse*/ public: void /*__thiscall*/ SAssignOwner(const Goid_* unk1); //0x0094c0d9
	/*GoCorpse*/ public: void /*__thiscall*/ SRequestPickup(const Goid_* unk1, bool unk2); //0x0094e997
};

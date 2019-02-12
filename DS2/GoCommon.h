#pragma once

class GoCommon {
public:
	/*GoCommon*/ private: /*static*/ GoCommon* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00408818
	/*GoCommon*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoCommon* unk1); //0x0040880f
	/*GoCommon*/ private: void /*__thiscall*/ SetScreenName(const gpbstring<char>& unk1); //0x0040b36a
	/*GoCommon*/ private: void /*__thiscall*/ SSetScreenName(const gpbstring<char>& unk1); //0x0040b341
	/*GoCommon*/ public: bool /*__thiscall*/ GetHasOneShotTriggered(); //0x0080412b
	/*GoCommon*/ public: const gpbstring<char>& /*__thiscall*/ GetAutoExpirationClass() const; //0x00804c52
	/*GoCommon*/ public: const gpbstring<char>& /*__thiscall*/ GetForcedExpirationClass() const; //0x00804c1b
	/*GoCommon*/ public: const Membership& /*__thiscall*/ GetMembership() const; //0x004087fa
	/*GoCommon*/ public: ePClass /*__thiscall*/ GetRarity() const; //0x004087fe
	/*GoCommon*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetScreenName(const gpbstring<unsigned short>& unk1); //0x008039a6
	/*GoCommon*/ public: void /*__thiscall*/ GetScreenName(gpbstring<char>& unk1) const; //0x0040c8af
	/*GoCommon*/ public: void /*__thiscall*/ RCCopyMembership(const Goid_* unk1); //0x00806507
	/*GoCommon*/ public: void /*__thiscall*/ RCRestoreLastMembership(); //0x008065ec
	/*GoCommon*/ public: void /*__thiscall*/ RCSetRolloverHelpKey(const gpbstring<char>& unk1); //0x008072da
	/*GoCommon*/ public: void /*__thiscall*/ RestoreLastMembership(); //0x0040bb81
	/*GoCommon*/ public: void /*__thiscall*/ RSSetRolloverHelpKey(const gpbstring<char>& unk1); //0x008076e1
	/*GoCommon*/ public: void /*__thiscall*/ SCopyMembership(const Goid_* unk1); //0x008068b0
	/*GoCommon*/ public: void /*__thiscall*/ SetRarity(ePClass unk1); //0x00408802
	/*GoCommon*/ public: void /*__thiscall*/ SRestoreLastMembership(); //0x008068b9
};

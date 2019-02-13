#pragma once

class GoCommon {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x408818, GoCommon*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoCommon*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoCommon* unk1); //0x0040880f
	DefineMethod(SetScreenName, 0x40b36a, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SSetScreenName, 0x40b341, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetHasOneShotTriggered, 0x80412b, bool, Params(), Args());
	/*GoCommon*/ public: const gpbstring<char>& /*__thiscall*/ GetAutoExpirationClass() const; //0x00804c52
	/*GoCommon*/ public: const gpbstring<char>& /*__thiscall*/ GetForcedExpirationClass() const; //0x00804c1b
	/*GoCommon*/ public: const Membership& /*__thiscall*/ GetMembership() const; //0x004087fa
	DefineConstMethod(GetRarity, 0x4087fe, ePClass, Params(), Args());
	DefineMethod(RCSetScreenName, 0x8039a6, FuBi::Cookie__*, Params(const gpbstring<unsigned short>& unk1), Args(const gpbstring<unsigned short>& unk1));
	DefineConstMethod(GetScreenName, 0x40c8af, void, Params(gpbstring<char>& unk1), Args(gpbstring<char>& unk1));
	DefineMethod(RCCopyMembership, 0x806507, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCRestoreLastMembership, 0x8065ec, void, Params(), Args());
	DefineMethod(RCSetRolloverHelpKey, 0x8072da, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RestoreLastMembership, 0x40bb81, void, Params(), Args());
	DefineMethod(RSSetRolloverHelpKey, 0x8076e1, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SCopyMembership, 0x8068b0, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetRarity, 0x408802, void, Params(ePClass unk1), Args(ePClass unk1));
	DefineMethod(SRestoreLastMembership, 0x8068b9, void, Params(), Args());
};

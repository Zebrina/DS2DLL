#pragma once

class GoParty {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x412604, GoParty*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoParty*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoParty* unk1); //0x004125fb
	DefineMethod(GetFreeMode, 0x412581, bool, Params(), Args());
	DefineConstMethod(GetHoldingGround, 0x4125c3, bool, Params(), Args());
	DefineMethod(GetMembersAccordingToHealNeed, 0x87e63c, bool, Params(GoidColl& unk1, bool unk2, const Goid_* unk3), Args(GoidColl& unk1, bool unk2, const Goid_* unk3));
	DefineMethod(GetMembersAccordingToHealNeed, 0x87e562, bool, Params(GopColl& unk1, bool unk2), Args(GopColl& unk1, bool unk2));
	DefineMethod(GetSpotPosition, 0x8807f1, bool, Params(const Goid_* unk1, SiegePos& unk2), Args(const Goid_* unk1, SiegePos& unk2));
	DefineConstMethod(IsInGuardStandingOrders, 0x4125af, bool, Params(), Args());
	DefineMethod(Move, 0x880925, bool, Params(const SiegePos& unk1, const vector_3& unk2, eQPlace unk3, eActionOrigin unk4, bool unk5, bool unk6, bool unk7, bool unk8, bool unk9), Args(const SiegePos& unk1, const vector_3& unk2, eQPlace unk3, eActionOrigin unk4, bool unk5, bool unk6, bool unk7, bool unk8, bool unk9));
	DefineMethod(Move, 0x88089a, bool, Params(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, bool unk4, bool unk5, bool unk6, bool unk7, bool unk8), Args(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, bool unk4, bool unk5, bool unk6, bool unk7, bool unk8));
	DefineMethod(Move, 0x8807fd, bool, Params(eQPlace unk1, eActionOrigin unk2, bool unk3, bool unk4, bool unk5, bool unk6, bool unk7), Args(eQPlace unk1, eActionOrigin unk2, bool unk3, bool unk4, bool unk5, bool unk6, bool unk7));
	DefineMethod(Regroup, 0x8809eb, bool, Params(eQPlace unk1), Args(eQPlace unk1));
	DefineMethod(GetFormation, 0x41256d, Formation*, Params(), Args());
	/*GoParty*/ public: const Goid_* /*__thiscall*/ GetPreferredMemberSacrifice(); //0x008794eb
	/*GoParty*/ public: const Goid_* /*__thiscall*/ GetTalkingDisband(); //0x00412588
	DefineConstMethod(GetStandingOrders, 0x87871e, eStandingOrders, Params(), Args());
	DefineConstMethod(GetDefaultPartyLightInnerRadius, 0x41259f, float, Params(), Args());
	DefineConstMethod(GetDefaultPartyLightOuterRadius, 0x4125a3, float, Params(), Args());
	DefineConstMethod(GetDefaultPartyLightVertOffset, 0x4125a7, float, Params(), Args());
	DefineConstMethod(GetPartyLightInnerRadius, 0x41258f, float, Params(), Args());
	DefineConstMethod(GetPartyLightOuterRadius, 0x412593, float, Params(), Args());
	DefineConstMethod(GetPartyLightVertOffset, 0x412597, float, Params(), Args());
	DefineMethod(GetMaxMeleeSlotsPerChar, 0x4125d8, int, Params(), Args());
	DefineMethod(GetWaitingToJoinCount, 0x4141e6, int, Params(), Args());
	/*GoParty*/ public: GopColl& /*__thiscall*/ GetTempGopCollA(); //0x004125df
	/*GoParty*/ public: GopColl& /*__thiscall*/ GetTempGopCollB(); //0x004125e6
	/*GoParty*/ public: GopColl& /*__thiscall*/ GetTempGopCollC(); //0x004125ed
	/*GoParty*/ public: QtColl& /*__thiscall*/ GetTempQtColl1(); //0x004125f4
	/*GoParty*/ public: unsigned long /*__thiscall*/ GetDefaultPartyLightColor() const; //0x004125ab
	/*GoParty*/ public: unsigned long /*__thiscall*/ GetPartyLightColor() const; //0x0041259b
	DefineMethod(AddMemberNow, 0x87b047, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(GetFocusThenMembersAccordingToRank, 0x87e0bb, void, Params(GoidColl& unk1, const Goid_* unk2), Args(GoidColl& unk1, const Goid_* unk2));
	DefineMethod(GetMembersAccordingToRank, 0x87dffb, void, Params(GoidColl& unk1, const Goid_* unk2), Args(GoidColl& unk1, const Goid_* unk2));
	DefineMethod(GetMembersAccordingToRank, 0x87e715, void, Params(GopColl& unk1), Args(GopColl& unk1));
	DefineMethod(RCAddMemberNow, 0x87b78e, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(RCRemoveMemberNow, 0x87a406, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(RCSetTalkingDisband, 0x8785e8, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RemoveMemberNow, 0x879488, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(RSAddMemberNow, 0x87b904, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(RSRemoveMemberNow, 0x87b0b0, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(RSSetFormationDirection, 0x87b203, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
	DefineMethod(RSSetFormationPosition, 0x87a61e, void, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineMethod(RSSetHoldingGround, 0x87a516, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RSSetStandingOrders, 0x880aaf, void, Params(eStandingOrders unk1), Args(eStandingOrders unk1));
	DefineMethod(RSSetTalkingDisband, 0x879558, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetFreeMode, 0x412571, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetPartyLightValues, 0x8786cd, void, Params(float unk1, float unk2, float unk3, unsigned long unk4), Args(float unk1, float unk2, float unk3, unsigned long unk4));
};

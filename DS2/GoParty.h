#pragma once

class GoParty {
public:
	/*GoParty*/ private: /*static*/ GoParty* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00412604
	/*GoParty*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoParty* unk1); //0x004125fb
	/*GoParty*/ public: bool /*__thiscall*/ GetFreeMode(); //0x00412581
	/*GoParty*/ public: bool /*__thiscall*/ GetHoldingGround() const; //0x004125c3
	/*GoParty*/ public: bool /*__thiscall*/ GetMembersAccordingToHealNeed(GoidColl& unk1, bool unk2, const Goid_* unk3); //0x0087e63c
	/*GoParty*/ public: bool /*__thiscall*/ GetMembersAccordingToHealNeed(GopColl& unk1, bool unk2); //0x0087e562
	/*GoParty*/ public: bool /*__thiscall*/ GetSpotPosition(const Goid_* unk1, SiegePos& unk2); //0x008807f1
	/*GoParty*/ public: bool /*__thiscall*/ IsInGuardStandingOrders() const; //0x004125af
	/*GoParty*/ public: bool /*__thiscall*/ Move(const SiegePos& unk1, const vector_3& unk2, eQPlace unk3, eActionOrigin unk4, bool unk5, bool unk6, bool unk7, bool unk8, bool unk9); //0x00880925
	/*GoParty*/ public: bool /*__thiscall*/ Move(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, bool unk4, bool unk5, bool unk6, bool unk7, bool unk8); //0x0088089a
	/*GoParty*/ public: bool /*__thiscall*/ Move(eQPlace unk1, eActionOrigin unk2, bool unk3, bool unk4, bool unk5, bool unk6, bool unk7); //0x008807fd
	/*GoParty*/ public: bool /*__thiscall*/ Regroup(eQPlace unk1); //0x008809eb
	/*GoParty*/ public: Formation* /*__thiscall*/ GetFormation(); //0x0041256d
	/*GoParty*/ public: const Goid_* /*__thiscall*/ GetPreferredMemberSacrifice(); //0x008794eb
	/*GoParty*/ public: const Goid_* /*__thiscall*/ GetTalkingDisband(); //0x00412588
	/*GoParty*/ public: eStandingOrders /*__thiscall*/ GetStandingOrders() const; //0x0087871e
	/*GoParty*/ public: float /*__thiscall*/ GetDefaultPartyLightInnerRadius() const; //0x0041259f
	/*GoParty*/ public: float /*__thiscall*/ GetDefaultPartyLightOuterRadius() const; //0x004125a3
	/*GoParty*/ public: float /*__thiscall*/ GetDefaultPartyLightVertOffset() const; //0x004125a7
	/*GoParty*/ public: float /*__thiscall*/ GetPartyLightInnerRadius() const; //0x0041258f
	/*GoParty*/ public: float /*__thiscall*/ GetPartyLightOuterRadius() const; //0x00412593
	/*GoParty*/ public: float /*__thiscall*/ GetPartyLightVertOffset() const; //0x00412597
	/*GoParty*/ public: int /*__thiscall*/ GetMaxMeleeSlotsPerChar(); //0x004125d8
	/*GoParty*/ public: int /*__thiscall*/ GetWaitingToJoinCount(); //0x004141e6
	/*GoParty*/ public: GopColl& /*__thiscall*/ GetTempGopCollA(); //0x004125df
	/*GoParty*/ public: GopColl& /*__thiscall*/ GetTempGopCollB(); //0x004125e6
	/*GoParty*/ public: GopColl& /*__thiscall*/ GetTempGopCollC(); //0x004125ed
	/*GoParty*/ public: QtColl& /*__thiscall*/ GetTempQtColl1(); //0x004125f4
	/*GoParty*/ public: unsigned long /*__thiscall*/ GetDefaultPartyLightColor() const; //0x004125ab
	/*GoParty*/ public: unsigned long /*__thiscall*/ GetPartyLightColor() const; //0x0041259b
	/*GoParty*/ public: void /*__thiscall*/ AddMemberNow(Go* unk1); //0x0087b047
	/*GoParty*/ public: void /*__thiscall*/ GetFocusThenMembersAccordingToRank(GoidColl& unk1, const Goid_* unk2); //0x0087e0bb
	/*GoParty*/ public: void /*__thiscall*/ GetMembersAccordingToRank(GoidColl& unk1, const Goid_* unk2); //0x0087dffb
	/*GoParty*/ public: void /*__thiscall*/ GetMembersAccordingToRank(GopColl& unk1); //0x0087e715
	/*GoParty*/ public: void /*__thiscall*/ RCAddMemberNow(Go* unk1); //0x0087b78e
	/*GoParty*/ public: void /*__thiscall*/ RCRemoveMemberNow(Go* unk1); //0x0087a406
	/*GoParty*/ public: void /*__thiscall*/ RCSetTalkingDisband(const Goid_* unk1); //0x008785e8
	/*GoParty*/ public: void /*__thiscall*/ RemoveMemberNow(Go* unk1); //0x00879488
	/*GoParty*/ public: void /*__thiscall*/ RSAddMemberNow(Go* unk1); //0x0087b904
	/*GoParty*/ public: void /*__thiscall*/ RSRemoveMemberNow(Go* unk1); //0x0087b0b0
	/*GoParty*/ public: void /*__thiscall*/ RSSetFormationDirection(const vector_3& unk1); //0x0087b203
	/*GoParty*/ public: void /*__thiscall*/ RSSetFormationPosition(const SiegePos& unk1); //0x0087a61e
	/*GoParty*/ public: void /*__thiscall*/ RSSetHoldingGround(bool unk1); //0x0087a516
	/*GoParty*/ public: void /*__thiscall*/ RSSetStandingOrders(eStandingOrders unk1); //0x00880aaf
	/*GoParty*/ public: void /*__thiscall*/ RSSetTalkingDisband(const Goid_* unk1); //0x00879558
	/*GoParty*/ public: void /*__thiscall*/ SetFreeMode(bool unk1); //0x00412571
	/*GoParty*/ public: void /*__thiscall*/ SetPartyLightValues(float unk1, float unk2, float unk3, unsigned long unk4); //0x008786cd
};

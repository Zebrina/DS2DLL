#pragma once

#include "Enums.h"
#include "Formation.h"
#include "FuBi.h"
#include "GoComponent.h"
#include "Go.h"
#include "GoidScid.h"
#include "GPMath.h"
#include "QtColl.h"
#include "SiegePos.h"

class GoParty : public GoComponent {
public:
	$StaticMethod(0x00412604, FUBI_NetToInstance, GoParty*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x004125fb, FUBI_InstanceToNet, uint, GoParty* unk1);
	$Method(0x00412581, GetFreeMode, bool);
	$ConstMethod(0x004125c3, GetHoldingGround, bool);
	$Method(0x0087e63c, GetMembersAccordingToHealNeed, bool, GoidColl& unk1, bool unk2, const Goid* unk3);
	$Method(0x0087e562, GetMembersAccordingToHealNeed, bool, GopColl& unk1, bool unk2);
	$Method(0x008807f1, GetSpotPosition, bool, const Goid* unk1, SiegePos& positionOut);
	$ConstMethod(0x004125af, IsInGuardStandingOrders, bool);
	$Method(0x00880925, Move, bool, const SiegePos& unk1, const Vector3& unk2, eQPlace unk3, eActionOrigin unk4, bool unk5, bool unk6, bool unk7, bool unk8, bool unk9);
	$Method(0x0088089a, Move, bool, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, bool unk4, bool unk5, bool unk6, bool unk7, bool unk8);
	$Method(0x008807fd, Move, bool, eQPlace unk1, eActionOrigin unk2, bool unk3, bool unk4, bool unk5, bool unk6, bool unk7);
	$Method(0x008809eb, Regroup, bool, eQPlace unk1);
	$Method(0x0041256d, GetFormation, Formation*);
	$Method(0x008794eb, GetPreferredMemberSacrifice, const Goid*);
	$Method(0x00412588, GetTalkingDisband, const Goid*);
	$ConstMethod(0x0087871e, GetStandingOrders, eStandingOrders);
	$ConstMethod(0x0041259f, GetDefaultPartyLightInnerRadius, float);
	$ConstMethod(0x004125a3, GetDefaultPartyLightOuterRadius, float);
	$ConstMethod(0x004125a7, GetDefaultPartyLightVertOffset, float);
	$ConstMethod(0x004125ab, GetDefaultPartyLightColor, hexcolorcode);
	$ConstMethod(0x0041258f, GetPartyLightInnerRadius, float);
	$ConstMethod(0x00412593, GetPartyLightOuterRadius, float);
	$ConstMethod(0x00412597, GetPartyLightVertOffset, float);
	$ConstMethod(0x0041259b, GetPartyLightColor, hexcolorcode);
	$Method(0x004125d8, GetMaxMeleeSlotsPerChar, int);
	$Method(0x004141e6, GetWaitingToJoinCount, int);
	$Method(0x004125df, GetTempGopCollA, GopColl&);
	$Method(0x004125e6, GetTempGopCollB, GopColl&);
	$Method(0x004125ed, GetTempGopCollC, GopColl&);
	$Method(0x004125f4, GetTempQtColl1, QtColl&);
	$Method(0x0087b047, AddMemberNow, void, Go* unk1);
	$Method(0x0087e0bb, GetFocusThenMembersAccordingToRank, void, GoidColl& unk1, const Goid* unk2);
	$Method(0x0087dffb, GetMembersAccordingToRank, void, GoidColl& unk1, const Goid* unk2);
	$Method(0x0087e715, GetMembersAccordingToRank, void, GopColl& unk1);
	$Method(0x0087b78e, RCAddMemberNow, void, Go* unk1);
	$Method(0x0087a406, RCRemoveMemberNow, void, Go* unk1);
	$Method(0x008785e8, RCSetTalkingDisband, void, const Goid* unk1);
	$Method(0x00879488, RemoveMemberNow, void, Go* unk1);
	$Method(0x0087b904, RSAddMemberNow, void, Go* unk1);
	$Method(0x0087b0b0, RSRemoveMemberNow, void, Go* unk1);
	$Method(0x0087b203, RSSetFormationDirection, void, const Vector3& unk1);
	$Method(0x0087a61e, RSSetFormationPosition, void, const SiegePos& unk1);
	$Method(0x0087a516, RSSetHoldingGround, void, bool unk1);
	$Method(0x00880aaf, RSSetStandingOrders, void, eStandingOrders orders);
	$Method(0x00879558, RSSetTalkingDisband, void, const Goid* unk1);
	$Method(0x00412571, SetFreeMode, void, bool unk1);
	$Method(0x008786cd, SetPartyLightValues, void, float unk1, float unk2, float unk3, uint unk4);

    template <class Action>
    void ForEachPartyMember(Action action) {
        go->children.ForEach(action);
    }

	// 0x14
	$Padding(0x14, 0x1c);
	// 0x1c
	float defaultPartyLightInnerRadius;
	// 0x20
	float defaultPartyLightOuterRadius;
	// 0x24
	float defaultPartyLightVertOffset;
	// 0x28
    hexcolorcode defaultPartyLightColor;
	// 0x2c
	float partyLightInnerRadius;
	// 0x30
	float partyLightOuterRadius;
	// 0x34
	float partyLightVertOffset;
	// 0x38
    hexcolorcode partyLightColor;
	// 0x3c
	$Padding(0x3c, 0x58);
	// 0x58
	eStandingOrders standingOrders;
	// 0x5c
	bool bHoldingGround;
	// 0x60
	$Padding(0x60, 0x70);
	// 0x70
	Formation* formation;
	// 0x74
	$Padding(0x74, 0x78);
	// 0x78
	GopColl waitingToJoin;
	// 0x80
	$Padding(0x80, 0x88);
	// 0x88
	bool b88;
	bool bFreeMode;
	// 0x8c
	Goid* talkingDisband;
	// 0x90
	int maxMeleeSlotsPerChar;
	// 0x94
	GopColl tempGopCollA;
	// 0x9c
	GopColl tempGopCollB;
	// 0xa4
	GopColl tempGopCollC;
	// 0xac
	QtColl tempQtColl1;
};

STATIC_ASSERT_OFFSETOF(GoParty, defaultPartyLightInnerRadius, 0x1c);
STATIC_ASSERT_OFFSETOF(GoParty, partyLightColor, 0x38);
STATIC_ASSERT_OFFSETOF(GoParty, formation, 0x70);
STATIC_ASSERT_OFFSETOF(GoParty, bFreeMode, 0x89);
STATIC_ASSERT_OFFSETOF(GoParty, tempGopCollA, 0x94);
STATIC_ASSERT_OFFSETOF(GoParty, tempGopCollB, 0x9c);
STATIC_ASSERT_OFFSETOF(GoParty, tempGopCollC, 0xa4);
STATIC_ASSERT_OFFSETOF(GoParty, tempQtColl1, 0xac);

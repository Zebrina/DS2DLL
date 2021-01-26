#pragma once

#include "Enums.h"
#include "Go.h"
#include "GoidScid.h"
#include "GPMath.h"
#include "QtColl.h"
#include "Siege.h"
#include "SiegePos.h"

class AIQuery {
public:
	$Singleton(AIQuery, 0x00414099);

	$Method(0x00857e6d, AddActorSummonsToCollection, bool, GoidColl& unk1);
	$Method(0x00857de0, AddActorSummonsToCollection, bool, GopColl& unk1);
	$Method(0x00858776, AreHumanPartyMembersInNodes, bool, int unk1, int unk2, int unk3, int unk4);
	$Method(0x0085872b, AreScreenPartyMembersInNodes, bool, int unk1, int unk2, int unk3, int unk4);
	$ConstMethod(0x0085426e, CanActorPathToAttack, bool, const Go* unk1, const Go* unk2);
	$ConstMethod(0x00854241, CanActorPathToPos, bool, const Go* unk1, const SiegePos& unk2);
	$Method(0x0085db6b, DoesSphereHaveHumanControlledOccupants, bool, const SiegePos& unk1, float unk2);
	$Method(0x0085db17, DoesSphereHaveOccupants, bool, const SiegePos& unk1, float unk2);
	$Method(0x0085db3f, DoesSphereHavePartyMembers, bool, const SiegePos& unk1, float unk2);
	$Method(0x00858b4b, FindClearLosPoint, bool, const Go* unk1, const Go* unk2, float unk3, float unk4, float unk5, SiegePos& unk6);
	$Method(0x00858c2a, FindClearLosPoint, bool, const Go* unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, SiegePos& unk6);
	$Method(0x00858cdd, FindClearLosSpotForAttack, bool, const Go* unk1, const Go* unk2, float unk3, float unk4, float unk5, SiegePos& unk6);
	$Method(0x0085712a, FindSpotForDrop, bool, Go* unk1, Go* unk2, Go* unk3, float unk4, float unk5, float unk6, SiegePos& unk7, bool unk8);
	$Method(0x008592e7, FindSpotForWalk, bool, Go* unk1, const SiegePos& unk2, float unk3, float unk4, SiegePos& unk5, bool unk6);
	$Method(0x00855f16, FindSpotRelativeToSource, bool, Go* unk1, Go* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10, bool unk11, bool unk12);
	$Method(0x0085717b, FindSpotRelativeToSource, bool, Go* unk1, Go* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10);
	$Method(0x00858d72, FindSpotRelativeToSource, bool, Go* unk1, const SiegePos& unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10, bool unk11, bool unk12);
	$Method(0x00856013, FindSpotRelativeToSource, bool, Go* unk1, float unk2, float unk3, float unk4, SiegePos& unk5, bool unk6);
	$Method(0x00855fd5, FindSpotRelativeToSource, bool, Go* unk1, float unk2, float unk3, float unk4, SiegePos& unk5);
	$Method(0x00855e23, FindSpotRelativeToSource, bool, const SiegePos* unk1, const SiegePos* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10, bool unk11);
	$Method(0x00855af4, FindSpotRelativeToSource, bool, const SiegePos* unk1, const SiegePos* unk2, siege::eLogicalNodeFlags unk3, float unk4, bool unk5, float unk6, float unk7, float unk8, float unk9, float unk10, bool unk11, SiegePos& unk12, bool unk13, bool unk14, bool unk15);
	$Method(0x00855e7b, FindSpotRelativeToSource, bool, const SiegePos* unk1, const SiegePos* unk2, siege::eLogicalNodeFlags unk3, float unk4, bool unk5, float unk6, float unk7, float unk8, float unk9, float unk10, bool unk11, SiegePos& unk12, bool unk13);
	$Method(0x00855ecc, FindSpotRelativeToSource, bool, const SiegePos* unk1, float unk2, float unk3, float unk4, float unk5, bool unk6, SiegePos& unk7);
	$ConstMethod(0x0085c342, Get, bool, Go* unk1, const QtColl& unk2, const GopColl& unk3, GopColl& unk4);
	$ConstMethod(0x0085c327, Get, bool, Go* unk1, eQueryTrait unk2, const GopColl& unk3, GopColl& unk4);
	$Method(0x0085da5a, GetActorsInSphere, bool, const SiegePos& unk1, float unk2, GopColl& unk3);
	$Method(0x0085da84, GetAliveActorsInSphere, bool, const SiegePos& unk1, float unk2, GopColl& unk3);
	$Method(0x0085d9f3, GetEnemiesInSphere, bool, const Goid* unk1, const SiegePos& unk2, float unk3, GopColl& unk4);
	$ConstMethod(0x0085bfbc, GetFirstN, bool, Go* unk1, const QtColl& unk2, uint unk3, const GopColl& unk4, GopColl& unk5);
	$ConstMethod(0x0085bf9e, GetFirstN, bool, Go* unk1, eQueryTrait unk2, uint unk3, const GopColl& unk4, GopColl& unk5);
	$Method(0x0085d9b6, GetFriendsInSphere, bool, const Goid* unk1, const SiegePos& unk2, float unk3, GopColl& unk4);
	$Method(0x00853e2d, GetGeometricCenter, bool, const GopColl& unk1, Vector3& unk2);
	$Method(0x00858750, GetHumanPartyMembersInNodes, bool, int unk1, int unk2, int unk3, int unk4, GopColl& unk5);
	$Method(0x0085879b, GetHumanPartyMembersInWorldFrustum, bool, const SiegePos& unk1, GopColl& unk2);
	$ConstMethod(0x0085c042, GetMax, bool, Go* unk1, const QtColl& unk2, const GopColl& unk3, GopColl& unk4);
	$ConstMethod(0x0085c028, GetMax, bool, Go* unk1, eQueryTrait unk2, const GopColl& unk3, GopColl& unk4);
	$ConstMethod(0x0085c001, GetMaxN, bool, Go* unk1, const QtColl& unk2, uint unk3, const GopColl& unk4, GopColl& unk5);
	$ConstMethod(0x0085bfe3, GetMaxN, bool, Go* unk1, eQueryTrait unk2, uint unk3, const GopColl& unk4, GopColl& unk5);
	$ConstMethod(0x0085c0a1, GetMin, bool, Go* unk1, eQueryTrait unk2, const GopColl& unk3, GopColl& unk4);
	$ConstMethod(0x0085c07a, GetMinN, bool, Go* unk1, const QtColl& unk2, uint unk3, const GopColl& unk4, GopColl& unk5);
	$ConstMethod(0x0085c05c, GetMinN, bool, Go* unk1, eQueryTrait unk2, uint unk3, const GopColl& unk4, GopColl& unk5);
	$Method(0x0085da30, GetOccupantsInSphere, bool, const SiegePos& unk1, float unk2, GopColl& unk3);
	$Method(0x0085dadb, GetOwnerPartyMembersInSphere, bool, const Goid* unk1, const SiegePos& unk2, float unk3, GopColl& unk4);
	$Method(0x0085daae, GetPartyMembersInSphere, bool, const SiegePos& unk1, float unk2, GopColl& unk3);
	$Method(0x0085c3fe, GetPartyMembersInSphereAccordingToHealNeed, bool, const SiegePos& unk1, float unk2, bool unk3, const Goid* unk4, GopColl& unk5, bool unk6);
	$Method(0x0085c59c, GetPartyMembersInSphereAccordingToRank, bool, const SiegePos& unk1, float unk2, const Goid* unk3, GopColl& unk4);
	$Method(0x008587b8, GetPathableHumanPartyMembers, bool, const Go* unk1, float unk2, int unk3, GopColl& unk4);
	$Method(0x0041166d, GetPathableHumanPartyMembers, bool, const Go* unk1, float unk2, GopColl& unk3);
	$Method(0x00411688, GetPathableHumanPartyMembers, bool, const Go* unk1, GopColl& unk2);
	$Method(0x00856f2b, GetPathablePositionAroundSource, bool, const Go* unk1, float unk2, float unk3, int unk4, SiegePos& unk5);
	$Method(0x00858705, GetScreenPartyMembersInNodes, bool, int unk1, int unk2, int unk3, int unk4, GopColl& unk5);
	$Method(0x008552af, GetTerrainPosition, bool, const SiegePos& unk1, float unk2, SiegePos& unk3);
	$Method(0x008541a6, GetTerrainPosition, bool, const SiegePos& unk1, SiegePos& unk2);
	$Method(0x0085704a, GetTerrainPositionAtEnd, bool, const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, SiegePos& unk6);
	$Method(0x008552fc, GetTerrainPositionAtEnd, bool, const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, SiegePos& unk5);
	$ConstMethod(0x0085b44b, Is, bool, const Go* unk1, Go* unk2, eQueryTrait unk3);
	$ConstMethod(0x0085bd2d, Is, bool, const Go* unk1, Go* unk2, QtColl& unk3);
	$Method(0x00854325, IsAreaWalkable, bool, siege::eLogicalNodeFlags unk1, const SiegePos& unk2, uint unk3, float unk4);
	$Method(0x008550d4, IsInRange, bool, const Go* unk1, const Go* unk2, float unk3);
	$Method(0x008550ac, IsInRange, bool, const SiegePos& unk1, const SiegePos& unk2, float unk3);
	$Method(0x00857027, IsInRange2D, bool, const SiegePos& unk1, const SiegePos& unk2, float unk3);
	$ConstMethod(0x008541d3, IsInSameFrustum, bool, const Go* unk1, const SiegePos& unk2);
	$ConstMethod(0x00858a45, IsLosClear, bool, const Go* unk1, const Go* unk2, float unk3);
	$ConstMethod(0x008592cf, IsLosClear, bool, const Go* unk1, const Go* unk2);
	$ConstMethod(0x00858ae7, IsLosClear, bool, const Go* unk1, const SiegePos& unk2);
	$ConstMethod(0x00854311, IsLosClear, bool, const SiegePos& unk1, const SiegePos& unk2);
	$Method(0x008551f8, GetClosest, Go*, const Go* unk1, const GopColl& unk2);
	$Method(0x0085524f, GetClosest, Go*, const SiegePos& unk1, const GopColl& unk2);
	$Method(0x0085db94, GetClosestHumanControlledOccupantInSphere, Go*, const SiegePos& unk1, float unk2);
	$Method(0x008588bd, GetClosestPathableHumanPartyMember, Go*, const Go* unk1, float unk2);
	$Method(0x004116a2, GetClosestPathableHumanPartyMember, Go*, const Go* unk1);
	$ConstMethod(0x0085c366, GetMax, Go*, Go* unk1, eQueryTrait unk2, const GopColl& unk3);
	$ConstMethod(0x0085c3b2, GetMin, Go*, Go* unk1, eQueryTrait unk2, const GopColl& unk3);
	$Method(0x00854081, Get2DDistance, float, const Go* unk1, const Go* unk2);
	$Method(0x0085518d, Get2DDistance, float, const SiegePos& unk1, const SiegePos& unk2);
	$ConstMethod(0x008593a1, GetAlterationSum, float, const Go* go, eAlteration alteration);
	$Method(0x00853fc1, GetDistance, float, const Go* unk1, const Go* unk2);
	$Method(0x0085511a, GetDistance, float, const SiegePos& unk1, const SiegePos& unk2);
	$Method(0x00853eb7, GetDistanceSquared, float, const SiegePos& unk1, const SiegePos& unk2);
	$ConstMethod(0x0085b03f, GetTraitValue, float, const Go* unk1, Go* unk2, eQueryTrait unk3);
	$ConstMethod(0x0085bcf1, GetCount, int, Go* unk1, eQueryTrait unk2, const GopColl& unk3);
	$ConstMethod(0x0085c0bb, GetCount, int, Go* unk1, QtColl& unk2, const GopColl& unk3);
	$Method(0x004116b7, GetTempGopColl1, GopColl&);
	$Method(0x004116bb, GetTempGopColl2, GopColl&);
	$Method(0x004116bf, GetTempGopColl3, GopColl&);
	$Method(0x004116c3, GetTempQtColl1, QtColl&);
	$Method(0x00853f9c, GetDifferenceVector, void, const SiegePos& unk1, const SiegePos& unk2, Vector3& unk3);
	$ConstMethod(0x008553b6, GetLOSPoint, void, const Go* unk1, SiegePos& unk2);
	$ConstMethod(0x00855455, GetLOSPoint, void, const Go* unk1, Vector3& unk2);
	$Method(0x00855abc, GetRandomOrientation, void, Quat& unk1);
	$Method(0x008524c6, GetTerrainPosition, void, const SiegePos& unk1, float unk2, float unk3, SiegePos& unk4);
	$Method(0x0085c729, SortByDistance, void, const Go* unk1, const GoidColl& unk2, GopColl& unk3);
	$Method(0x0085c6a8, SortByDistance, void, const Go* unk1, const GopColl& unk2, GopColl& unk3);

    // 0x00
    $Padding(0x00, 0x28);
	// 0x28
	GopColl tempGopColl1;
    // 0x30
	GopColl tempGopColl2;
	// 0x38
	GopColl tempGopColl3;
	// 0x40
	QtColl tempQtColl1;
};

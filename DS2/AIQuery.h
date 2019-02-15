#pragma once

#include "Enums.h"
#include "Siege.h"

#include "ClassMacros.h"

class Go;
struct GoidColl;
struct GopColl;
struct QtColl;
struct SiegePos;
struct vector_3;

enum eQueryTrait {

};

class AIQuery {
public:
	DefineSingleton(AIQuery, 0x414099);

	DefineMethod(AddActorSummonsToCollection, 0x857e6d, bool, Params(GoidColl& unk1), Args(unk1));
	DefineMethod(AddActorSummonsToCollection, 0x857de0, bool, Params(GopColl& unk1), Args(unk1));
	DefineMethod(AreHumanPartyMembersInNodes, 0x858776, bool, Params(int unk1, int unk2, int unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(AreScreenPartyMembersInNodes, 0x85872b, bool, Params(int unk1, int unk2, int unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(CanActorPathToAttack, 0x85426e, bool, Params(const Go* unk1, const Go* unk2), Args(unk1, unk2));
	DefineConstMethod(CanActorPathToPos, 0x854241, bool, Params(const Go* unk1, const SiegePos& unk2), Args(unk1, unk2));
	DefineMethod(DoesSphereHaveHumanControlledOccupants, 0x85db6b, bool, Params(const SiegePos& unk1, float unk2), Args(unk1, unk2));
	DefineMethod(DoesSphereHaveOccupants, 0x85db17, bool, Params(const SiegePos& unk1, float unk2), Args(unk1, unk2));
	DefineMethod(DoesSphereHavePartyMembers, 0x85db3f, bool, Params(const SiegePos& unk1, float unk2), Args(unk1, unk2));
	DefineMethod(FindClearLosPoint, 0x858b4b, bool, Params(const Go* unk1, const Go* unk2, float unk3, float unk4, float unk5, SiegePos& unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(FindClearLosPoint, 0x858c2a, bool, Params(const Go* unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, SiegePos& unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(FindClearLosSpotForAttack, 0x858cdd, bool, Params(const Go* unk1, const Go* unk2, float unk3, float unk4, float unk5, SiegePos& unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(FindSpotForDrop, 0x85712a, bool, Params(Go* unk1, Go* unk2, Go* unk3, float unk4, float unk5, float unk6, SiegePos& unk7, bool unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
	DefineMethod(FindSpotForWalk, 0x8592e7, bool, Params(Go* unk1, const SiegePos& unk2, float unk3, float unk4, SiegePos& unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(FindSpotRelativeToSource, 0x855f16, bool, Params(Go* unk1, Go* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10, bool unk11, bool unk12), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9, unk10, unk11, unk12));
	DefineMethod(FindSpotRelativeToSource, 0x85717b, bool, Params(Go* unk1, Go* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9, unk10));
	DefineMethod(FindSpotRelativeToSource, 0x858d72, bool, Params(Go* unk1, const SiegePos& unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10, bool unk11, bool unk12), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9, unk10, unk11, unk12));
	DefineMethod(FindSpotRelativeToSource, 0x856013, bool, Params(Go* unk1, float unk2, float unk3, float unk4, SiegePos& unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(FindSpotRelativeToSource, 0x855fd5, bool, Params(Go* unk1, float unk2, float unk3, float unk4, SiegePos& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(FindSpotRelativeToSource, 0x855e23, bool, Params(const SiegePos* unk1, const SiegePos* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10, bool unk11), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9, unk10, unk11));
	DefineMethod(FindSpotRelativeToSource, 0x855af4, bool, Params(const SiegePos* unk1, const SiegePos* unk2, siege::eLogicalNodeFlags unk3, float unk4, bool unk5, float unk6, float unk7, float unk8, float unk9, float unk10, bool unk11, SiegePos& unk12, bool unk13, bool unk14, bool unk15), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9, unk10, unk11, unk12, unk13, unk14, unk15));
	DefineMethod(FindSpotRelativeToSource, 0x855e7b, bool, Params(const SiegePos* unk1, const SiegePos* unk2, siege::eLogicalNodeFlags unk3, float unk4, bool unk5, float unk6, float unk7, float unk8, float unk9, float unk10, bool unk11, SiegePos& unk12, bool unk13), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9, unk10, unk11, unk12, unk13));
	DefineMethod(FindSpotRelativeToSource, 0x855ecc, bool, Params(const SiegePos* unk1, float unk2, float unk3, float unk4, float unk5, bool unk6, SiegePos& unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineConstMethod(Get, 0x85c342, bool, Params(Go* unk1, const QtColl& unk2, const GopColl& unk3, GopColl& unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(Get, 0x85c327, bool, Params(Go* unk1, eQueryTrait unk2, const GopColl& unk3, GopColl& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(GetActorsInSphere, 0x85da5a, bool, Params(const SiegePos& unk1, float unk2, GopColl& unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetAliveActorsInSphere, 0x85da84, bool, Params(const SiegePos& unk1, float unk2, GopColl& unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetEnemiesInSphere, 0x85d9f3, bool, Params(const Goid_* unk1, const SiegePos& unk2, float unk3, GopColl& unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetFirstN, 0x85bfbc, bool, Params(Go* unk1, const QtColl& unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineConstMethod(GetFirstN, 0x85bf9e, bool, Params(Go* unk1, eQueryTrait unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(GetFriendsInSphere, 0x85d9b6, bool, Params(const Goid_* unk1, const SiegePos& unk2, float unk3, GopColl& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(GetGeometricCenter, 0x853e2d, bool, Params(const GopColl& unk1, vector_3& unk2), Args(unk1, unk2));
	DefineMethod(GetHumanPartyMembersInNodes, 0x858750, bool, Params(int unk1, int unk2, int unk3, int unk4, GopColl& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(GetHumanPartyMembersInWorldFrustum, 0x85879b, bool, Params(const SiegePos& unk1, GopColl& unk2), Args(unk1, unk2));
	DefineConstMethod(GetMax, 0x85c042, bool, Params(Go* unk1, const QtColl& unk2, const GopColl& unk3, GopColl& unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetMax, 0x85c028, bool, Params(Go* unk1, eQueryTrait unk2, const GopColl& unk3, GopColl& unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetMaxN, 0x85c001, bool, Params(Go* unk1, const QtColl& unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineConstMethod(GetMaxN, 0x85bfe3, bool, Params(Go* unk1, eQueryTrait unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineConstMethod(GetMin, 0x85c0a1, bool, Params(Go* unk1, eQueryTrait unk2, const GopColl& unk3, GopColl& unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetMinN, 0x85c07a, bool, Params(Go* unk1, const QtColl& unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineConstMethod(GetMinN, 0x85c05c, bool, Params(Go* unk1, eQueryTrait unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(GetOccupantsInSphere, 0x85da30, bool, Params(const SiegePos& unk1, float unk2, GopColl& unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetOwnerPartyMembersInSphere, 0x85dadb, bool, Params(const Goid_* unk1, const SiegePos& unk2, float unk3, GopColl& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(GetPartyMembersInSphere, 0x85daae, bool, Params(const SiegePos& unk1, float unk2, GopColl& unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetPartyMembersInSphereAccordingToHealNeed, 0x85c3fe, bool, Params(const SiegePos& unk1, float unk2, bool unk3, const Goid_* unk4, GopColl& unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(GetPartyMembersInSphereAccordingToRank, 0x85c59c, bool, Params(const SiegePos& unk1, float unk2, const Goid_* unk3, GopColl& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(GetPathableHumanPartyMembers, 0x8587b8, bool, Params(const Go* unk1, float unk2, int unk3, GopColl& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(GetPathableHumanPartyMembers, 0x41166d, bool, Params(const Go* unk1, float unk2, GopColl& unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetPathableHumanPartyMembers, 0x411688, bool, Params(const Go* unk1, GopColl& unk2), Args(unk1, unk2));
	DefineMethod(GetPathablePositionAroundSource, 0x856f2b, bool, Params(const Go* unk1, float unk2, float unk3, int unk4, SiegePos& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(GetScreenPartyMembersInNodes, 0x858705, bool, Params(int unk1, int unk2, int unk3, int unk4, GopColl& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(GetTerrainPosition, 0x8552af, bool, Params(const SiegePos& unk1, float unk2, SiegePos& unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetTerrainPosition, 0x8541a6, bool, Params(const SiegePos& unk1, SiegePos& unk2), Args(unk1, unk2));
	DefineMethod(GetTerrainPositionAtEnd, 0x85704a, bool, Params(const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, SiegePos& unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(GetTerrainPositionAtEnd, 0x8552fc, bool, Params(const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, SiegePos& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineConstMethod(Is, 0x85b44b, bool, Params(const Go* unk1, Go* unk2, eQueryTrait unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(Is, 0x85bd2d, bool, Params(const Go* unk1, Go* unk2, QtColl& unk3), Args(unk1, unk2, unk3));
	DefineMethod(IsAreaWalkable, 0x854325, bool, Params(siege::eLogicalNodeFlags unk1, const SiegePos& unk2, unsigned long unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(IsInRange, 0x8550d4, bool, Params(const Go* unk1, const Go* unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(IsInRange, 0x8550ac, bool, Params(const SiegePos& unk1, const SiegePos& unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(IsInRange2D, 0x857027, bool, Params(const SiegePos& unk1, const SiegePos& unk2, float unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(IsInSameFrustum, 0x8541d3, bool, Params(const Go* unk1, const SiegePos& unk2), Args(unk1, unk2));
	DefineConstMethod(IsLosClear, 0x858a45, bool, Params(const Go* unk1, const Go* unk2, float unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(IsLosClear, 0x8592cf, bool, Params(const Go* unk1, const Go* unk2), Args(unk1, unk2));
	DefineConstMethod(IsLosClear, 0x858ae7, bool, Params(const Go* unk1, const SiegePos& unk2), Args(unk1, unk2));
	DefineConstMethod(IsLosClear, 0x854311, bool, Params(const SiegePos& unk1, const SiegePos& unk2), Args(unk1, unk2));
	DefineMethod(GetClosest, 0x8551f8, Go*, Params(const Go* unk1, const GopColl& unk2), Args(unk1, unk2));
	DefineMethod(GetClosest, 0x85524f, Go*, Params(const SiegePos& unk1, const GopColl& unk2), Args(unk1, unk2));
	DefineMethod(GetClosestHumanControlledOccupantInSphere, 0x85db94, Go*, Params(const SiegePos& unk1, float unk2), Args(unk1, unk2));
	DefineMethod(GetClosestPathableHumanPartyMember, 0x8588bd, Go*, Params(const Go* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(GetClosestPathableHumanPartyMember, 0x4116a2, Go*, Params(const Go* unk1), Args(unk1));
	DefineConstMethod(GetMax, 0x85c366, Go*, Params(Go* unk1, eQueryTrait unk2, const GopColl& unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetMin, 0x85c3b2, Go*, Params(Go* unk1, eQueryTrait unk2, const GopColl& unk3), Args(unk1, unk2, unk3));
	DefineMethod(Get2DDistance, 0x854081, float, Params(const Go* unk1, const Go* unk2), Args(unk1, unk2));
	DefineMethod(Get2DDistance, 0x85518d, float, Params(const SiegePos& unk1, const SiegePos& unk2), Args(unk1, unk2));
	DefineConstMethod(GetAlterationSum, 0x8593a1, float, Params(const Go* unk1, eAlteration unk2), Args(unk1, unk2));
	DefineMethod(GetDistance, 0x853fc1, float, Params(const Go* unk1, const Go* unk2), Args(unk1, unk2));
	DefineMethod(GetDistance, 0x85511a, float, Params(const SiegePos& unk1, const SiegePos& unk2), Args(unk1, unk2));
	DefineMethod(GetDistanceSquared, 0x853eb7, float, Params(const SiegePos& unk1, const SiegePos& unk2), Args(unk1, unk2));
	DefineConstMethod(GetTraitValue, 0x85b03f, float, Params(const Go* unk1, Go* unk2, eQueryTrait unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetCount, 0x85bcf1, int, Params(Go* unk1, eQueryTrait unk2, const GopColl& unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetCount, 0x85c0bb, int, Params(Go* unk1, QtColl& unk2, const GopColl& unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetTempGopColl1, 0x4116b7, GopColl&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetTempGopColl2, 0x4116bb, GopColl&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetTempGopColl3, 0x4116bf, GopColl&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetTempQtColl1, 0x4116c3, QtColl&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetDifferenceVector, 0x853f9c, void, Params(const SiegePos& unk1, const SiegePos& unk2, vector_3& unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetLOSPoint, 0x8553b6, void, Params(const Go* unk1, SiegePos& unk2), Args(unk1, unk2));
	DefineConstMethod(GetLOSPoint, 0x855455, void, Params(const Go* unk1, vector_3& unk2), Args(unk1, unk2));
	DefineMethod(GetRandomOrientation, 0x855abc, void, Params(Quat& unk1), Args(unk1));
	DefineMethod(GetTerrainPosition, 0x8524c6, void, Params(const SiegePos& unk1, float unk2, float unk3, SiegePos& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SortByDistance, 0x85c729, void, Params(const Go* unk1, const GoidColl& unk2, GopColl& unk3), Args(unk1, unk2, unk3));
	DefineMethod(SortByDistance, 0x85c6a8, void, Params(const Go* unk1, const GopColl& unk2, GopColl& unk3), Args(unk1, unk2, unk3));
};

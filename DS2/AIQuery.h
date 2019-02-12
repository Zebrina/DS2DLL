#pragma once

#include "ClassMacros.h"

class AIQuery {
public:
	DefineSingleton(AIQuery, 0x414099);

	/*AIQuery*/ private: /*static*/ AIQuery* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414099
	/*AIQuery*/ public: bool /*__thiscall*/ AddActorSummonsToCollection(GoidColl& unk1); //0x00857e6d
	/*AIQuery*/ public: bool /*__thiscall*/ AddActorSummonsToCollection(GopColl& unk1); //0x00857de0
	/*AIQuery*/ public: bool /*__thiscall*/ AreHumanPartyMembersInNodes(int unk1, int unk2, int unk3, int unk4); //0x00858776
	/*AIQuery*/ public: bool /*__thiscall*/ AreScreenPartyMembersInNodes(int unk1, int unk2, int unk3, int unk4); //0x0085872b
	/*AIQuery*/ public: bool /*__thiscall*/ CanActorPathToAttack(const Go* unk1, const Go* unk2) const; //0x0085426e
	/*AIQuery*/ public: bool /*__thiscall*/ CanActorPathToPos(const Go* unk1, const SiegePos& unk2) const; //0x00854241
	/*AIQuery*/ public: bool /*__thiscall*/ DoesSphereHaveHumanControlledOccupants(const SiegePos& unk1, float unk2); //0x0085db6b
	/*AIQuery*/ public: bool /*__thiscall*/ DoesSphereHaveOccupants(const SiegePos& unk1, float unk2); //0x0085db17
	/*AIQuery*/ public: bool /*__thiscall*/ DoesSphereHavePartyMembers(const SiegePos& unk1, float unk2); //0x0085db3f
	/*AIQuery*/ public: bool /*__thiscall*/ FindClearLosPoint(const Go* unk1, const Go* unk2, float unk3, float unk4, float unk5, SiegePos& unk6); //0x00858b4b
	/*AIQuery*/ public: bool /*__thiscall*/ FindClearLosPoint(const Go* unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, SiegePos& unk6); //0x00858c2a
	/*AIQuery*/ public: bool /*__thiscall*/ FindClearLosSpotForAttack(const Go* unk1, const Go* unk2, float unk3, float unk4, float unk5, SiegePos& unk6); //0x00858cdd
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotForDrop(Go* unk1, Go* unk2, Go* unk3, float unk4, float unk5, float unk6, SiegePos& unk7, bool unk8); //0x0085712a
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotForWalk(Go* unk1, const SiegePos& unk2, float unk3, float unk4, SiegePos& unk5, bool unk6); //0x008592e7
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotRelativeToSource(Go* unk1, Go* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10, bool unk11, bool unk12); //0x00855f16
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotRelativeToSource(Go* unk1, Go* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10); //0x0085717b
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotRelativeToSource(Go* unk1, const SiegePos& unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10, bool unk11, bool unk12); //0x00858d72
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotRelativeToSource(Go* unk1, float unk2, float unk3, float unk4, SiegePos& unk5, bool unk6); //0x00856013
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotRelativeToSource(Go* unk1, float unk2, float unk3, float unk4, SiegePos& unk5); //0x00855fd5
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotRelativeToSource(const SiegePos* unk1, const SiegePos* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, float unk8, SiegePos& unk9, bool unk10, bool unk11); //0x00855e23
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotRelativeToSource(const SiegePos* unk1, const SiegePos* unk2, siege::eLogicalNodeFlags unk3, float unk4, bool unk5, float unk6, float unk7, float unk8, float unk9, float unk10, bool unk11, SiegePos& unk12, bool unk13, bool unk14, bool unk15); //0x00855af4
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotRelativeToSource(const SiegePos* unk1, const SiegePos* unk2, siege::eLogicalNodeFlags unk3, float unk4, bool unk5, float unk6, float unk7, float unk8, float unk9, float unk10, bool unk11, SiegePos& unk12, bool unk13); //0x00855e7b
	/*AIQuery*/ public: bool /*__thiscall*/ FindSpotRelativeToSource(const SiegePos* unk1, float unk2, float unk3, float unk4, float unk5, bool unk6, SiegePos& unk7); //0x00855ecc
	/*AIQuery*/ public: bool /*__thiscall*/ Get(Go* unk1, const QtColl& unk2, const GopColl& unk3, GopColl& unk4) const; //0x0085c342
	/*AIQuery*/ public: bool /*__thiscall*/ Get(Go* unk1, eQueryTrait unk2, const GopColl& unk3, GopColl& unk4) const; //0x0085c327
	/*AIQuery*/ public: bool /*__thiscall*/ GetActorsInSphere(const SiegePos& unk1, float unk2, GopColl& unk3); //0x0085da5a
	/*AIQuery*/ public: bool /*__thiscall*/ GetAliveActorsInSphere(const SiegePos& unk1, float unk2, GopColl& unk3); //0x0085da84
	/*AIQuery*/ public: bool /*__thiscall*/ GetEnemiesInSphere(const Goid_* unk1, const SiegePos& unk2, float unk3, GopColl& unk4); //0x0085d9f3
	/*AIQuery*/ public: bool /*__thiscall*/ GetFirstN(Go* unk1, const QtColl& unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5) const; //0x0085bfbc
	/*AIQuery*/ public: bool /*__thiscall*/ GetFirstN(Go* unk1, eQueryTrait unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5) const; //0x0085bf9e
	/*AIQuery*/ public: bool /*__thiscall*/ GetFriendsInSphere(const Goid_* unk1, const SiegePos& unk2, float unk3, GopColl& unk4); //0x0085d9b6
	/*AIQuery*/ public: bool /*__thiscall*/ GetGeometricCenter(const GopColl& unk1, vector_3& unk2); //0x00853e2d
	/*AIQuery*/ public: bool /*__thiscall*/ GetHumanPartyMembersInNodes(int unk1, int unk2, int unk3, int unk4, GopColl& unk5); //0x00858750
	/*AIQuery*/ public: bool /*__thiscall*/ GetHumanPartyMembersInWorldFrustum(const SiegePos& unk1, GopColl& unk2); //0x0085879b
	/*AIQuery*/ public: bool /*__thiscall*/ GetMax(Go* unk1, const QtColl& unk2, const GopColl& unk3, GopColl& unk4) const; //0x0085c042
	/*AIQuery*/ public: bool /*__thiscall*/ GetMax(Go* unk1, eQueryTrait unk2, const GopColl& unk3, GopColl& unk4) const; //0x0085c028
	/*AIQuery*/ public: bool /*__thiscall*/ GetMaxN(Go* unk1, const QtColl& unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5) const; //0x0085c001
	/*AIQuery*/ public: bool /*__thiscall*/ GetMaxN(Go* unk1, eQueryTrait unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5) const; //0x0085bfe3
	/*AIQuery*/ public: bool /*__thiscall*/ GetMin(Go* unk1, eQueryTrait unk2, const GopColl& unk3, GopColl& unk4) const; //0x0085c0a1
	/*AIQuery*/ public: bool /*__thiscall*/ GetMinN(Go* unk1, const QtColl& unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5) const; //0x0085c07a
	/*AIQuery*/ public: bool /*__thiscall*/ GetMinN(Go* unk1, eQueryTrait unk2, unsigned int unk3, const GopColl& unk4, GopColl& unk5) const; //0x0085c05c
	/*AIQuery*/ public: bool /*__thiscall*/ GetOccupantsInSphere(const SiegePos& unk1, float unk2, GopColl& unk3); //0x0085da30
	/*AIQuery*/ public: bool /*__thiscall*/ GetOwnerPartyMembersInSphere(const Goid_* unk1, const SiegePos& unk2, float unk3, GopColl& unk4); //0x0085dadb
	/*AIQuery*/ public: bool /*__thiscall*/ GetPartyMembersInSphere(const SiegePos& unk1, float unk2, GopColl& unk3); //0x0085daae
	/*AIQuery*/ public: bool /*__thiscall*/ GetPartyMembersInSphereAccordingToHealNeed(const SiegePos& unk1, float unk2, bool unk3, const Goid_* unk4, GopColl& unk5, bool unk6); //0x0085c3fe
	/*AIQuery*/ public: bool /*__thiscall*/ GetPartyMembersInSphereAccordingToRank(const SiegePos& unk1, float unk2, const Goid_* unk3, GopColl& unk4); //0x0085c59c
	/*AIQuery*/ public: bool /*__thiscall*/ GetPathableHumanPartyMembers(const Go* unk1, float unk2, int unk3, GopColl& unk4); //0x008587b8
	/*AIQuery*/ public: bool /*__thiscall*/ GetPathableHumanPartyMembers(const Go* unk1, float unk2, GopColl& unk3); //0x0041166d
	/*AIQuery*/ public: bool /*__thiscall*/ GetPathableHumanPartyMembers(const Go* unk1, GopColl& unk2); //0x00411688
	/*AIQuery*/ public: bool /*__thiscall*/ GetPathablePositionAroundSource(const Go* unk1, float unk2, float unk3, int unk4, SiegePos& unk5); //0x00856f2b
	/*AIQuery*/ public: bool /*__thiscall*/ GetScreenPartyMembersInNodes(int unk1, int unk2, int unk3, int unk4, GopColl& unk5); //0x00858705
	/*AIQuery*/ public: bool /*__thiscall*/ GetTerrainPosition(const SiegePos& unk1, float unk2, SiegePos& unk3); //0x008552af
	/*AIQuery*/ public: bool /*__thiscall*/ GetTerrainPosition(const SiegePos& unk1, SiegePos& unk2); //0x008541a6
	/*AIQuery*/ public: bool /*__thiscall*/ GetTerrainPositionAtEnd(const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, SiegePos& unk6); //0x0085704a
	/*AIQuery*/ public: bool /*__thiscall*/ GetTerrainPositionAtEnd(const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, SiegePos& unk5); //0x008552fc
	/*AIQuery*/ public: bool /*__thiscall*/ Is(const Go* unk1, Go* unk2, eQueryTrait unk3) const; //0x0085b44b
	/*AIQuery*/ public: bool /*__thiscall*/ Is(const Go* unk1, Go* unk2, QtColl& unk3) const; //0x0085bd2d
	/*AIQuery*/ public: bool /*__thiscall*/ IsAreaWalkable(siege::eLogicalNodeFlags unk1, const SiegePos& unk2, unsigned long unk3, float unk4); //0x00854325
	/*AIQuery*/ public: bool /*__thiscall*/ IsInRange(const Go* unk1, const Go* unk2, float unk3); //0x008550d4
	/*AIQuery*/ public: bool /*__thiscall*/ IsInRange(const SiegePos& unk1, const SiegePos& unk2, float unk3); //0x008550ac
	/*AIQuery*/ public: bool /*__thiscall*/ IsInRange2D(const SiegePos& unk1, const SiegePos& unk2, float unk3); //0x00857027
	/*AIQuery*/ public: bool /*__thiscall*/ IsInSameFrustum(const Go* unk1, const SiegePos& unk2) const; //0x008541d3
	/*AIQuery*/ public: bool /*__thiscall*/ IsLosClear(const Go* unk1, const Go* unk2, float unk3) const; //0x00858a45
	/*AIQuery*/ public: bool /*__thiscall*/ IsLosClear(const Go* unk1, const Go* unk2) const; //0x008592cf
	/*AIQuery*/ public: bool /*__thiscall*/ IsLosClear(const Go* unk1, const SiegePos& unk2) const; //0x00858ae7
	/*AIQuery*/ public: bool /*__thiscall*/ IsLosClear(const SiegePos& unk1, const SiegePos& unk2) const; //0x00854311
	/*AIQuery*/ public: Go* /*__thiscall*/ GetClosest(const Go* unk1, const GopColl& unk2); //0x008551f8
	/*AIQuery*/ public: Go* /*__thiscall*/ GetClosest(const SiegePos& unk1, const GopColl& unk2); //0x0085524f
	/*AIQuery*/ public: Go* /*__thiscall*/ GetClosestHumanControlledOccupantInSphere(const SiegePos& unk1, float unk2); //0x0085db94
	/*AIQuery*/ public: Go* /*__thiscall*/ GetClosestPathableHumanPartyMember(const Go* unk1, float unk2); //0x008588bd
	/*AIQuery*/ public: Go* /*__thiscall*/ GetClosestPathableHumanPartyMember(const Go* unk1); //0x004116a2
	/*AIQuery*/ public: Go* /*__thiscall*/ GetMax(Go* unk1, eQueryTrait unk2, const GopColl& unk3) const; //0x0085c366
	/*AIQuery*/ public: Go* /*__thiscall*/ GetMin(Go* unk1, eQueryTrait unk2, const GopColl& unk3) const; //0x0085c3b2
	/*AIQuery*/ public: float /*__thiscall*/ Get2DDistance(const Go* unk1, const Go* unk2); //0x00854081
	/*AIQuery*/ public: float /*__thiscall*/ Get2DDistance(const SiegePos& unk1, const SiegePos& unk2); //0x0085518d
	/*AIQuery*/ public: float /*__thiscall*/ GetAlterationSum(const Go* unk1, eAlteration unk2) const; //0x008593a1
	/*AIQuery*/ public: float /*__thiscall*/ GetDistance(const Go* unk1, const Go* unk2); //0x00853fc1
	/*AIQuery*/ public: float /*__thiscall*/ GetDistance(const SiegePos& unk1, const SiegePos& unk2); //0x0085511a
	/*AIQuery*/ public: float /*__thiscall*/ GetDistanceSquared(const SiegePos& unk1, const SiegePos& unk2); //0x00853eb7
	/*AIQuery*/ public: float /*__thiscall*/ GetTraitValue(const Go* unk1, Go* unk2, eQueryTrait unk3) const; //0x0085b03f
	/*AIQuery*/ public: int /*__thiscall*/ GetCount(Go* unk1, eQueryTrait unk2, const GopColl& unk3) const; //0x0085bcf1
	/*AIQuery*/ public: int /*__thiscall*/ GetCount(Go* unk1, QtColl& unk2, const GopColl& unk3) const; //0x0085c0bb
	/*AIQuery*/ public: GopColl& /*__thiscall*/ GetTempGopColl1(); //0x004116b7
	/*AIQuery*/ public: GopColl& /*__thiscall*/ GetTempGopColl2(); //0x004116bb
	/*AIQuery*/ public: GopColl& /*__thiscall*/ GetTempGopColl3(); //0x004116bf
	/*AIQuery*/ public: QtColl& /*__thiscall*/ GetTempQtColl1(); //0x004116c3
	/*AIQuery*/ public: void /*__thiscall*/ GetDifferenceVector(const SiegePos& unk1, const SiegePos& unk2, vector_3& unk3); //0x00853f9c
	/*AIQuery*/ public: void /*__thiscall*/ GetLOSPoint(const Go* unk1, SiegePos& unk2) const; //0x008553b6
	/*AIQuery*/ public: void /*__thiscall*/ GetLOSPoint(const Go* unk1, vector_3& unk2) const; //0x00855455
	/*AIQuery*/ public: void /*__thiscall*/ GetRandomOrientation(Quat& unk1); //0x00855abc
	/*AIQuery*/ public: void /*__thiscall*/ GetTerrainPosition(const SiegePos& unk1, float unk2, float unk3, SiegePos& unk4); //0x008524c6
	/*AIQuery*/ public: void /*__thiscall*/ SortByDistance(const Go* unk1, const GoidColl& unk2, GopColl& unk3); //0x0085c729
	/*AIQuery*/ public: void /*__thiscall*/ SortByDistance(const Go* unk1, const GopColl& unk2, GopColl& unk3); //0x0085c6a8
};

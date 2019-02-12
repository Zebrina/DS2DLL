#pragma once

#include "FuBi.h"

class GoMind {
public:
	/*GoMind*/ private: /*static*/ GoMind* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00412564
	/*GoMind*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoMind* unk1); //0x0041255b
	/*GoMind*/ private: bool /*__thiscall*/ GetBrainActive(); //0x0041252e
	/*GoMind*/ private: bool /*__thiscall*/ IsInUpdateScope() const; //0x00412536
	/*GoMind*/ private: bool /*__thiscall*/ IsVisible(const Goid_* unk1) const; //0x0086da52
	/*GoMind*/ private: bool /*__thiscall*/ JobRecentlyFailedToPathTo(Go* unk1); //0x0086a3ba
	/*GoMind*/ private: WorldMessage* /*__thiscall*/ GetHandlingMessage(); //0x0041250d
	/*GoMind*/ private: const Scid_* /*__thiscall*/ GetInitialCommand(); //0x0041252a
	/*GoMind*/ private: GopColl& /*__thiscall*/ GetTempGopColl1(); //0x0041253f
	/*GoMind*/ private: GopColl& /*__thiscall*/ GetTempGopColl2(); //0x00412546
	/*GoMind*/ private: GopColl& /*__thiscall*/ GetTempGopColl3(); //0x0041254d
	/*GoMind*/ private: QtColl& /*__thiscall*/ GetTempQtColl1(); //0x00412554
	/*GoMind*/ private: void /*__thiscall*/ ReqResetSensorsSelfAndVisible(); //0x0086f9b6
	/*GoMind*/ private: void /*__thiscall*/ RequestProcessHitEngaged(); //0x00412511
	/*GoMind*/ private: void /*__thiscall*/ ResetSensors(); //0x0086c67e
	/*GoMind*/ private: void /*__thiscall*/ SetInitialCommand(const Scid_* unk1); //0x00412519
	/*GoMind*/ public: bool /*__thiscall*/ ActorAutoDefendsOthers() const; //0x0041240e
	/*GoMind*/ public: bool /*__thiscall*/ ActorAutoHealsOthersLife() const; //0x00412418
	/*GoMind*/ public: bool /*__thiscall*/ ActorAutoHealsSelfLife() const; //0x00412421
	/*GoMind*/ public: bool /*__thiscall*/ ActorAutoHealsSelfMana() const; //0x0041242c
	/*GoMind*/ public: bool /*__thiscall*/ ActorAutoSwitchesToMagic() const; //0x00412483
	/*GoMind*/ public: bool /*__thiscall*/ ActorAutoSwitchesToMelee() const; //0x0041246f
	/*GoMind*/ public: bool /*__thiscall*/ ActorAutoSwitchesToRanged() const; //0x00412478
	/*GoMind*/ public: bool /*__thiscall*/ ActorPrefersMagic() const; //0x00412452
	/*GoMind*/ public: bool /*__thiscall*/ ActorPrefersMelee() const; //0x00412438
	/*GoMind*/ public: bool /*__thiscall*/ ActorPrefersRanged() const; //0x00412445
	/*GoMind*/ public: bool /*__thiscall*/ AmAttacking() const; //0x0086ba44
	/*GoMind*/ public: bool /*__thiscall*/ AmBusy() const; //0x00411b27
	/*GoMind*/ public: bool /*__thiscall*/ AmFacing(Go* unk1) const; //0x0086c20f
	/*GoMind*/ public: bool /*__thiscall*/ AmFacing(const SiegePos& unk1) const; //0x0086acc9
	/*GoMind*/ public: bool /*__thiscall*/ AmGuarding() const; //0x008687d8
	/*GoMind*/ public: bool /*__thiscall*/ AmPatrolling() const; //0x00869d55
	/*GoMind*/ public: bool /*__thiscall*/ AreAliveEnemiesVisible(); //0x0086aabd
	/*GoMind*/ public: bool /*__thiscall*/ AreAliveFriendsVisible(); //0x0086ab28
	/*GoMind*/ public: bool /*__thiscall*/ AreItemsVisible() const; //0x0086acb6
	/*GoMind*/ public: bool /*__thiscall*/ CanOperateOn(Go* unk1, bool unk2) const; //0x008687ea
	/*GoMind*/ public: bool /*__thiscall*/ CanOperateOn(Go* unk1); //0x00411b2f
	/*GoMind*/ public: bool /*__thiscall*/ DoingJobOriginatingFrom(eJobQ unk1, Go* unk2); //0x0086bc37
	/*GoMind*/ public: bool /*__thiscall*/ GetActorAutoFidgets(); //0x00412369
	/*GoMind*/ public: bool /*__thiscall*/ GetAutoItems(eQueryTrait unk1, GopColl& unk2) const; //0x0086f225
	/*GoMind*/ public: bool /*__thiscall*/ GetAutoItems(GopColl& unk1) const; //0x00870502
	/*GoMind*/ public: bool /*__thiscall*/ GetAutoItems(QtColl& unk1, GopColl& unk2) const; //0x0086b25b
	/*GoMind*/ public: bool /*__thiscall*/ GetCanJump() const; //0x004122d3
	/*GoMind*/ public: bool /*__thiscall*/ GetClosestVisible(eQueryTrait unk1, GopColl& unk2) const; //0x00870476
	/*GoMind*/ public: bool /*__thiscall*/ GetClosestVisible(float unk1, QtColl& unk2, GopColl& unk3) const; //0x0086e38a
	/*GoMind*/ public: bool /*__thiscall*/ GetClosestVisible(QtColl& unk1, GopColl& unk2) const; //0x00411dd2
	/*GoMind*/ public: bool /*__thiscall*/ GetClosestVisibleEnemies(float unk1, GopColl& unk2); //0x0086e58e
	/*GoMind*/ public: bool /*__thiscall*/ GetClosestVisibleEnemies(GopColl& unk1); //0x00411e52
	/*GoMind*/ public: bool /*__thiscall*/ GetClosestVisibleFriends(float unk1, GopColl& unk2); //0x0086e609
	/*GoMind*/ public: bool /*__thiscall*/ GetClosestVisibleFriends(GopColl& unk1); //0x00411e6b
	/*GoMind*/ public: bool /*__thiscall*/ GetEnemiesAndSummonsInSphere(float unk1, GopColl& unk2) const; //0x0086ff5a
	/*GoMind*/ public: bool /*__thiscall*/ GetEnemiesInSphere(float unk1, GopColl& unk2) const; //0x0086fed4
	/*GoMind*/ public: bool /*__thiscall*/ GetEngagedMe(GopColl& unk1) const; //0x0086f124
	/*GoMind*/ public: bool /*__thiscall*/ GetEngagedMeEnemies(GopColl& unk1) const; //0x0086f199
	/*GoMind*/ public: bool /*__thiscall*/ GetFarthestVisible(eQueryTrait unk1, GopColl& unk2) const; //0x008704bc
	/*GoMind*/ public: bool /*__thiscall*/ GetFarthestVisible(QtColl& unk1, GopColl& unk2) const; //0x0086e65e
	/*GoMind*/ public: bool /*__thiscall*/ GetFriendsAndSummonsInSphere(float unk1, GopColl& unk2) const; //0x0087000e
	/*GoMind*/ public: bool /*__thiscall*/ GetFriendsInSphere(float unk1, GopColl& unk2) const; //0x0086ff88
	/*GoMind*/ public: bool /*__thiscall*/ GetItemsInSphere(float unk1, GopColl& unk2) const; //0x0086fd67
	/*GoMind*/ public: bool /*__thiscall*/ GetLeashTeleportToHome() const; //0x0086c645
	/*GoMind*/ public: bool /*__thiscall*/ GetMayAttack() const; //0x004123de
	/*GoMind*/ public: bool /*__thiscall*/ GetMayAttackHeroes() const; //0x004123ea
	/*GoMind*/ public: bool /*__thiscall*/ GetMayBeAttacked() const; //0x004123f6
	/*GoMind*/ public: bool /*__thiscall*/ GetMayBeAttackedByHeroes() const; //0x00412402
	/*GoMind*/ public: bool /*__thiscall*/ GetMayProcessAI() const; //0x00412394
	/*GoMind*/ public: bool /*__thiscall*/ GetMayProcessSensors() const; //0x004123b8
	/*GoMind*/ public: bool /*__thiscall*/ GetOccupantsInSphere(float unk1, GopColl& unk2) const; //0x0086fded
	/*GoMind*/ public: bool /*__thiscall*/ GetPartyMembersAndSummonsInSphere(float unk1, GopColl* unk2) const; //0x0086aa8f
	/*GoMind*/ public: bool /*__thiscall*/ GetPartyMembersInSphere(float unk1, GopColl* unk2) const; //0x0086aa2e
	/*GoMind*/ public: bool /*__thiscall*/ GetVisible(eQueryTrait unk1, GopColl& unk2, float unk3) const; //0x00870058
	/*GoMind*/ public: bool /*__thiscall*/ GetVisible(eQueryTrait unk1, GopColl& unk2) const; //0x00411c7b
	/*GoMind*/ public: bool /*__thiscall*/ GetVisible(QtColl& unk1, GoidColl& unk2, float unk3) const; //0x0086dd66
	/*GoMind*/ public: bool /*__thiscall*/ GetVisible(QtColl& unk1, GoidColl& unk2) const; //0x0087003c
	/*GoMind*/ public: bool /*__thiscall*/ GetVisible(QtColl& unk1, GopColl& unk2, float unk3) const; //0x0086de0e
	/*GoMind*/ public: bool /*__thiscall*/ GetVisible(QtColl& unk1, GopColl& unk2) const; //0x00411c97
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleAtPosition(const SiegePos& unk1, QtColl& unk2, GopColl& unk3, float unk4) const; //0x0086def7
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleCastTargets(GopColl& unk1, Go* unk2, bool unk3, float unk4, unsigned long unk5) const; //0x00870122
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleCastTargets(GopColl& unk1, Go* unk2, bool unk3, float unk4) const; //0x00411d99
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleCastTargets(GopColl& unk1, Go* unk2, bool unk3) const; //0x00411d7c
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleEnemies(GopColl& unk1, float unk2) const; //0x0086e025
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleEnemies(GopColl& unk1) const; //0x00411d18
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleFriends(GopColl& unk1, float unk2) const; //0x0086e0a0
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleFriends(GopColl& unk1) const; //0x00411d31
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleFriendsForPlay(GopColl& unk1, const char* unk2) const; //0x008700a5
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleItems(GopColl& unk1, float unk2) const; //0x0086e0f5
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleItems(GopColl& unk1) const; //0x00411d4a
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleItemsToLoot(GopColl& unk1, float unk2) const; //0x0086e14a
	/*GoMind*/ public: bool /*__thiscall*/ GetVisibleItemsToLoot(GopColl& unk1) const; //0x00411d63
	/*GoMind*/ public: bool /*__thiscall*/ HasActionJatInQueue(eJobAbstractType unk1) const; //0x00411b06
	/*GoMind*/ public: bool /*__thiscall*/ HasBrainJatInQueue(eJobAbstractType unk1) const; //0x00411af5
	/*GoMind*/ public: bool /*__thiscall*/ InitBrain(); //0x008718c8
	/*GoMind*/ public: bool /*__thiscall*/ IsActorMovingAway(Go* unk1) const; //0x0086a42d
	/*GoMind*/ public: bool /*__thiscall*/ IsAngry() const; //0x00411c5b
	/*GoMind*/ public: bool /*__thiscall*/ IsEnemy(const Go* unk1) const; //0x00868a7c
	/*GoMind*/ public: bool /*__thiscall*/ IsFleeingFromMe(const Goid_* unk1) const; //0x0086f028
	/*GoMind*/ public: bool /*__thiscall*/ IsFlickCaptured() const; //0x00411b40
	/*GoMind*/ public: bool /*__thiscall*/ IsFriend(const Go* unk1) const; //0x00868ad9
	/*GoMind*/ public: bool /*__thiscall*/ IsFrontActionHumanInterruptable(); //0x0086a03e
	/*GoMind*/ public: bool /*__thiscall*/ IsGuardingTarget() const; //0x00411b7a
	/*GoMind*/ public: bool /*__thiscall*/ IsInEngageRange(Go* unk1, Go* unk2) const; //0x0086bfed
	/*GoMind*/ public: bool /*__thiscall*/ IsInEngageRange(Go* unk1) const; //0x0086bfcf
	/*GoMind*/ public: bool /*__thiscall*/ IsInJumpRange(Go* unk1) const; //0x0086bf69
	/*GoMind*/ public: bool /*__thiscall*/ IsInMeleeEngageRange(Go* unk1) const; //0x0086c02c
	/*GoMind*/ public: bool /*__thiscall*/ IsInRange(Go* unk1, float unk2) const; //0x0086bf2b
	/*GoMind*/ public: bool /*__thiscall*/ IsInRangedEngageRange(Go* unk1) const; //0x0086c045
	/*GoMind*/ public: bool /*__thiscall*/ IsInSpellRange(Go* unk1, Go* unk2) const; //0x0086bf9b
	/*GoMind*/ public: bool /*__thiscall*/ IsInTeleportRange(Go* unk1) const; //0x0086bf82
	/*GoMind*/ public: bool /*__thiscall*/ IsInWeaponRange(Go* unk1) const; //0x0086bf4b
	/*GoMind*/ public: bool /*__thiscall*/ IsLifeHigh() const; //0x0086ada3
	/*GoMind*/ public: bool /*__thiscall*/ IsLifeLow() const; //0x0086ad80
	/*GoMind*/ public: bool /*__thiscall*/ IsLosClear(Go* unk1) const; //0x0086a50d
	/*GoMind*/ public: bool /*__thiscall*/ IsLosClear(const SiegePos& unk1) const; //0x0086a6c4
	/*GoMind*/ public: bool /*__thiscall*/ IsManaHigh() const; //0x0086c365
	/*GoMind*/ public: bool /*__thiscall*/ IsManaLow() const; //0x0086c342
	/*GoMind*/ public: bool /*__thiscall*/ IsMeleeSlotFree(Go* unk1); //0x0086c5bd
	/*GoMind*/ public: bool /*__thiscall*/ IsRidingElevator() const; //0x0086a0f3
	/*GoMind*/ public: bool /*__thiscall*/ MayAIInterrupt() const; //0x0086ba59
	/*GoMind*/ public: bool /*__thiscall*/ MayAttackTarget(const Go* unk1, bool unk2) const; //0x00868caf
	/*GoMind*/ public: bool /*__thiscall*/ MayAutoCastLifeDamagingSpell(); //0x0086f26b
	/*GoMind*/ public: bool /*__thiscall*/ MayAutoCastLifeHealingSpell(); //0x0086f2fb
	/*GoMind*/ public: bool /*__thiscall*/ MaySDoJob(eJobAbstractType unk1); //0x00869e11
	/*GoMind*/ public: bool /*__thiscall*/ OnAlertProjectileNearMissedAttack() const; //0x0041248f
	/*GoMind*/ public: bool /*__thiscall*/ OnAlertProjectileNearMissedFlee() const; //0x0041249b
	/*GoMind*/ public: bool /*__thiscall*/ OnEnemyEnteredICZAttack() const; //0x004124a7
	/*GoMind*/ public: bool /*__thiscall*/ OnEnemyEnteredICZFlee() const; //0x004124b3
	/*GoMind*/ public: bool /*__thiscall*/ OnEnemyEnteredICZSwitchToMelee() const; //0x004124bd
	/*GoMind*/ public: bool /*__thiscall*/ OnEnemyEnteredOCZAttack() const; //0x004124c6
	/*GoMind*/ public: bool /*__thiscall*/ OnEnemyEnteredOCZFlee() const; //0x004124d1
	/*GoMind*/ public: bool /*__thiscall*/ OnEnemyEnteredWeaponEngageRangeAttack() const; //0x004124dd
	/*GoMind*/ public: bool /*__thiscall*/ OnEngagedFleedAbortAttack() const; //0x004124f5
	/*GoMind*/ public: bool /*__thiscall*/ OnEngagedLostConsciousnessAbortAttack() const; //0x00412501
	/*GoMind*/ public: bool /*__thiscall*/ OnFriendEnteredOCZFlee() const; //0x004124e9
	/*GoMind*/ public: bool /*__thiscall*/ RSAttack(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, bool unk4, const Goid_* unk5, int unk6); //0x00874012
	/*GoMind*/ public: bool /*__thiscall*/ RSAttack(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, bool unk4, const Goid_* unk5); //0x00411ef0
	/*GoMind*/ public: bool /*__thiscall*/ RSAttack(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, bool unk4); //0x00411ed0
	/*GoMind*/ public: bool /*__thiscall*/ RSAttack(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3); //0x00411eb1
	/*GoMind*/ public: bool /*__thiscall*/ RSCast(const Goid_* unk1, const Goid_* unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5); //0x008741d0
	/*GoMind*/ public: bool /*__thiscall*/ RSCast(const Goid_* unk1, const Goid_* unk2, eQPlace unk3, eActionOrigin unk4); //0x00411f0d
	/*GoMind*/ public: bool /*__thiscall*/ RSCastAtPosition(const SiegePos& unk1, const Goid_* unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5); //0x00874251
	/*GoMind*/ public: bool /*__thiscall*/ RSCastAtPosition(const SiegePos& unk1, const Goid_* unk2, eQPlace unk3, eActionOrigin unk4); //0x00411f2b
	/*GoMind*/ public: bool /*__thiscall*/ RSCollectLoot(eQPlace unk1, eActionOrigin unk2, const Goid_* unk3); //0x00874318
	/*GoMind*/ public: bool /*__thiscall*/ RSCollectLoot(eQPlace unk1, eActionOrigin unk2); //0x00411f6b
	/*GoMind*/ public: bool /*__thiscall*/ RSMove(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4); //0x004121d8
	/*GoMind*/ public: bool /*__thiscall*/ RSMove(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, float unk4, const Goid_* unk5); //0x00874869
	/*GoMind*/ public: bool /*__thiscall*/ RSMove(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, float unk4); //0x004121b6
	/*GoMind*/ public: bool /*__thiscall*/ RSMove(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3); //0x00412195
	/*GoMind*/ public: bool /*__thiscall*/ Send(const WorldMessage& unk1); //0x00869ec7
	/*GoMind*/ public: bool /*__thiscall*/ SendDelayed(const WorldMessage& unk1, float unk2); //0x00869ef3
	/*GoMind*/ public: bool /*__thiscall*/ SetJatCloneSource(eJobAbstractType unk1, const gpbstring<char>& unk2); //0x0086d593
	/*GoMind*/ public: bool /*__thiscall*/ UnderstandsJob(eJobAbstractType unk1) const; //0x00869de8
	/*GoMind*/ public: Go* /*__thiscall*/ GetAttackTargetWeapon(Go* unk1, bool unk2, bool unk3); //0x0086c22d
	/*GoMind*/ public: Go* /*__thiscall*/ GetAttackTargetWeapon(Go* unk1); //0x00411b5a
	/*GoMind*/ public: Go* /*__thiscall*/ GetBestFocusEnemy() const; //0x0086e7ec
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisible(eQueryTrait unk1) const; //0x00411e07
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisible(float unk1, eQueryTrait unk2) const; //0x0086e44e
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisible(float unk1, QtColl& unk2) const; //0x0086c16e
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisible(QtColl& unk1) const; //0x00411dee
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisibleEnemy() const; //0x004141d6
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisibleEnemy(bool unk1) const; //0x00411e20
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisibleEnemy(float unk1, bool unk2) const; //0x0086e496
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisibleFriend() const; //0x004141de
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisibleFriend(bool unk1) const; //0x00411e39
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisibleFriend(float unk1, bool unk2) const; //0x0086e525
	/*GoMind*/ public: Go* /*__thiscall*/ GetClosestVisibleItemToLoot(bool unk1) const; //0x0086ab95
	/*GoMind*/ public: Go* /*__thiscall*/ GetFarthestVisible(eQueryTrait unk1) const; //0x0086e6ef
	/*GoMind*/ public: Go* /*__thiscall*/ GetFarthestVisible(QtColl& unk1) const; //0x0086d0ce
	/*GoMind*/ public: Go* /*__thiscall*/ GetFarthestVisibleEnemy() const; //0x0086e730
	/*GoMind*/ public: Go* /*__thiscall*/ GetFarthestVisibleFriend() const; //0x0086e79d
	/*GoMind*/ public: Go* /*__thiscall*/ GetFarthestVisibleItem() const; //0x0086e7e4
	/*GoMind*/ public: Go* /*__thiscall*/ GetHighestVisibleAggro() const; //0x00411bb2
	/*GoMind*/ public: Go* /*__thiscall*/ GetHighestVisibleAggro(const Goid_* unk1) const; //0x00411bef
	/*GoMind*/ public: Go* /*__thiscall*/ GetHighestVisibleAggro(float unk1, float unk2, bool unk3, const Goid_* unk4) const; //0x0086eca8
	/*GoMind*/ public: Go* /*__thiscall*/ GetHighestVisibleAggro(float unk1) const; //0x00411bcd
	/*GoMind*/ public: Go* /*__thiscall*/ GetOwningCoach(); //0x004141c2
	/*GoMind*/ public: Go* /*__thiscall*/ GetVisible(eQueryTrait unk1, float unk2) const; //0x0086deaf
	/*GoMind*/ public: Go* /*__thiscall*/ GetVisible(eQueryTrait unk1) const; //0x00411ccc
	/*GoMind*/ public: Go* /*__thiscall*/ GetVisible(QtColl& unk1, float unk2) const; //0x0086c05e
	/*GoMind*/ public: Go* /*__thiscall*/ GetVisible(QtColl& unk1) const; //0x00411cb3
	/*GoMind*/ public: Go* /*__thiscall*/ GetVisibleAtPosition(const SiegePos& unk1, eQueryTrait unk2, float unk3) const; //0x0086dfda
	/*GoMind*/ public: Go* /*__thiscall*/ GetVisibleAtPosition(const SiegePos& unk1, float unk2) const; //0x00411ce5
	/*GoMind*/ public: Go* /*__thiscall*/ GetVisibleAtPosition(const SiegePos& unk1, QtColl& unk2, float unk3) const; //0x0086c0d5
	/*GoMind*/ public: Go* /*__thiscall*/ GetVisibleAtPosition(const SiegePos& unk1) const; //0x00411cfd
	/*GoMind*/ public: Go* /*__thiscall*/ GetVisibleCastTarget(Go* unk1, bool unk2, bool unk3, float unk4) const; //0x008703fd
	/*GoMind*/ public: Go* /*__thiscall*/ GetVisibleCastTarget(Go* unk1, bool unk2, bool unk3) const; //0x00411db7
	/*GoMind*/ public: gpbstring<char> /*__thiscall*/ GetFrontActionStateName(); //0x008715cf
	/*GoMind*/ public: Job* /*__thiscall*/ GetActionJobInQueue(eJobAbstractType unk1) const; //0x00411ae4
	/*GoMind*/ public: Job* /*__thiscall*/ GetFrontJob(eJobQ unk1) const; //0x00869f80
	/*GoMind*/ public: Job* /*__thiscall*/ GetJobInQueue(eJobAbstractType unk1, eJobQ unk2) const; //0x00869fb1
	/*GoMind*/ public: Job* /*__thiscall*/ SDoJob(const JobReq& unk1); //0x00871162
	/*GoMind*/ public: const JobAttributeBits& /*__thiscall*/ GetPlayAttributes() const; //0x0041234b
	/*GoMind*/ public: const Goid_* /*__thiscall*/ GetAngryTarget() const; //0x00411c54
	/*GoMind*/ public: const Goid_* /*__thiscall*/ GetFrontActionGoalObject(); //0x00869fe3
	/*GoMind*/ public: const Goid_* /*__thiscall*/ GetGuardTarget() const; //0x00411b89
	/*GoMind*/ public: const Goid_* /*__thiscall*/ GetHighestAggro() const; //0x00411c0d
	/*GoMind*/ public: const Goid_* /*__thiscall*/ GetHighestAggro(float unk1, bool unk2, const Goid_* unk3) const; //0x0086ee5e
	/*GoMind*/ public: const Goid_* /*__thiscall*/ GetHighestAggro(float unk1, const Goid_* unk2) const; //0x00411c3c
	/*GoMind*/ public: const Goid_* /*__thiscall*/ GetHighestAggro(float unk1) const; //0x00411c21
	/*GoMind*/ public: const Goid_* /*__thiscall*/ GetLastEngagedObject() const; //0x00411b8d
	/*GoMind*/ public: const Goid_* /*__thiscall*/ UpdateLastEngagedObject(const Goid_* unk1); //0x0086a056
	/*GoMind*/ public: const GoidColl& /*__thiscall*/ GetEnemiesVisible(); //0x00411e84
	/*GoMind*/ public: const GoidColl& /*__thiscall*/ GetFriendsVisible(); //0x00411e8b
	/*GoMind*/ public: const GoidColl& /*__thiscall*/ GetItemsVisible(); //0x00411e92
	/*GoMind*/ public: eActionOrigin /*__thiscall*/ GetFrontActionOrigin(); //0x00869ff5
	/*GoMind*/ public: eActorDisposition /*__thiscall*/ GetDispositionOrders() const; //0x00412336
	/*GoMind*/ public: eAggroType /*__thiscall*/ GetHighestAggroType() const; //0x0086c308
	/*GoMind*/ public: eCombatOrders /*__thiscall*/ GetCombatOrders() const; //0x00412328
	/*GoMind*/ public: eFocusOrders /*__thiscall*/ GetFocusOrders() const; //0x0041232f
	/*GoMind*/ public: eJobAbstractType /*__thiscall*/ GetFrontActionJat() const; //0x0086887c
	/*GoMind*/ public: eJobAbstractType /*__thiscall*/ GetLastEngagedJat() const; //0x00411b94
	/*GoMind*/ public: eJobAbstractType /*__thiscall*/ GetMatchingJob(const JobAttributeBits& unk1) const; //0x0086f056
	/*GoMind*/ public: eJobAbstractType /*__thiscall*/ GetMatchingPlay(const gpbstring<char>& unk1, const JobAttributeBits& unk2) const; //0x0086f0ea
	/*GoMind*/ public: eMovementOrders /*__thiscall*/ GetMovementOrders() const; //0x00412321
	/*GoMind*/ public: float /*__thiscall*/ Get2DDistance(Go* unk1) const; //0x0086aa15
	/*GoMind*/ public: float /*__thiscall*/ GetAggro(const Goid_* unk1); //0x0086efe8
	/*GoMind*/ public: float /*__thiscall*/ GetAggroTypeGlobalScalar() const; //0x00411bab
	/*GoMind*/ public: float /*__thiscall*/ GetAggroTypeScalar(eAggroType unk1) const; //0x0086ec85
	/*GoMind*/ public: float /*__thiscall*/ GetAngryDuration() const; //0x00411c6d
	/*GoMind*/ public: float /*__thiscall*/ GetAngryTimeLeft() const; //0x00411c74
	/*GoMind*/ public: float /*__thiscall*/ GetDistance(Go* unk1) const; //0x0086a802
	/*GoMind*/ public: float /*__thiscall*/ GetDistanceAtPlanEnd(Go* unk1) const; //0x0086a81b
	/*GoMind*/ public: float /*__thiscall*/ GetEngageRange() const; //0x00868b08
	/*GoMind*/ public: float /*__thiscall*/ GetFleeDistance() const; //0x0041233d
	/*GoMind*/ public: float /*__thiscall*/ GetHomeLeashDistance() const; //0x0086c60c
	/*GoMind*/ public: float /*__thiscall*/ GetIdealAttackDistance(const Go* unk1) const; //0x00868d5c
	/*GoMind*/ public: float /*__thiscall*/ GetIdealMeleeAttackDistance(const Go* unk1) const; //0x00868d29
	/*GoMind*/ public: float /*__thiscall*/ GetInnerComfortZoneRange() const; //0x00412313
	/*GoMind*/ public: float /*__thiscall*/ GetJumpRange() const; //0x004122c5
	/*GoMind*/ public: float /*__thiscall*/ GetJumpSpeed() const; //0x004122cc
	/*GoMind*/ public: float /*__thiscall*/ GetLimitedMovementRange() const; //0x004122be
	/*GoMind*/ public: float /*__thiscall*/ GetLootRange() const; //0x0041230c
	/*GoMind*/ public: float /*__thiscall*/ GetMeleeEngageRange() const; //0x004122f4
	/*GoMind*/ public: float /*__thiscall*/ GetMeleeWeaponRange() const; //0x00868b9d
	/*GoMind*/ public: float /*__thiscall*/ GetOuterComfortZoneRange() const; //0x0041231a
	/*GoMind*/ public: float /*__thiscall*/ GetPersonalSpaceRange() const; //0x00412305
	/*GoMind*/ public: float /*__thiscall*/ GetRangedEngageRange() const; //0x00868dbc
	/*GoMind*/ public: float /*__thiscall*/ GetSensorScanPeriod() const; //0x0086c388
	/*GoMind*/ public: float /*__thiscall*/ GetSightRange() const; //0x004122b7
	/*GoMind*/ public: float /*__thiscall*/ GetTeleportRange() const; //0x004122ed
	/*GoMind*/ public: float /*__thiscall*/ GetTimeElapsedSinceLastEnemySpotted() const; //0x0086adc6
	/*GoMind*/ public: float /*__thiscall*/ GetWeaponRange() const; //0x00868b57
	/*GoMind*/ public: int /*__thiscall*/ GetAllignedTeam() const; //0x00868af7
	/*GoMind*/ public: int /*__thiscall*/ GetEngagedMeAttackerCount(bool unk1) const; //0x0086c3d4
	/*GoMind*/ public: int /*__thiscall*/ GetEngagedMeMeleeAttackerCount(bool unk1) const; //0x0086c447
	/*GoMind*/ public: int /*__thiscall*/ GetEngagedMeMeleeSlotUsage(Go* unk1, bool unk2) const; //0x0086c542
	/*GoMind*/ public: int /*__thiscall*/ GetEngagedMeRangedAttackerCount(bool unk1) const; //0x0086c4cc
	/*GoMind*/ public: int /*__thiscall*/ GetMeleeSlotUsage() const; //0x00412344
	/*GoMind*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetMayAttack(bool unk1, unsigned long unk2); //0x00868deb
	/*GoMind*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetMayAttackHeroes(bool unk1, unsigned long unk2); //0x00868ee2
	/*GoMind*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetMayBeAttacked(bool unk1, unsigned long unk2); //0x00868fd9
	/*GoMind*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetMayBeAttackedByHeroes(bool unk1, unsigned long unk2); //0x008690d0
	/*GoMind*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetRank(unsigned long unk1); //0x0086869d
	/*GoMind*/ public: GoidColl& /*__thiscall*/ GetActorsInInnerComfortZone(); //0x00411ea3
	/*GoMind*/ public: GoidColl& /*__thiscall*/ GetActorsInOuterComfortZone(); //0x00411eaa
	/*GoMind*/ public: SiegePos& /*__thiscall*/ GetHomePosition(); //0x00868c61
	/*GoMind*/ public: SiegePos& /*__thiscall*/ GetInitialPosition(); //0x00868c13
	/*GoMind*/ public: SiegePos& /*__thiscall*/ GetLastExecutedUserAssignedActionPosition(); //0x00868bc5
	/*GoMind*/ public: unsigned long /*__thiscall*/ GetRank(); //0x00411b49
	/*GoMind*/ public: void /*__thiscall*/ AddAggro(float unk1, const Goid_* unk2, eAggroType unk3); //0x00874c60
	/*GoMind*/ public: void /*__thiscall*/ AddAggroToVisible(float unk1, const Goid_* unk2, eAggroType unk3); //0x00875ef0
	/*GoMind*/ public: void /*__thiscall*/ AddAggroToVisibleEnemies(float unk1, const Goid_* unk2, eAggroType unk3); //0x00874e61
	/*GoMind*/ public: void /*__thiscall*/ AddAggroToVisibleFriends(float unk1, const Goid_* unk2, eAggroType unk3); //0x00874e05
	/*GoMind*/ public: void /*__thiscall*/ Clear(); //0x00869dcf
	/*GoMind*/ public: void /*__thiscall*/ Clear(eJobQ unk1); //0x00869dba
	/*GoMind*/ public: void /*__thiscall*/ ClearActions(); //0x00411b1f
	/*GoMind*/ public: void /*__thiscall*/ ClearAggro(const Goid_* unk1); //0x008729a4
	/*GoMind*/ public: void /*__thiscall*/ ClearAllAggro(); //0x0086f01d
	/*GoMind*/ public: void /*__thiscall*/ ClearAndCommit(eJobQ unk1); //0x00871138
	/*GoMind*/ public: void /*__thiscall*/ ClearBrains(); //0x00411b17
	/*GoMind*/ public: void /*__thiscall*/ GetPositionAtPlanEnd(SiegePos& unk1); //0x0086a9c8
	/*GoMind*/ public: void /*__thiscall*/ MessageEngagedMe(const WorldMessage& unk1, const Goid_* unk2); //0x0086d608
	/*GoMind*/ public: void /*__thiscall*/ MessageEngagedMe(eWorldEvent unk1, const Goid_* unk2); //0x0086f98f
	/*GoMind*/ public: void /*__thiscall*/ MessageVisible(const WorldMessage& unk1); //0x0086cda1
	/*GoMind*/ public: void /*__thiscall*/ RCSetCombatOrders(eCombatOrders unk1); //0x0086af04
	/*GoMind*/ public: void /*__thiscall*/ RCSetDispositionOrders(eActorDisposition unk1); //0x0086b13e
	/*GoMind*/ public: void /*__thiscall*/ RCSetFocusOrders(eFocusOrders unk1); //0x0086b021
	/*GoMind*/ public: void /*__thiscall*/ RCSetLastEngagedObject(const Goid_* unk1, eJobAbstractType unk2, unsigned long unk3); //0x00868883
	/*GoMind*/ public: void /*__thiscall*/ RCSetMovementOrders(eMovementOrders unk1); //0x0086ade7
	/*GoMind*/ public: void /*__thiscall*/ RegisterFleeingFromMe(const Goid_* unk1, float unk2); //0x00874ebd
	/*GoMind*/ public: void /*__thiscall*/ ResetAngryTarget(); //0x00868da8
	/*GoMind*/ public: void /*__thiscall*/ RSCharge(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, float unk4, const Goid_* unk5); //0x008742c0
	/*GoMind*/ public: void /*__thiscall*/ RSCharge(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, float unk4); //0x00411f49
	/*GoMind*/ public: void /*__thiscall*/ RSDoJob(const JobReq& unk1); //0x00872d3b
	/*GoMind*/ public: void /*__thiscall*/ RSDoJobPacker(const_mem_ptr unk1); //0x0087270e
	/*GoMind*/ public: void /*__thiscall*/ RSDrink(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4); //0x008743be
	/*GoMind*/ public: void /*__thiscall*/ RSDrink(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3); //0x00411fa1
	/*GoMind*/ public: void /*__thiscall*/ RSDrinkLifeHealingPotion(eActionOrigin unk1); //0x008709f3
	/*GoMind*/ public: void /*__thiscall*/ RSDrinkManaHealingPotion(eActionOrigin unk1); //0x00870ae0
	/*GoMind*/ public: void /*__thiscall*/ RSDrop(const Goid_* unk1, const SiegePos& unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5); //0x00874369
	/*GoMind*/ public: void /*__thiscall*/ RSDrop(const Goid_* unk1, const SiegePos& unk2, eQPlace unk3, eActionOrigin unk4); //0x00411f83
	/*GoMind*/ public: void /*__thiscall*/ RSDropGold(int unk1, const SiegePos& unk2, eQPlace unk3, eActionOrigin unk4); //0x00875baf
	/*GoMind*/ public: void /*__thiscall*/ RSEquip(const Goid_* unk1, eEquipSlot unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5); //0x00874410
	/*GoMind*/ public: void /*__thiscall*/ RSEquip(const Goid_* unk1, eEquipSlot unk2, eQPlace unk3, eActionOrigin unk4); //0x00411fbc
	/*GoMind*/ public: void /*__thiscall*/ RSFace(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, float unk4, const Goid_* unk5); //0x00874465
	/*GoMind*/ public: void /*__thiscall*/ RSFace(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, float unk4); //0x00411fda
	/*GoMind*/ public: void /*__thiscall*/ RSFleeFromObject(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4); //0x0041201f
	/*GoMind*/ public: void /*__thiscall*/ RSFleeFromObject(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, float unk4, int unk5, const Goid_* unk6); //0x008744bd
	/*GoMind*/ public: void /*__thiscall*/ RSFleeFromObject(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, float unk4, int unk5); //0x0041203f
	/*GoMind*/ public: void /*__thiscall*/ RSFleeFromObject(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3); //0x00411ffc
	/*GoMind*/ public: void /*__thiscall*/ RSFollow(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, float unk4, const Goid_* unk5); //0x0087451b
	/*GoMind*/ public: void /*__thiscall*/ RSFollow(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, float unk4); //0x00412064
	/*GoMind*/ public: void /*__thiscall*/ RSGatherAndUse(const_mem_ptr unk1, const Goid_* unk2, eQPlace unk3, eActionOrigin unk4); //0x00875a17
	/*GoMind*/ public: void /*__thiscall*/ RSGatherAndUse(GoidColl& unk1, const Goid_* unk2, eQPlace unk3, eActionOrigin unk4); //0x0087688f
	/*GoMind*/ public: void /*__thiscall*/ RSGet(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4); //0x00874573
	/*GoMind*/ public: void /*__thiscall*/ RSGet(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3); //0x00412086
	/*GoMind*/ public: void /*__thiscall*/ RSGive(const Goid_* unk1, const Goid_* unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5); //0x008745c5
	/*GoMind*/ public: void /*__thiscall*/ RSGive(const Goid_* unk1, const Goid_* unk2, eQPlace unk3, eActionOrigin unk4); //0x004120a1
	/*GoMind*/ public: void /*__thiscall*/ RSGuard(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4); //0x0087461a
	/*GoMind*/ public: void /*__thiscall*/ RSGuard(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3); //0x004120bf
	/*GoMind*/ public: void /*__thiscall*/ RSHide(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4, const Goid_* unk5); //0x0087466c
	/*GoMind*/ public: void /*__thiscall*/ RSHide(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4); //0x004120da
	/*GoMind*/ public: void /*__thiscall*/ RSJump(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4, int unk5); //0x008746eb
	/*GoMind*/ public: void /*__thiscall*/ RSJump(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4); //0x00412115
	/*GoMind*/ public: void /*__thiscall*/ RSJump(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, int unk4); //0x0041212f
	/*GoMind*/ public: void /*__thiscall*/ RSJump(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3); //0x004120f8
	/*GoMind*/ public: void /*__thiscall*/ RSKnockback(const Goid_* unk1, float unk2, float unk3, eQPlace unk4, eActionOrigin unk5, const Goid_* unk6); //0x00874790
	/*GoMind*/ public: void /*__thiscall*/ RSKnockback(const Goid_* unk1, float unk2, float unk3, eQPlace unk4, eActionOrigin unk5); //0x0041214d
	/*GoMind*/ public: void /*__thiscall*/ RSListen(const Goid_* unk1, bool unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5); //0x00874810
	/*GoMind*/ public: void /*__thiscall*/ RSListen(const Goid_* unk1, bool unk2, eQPlace unk3, eActionOrigin unk4); //0x00412177
	/*GoMind*/ public: void /*__thiscall*/ RSMoveAppend(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4); //0x00412239
	/*GoMind*/ public: void /*__thiscall*/ RSMoveAppend(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, float unk4, const Goid_* unk5); //0x008748db
	/*GoMind*/ public: void /*__thiscall*/ RSMoveAppend(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, float unk4); //0x00412217
	/*GoMind*/ public: void /*__thiscall*/ RSMoveAppend(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3); //0x004121f6
	/*GoMind*/ public: void /*__thiscall*/ RSPatrol(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4); //0x00874960
	/*GoMind*/ public: void /*__thiscall*/ RSPatrol(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3); //0x00412257
	/*GoMind*/ public: void /*__thiscall*/ RSSendMessageToFrontAction(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4); //0x0086ce24
	/*GoMind*/ public: void /*__thiscall*/ RSSetCombatOrders(eCombatOrders unk1); //0x00875064
	/*GoMind*/ public: void /*__thiscall*/ RSSetDispositionOrders(eActorDisposition unk1); //0x00875306
	/*GoMind*/ public: void /*__thiscall*/ RSSetFocusOrders(eFocusOrders unk1); //0x008751b5
	/*GoMind*/ public: void /*__thiscall*/ RSSetMovementOrders(eMovementOrders unk1); //0x00874f13
	/*GoMind*/ public: void /*__thiscall*/ RSSlide(const SiegePos& unk1, float unk2, float unk3, eQPlace unk4, eActionOrigin unk5, const Goid_* unk6); //0x008749d1
	/*GoMind*/ public: void /*__thiscall*/ RSSlide(const SiegePos& unk1, float unk2, float unk3, eQPlace unk4, eActionOrigin unk5); //0x00412272
	/*GoMind*/ public: void /*__thiscall*/ RSStop(eActionOrigin unk1); //0x00874a8e
	/*GoMind*/ public: void /*__thiscall*/ RSTeleport(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid_* unk4); //0x00874ad6
	/*GoMind*/ public: void /*__thiscall*/ RSTeleport(const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3); //0x0041229c
	/*GoMind*/ public: void /*__thiscall*/ RSUnEquip(eEquipSlot unk1, eQPlace unk2, eActionOrigin unk3); //0x00874b47
	/*GoMind*/ public: void /*__thiscall*/ RSUse(const Goid_* unk1, eQPlace unk2, eActionOrigin unk3); //0x00874b75
	/*GoMind*/ public: void /*__thiscall*/ SDisable(bool unk1); //0x00875830
	/*GoMind*/ public: void /*__thiscall*/ SEnable(); //0x00875764
	/*GoMind*/ public: void /*__thiscall*/ SetActorAutoFidgets(bool unk1); //0x00412352
	/*GoMind*/ public: void /*__thiscall*/ SetActorWeaponPreference(eWeaponPreference unk1); //0x0041245f
	/*GoMind*/ public: void /*__thiscall*/ SetAggroTypeGlobalScalar(float unk1); //0x00411b9b
	/*GoMind*/ public: void /*__thiscall*/ SetAllignedTeam(int unk1); //0x00868afb
	/*GoMind*/ public: void /*__thiscall*/ SetAngryTarget(const Goid_* unk1, float unk2); //0x00868d8f
	/*GoMind*/ public: void /*__thiscall*/ SetGuardTarget(const Goid_* unk1); //0x00411b6d
	/*GoMind*/ public: void /*__thiscall*/ SetHomePosition(const SiegePos& unk1); //0x00868c96
	/*GoMind*/ public: void /*__thiscall*/ SetInitialPosition(const SiegePos& unk1); //0x00868c48
	/*GoMind*/ public: void /*__thiscall*/ SetLastExecutedUserAssignedActionPosition(const SiegePos& unk1); //0x00868bfa
	/*GoMind*/ public: void /*__thiscall*/ SetMayProcessAI(bool unk1); //0x0041239f
	/*GoMind*/ public: void /*__thiscall*/ SetMayProcessSensors(bool unk1); //0x004123c4
	/*GoMind*/ public: void /*__thiscall*/ SetRank(unsigned long unk1); //0x00411b4d
	/*GoMind*/ public: void /*__thiscall*/ SGatherAndUse(GopColl& unk1, const Goid_* unk2, eQPlace unk3, eActionOrigin unk4); //0x00874b9d
	/*GoMind*/ public: void /*__thiscall*/ SSetMayAttack(bool unk1); //0x0086b32b
	/*GoMind*/ public: void /*__thiscall*/ SSetMayAttackHeroes(bool unk1); //0x0086b33c
	/*GoMind*/ public: void /*__thiscall*/ SSetMayBeAttacked(bool unk1); //0x0086b34d
	/*GoMind*/ public: void /*__thiscall*/ SSetMayBeAttackedByHeroes(bool unk1); //0x0086b35e
	/*GoMind*/ public: void /*__thiscall*/ UnregisterFleeingFromMe(const Goid_* unk1); //0x008729de
	/*GoMind*/ public: void /*__thiscall*/ UnregisterFleeingFromMeByDistance(float unk1); //0x00872a23
};

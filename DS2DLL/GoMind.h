#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "Go.h"
#include "GoComponent.h"
#include "GoidScid.h"
#include "Job.h"
#include "JobAttributeBits.h"
#include "JobReq.h"
#include "QtColl.h"
#include "SiegePos.h"

class GoMind : public GoComponent {
public:
	$StaticMethod(0x00412564, FUBI_NetToInstance, GoMind*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x0041255b, FUBI_InstanceToNet, uint, GoMind* unk1);
	$Method(0x0041252e, GetBrainActive, bool);
	$ConstMethod(0x00412536, IsInUpdateScope, bool);
	$ConstMethod(0x0086da52, IsVisible, bool, const Goid* unk1);
	$Method(0x0086a3ba, JobRecentlyFailedToPathTo, bool, Go* unk1);
	$Method(0x0041250d, GetHandlingMessage, WorldMessage*);
	$Method(0x0041252a, GetInitialCommand, const Scid*);
	$Method(0x0041253f, GetTempGopColl1, GopColl&);
	$Method(0x00412546, GetTempGopColl2, GopColl&);
	$Method(0x0041254d, GetTempGopColl3, GopColl&);
	$Method(0x00412554, GetTempQtColl1, QtColl&);
	$Method(0x0086f9b6, ReqResetSensorsSelfAndVisible, void);
	$Method(0x00412511, RequestProcessHitEngaged, void);
	$Method(0x0086c67e, ResetSensors, void);
	$Method(0x00412519, SetInitialCommand, void, const Scid* unk1);
	$ConstMethod(0x0041240e, ActorAutoDefendsOthers, bool);
	$ConstMethod(0x00412418, ActorAutoHealsOthersLife, bool);
	$ConstMethod(0x00412421, ActorAutoHealsSelfLife, bool);
	$ConstMethod(0x0041242c, ActorAutoHealsSelfMana, bool);
	$ConstMethod(0x00412483, ActorAutoSwitchesToMagic, bool);
	$ConstMethod(0x0041246f, ActorAutoSwitchesToMelee, bool);
	$ConstMethod(0x00412478, ActorAutoSwitchesToRanged, bool);
	$ConstMethod(0x00412452, ActorPrefersMagic, bool);
	$ConstMethod(0x00412438, ActorPrefersMelee, bool);
	$ConstMethod(0x00412445, ActorPrefersRanged, bool);
	$ConstMethod(0x0086ba44, AmAttacking, bool);
	$ConstMethod(0x00411b27, AmBusy, bool);
	$ConstMethod(0x0086c20f, AmFacing, bool, Go* unk1);
	$ConstMethod(0x0086acc9, AmFacing, bool, const SiegePos& unk1);
	$ConstMethod(0x008687d8, AmGuarding, bool);
	$ConstMethod(0x00869d55, AmPatrolling, bool);
	$Method(0x0086aabd, AreAliveEnemiesVisible, bool);
	$Method(0x0086ab28, AreAliveFriendsVisible, bool);
	$ConstMethod(0x0086acb6, AreItemsVisible, bool);
	$ConstMethod(0x008687ea, CanOperateOn, bool, Go* unk1, bool unk2);
	$Method(0x00411b2f, CanOperateOn, bool, Go* unk1);
	$Method(0x0086bc37, DoingJobOriginatingFrom, bool, eJobQ unk1, Go* unk2);
	$Method(0x00412369, GetActorAutoFidgets, bool);
	$ConstMethod(0x0086f225, GetAutoItems, bool, eQueryTrait unk1, GopColl& unk2);
	$ConstMethod(0x00870502, GetAutoItems, bool, GopColl& unk1);
	$ConstMethod(0x0086b25b, GetAutoItems, bool, QtColl& unk1, GopColl& unk2);
	$ConstMethod(0x004122d3, GetCanJump, bool);
	$ConstMethod(0x00870476, GetClosestVisible, bool, eQueryTrait unk1, GopColl& unk2);
	$ConstMethod(0x0086e38a, GetClosestVisible, bool, float unk1, QtColl& unk2, GopColl& unk3);
	$ConstMethod(0x00411dd2, GetClosestVisible, bool, QtColl& unk1, GopColl& unk2);
	$Method(0x0086e58e, GetClosestVisibleEnemies, bool, float unk1, GopColl& unk2);
	$Method(0x00411e52, GetClosestVisibleEnemies, bool, GopColl& unk1);
	$Method(0x0086e609, GetClosestVisibleFriends, bool, float unk1, GopColl& unk2);
	$Method(0x00411e6b, GetClosestVisibleFriends, bool, GopColl& unk1);
	$ConstMethod(0x0086ff5a, GetEnemiesAndSummonsInSphere, bool, float unk1, GopColl& unk2);
	$ConstMethod(0x0086fed4, GetEnemiesInSphere, bool, float unk1, GopColl& unk2);
	$ConstMethod(0x0086f124, GetEngagedMe, bool, GopColl& unk1);
	$ConstMethod(0x0086f199, GetEngagedMeEnemies, bool, GopColl& unk1);
	$ConstMethod(0x008704bc, GetFarthestVisible, bool, eQueryTrait unk1, GopColl& unk2);
	$ConstMethod(0x0086e65e, GetFarthestVisible, bool, QtColl& unk1, GopColl& unk2);
	$ConstMethod(0x0087000e, GetFriendsAndSummonsInSphere, bool, float unk1, GopColl& unk2);
	$ConstMethod(0x0086ff88, GetFriendsInSphere, bool, float unk1, GopColl& unk2);
	$ConstMethod(0x0086fd67, GetItemsInSphere, bool, float unk1, GopColl& unk2);
	$ConstMethod(0x0086c645, GetLeashTeleportToHome, bool);
	$ConstMethod(0x004123de, GetMayAttack, bool);
	$ConstMethod(0x004123ea, GetMayAttackHeroes, bool);
	$ConstMethod(0x004123f6, GetMayBeAttacked, bool);
	$ConstMethod(0x00412402, GetMayBeAttackedByHeroes, bool);
	$ConstMethod(0x00412394, GetMayProcessAI, bool);
	$ConstMethod(0x004123b8, GetMayProcessSensors, bool);
	$ConstMethod(0x0086fded, GetOccupantsInSphere, bool, float unk1, GopColl& unk2);
	$ConstMethod(0x0086aa8f, GetPartyMembersAndSummonsInSphere, bool, float unk1, GopColl* unk2);
	$ConstMethod(0x0086aa2e, GetPartyMembersInSphere, bool, float unk1, GopColl* unk2);
	$ConstMethod(0x00870058, GetVisible, bool, eQueryTrait unk1, GopColl& unk2, float unk3);
	$ConstMethod(0x00411c7b, GetVisible, bool, eQueryTrait unk1, GopColl& unk2);
	$ConstMethod(0x0086dd66, GetVisible, bool, QtColl& unk1, GoidColl& unk2, float unk3);
	$ConstMethod(0x0087003c, GetVisible, bool, QtColl& unk1, GoidColl& unk2);
	$ConstMethod(0x0086de0e, GetVisible, bool, QtColl& unk1, GopColl& unk2, float unk3);
	$ConstMethod(0x00411c97, GetVisible, bool, QtColl& unk1, GopColl& unk2);
	$ConstMethod(0x0086def7, GetVisibleAtPosition, bool, const SiegePos& unk1, QtColl& unk2, GopColl& unk3, float unk4);
	$ConstMethod(0x00870122, GetVisibleCastTargets, bool, GopColl& unk1, Go* unk2, bool unk3, float unk4, uint unk5);
	$ConstMethod(0x00411d99, GetVisibleCastTargets, bool, GopColl& unk1, Go* unk2, bool unk3, float unk4);
	$ConstMethod(0x00411d7c, GetVisibleCastTargets, bool, GopColl& unk1, Go* unk2, bool unk3);
	$ConstMethod(0x0086e025, GetVisibleEnemies, bool, GopColl& unk1, float unk2);
	$ConstMethod(0x00411d18, GetVisibleEnemies, bool, GopColl& unk1);
	$ConstMethod(0x0086e0a0, GetVisibleFriends, bool, GopColl& unk1, float unk2);
	$ConstMethod(0x00411d31, GetVisibleFriends, bool, GopColl& unk1);
	$ConstMethod(0x008700a5, GetVisibleFriendsForPlay, bool, GopColl& unk1, const char* unk2);
	$ConstMethod(0x0086e0f5, GetVisibleItems, bool, GopColl& unk1, float unk2);
	$ConstMethod(0x00411d4a, GetVisibleItems, bool, GopColl& unk1);
	$ConstMethod(0x0086e14a, GetVisibleItemsToLoot, bool, GopColl& unk1, float unk2);
	$ConstMethod(0x00411d63, GetVisibleItemsToLoot, bool, GopColl& unk1);
	$ConstMethod(0x00411b06, HasActionJatInQueue, bool, eJobAbstractType unk1);
	$ConstMethod(0x00411af5, HasBrainJatInQueue, bool, eJobAbstractType unk1);
	$Method(0x008718c8, InitBrain, bool);
	$ConstMethod(0x0086a42d, IsActorMovingAway, bool, Go* unk1);
	$ConstMethod(0x00411c5b, IsAngry, bool);
	$ConstMethod(0x00868a7c, IsEnemy, bool, const Go* unk1);
	$ConstMethod(0x0086f028, IsFleeingFromMe, bool, const Goid* unk1);
	$ConstMethod(0x00411b40, IsFlickCaptured, bool);
	$ConstMethod(0x00868ad9, IsFriend, bool, const Go* unk1);
	$Method(0x0086a03e, IsFrontActionHumanInterruptable, bool);
	$ConstMethod(0x00411b7a, IsGuardingTarget, bool);
	$ConstMethod(0x0086bfed, IsInEngageRange, bool, Go* unk1, Go* unk2);
	$ConstMethod(0x0086bfcf, IsInEngageRange, bool, Go* unk1);
	$ConstMethod(0x0086bf69, IsInJumpRange, bool, Go* unk1);
	$ConstMethod(0x0086c02c, IsInMeleeEngageRange, bool, Go* unk1);
	$ConstMethod(0x0086bf2b, IsInRange, bool, Go* unk1, float unk2);
	$ConstMethod(0x0086c045, IsInRangedEngageRange, bool, Go* unk1);
	$ConstMethod(0x0086bf9b, IsInSpellRange, bool, Go* unk1, Go* unk2);
	$ConstMethod(0x0086bf82, IsInTeleportRange, bool, Go* unk1);
	$ConstMethod(0x0086bf4b, IsInWeaponRange, bool, Go* unk1);
	$ConstMethod(0x0086ada3, IsLifeHigh, bool);
	$ConstMethod(0x0086ad80, IsLifeLow, bool);
	$ConstMethod(0x0086a50d, IsLosClear, bool, Go* unk1);
	$ConstMethod(0x0086a6c4, IsLosClear, bool, const SiegePos& unk1);
	$ConstMethod(0x0086c365, IsManaHigh, bool);
	$ConstMethod(0x0086c342, IsManaLow, bool);
	$Method(0x0086c5bd, IsMeleeSlotFree, bool, Go* unk1);
	$ConstMethod(0x0086a0f3, IsRidingElevator, bool);
	$ConstMethod(0x0086ba59, MayAIInterrupt, bool);
	$ConstMethod(0x00868caf, MayAttackTarget, bool, const Go* unk1, bool unk2);
	$Method(0x0086f26b, MayAutoCastLifeDamagingSpell, bool);
	$Method(0x0086f2fb, MayAutoCastLifeHealingSpell, bool);
	$Method(0x00869e11, MaySDoJob, bool, eJobAbstractType unk1);
	$ConstMethod(0x0041248f, OnAlertProjectileNearMissedAttack, bool);
	$ConstMethod(0x0041249b, OnAlertProjectileNearMissedFlee, bool);
	$ConstMethod(0x004124a7, OnEnemyEnteredICZAttack, bool);
	$ConstMethod(0x004124b3, OnEnemyEnteredICZFlee, bool);
	$ConstMethod(0x004124bd, OnEnemyEnteredICZSwitchToMelee, bool);
	$ConstMethod(0x004124c6, OnEnemyEnteredOCZAttack, bool);
	$ConstMethod(0x004124d1, OnEnemyEnteredOCZFlee, bool);
	$ConstMethod(0x004124dd, OnEnemyEnteredWeaponEngageRangeAttack, bool);
	$ConstMethod(0x004124f5, OnEngagedFleedAbortAttack, bool);
	$ConstMethod(0x00412501, OnEngagedLostConsciousnessAbortAttack, bool);
	$ConstMethod(0x004124e9, OnFriendEnteredOCZFlee, bool);
	$Method(0x00874012, RSAttack, bool, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, bool unk4, const Goid* unk5, int unk6);
	$Method(0x00411ef0, RSAttack, bool, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, bool unk4, const Goid* unk5);
	$Method(0x00411ed0, RSAttack, bool, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, bool unk4);
	$Method(0x00411eb1, RSAttack, bool, const Goid* unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x008741d0, RSCast, bool, const Goid* unk1, const Goid* unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5);
	$Method(0x00411f0d, RSCast, bool, const Goid* unk1, const Goid* unk2, eQPlace unk3, eActionOrigin unk4);
	$Method(0x00874251, RSCastAtPosition, bool, const SiegePos& unk1, const Goid* unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5);
	$Method(0x00411f2b, RSCastAtPosition, bool, const SiegePos& unk1, const Goid* unk2, eQPlace unk3, eActionOrigin unk4);
	$Method(0x00874318, RSCollectLoot, bool, eQPlace unk1, eActionOrigin unk2, const Goid* unk3);
	$Method(0x00411f6b, RSCollectLoot, bool, eQPlace unk1, eActionOrigin unk2);
	$Method(0x004121d8, RSMove, bool, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4);
	$Method(0x00874869, RSMove, bool, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, float unk4, const Goid* unk5);
	$Method(0x004121b6, RSMove, bool, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, float unk4);
	$Method(0x00412195, RSMove, bool, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x00869ec7, Send, bool, const WorldMessage& unk1);
	$Method(0x00869ef3, SendDelayed, bool, const WorldMessage& unk1, float unk2);
	$Method(0x0086d593, SetJatCloneSource, bool, eJobAbstractType unk1, const GPBString& unk2);
	$ConstMethod(0x00869de8, UnderstandsJob, bool, eJobAbstractType unk1);
	$Method(0x0086c22d, GetAttackTargetWeapon, Go*, Go* unk1, bool unk2, bool unk3);
	$Method(0x00411b5a, GetAttackTargetWeapon, Go*, Go* unk1);
	$ConstMethod(0x0086e7ec, GetBestFocusEnemy, Go*);
	$ConstMethod(0x00411e07, GetClosestVisible, Go*, eQueryTrait unk1);
	$ConstMethod(0x0086e44e, GetClosestVisible, Go*, float unk1, eQueryTrait unk2);
	$ConstMethod(0x0086c16e, GetClosestVisible, Go*, float unk1, QtColl& unk2);
	$ConstMethod(0x00411dee, GetClosestVisible, Go*, QtColl& unk1);
	$ConstMethod(0x004141d6, GetClosestVisibleEnemy, Go*);
	$ConstMethod(0x00411e20, GetClosestVisibleEnemy, Go*, bool unk1);
	$ConstMethod(0x0086e496, GetClosestVisibleEnemy, Go*, float unk1, bool unk2);
	$ConstMethod(0x004141de, GetClosestVisibleFriend, Go*);
	$ConstMethod(0x00411e39, GetClosestVisibleFriend, Go*, bool unk1);
	$ConstMethod(0x0086e525, GetClosestVisibleFriend, Go*, float unk1, bool unk2);
	$ConstMethod(0x0086ab95, GetClosestVisibleItemToLoot, Go*, bool unk1);
	$ConstMethod(0x0086e6ef, GetFarthestVisible, Go*, eQueryTrait unk1);
	$ConstMethod(0x0086d0ce, GetFarthestVisible, Go*, QtColl& unk1);
	$ConstMethod(0x0086e730, GetFarthestVisibleEnemy, Go*);
	$ConstMethod(0x0086e79d, GetFarthestVisibleFriend, Go*);
	$ConstMethod(0x0086e7e4, GetFarthestVisibleItem, Go*);
	$ConstMethod(0x00411bb2, GetHighestVisibleAggro, Go*);
	$ConstMethod(0x00411bef, GetHighestVisibleAggro, Go*, const Goid* unk1);
	$ConstMethod(0x0086eca8, GetHighestVisibleAggro, Go*, float unk1, float unk2, bool unk3, const Goid* unk4);
	$ConstMethod(0x00411bcd, GetHighestVisibleAggro, Go*, float unk1);
	$Method(0x004141c2, GetOwningCoach, Go*);
	$ConstMethod(0x0086deaf, GetVisible, Go*, eQueryTrait unk1, float unk2);
	$ConstMethod(0x00411ccc, GetVisible, Go*, eQueryTrait unk1);
	$ConstMethod(0x0086c05e, GetVisible, Go*, QtColl& unk1, float unk2);
	$ConstMethod(0x00411cb3, GetVisible, Go*, QtColl& unk1);
	$ConstMethod(0x0086dfda, GetVisibleAtPosition, Go*, const SiegePos& unk1, eQueryTrait unk2, float unk3);
	$ConstMethod(0x00411ce5, GetVisibleAtPosition, Go*, const SiegePos& unk1, float unk2);
	$ConstMethod(0x0086c0d5, GetVisibleAtPosition, Go*, const SiegePos& unk1, QtColl& unk2, float unk3);
	$ConstMethod(0x00411cfd, GetVisibleAtPosition, Go*, const SiegePos& unk1);
	$ConstMethod(0x008703fd, GetVisibleCastTarget, Go*, Go* unk1, bool unk2, bool unk3, float unk4);
	$ConstMethod(0x00411db7, GetVisibleCastTarget, Go*, Go* unk1, bool unk2, bool unk3);
	$Method(0x008715cf, GetFrontActionStateName, GPBString);
	$ConstMethod(0x00411ae4, GetActionJobInQueue, Job*, eJobAbstractType unk1);
	$ConstMethod(0x00869f80, GetFrontJob, Job*, eJobQ unk1);
	$ConstMethod(0x00869fb1, GetJobInQueue, Job*, eJobAbstractType unk1, eJobQ unk2);
	$Method(0x00871162, SDoJob, Job*, const JobReq& unk1);
	$ConstMethod(0x0041234b, GetPlayAttributes, const JobAttributeBits&);
	$ConstMethod(0x00411c54, GetAngryTarget, const Goid*);
	$Method(0x00869fe3, GetFrontActionGoalObject, const Goid*);
	$ConstMethod(0x00411b89, GetGuardTarget, const Goid*);
	$ConstMethod(0x00411c0d, GetHighestAggro, const Goid*);
	$ConstMethod(0x0086ee5e, GetHighestAggro, const Goid*, float unk1, bool unk2, const Goid* unk3);
	$ConstMethod(0x00411c3c, GetHighestAggro, const Goid*, float unk1, const Goid* unk2);
	$ConstMethod(0x00411c21, GetHighestAggro, const Goid*, float unk1);
	$ConstMethod(0x00411b8d, GetLastEngagedObject, const Goid*);
	$Method(0x0086a056, UpdateLastEngagedObject, const Goid*, const Goid* unk1);
	$Method(0x00411e84, GetEnemiesVisible, const GoidColl&);
	$Method(0x00411e8b, GetFriendsVisible, const GoidColl&);
	$Method(0x00411e92, GetItemsVisible, const GoidColl&);
	$Method(0x00869ff5, GetFrontActionOrigin, eActionOrigin);
	$ConstMethod(0x00412336, GetDispositionOrders, eActorDisposition);
	$ConstMethod(0x0086c308, GetHighestAggroType, eAggroType);
	$ConstMethod(0x00412328, GetCombatOrders, eCombatOrders);
	$ConstMethod(0x0041232f, GetFocusOrders, eFocusOrders);
	$ConstMethod(0x0086887c, GetFrontActionJat, eJobAbstractType);
	$ConstMethod(0x00411b94, GetLastEngagedJat, eJobAbstractType);
	$ConstMethod(0x0086f056, GetMatchingJob, eJobAbstractType, const JobAttributeBits& unk1);
	$ConstMethod(0x0086f0ea, GetMatchingPlay, eJobAbstractType, const GPBString& unk1, const JobAttributeBits& unk2);
	$ConstMethod(0x00412321, GetMovementOrders, eMovementOrders);
	$ConstMethod(0x0086aa15, Get2DDistance, float, Go* unk1);
	$Method(0x0086efe8, GetAggro, float, const Goid* unk1);
	$ConstMethod(0x00411bab, GetAggroTypeGlobalScalar, float);
	$ConstMethod(0x0086ec85, GetAggroTypeScalar, float, eAggroType aggroType);
	$ConstMethod(0x00411c6d, GetAngryDuration, float);
	$ConstMethod(0x00411c74, GetAngryTimeLeft, float);
	$ConstMethod(0x0086a802, GetDistance, float, Go* unk1);
	$ConstMethod(0x0086a81b, GetDistanceAtPlanEnd, float, Go* unk1);
	$ConstMethod(0x00868b08, GetEngageRange, float);
	$ConstMethod(0x0041233d, GetFleeDistance, float);
	$ConstMethod(0x0086c60c, GetHomeLeashDistance, float);
	$ConstMethod(0x00868d5c, GetIdealAttackDistance, float, const Go* unk1);
	$ConstMethod(0x00868d29, GetIdealMeleeAttackDistance, float, const Go* unk1);
	$ConstMethod(0x00412313, GetInnerComfortZoneRange, float);
	$ConstMethod(0x004122c5, GetJumpRange, float);
	$ConstMethod(0x004122cc, GetJumpSpeed, float);
	$ConstMethod(0x004122be, GetLimitedMovementRange, float);
	$ConstMethod(0x0041230c, GetLootRange, float);
	$ConstMethod(0x004122f4, GetMeleeEngageRange, float);
	$ConstMethod(0x00868b9d, GetMeleeWeaponRange, float);
	$ConstMethod(0x0041231a, GetOuterComfortZoneRange, float);
	$ConstMethod(0x00412305, GetPersonalSpaceRange, float);
	$ConstMethod(0x00868dbc, GetRangedEngageRange, float);
	$ConstMethod(0x0086c388, GetSensorScanPeriod, float);
	$ConstMethod(0x004122b7, GetSightRange, float);
	$ConstMethod(0x004122ed, GetTeleportRange, float);
	$ConstMethod(0x0086adc6, GetTimeElapsedSinceLastEnemySpotted, float);
	$ConstMethod(0x00868b57, GetWeaponRange, float);
	$ConstMethod(0x00868af7, GetAllignedTeam, int);
	$ConstMethod(0x0086c3d4, GetEngagedMeAttackerCount, int, bool unk1);
	$ConstMethod(0x0086c447, GetEngagedMeMeleeAttackerCount, int, bool unk1);
	$ConstMethod(0x0086c542, GetEngagedMeMeleeSlotUsage, int, Go* unk1, bool unk2);
	$ConstMethod(0x0086c4cc, GetEngagedMeRangedAttackerCount, int, bool unk1);
	$ConstMethod(0x00412344, GetMeleeSlotUsage, int);
	$Method(0x00868deb, RCSetMayAttack, FuBiCookie*, bool unk1, uint unk2);
	$Method(0x00868ee2, RCSetMayAttackHeroes, FuBiCookie*, bool unk1, uint unk2);
	$Method(0x00868fd9, RCSetMayBeAttacked, FuBiCookie*, bool unk1, uint unk2);
	$Method(0x008690d0, RCSetMayBeAttackedByHeroes, FuBiCookie*, bool unk1, uint unk2);
	$Method(0x0086869d, RSSetRank, FuBiCookie*, uint unk1);
	$Method(0x00411ea3, GetActorsInInnerComfortZone, GoidColl&);
	$Method(0x00411eaa, GetActorsInOuterComfortZone, GoidColl&);
	$Method(0x00868c61, GetHomePosition, SiegePos&);
	$Method(0x00868c13, GetInitialPosition, SiegePos&);
	$Method(0x00868bc5, GetLastExecutedUserAssignedActionPosition, SiegePos&);
	$Method(0x00411b49, GetRank, uint);
	$Method(0x00874c60, AddAggro, void, float unk1, const Goid* unk2, eAggroType aggroType);
	$Method(0x00875ef0, AddAggroToVisible, void, float unk1, const Goid* unk2, eAggroType aggroType);
	$Method(0x00874e61, AddAggroToVisibleEnemies, void, float unk1, const Goid* unk2, eAggroType aggroType);
	$Method(0x00874e05, AddAggroToVisibleFriends, void, float unk1, const Goid* unk2, eAggroType aggroType);
	$Method(0x00869dcf, Clear, void);
	$Method(0x00869dba, Clear, void, eJobQ unk1);
	$Method(0x00411b1f, ClearActions, void);
	$Method(0x008729a4, ClearAggro, void, const Goid* unk1);
	$Method(0x0086f01d, ClearAllAggro, void);
	$Method(0x00871138, ClearAndCommit, void, eJobQ unk1);
	$Method(0x00411b17, ClearBrains, void);
	$Method(0x0086a9c8, GetPositionAtPlanEnd, void, SiegePos& unk1);
	$Method(0x0086d608, MessageEngagedMe, void, const WorldMessage& unk1, const Goid* unk2);
	$Method(0x0086f98f, MessageEngagedMe, void, eWorldEvent unk1, const Goid* unk2);
	$Method(0x0086cda1, MessageVisible, void, const WorldMessage& unk1);
	$Method(0x0086af04, RCSetCombatOrders, void, eCombatOrders unk1);
	$Method(0x0086b13e, RCSetDispositionOrders, void, eActorDisposition unk1);
	$Method(0x0086b021, RCSetFocusOrders, void, eFocusOrders unk1);
	$Method(0x00868883, RCSetLastEngagedObject, void, const Goid* unk1, eJobAbstractType unk2, uint unk3);
	$Method(0x0086ade7, RCSetMovementOrders, void, eMovementOrders unk1);
	$Method(0x00874ebd, RegisterFleeingFromMe, void, const Goid* unk1, float unk2);
	$Method(0x00868da8, ResetAngryTarget, void);
	$Method(0x008742c0, RSCharge, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, float unk4, const Goid* unk5);
	$Method(0x00411f49, RSCharge, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, float unk4);
	$Method(0x00872d3b, RSDoJob, void, const JobReq& unk1);
	$Method(0x0087270e, RSDoJobPacker, void, const_mem_ptr unk1);
	$Method(0x008743be, RSDrink, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4);
	$Method(0x00411fa1, RSDrink, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x008709f3, RSDrinkLifeHealingPotion, void, eActionOrigin unk1);
	$Method(0x00870ae0, RSDrinkManaHealingPotion, void, eActionOrigin unk1);
	$Method(0x00874369, RSDrop, void, const Goid* unk1, const SiegePos& unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5);
	$Method(0x00411f83, RSDrop, void, const Goid* unk1, const SiegePos& unk2, eQPlace unk3, eActionOrigin unk4);
	$Method(0x00875baf, RSDropGold, void, int unk1, const SiegePos& unk2, eQPlace unk3, eActionOrigin unk4);
	$Method(0x00411fbc, RSEquip, void, const Goid* unk1, eEquipSlot unk2, eQPlace unk3, eActionOrigin unk4);
	$Method(0x00874410, RSEquip, void, const Goid* unk1, eEquipSlot unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5);
	$Method(0x00874465, RSFace, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, float unk4, const Goid* unk5);
	$Method(0x00411fda, RSFace, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, float unk4);
	$Method(0x0041201f, RSFleeFromObject, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4);
	$Method(0x008744bd, RSFleeFromObject, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, float unk4, int unk5, const Goid* unk6);
	$Method(0x0041203f, RSFleeFromObject, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, float unk4, int unk5);
	$Method(0x00411ffc, RSFleeFromObject, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x0087451b, RSFollow, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, float unk4, const Goid* unk5);
	$Method(0x00412064, RSFollow, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, float unk4);
	$Method(0x00875a17, RSGatherAndUse, void, const_mem_ptr unk1, const Goid* unk2, eQPlace unk3, eActionOrigin unk4);
	$Method(0x0087688f, RSGatherAndUse, void, GoidColl& unk1, const Goid* unk2, eQPlace unk3, eActionOrigin unk4);
	$Method(0x00874573, RSGet, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4);
	$Method(0x00412086, RSGet, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x008745c5, RSGive, void, const Goid* unk1, const Goid* unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5);
	$Method(0x004120a1, RSGive, void, const Goid* unk1, const Goid* unk2, eQPlace unk3, eActionOrigin unk4);
	$Method(0x0087461a, RSGuard, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4);
	$Method(0x004120bf, RSGuard, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x0087466c, RSHide, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4, const Goid* unk5);
	$Method(0x004120da, RSHide, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4);
	$Method(0x008746eb, RSJump, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4, int unk5);
	$Method(0x00412115, RSJump, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4);
	$Method(0x0041212f, RSJump, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, int unk4);
	$Method(0x004120f8, RSJump, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x00874790, RSKnockback, void, const Goid* unk1, float unk2, float unk3, eQPlace unk4, eActionOrigin unk5, const Goid* unk6);
	$Method(0x0041214d, RSKnockback, void, const Goid* unk1, float unk2, float unk3, eQPlace unk4, eActionOrigin unk5);
	$Method(0x00874810, RSListen, void, const Goid* unk1, bool unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5);
	$Method(0x00412177, RSListen, void, const Goid* unk1, bool unk2, eQPlace unk3, eActionOrigin unk4);
	$Method(0x00412239, RSMoveAppend, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4);
	$Method(0x008748db, RSMoveAppend, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, float unk4, const Goid* unk5);
	$Method(0x00412217, RSMoveAppend, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, float unk4);
	$Method(0x004121f6, RSMoveAppend, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x00874960, RSPatrol, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4);
	$Method(0x00412257, RSPatrol, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x0086ce24, RSSendMessageToFrontAction, void, eWorldEvent unk1, const Goid* unk2, const Goid* unk3, uint unk4);
	$Method(0x00875064, RSSetCombatOrders, void, eCombatOrders unk1);
	$Method(0x00875306, RSSetDispositionOrders, void, eActorDisposition unk1);
	$Method(0x008751b5, RSSetFocusOrders, void, eFocusOrders unk1);
	$Method(0x00874f13, RSSetMovementOrders, void, eMovementOrders unk1);
	$Method(0x008749d1, RSSlide, void, const SiegePos& unk1, float unk2, float unk3, eQPlace unk4, eActionOrigin unk5, const Goid* unk6);
	$Method(0x00412272, RSSlide, void, const SiegePos& unk1, float unk2, float unk3, eQPlace unk4, eActionOrigin unk5);
	$Method(0x00874a8e, RSStop, void, eActionOrigin unk1);
	$Method(0x00874ad6, RSTeleport, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3, const Goid* unk4);
	$Method(0x0041229c, RSTeleport, void, const SiegePos& unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x00874b47, RSUnEquip, void, eEquipSlot unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x00874b75, RSUse, void, const Goid* unk1, eQPlace unk2, eActionOrigin unk3);
	$Method(0x00875830, SDisable, void, bool unk1);
	$Method(0x00875764, SEnable, void);
	$Method(0x00412352, SetActorAutoFidgets, void, bool unk1);
	$Method(0x0041245f, SetActorWeaponPreference, void, eWeaponPreference unk1);
	$Method(0x00411b9b, SetAggroTypeGlobalScalar, void, float unk1);
	$Method(0x00868afb, SetAllignedTeam, void, int unk1);
	$Method(0x00868d8f, SetAngryTarget, void, const Goid* unk1, float unk2);
	$Method(0x00411b6d, SetGuardTarget, void, const Goid* unk1);
	$Method(0x00868c96, SetHomePosition, void, const SiegePos& unk1);
	$Method(0x00868c48, SetInitialPosition, void, const SiegePos& unk1);
	$Method(0x00868bfa, SetLastExecutedUserAssignedActionPosition, void, const SiegePos& unk1);
	$Method(0x0041239f, SetMayProcessAI, void, bool unk1);
	$Method(0x004123c4, SetMayProcessSensors, void, bool unk1);
	$Method(0x00411b4d, SetRank, void, uint unk1);
	$Method(0x00874b9d, SGatherAndUse, void, GopColl& unk1, const Goid* unk2, eQPlace unk3, eActionOrigin unk4);
	$Method(0x0086b32b, SSetMayAttack, void, bool unk1);
	$Method(0x0086b33c, SSetMayAttackHeroes, void, bool unk1);
	$Method(0x0086b34d, SSetMayBeAttacked, void, bool unk1);
	$Method(0x0086b35e, SSetMayBeAttackedByHeroes, void, bool unk1);
	$Method(0x008729de, UnregisterFleeingFromMe, void, const Goid* unk1);
	$Method(0x00872a23, UnregisterFleeingFromMeByDistance, void, float unk1);

    enum RequestFlags {
        PROCESS_HIT_ENGAGED = EnumFlag(4),
    };

    enum Flags {
        BRAIN_ACTIVE = EnumFlag(2),
        IN_UPDATE_SCOPE = EnumFlag(6),
    };

    enum ActorFlags {
        AUTO_FIDGETS = EnumFlag(1),
        MAY_PROCESS_AI = EnumFlag(2),
        MAY_PROCESS_SENSORS = EnumFlag(2),
        MAY_ATTACK = EnumFlag(4),
        MAY_ATTACK_HEROES = EnumFlag(5),
        MAY_BE_ATTACKED = EnumFlag(6),
        MAY_BE_ATTACKED_BY_HEROES = EnumFlag(7),
        AUTO_DEFENDS_OTHERS = EnumFlag(8),
        AUTO_HEALS_OTHERS_LIFE = EnumFlag(9),
        AUTO_HEALS_SELF_LIFE = EnumFlag(10),
        AUTO_HEALS_SELF_MANA = EnumFlag(11),
    };

    enum Flags3 {
        AUTO_SWITCHES_TO_MELEE = EnumFlag(2),
        AUTO_SWITCHES_TO_RANGED = EnumFlag(2),
        AUTO_SWITCHES_TO_MAGIC = EnumFlag(3),
        ON_ALERT_PROJECTILE_NEAR_MISSED_ATTACK = EnumFlag(4),
        ON_ALERT_PROJECTILE_NEAR_MISSED_FLEE = EnumFlag(5),
        ON_ENEMY_ENTERED_ICZ_ATTACK = EnumFlag(7),
        ON_ENEMY_ENTERED_ICZ_FLEE = EnumFlag(8),
        ON_ENEMY_ENTERED_ICZ_SWITCH_TO_MELEE = EnumFlag(9),
        ON_ENEMY_ENTERED_OCZ_ATTACK = EnumFlag(10),
        ON_ENEMY_ENTERED_OCZ_FLEE = EnumFlag(11),
        ON_ENEMY_ENTERED_WEAPON_ENGAGE_RANGE_ATTACK = EnumFlag(12),
        ON_ENGAGED_FLEED_ABORT_ATTACK = EnumFlag(13),
        ON_ENGAGED_LOST_CONSCIOUSNESS_ABORT_ATTACK = EnumFlag(14),
        ON_FRIEND_ENTERED_OCZ_FLEE = EnumFlag(15),
    };

    // 0x014
    Flags flags;
    // 0x018
    $Padding(0x018, 0x044);
    // 0x044
    Scid* initialCommand = Scid::Invalid;
    // 0x048
    Scid* scid048 = Scid::Invalid;
    // 0x04c
    $Padding(0x04c, 0x058);
    // 0x058
    WorldMessage* handlingMessage;
    // 0x05c
    $Padding(0x05c, 0x060);
    // 0x060
    uint rank;
    // 0x064
    $Padding(0x064, 0x068);
    // 0x068
    int allignedTeam;
    // 0x06c
    Goid* goid06C = Goid::Invalid;
    // 0x070
    Goid* guardTarget = Goid::Invalid;
    // 0x074
    $Padding(0x074, 0x09c);
    // 0x09c
    RequestFlags requestFlags;
    // 0x0a0
    float aggroTypeGlobalScalar;
    // 0x0a4
    $Padding(0x0a4, 0x100);
    // 0x100
    Goid* angryTarget;
    // 0x104
    float angryDuration;
    // 0x108
    $Padding(0x108, 0x10c);
    // 0x10c
    float angryTimeLeft;
    // 0x110
    eJobAbstractType lastEngagedJat;
    // 0x114
    Goid* lastEngagedObject;
    // 0x118
    $Padding(0x118, 0x238);
    // 0x238
    double lastEnemySpottedTime;
    // 0x240
    GopColl tempGopColl1;
    // 0x248
    GopColl tempGopColl2;
    // 0x250
    GopColl tempGopColl3;
    // 0x258
    QtColl tempQtColl1;
    // 0x260
    $Padding(0x260, 0x26c);
    // 0x26c
    JobAttributeBits playAttributes;
    // 0x280
    ActorFlags actorFlags;
    // 0x284
    eWeaponPreference weaponPreference;
    // 0x288
    $Padding(0x288, 0x28c);
    // 0x28c
    eActorDisposition dispositionOrders;
    // 0x290
    eMovementOrders movementOrders;
    // 0x294
    eCombatOrders combatOrders;
    // 0x298
    eFocusOrders focusOrders;
    // 0x29c
    float fleeDistance;
    // 0x2a0
    int meleeSlotUsage;
    // 0x2a4
    $Padding(0x2a4, 0x2b4);
    // 0x2b4
    float innerComfortZoneRange;
    // 0x2b8
    float lootRange;
    // 0x2bc
    float jumpRange;
    // 0x2c0
    float jumpSpeed;
    // 0x2c4
    float teleportRange;
    // 0x2c8
    float limitedMovementRange;
    // 0x2cc
    float meleeEngageRange;
    // 0x2d0
    float outerComfortZoneRange;
    // 0x2d4
    float personalSpaceRange;
    // 0x2d8
    float rangedEngageRange;
    // 0x2dc
    $Padding(0x2dc, 0x2e0);
    // 0x2e0
    float sightRange;
};

STATIC_ASSERT_OFFSETOF(GoMind, initialCommand, 0x044);
STATIC_ASSERT_OFFSETOF(GoMind, handlingMessage, 0x058);
STATIC_ASSERT_OFFSETOF(GoMind, rank, 0x060);
STATIC_ASSERT_OFFSETOF(GoMind, allignedTeam, 0x068);
STATIC_ASSERT_OFFSETOF(GoMind, guardTarget, 0x070);
STATIC_ASSERT_OFFSETOF(GoMind, aggroTypeGlobalScalar, 0x0a0);
STATIC_ASSERT_OFFSETOF(GoMind, angryTarget, 0x100);
STATIC_ASSERT_OFFSETOF(GoMind, lastEngagedObject, 0x114);
STATIC_ASSERT_OFFSETOF(GoMind, lastEnemySpottedTime, 0x238);
STATIC_ASSERT_OFFSETOF(GoMind, tempQtColl1, 0x258);
STATIC_ASSERT_OFFSETOF(GoMind, playAttributes, 0x26c);
STATIC_ASSERT_OFFSETOF(GoMind, tempQtColl1, 0x258);
STATIC_ASSERT_OFFSETOF(GoMind, weaponPreference, 0x284);
STATIC_ASSERT_OFFSETOF(GoMind, fleeDistance, 0x29c);
STATIC_ASSERT_OFFSETOF(GoMind, meleeEngageRange, 0x2cc);
STATIC_ASSERT_OFFSETOF(GoMind, innerComfortZoneRange, 0x2b4);
STATIC_ASSERT_OFFSETOF(GoMind, sightRange, 0x2e0);

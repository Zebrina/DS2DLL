#pragma once

#include "AnalysisResults.h"
#include "DecalId.h"
#include "Enums.h"
#include "FrustumId.h"
#include "GoidScid.h"
#include "GoMind.h"
#include "GPString.h"
#include "GPMath.h"
#include "LightId.h"
#include "MCP.h"
#include "Nema.h"
#include "Siege.h"
#include "SiegeId.h"
#include "SiegePos.h"
#include "SiegeRail.h"
#include "Skrit.h"

$Function(0x005638c0, AnimEventBitTest, bool, uint unk1, eAnimEvent unk2);
$Function(0x008f87e2, CallAnalyzeCharacter, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, AnalysisResults* unk4);
$Function(0x008f892f, CallAnalyzeCharacterForRange, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, Range* unk4);
$Function(0x008f88c0, CallBoolFormula, bool, SkritObject* unk1, const char* unk2);
$Function(0x0043dbac, CallCanUseIncantation, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4, const GPBString& unk5);
$Function(0x0043db3d, CallIncantationManager, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4, const GPBString& unk5, const GPBString& unk6);
$Function(0x00468417, CommandAttack, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, bool unk4);
$Function(0x00468486, CommandAttackPosition, bool, SkritObject* unk1, const char* unk2, const SiegePos& unk3, bool unk4, bool unk5);
$Function(0x004684f5, CommandCast, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, bool unk4);
$Function(0x00468564, CommandCastSingle, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4, bool unk5);
$Function(0x004685d3, CommandCastSkill, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4, bool unk5);
$Function(0x00468642, CommandCastSkillPosition, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, const SiegePos& unk4, bool unk5);
$Function(0x00468a8c, CommandContinuousMove, bool, SkritObject* unk1, const char* unk2, const SiegePos& unk3);
$Function(0x004688d3, CommandGive, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4, bool unk5);
$Function(0x004689ae, CommandMove, bool, SkritObject* unk1, const char* unk2, const SiegePos& unk3, bool unk4, bool unk5);
$Function(0x00468a1d, CommandMoveFocus, bool, SkritObject* unk1, const char* unk2, const SiegePos& unk3, bool unk4);
$Function(0x00468afb, CommandRegroup, bool, SkritObject* unk1, const char* unk2);
$Function(0x00468d1a, CommandTalk, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, bool unk4, eActionOrigin unk5);
$Function(0x004686b1, CommandUsePower, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4, bool unk5);
$Function(0x00468720, CommandUsePowerPosition, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, const SiegePos& unk4, bool unk5);
$Function(0x00468339, ContextAction, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, bool unk4);
$Function(0x006d36f0, FromString, bool, const char* unk1, SiegeRail& unk2);
$Function(0x006d1010, HitTestTerrain, bool, const SiegePos& unk1, const SiegePos& unk2, SiegePos& unk3, Vector3& unk4);
$Function(0x007ec7ef, IsActivated, bool, eQuestState unk1);
$Function(0x00467d48, IsAlive, bool, eLifeState unk1);
$Function(0x009411e9, IsAttackJat, bool, eJobAbstractType unk1);
$Function(0x00940a62, IsCastJat, bool, eJobAbstractType unk1);
$Function(0x00887369, IsChant, bool, eEntryType unk1);
$Function(0x00435b56, IsConscious, bool, eLifeState unk1);
$Function(0x009409b3, IsDamageAggro, bool, eAggroType aggroType);
$Function(0x007ec807, IsDeactivated, bool, eQuestState unk1);
$Function(0x004283d2, IsDead, bool, eLifeState unk1);
$Function(0x006d0f20, IsEqual, bool, const SiegePos& unk1, const SiegePos& unk2);
$Function(0x007ec815, IsEqual, bool, eQuestState unk1, eQuestState unk2);
$Function(0x0093cc0e, IsFailed, bool, eJobResult unk1);
$Function(0x009bcc42, IsFuelAddressValid, bool, const char* unk1);
$Function(0x007ed518, IsInNISMode, bool);
$Function(0x0088734b, IsLoreItem, bool, eEntryType unk1);
$Function(0x009411d5, IsMoveJat, bool, eJobAbstractType unk1);
$Function(0x007ed4d7, IsMultiPlayer, bool);
$Function(0x006d0ff0, IsNodeInTransition, bool, const siege::database_guid& unk1);
$Function(0x0093cc1c, IsNoPath, bool, eJobResult unk1);
$Function(0x007ed4f1, IsPrimaryThread, bool);
$Function(0x0088733d, IsQuestItem, bool, eEntryType unk1);
$Function(0x00940a7a, IsRailJat, bool, eJobAbstractType unk1);
$Function(0x007edf46, IsSendLocalOnly, bool, uint unk1);
$Function(0x00409c37, IsSinglePlayer, bool);
$Function(0x007adc30, IsTextType, bool, eUIControlType unk1);
$Function(0x006d0f00, IsValid, bool, const SiegePos& unk1);
$Function(0x007ed515, IsWorldEditMode, bool);
$Function(0x00968037, RequestBeyondRange, bool, MCP::eReqRetCode unk1);
$Function(0x00968020, RequestFailed, bool, MCP::eReqRetCode unk1);
$Function(0x00968009, RequestOk, bool, MCP::eReqRetCode unk1);
$Function(0x004683a8, SelectionAction, bool, SkritObject* unk1, const char* unk2, const Goid* unk3, bool unk4);
$Function(0x007d7855, StartCameraFx, bool, const char* unk1, const char* unk2);
$Function(0x007d786d, StartCameraFx, bool, const char* unk1);
$Function(0x0040a1d8, TestBits, bool, siege::eLogicalNodeFlags unk1, siege::eLogicalNodeFlags unk2);
$Function(0x007f0536, GetSkillNameFromReqString, GPBString, const GPBString& unk1, uint unk2);
$Function(0x00996fd6, MakeFourCcString, GPBString, int unk1, bool unk2);
$Function(0x00996fbe, MakeFourCcString, GPBString, int unk1);
$Function(0x006d17d0, MakeNodeFlagString, GPBString, siege::eLogicalNodeFlags unk1);
$Function(0x006d1a00, MakeSiegePosString, GPBString, const SiegePos& unk1);
$Function(0x0099725c, MakeStringF, GPBString, const char* format, ...);
$Function(0x007ee2c5, ToFullString, GPBString, eDamageType unk1);
$Function(0x00468d89, CreateAoEVolume, const FFXID*, SkritObject* unk1, const char* unk2, const Goid* unk3, const SiegePos& unk4);
$Function(0x00468ed6, CreatePowerInvalidEffect, const FFXID*, SkritObject* unk1, const char* unk2, const Goid* unk3, const SiegePos& unk4);
$Function(0x00468df8, CreatePowerSelfEffect, const FFXID*, SkritObject* unk1, const char* unk2, const Goid* unk3);
$Function(0x00468e67, CreatePowerTargetEffect, const FFXID*, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4);
$Function(0x00996f8b, GetZeroQuat, const Quat&);
$Function(0x00996f59, GetZeroVector, const Vector3&);
$Function(0x0095c30f, CalcCharacterValue, double, SkritObject* unk1, const char* unk2, double unk3);
$Function(0x00954cb3, CalcEatExperience, double, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4);
$Function(0x0095c231, CalcHireLevel, double, SkritObject* unk1, const char* unk2, double unk3);
$Function(0x00954d22, CalcPetMaxLife, double, SkritObject* unk1, const char* unk2, const Goid* unk3);
$Function(0x00954d91, CalcPetMaxMana, double, SkritObject* unk1, const char* unk2, const Goid* unk3);
$Function(0x0095c2a0, CalcStat, double, SkritObject* unk1, const char* unk2, double unk3, double unk4, double unk5, double unk6);
$Function(0x008f81a1, CallFloatFormula, double, SkritObject* unk1, const char* unk2, ePContentType unk3);
$Function(0x008f83cc, CallFloatToFloatFormula, double, SkritObject* unk1, const char* unk2, ePContentType unk3, double unk4);
$Function(0x00891295, CallGetPathLevelMax, double, SkritObject* unk1, const char* unk2, int unk3);
$Function(0x00891226, CallGetPathLevelMin, double, SkritObject* unk1, const char* unk2, int unk3);
$Function(0x009409ab, MakeAggroType, eAggroType, uint unk1);
$Function(0x0093bc1e, MakeAnimChore, eAnimChore, uint unk1);
$Function(0x00940b9a, MakeCombatOrders, eCombatOrders, uint unk1);
$Function(0x00940b63, MakeMovementOrders, eMovementOrders, uint unk1);
$Function(0x008f835d, CallPClassTypeFormula, ePClass, SkritObject* unk1, const char* unk2);
$Function(0x008f827f, CallPContentFormula, ePContentType, SkritObject* unk1, const char* unk2);
$Function(0x008f82ee, CallPContentTypeFormula, ePContentType, SkritObject* unk1, const char* unk2, ePContentType unk3);
$Function(0x007eca55, ToPContentType, ePContentType, eAttackClass unk1);
$Function(0x00928f2d, ComputeTravelScalar, float, eCameraInterp unk1, float unk2);
$Function(0x00573ce0, ConvertRatioToAttackBlend, float, float unk1, float unk2, float unk3, float unk4);
$Function(0x00573e70, ConvertRatioToWalkBlend, float, float unk1, float unk2);
$Function(0x00968221, DecodeAttackDeviation, float, uint unk1);
$Function(0x009681e7, DecodeAttackElevation, float, uint unk1);
$Function(0x009681b3, DecodeAttackLoopDuration, float, uint unk1);
$Function(0x009972c8, GetAlpha, float, uint unk1);
$Function(0x00997319, GetBlue, float, uint unk1);
$Function(0x009972fe, GetGreen, float, uint unk1);
$Function(0x009972e3, GetRed, float, uint unk1);
$Function(0x006d1150, GetSiegeDistance, float, const SiegePos& unk1, const SiegePos& unk2);
$Function(0x007f0561, GetSkillMinRequiredFromReqString, float, const GPBString& unk1, uint unk2);
$Function(0x00573e10, SinWave, float, float unk1, float unk2, float unk3, float unk4, float unk5, float unk6, float unk7);
$Function(0x008f8851, CallAnalyzeCharacterForLevel, int, SkritObject* unk1, const char* unk2, const Goid* unk3);
$Function(0x00891304, CallGetGroupFromMonsterPower, int, SkritObject* unk1, const char* unk2, double unk3, int unk4);
$Function(0x008f8210, CallIntFormula, int, SkritObject* unk1, const char* unk2, ePContentType unk3);
$Function(0x008f8bf3, CallReturnIntFormula, int, SkritObject* unk1, const char* unk2);
$Function(0x007f0510, GetNumSkillsFromReqString, int, const GPBString& unk1);
$Function(0x00996fef, MakeFourCcInt, int, const char* unk1);
$Function(0x00952505, MakeJobReq, JobReq&, eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5, const Goid* unk6, const SiegePos& unk7);
$Function(0x0095257a, MakeJobReq, JobReq&, eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5, const Goid* unk6);
$Function(0x00952555, MakeJobReq, JobReq&, eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5, const SiegePos& unk6);
$Function(0x009525ea, MakeJobReq, JobReq&, eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5, eEquipSlot unk6);
$Function(0x00952642, MakeJobReq, JobReq&, eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid* unk5);
$Function(0x009525c1, MakeJobReq, JobReq&, eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const SiegePos& unk5, const Goid* unk6);
$Function(0x0095259e, MakeJobReq, JobReq&, eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const SiegePos& unk5);
$Function(0x00952617, MakeJobReq, JobReq&, eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, eEquipSlot unk5);
$Function(0x00952669, MakeJobReq, JobReq&, eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4);
$Function(0x0040a1ab, ToSiegePosRef, SiegePos&, int unk1);
$Function(0x007ed531, GetWorldSimCount, uint);
$Function(0x00997061, MakeColor, uint, const Vector3& unk1, float unk2);
$Function(0x009971a7, MakeColor, uint, const Vector3& unk1);
$Function(0x00997011, MakeColor, uint, float unk1, float unk2, float unk3, float unk4);
$Function(0x0099703d, MakeColor, uint, float unk1, float unk2, float unk3);
$Function(0x00954741, CalcPetStats, void, SkritObject* unk1, const char* unk2, const Goid* unk3);
$Function(0x0046878f, CommandDrop, void, SkritObject* unk1, const char* unk2, const Goid* unk3, const SiegePos& unk4, bool unk5, bool unk6, const Goid* unk7);
$Function(0x004687fb, CommandEquip, void, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4, bool unk5, bool unk6);
$Function(0x00468867, CommandGet, void, SkritObject* unk1, const char* unk2, const Goid* unk3, bool unk4, bool unk5);
$Function(0x00468942, CommandGuard, void, SkritObject* unk1, const char* unk2, const Goid* unk3, bool unk4);
$Function(0x00468b6a, CommandStop, void, SkritObject* unk1, const char* unk2);
$Function(0x00468cae, CommandTalkSingle, void, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4, eActionOrigin unk5);
$Function(0x00468c42, CommandUse, void, SkritObject* unk1, const char* unk2, const Goid* unk3, bool unk4);
$Function(0x00468bd6, CommandUseSingle, void, SkritObject* unk1, const char* unk2, const Goid* unk3, const Goid* unk4, bool unk5);
$Function(0x006d1260, ConvertDirectionToNode, void, Vector3& unk1, const siege::database_guid& unk2, const siege::database_guid& unk3);
$Function(0x006d11d0, ConvertSiegePosToNode, void, SiegePos& unk1, const siege::database_guid& unk2);
$Function(0x00997983, FuBiTableTempDontCallMe, void);
$Function(0x008ecbf7, GameCheckTeamForVictory, void, SkritObject* unk1, const char* unk2, int unk3);
$Function(0x008ecb8b, GameHandleWorldMessage, void, SkritObject* unk1, const char* unk2, WorldMessage* unk3);
$Function(0x0092908a, GetCurrentCamTargetSiegePosition, void, SiegePos& unk1);
$Function(0x006d0f70, GetSiegeDifference, void, Vector3& unk1, const SiegePos& unk2, const SiegePos& unk3);
$Function(0x0094219d, Intersection, void, JobAttributeBits& unk1, const JobAttributeBits& unk2, const JobAttributeBits& unk3);
$Function(0x0091d4d1, ManageMoods, void, SkritHObject unk1, const char* unk2, GoidColl& unk3, bool unk4, double unk5);
$Function(0x008ecc63, QuestReward, void, SkritHObject unk1, int unk2, const Goid* unk3);
$Function(0x00966131, RCSendToFlickComponent, void, eWorldEvent unk1, const Goid* unk2, const Goid* unk3, uint unk4);
$Function(0x008486e6, RCSendWorldMessage, void, uint unk1, eWorldEvent unk2, const Goid* unk3, const Goid* unk4, uint unk5);
$Function(0x008487d0, RCSendWorldMessage, void, uint unk1, eWorldEvent unk2, const Goid* unk3, const Goid* unk4);
$Function(0x007d6939, RevertSaturation, void);
$Function(0x00848a5a, RSSendWorldMessage, void, uint unk1, eWorldEvent unk2, const Goid* unk3, const Goid* unk4, uint unk5);
$Function(0x00848b4b, RSSendWorldMessage, void, uint unk1, eWorldEvent unk2, const Goid* unk3, const Goid* unk4);
$Function(0x009669bb, SCreateAndLaunchFlickFX, void, const GPBString& unk1, const Goid* unk2, const Goid* unk3);
$Function(0x007d79f1, SetTextureLogSaturation, void, const char* unk1, float unk2);;
$Function(0x007d6926, StartActiveTextureLogging, void);
$Function(0x007d75ad, StopActiveTextureLogging, void, const char* unk1);
$Function(0x009d9946, TableTest, void, const char* unk1, const char* unk2);
$Function(0x00942152, Union, void, JobAttributeBits& unk1, const JobAttributeBits& unk2, const JobAttributeBits& unk3);

#pragma once

#include "CustomEffect.h"
#include "DS2DLL.h"
#include "FFXID.h"
#include "Go.h"
#include "GPMath.h"
#include "Player.h"
#include "ReportSys.h"
#include "Siege.h"
#include "SkritObject.h"

struct SiegePos;
struct SiegeRot;

namespace Skrit {
	enum eResult {
	};

	class FuelWrapper {
	public:
		$StaticMethod(0x009ad16d, FUBI_CollectedClass, void);
		$Method(0x009bd65f, FindFirstKey, bool, const char* unk1);
		$Method(0x009bd936, FindFirstKeyAndValue, bool);
		$Method(0x009bd75a, FindNextKey, bool);
		$Method(0x009bd9f4, FindNextKeyAndValue, bool);
		$ConstMethod(0x009bd617, GetBool, bool, const char* unk1, bool unk2);
		$ConstMethod(0x009bd647, GetBool, bool, const char* unk1);
		$ConstMethod(0x009bd8e6, GetFoundBool, bool);
		$ConstMethod(0x009bdb7a, GetFoundKeyAndBool, bool, GPBString& unk1);
		$ConstMethod(0x009bceaa, GetIsDirectory, bool);
		$ConstMethod(0x009bced1, GetIsEmpty, bool);
		$ConstMethod(0x009bce93, GetIsLoaded, bool);
		$ConstMethod(0x009bd4de, HasKey, bool, const char* unk1);
		$ConstMethod(0x009bd09a, HasParent, bool);
		$ConstMethod(0x009bcf86, HasType, bool);
		$Method(0x009bce2c, Load, bool, const char* unk1);
		$Method(0x009bda50, SkipNextKeyAndValue, bool);
		$ConstMethod(0x009bcffe, GetAddress, GPBString);
		$ConstMethod(0x009bcfad, GetAddress, GPBString, bool unk1);
		$ConstMethod(0x009bdaa2, GetFoundKeyAndString, GPBString, GPBString& unk1);
		$ConstMethod(0x009bd7b1, GetFoundString, GPBString);
		$ConstMethod(0x009bd50a, GetString, GPBString, const char* unk1, const GPBString& unk2);
		$ConstMethod(0x009bd55c, GetString, GPBString, const char* unk1);
		$Method(0x009bd13d, GetChildNamed, FuelWrapper*, const char* unk1);
		$Method(0x009bd177, GetChildTyped, FuelWrapper*, const char* unk1);
		$Method(0x009bd41a, GetFoundChild, FuelWrapper*, int unk1);
		$Method(0x009bd0e3, GetOwningDirectory, FuelWrapper*);
		$Method(0x009bd067, GetParent, FuelWrapper*);
		$ConstMethod(0x009bcef8, GetName, const char*);
		$ConstMethod(0x009bcf3f, GetType, const char*);
		$ConstMethod(0x009bd5c5, GetFloat, double, const char* unk1, double unk2);
		$ConstMethod(0x009bd5fa, GetFloat, double, const char* unk1);
		$ConstMethod(0x009bd88d, GetFoundFloat, double);
		$ConstMethod(0x009bdb30, GetFoundKeyAndFloat, double, GPBString& unk1);
		$Method(0x009bd2ac, FindChildren, int);
		$Method(0x009bd1b1, FindChildren, int, const char* unk1, const char* unk2, int unk3);
		$Method(0x009bd224, FindChildren, int, const char* unk1, const char* unk2);
		$Method(0x009bd23f, FindChildren, int, int unk1);
		$Method(0x009bd2bf, FindChildrenNamed, int, const char* unk1, int unk2);
		$Method(0x009bd32f, FindChildrenNamed, int, const char* unk1);
		$Method(0x009bd347, FindChildrenTyped, int, const char* unk1, int unk2);
		$Method(0x009bd3b7, FindChildrenTyped, int, const char* unk1);
		$ConstMethod(0x009bd019, GetChecksum, int);
		$ConstMethod(0x009bd116, GetChildCount, int);
		$ConstMethod(0x009bd3cf, GetFoundChildCount, int);
		$ConstMethod(0x009bd83d, GetFoundInt, int);
		$ConstMethod(0x009bdae7, GetFoundKeyAndInt, int, GPBString& unk1);
		$ConstMethod(0x009bd57d, GetInt, int, const char* unk1, int unk2);
		$ConstMethod(0x009bd5ad, GetInt, int, const char* unk1);
		$ConstMethod(0x009bd4b7, GetKeyCount, int);
		$Method(0x009bd040, GetRecursiveChecksum, int);
		$Method(0x009bce68, Unload, void);
	};

	class HObject {
	public:
	};

	class RecordWrapper {
	public:
		$StaticMethod(0x00408dd4, FUBI_CollectedClass, void);
		$ConstMethod(0x009b3552, GetBool, bool, const char* unk1);
		$ConstMethod(0x009b34b3, GetString, GPBString, const char* unk1);
		$ConstMethod(0x009b36c2, GetFloat, double, const char* unk1);
		$ConstMethod(0x009b360a, GetInt, int, const char* unk1);
		$Method(0x009b348a, Delete, void);
		$Method(0x009b35b6, SetBool, void, const char* unk1, bool unk2);
		$Method(0x009b375f, SetFloat, void, const char* unk1, double unk2);
		$Method(0x009b366e, SetInt, void, const char* unk1, int unk2);
		$Method(0x009b351b, SetString, void, const char* unk1, const GPBString& unk2);
	};

	class DataSetWrapper {
	public:
		$StaticMethod(0x00408dd5, FUBI_CollectedClass, void);
		$Method(0x009b38b3, GetRecord, RecordWrapper*, int unk1);
		$ConstMethod(0x009b387b, GetRecordCount, int);
	};

	class SchemaWrapper {
	public:
		$StaticMethod(0x00408dd6, FUBI_CollectedClass, void);
		$ConstMethod(0x009b3a6b, GetColumnName, const char*, int unk1);
		$ConstMethod(0x009b3a08, GetGroup, const char*);
		$ConstMethod(0x009b39d5, GetName, const char*);
		$ConstMethod(0x009b3a3b, GetColumnCount, int);
	};

	class SiegeRailWrapper {
	public:
		$StaticMethod(0x006d2170, FUBI_CollectedClass, void);
		$ConstMethod(0x006d2650, GetDestinationNode, const siege::database_guid&);
		$ConstMethod(0x006d2620, GetSourceNode, const siege::database_guid&);
		$ConstMethod(0x006d26d0, GetRotation, const Quat&, int unk1);
		$ConstMethod(0x006d2710, GetRotations, const QuatColl&);
		$ConstMethod(0x006d2630, GetDestinationPos, const SiegePos&);
		$ConstMethod(0x006d2600, GetSourcePos, const SiegePos&);
		$ConstMethod(0x006d2640, GetDestinationRot, const SiegeRot&);
		$ConstMethod(0x006d2610, GetSourceRot, const SiegeRot&);
		$ConstMethod(0x006d2660, GetPoint, const Vector3&, int unk1);
		$ConstMethod(0x006d26b0, GetPoints, const Vector3Coll&);
		$ConstMethod(0x006d2970, GetNumPoints, int);
		$ConstMethod(0x006d2990, GetNumRotations, int);
		$Method(0x006d2720, GetRotations, QuatColl&);
		$Method(0x006d26c0, GetPoints, Vector3Coll&);
		$Method(0x006d3230, AppendDestination, void, const SiegePos& unk1, const SiegeRot& unk2, float unk3);
		$Method(0x006d3210, AppendDestination, void, const SiegePos& unk1, float unk2);
		$Method(0x006d31f0, AppendDestination, void, const SiegePos& unk1);
		$Method(0x006d3220, AppendDestination, void, const SiegeRot& unk1, float unk2);
		$Method(0x006d31e0, Initialize, void, const SiegePos& unk1);
	};

	class TableWrapper {
	public:
		$StaticMethod(0x00408dd3, FUBI_CollectedClass, void);
		$Method(0x009b330a, Query, DataSetWrapper*, const char* unk1);
		$Method(0x009b3372, AddRecord, RecordWrapper*);
		$Method(0x009b32a2, GetSchema, SchemaWrapper*);
		$ConstMethod(0x009b326f, GetGroup, const char*);
		$ConstMethod(0x009b323c, GetName, const char*);
	};

	class TableManager {
	public:
		$StaticMethod(0x009b3ace, GetSchema, SchemaWrapper*, int unk1);
		$StaticMethod(0x009b3b11, GetSchemaNamed, SchemaWrapper*, const char* unk1);
		$StaticMethod(0x009b3b64, GetTable, TableWrapper*, int unk1);
		$StaticMethod(0x009b3ba7, GetTableNamed, TableWrapper*, const char* unk1);
		$StaticMethod(0x009b3abe, GetSchemaCount, int);
		$StaticMethod(0x009b3b54, GetTableCount, int);
	};

	$Function(0x009962d2, EvalBool, bool, const char* unk1, bool unk2);
	$Function(0x009962fe, EvalBool, bool, const char* unk1);
	$Function(0x0099624f, EvalFloat, double, const char* unk1, double unk2);
	$Function(0x0099627d, EvalFloat, double, const char* unk1);
	$Function(0x00996294, EvalInt, int, const char* unk1, int unk2);
	$Function(0x009962c1, EvalInt, int, const char* unk1);
	$Function(0x00996225, Command, void, const char* unk1);
	$Function(0x0099607d, Execute, void, const char* unk1, const char* unk2);
	$Function(0x00996145, Execute, void, const char* unk1);
};

typedef Skrit::eResult eSkritResult;
typedef Skrit::HObject SkritHObject;

// world/global/skrits/k_inc_quest_managerment.skrit
$Function(0x00887bdf, SkritOnAddKillCount, void, SkritObject* skrit, const char* functionName, const GPBString& sTemplate, int killCount, bool bPassedKillRequired);

// ??
$Function(0x009370ea, SkritOnCustomEffectDamage, void, SkritHObject skrit, const char* functionName, CustomEffect* unk3, Go* unk4, Go* unk5, Go* unk6, double unk7);
$Function(0x0093722e, SkritOnCustomEffectEnteredWorld, void, SkritHObject unk1, const char* functionName, CustomEffect* unk3);
$Function(0x00937306, SkritOnCustomEffectEquip, void, SkritHObject unk1, const char* functionName, CustomEffect* unk3);
$Function(0x009371c2, SkritOnCustomEffectFlickSyncEnd, void, SkritHObject unk1, const char* functionName, const FFXID* unk3);
$Function(0x0093729a, SkritOnCustomEffectLeftWorld, void, SkritHObject unk1, const char* functionName, CustomEffect* unk3);
$Function(0x00937156, SkritOnCustomEffectPrepareAmmo, void, SkritHObject unk1, const char* functionName, CustomEffect* unk3, Go* unk4);
$Function(0x00887b73, SkritOnSetHandbookCallback, void, SkritObject* skrit, const char* functionName, int unk3, int unk4);
$Function(0x00887b07, SkritOnSetLoreStateCallback, void, SkritObject* skrit, const char* functionName, const GPBString& unk3, eEntryType unk4, eQuestState unk5, eQuestState unk6);
$Function(0x00887a9b, SkritOnSetStateCallback, void, SkritObject* skrit, const char* functionName, const GPBString& unk3, eQuestState unk4, eQuestState unk5, bool unk6);

#pragma once

#include "ReportSys.h"
#include "Siege.h"

#include "ClassMacros.h"

struct Quat;
struct QuatColl;
struct SiegePos;
struct SiegeRot;
struct vector_3;
struct Vector3Coll;

namespace Skrit {
	enum eResult {

	};

	class FuelWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x9ad16d, void, NO_PARAMS, NO_ARGS);
		DefineMethod(FindFirstKey, 0x9bd65f, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(FindFirstKeyAndValue, 0x9bd936, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(FindNextKey, 0x9bd75a, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(FindNextKeyAndValue, 0x9bd9f4, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetBool, 0x9bd617, bool, Params(const char* unk1, bool unk2), Args(unk1, unk2));
		DefineConstMethod(GetBool, 0x9bd647, bool, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetFoundBool, 0x9bd8e6, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetFoundKeyAndBool, 0x9bdb7a, bool, Params(gpbstring<char>& unk1), Args(unk1));
		DefineConstMethod(GetIsDirectory, 0x9bceaa, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetIsEmpty, 0x9bced1, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetIsLoaded, 0x9bce93, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(HasKey, 0x9bd4de, bool, Params(const char* unk1), Args(unk1));
		DefineConstMethod(HasParent, 0x9bd09a, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(HasType, 0x9bcf86, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(Load, 0x9bce2c, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(SkipNextKeyAndValue, 0x9bda50, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetAddress, 0x9bcffe, gpbstring<char>, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetAddress, 0x9bcfad, gpbstring<char>, Params(bool unk1), Args(unk1));
		DefineConstMethod(GetFoundKeyAndString, 0x9bdaa2, gpbstring<char>, Params(gpbstring<char>& unk1), Args(unk1));
		DefineConstMethod(GetFoundString, 0x9bd7b1, gpbstring<char>, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetString, 0x9bd50a, gpbstring<char>, Params(const char* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
		DefineConstMethod(GetString, 0x9bd55c, gpbstring<char>, Params(const char* unk1), Args(unk1));
		DefineMethod(GetChildNamed, 0x9bd13d, FuelWrapper*, Params(const char* unk1), Args(unk1));
		DefineMethod(GetChildTyped, 0x9bd177, FuelWrapper*, Params(const char* unk1), Args(unk1));
		DefineMethod(GetFoundChild, 0x9bd41a, FuelWrapper*, Params(int unk1), Args(unk1));
		DefineMethod(GetOwningDirectory, 0x9bd0e3, FuelWrapper*, NO_PARAMS, NO_ARGS);
		DefineMethod(GetParent, 0x9bd067, FuelWrapper*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetName, 0x9bcef8, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetType, 0x9bcf3f, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetFloat, 0x9bd5c5, double, Params(const char* unk1, double unk2), Args(unk1, unk2));
		DefineConstMethod(GetFloat, 0x9bd5fa, double, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetFoundFloat, 0x9bd88d, double, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetFoundKeyAndFloat, 0x9bdb30, double, Params(gpbstring<char>& unk1), Args(unk1));
		DefineMethod(FindChildren, 0x9bd2ac, int, NO_PARAMS, NO_ARGS);
		DefineMethod(FindChildren, 0x9bd1b1, int, Params(const char* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
		DefineMethod(FindChildren, 0x9bd224, int, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
		DefineMethod(FindChildren, 0x9bd23f, int, Params(int unk1), Args(unk1));
		DefineMethod(FindChildrenNamed, 0x9bd2bf, int, Params(const char* unk1, int unk2), Args(unk1, unk2));
		DefineMethod(FindChildrenNamed, 0x9bd32f, int, Params(const char* unk1), Args(unk1));
		DefineMethod(FindChildrenTyped, 0x9bd347, int, Params(const char* unk1, int unk2), Args(unk1, unk2));
		DefineMethod(FindChildrenTyped, 0x9bd3b7, int, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetChecksum, 0x9bd019, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetChildCount, 0x9bd116, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetFoundChildCount, 0x9bd3cf, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetFoundInt, 0x9bd83d, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetFoundKeyAndInt, 0x9bdae7, int, Params(gpbstring<char>& unk1), Args(unk1));
		DefineConstMethod(GetInt, 0x9bd57d, int, Params(const char* unk1, int unk2), Args(unk1, unk2));
		DefineConstMethod(GetInt, 0x9bd5ad, int, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetKeyCount, 0x9bd4b7, int, NO_PARAMS, NO_ARGS);
		DefineMethod(GetRecursiveChecksum, 0x9bd040, int, NO_PARAMS, NO_ARGS);
		DefineMethod(Unload, 0x9bce68, void, NO_PARAMS, NO_ARGS);
	};

	class HObject {
	public:
	};

	class Machine {
	public:
		DefineConstMethod(DisassembleCurrent, 0x9ad6d8, void, NO_PARAMS, NO_ARGS);
		DefineConstMethod(DisassembleCurrent, 0x9ad6bc, void, Params(ReportSys::Context* unk1), Args(unk1));
	};

	class Object {
	public:
		DefineConstMethod(IsStateChangePending, 0x408f67, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetName, 0x408f60, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
		DefineMethod(AddTimerSeconds, 0x9a7818, float, Params(int unk1, float unk2), Args(unk1, unk2));
		DefineConstMethod(GetPollPeriod, 0x408f86, float, NO_PARAMS, NO_ARGS);
		DefineMethod(CreateFrameTimer, 0x9a7724, int, Params(int unk1), Args(unk1));
		DefineMethod(CreateTimer, 0x9a76de, int, Params(float unk1), Args(unk1));
		DefineConstMethod(GetCurrentState, 0x408f71, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetPendingState, 0x408f75, int, NO_PARAMS, NO_ARGS);
		DefineMethod(CreateFrameTimer, 0x9a774a, void, Params(int unk1, int unk2), Args(unk1, unk2));
		DefineMethod(CreateTimer, 0x9a7708, void, Params(int unk1, float unk2), Args(unk1, unk2));
		DefineMethod(DestroyTimer, 0x9a7766, void, Params(int unk1), Args(unk1));
		DefineMethod(ResetTimerSeconds, 0x9a7879, void, Params(int unk1, float unk2), Args(unk1, unk2));
		DefineMethod(SetNewTimerSeconds, 0x9a78cf, void, Params(int unk1, float unk2), Args(unk1, unk2));
		DefineMethod(SetPollPeriod, 0x408f79, void, Params(float unk1), Args(unk1));
		DefineMethod(SetTimerGlobal, 0x9a77a2, void, Params(int unk1, bool unk2), Args(unk1, unk2));
		DefineMethod(SetTimerRepeatCount, 0x9a77d9, void, Params(int unk1, int unk2), Args(unk1, unk2));
	};

	class RecordWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x408dd4, void, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetBool, 0x9b3552, bool, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetString, 0x9b34b3, gpbstring<char>, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetFloat, 0x9b36c2, double, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetInt, 0x9b360a, int, Params(const char* unk1), Args(unk1));
		DefineMethod(Delete, 0x9b348a, void, NO_PARAMS, NO_ARGS);
		DefineMethod(SetBool, 0x9b35b6, void, Params(const char* unk1, bool unk2), Args(unk1, unk2));
		DefineMethod(SetFloat, 0x9b375f, void, Params(const char* unk1, double unk2), Args(unk1, unk2));
		DefineMethod(SetInt, 0x9b366e, void, Params(const char* unk1, int unk2), Args(unk1, unk2));
		DefineMethod(SetString, 0x9b351b, void, Params(const char* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	};

	class DataSetWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x408dd5, void, NO_PARAMS, NO_ARGS);
		DefineMethod(GetRecord, 0x9b38b3, RecordWrapper*, Params(int unk1), Args(unk1));
		DefineConstMethod(GetRecordCount, 0x9b387b, int, NO_PARAMS, NO_ARGS);
	};

	class SchemaWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x408dd6, void, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetColumnName, 0x9b3a6b, const char*, Params(int unk1), Args(unk1));
		DefineConstMethod(GetGroup, 0x9b3a08, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetName, 0x9b39d5, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetColumnCount, 0x9b3a3b, int, NO_PARAMS, NO_ARGS);
	};

	class SiegeRailWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x6d2170, void, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetDestinationNode, 0x6d2650, const siege::database_guid&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetSourceNode, 0x6d2620, const siege::database_guid&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetRotation, 0x6d26d0, const Quat&, Params(int unk1), Args(unk1));
		DefineConstMethod(GetRotations, 0x6d2710, const QuatColl&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetDestinationPos, 0x6d2630, const SiegePos&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetSourcePos, 0x6d2600, const SiegePos&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetDestinationRot, 0x6d2640, const SiegeRot&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetSourceRot, 0x6d2610, const SiegeRot&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetPoint, 0x6d2660, const vector_3&, Params(int unk1), Args(unk1));
		DefineConstMethod(GetPoints, 0x6d26b0, const Vector3Coll&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNumPoints, 0x6d2970, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNumRotations, 0x6d2990, int, NO_PARAMS, NO_ARGS);
		DefineMethod(GetRotations, 0x6d2720, QuatColl&, NO_PARAMS, NO_ARGS);
		DefineMethod(GetPoints, 0x6d26c0, Vector3Coll&, NO_PARAMS, NO_ARGS);
		DefineMethod(AppendDestination, 0x6d3230, void, Params(const SiegePos& unk1, const SiegeRot& unk2, float unk3), Args(unk1, unk2, unk3));
		DefineMethod(AppendDestination, 0x6d3210, void, Params(const SiegePos& unk1, float unk2), Args(unk1, unk2));
		DefineMethod(AppendDestination, 0x6d31f0, void, Params(const SiegePos& unk1), Args(unk1));
		DefineMethod(AppendDestination, 0x6d3220, void, Params(const SiegeRot& unk1, float unk2), Args(unk1, unk2));
		DefineMethod(Initialize, 0x6d31e0, void, Params(const SiegePos& unk1), Args(unk1));
	};

	class TableWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x408dd3, void, NO_PARAMS, NO_ARGS);
		DefineMethod(Query, 0x9b330a, DataSetWrapper*, Params(const char* unk1), Args(unk1));
		DefineMethod(AddRecord, 0x9b3372, RecordWrapper*, NO_PARAMS, NO_ARGS);
		DefineMethod(GetSchema, 0x9b32a2, SchemaWrapper*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetGroup, 0x9b326f, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetName, 0x9b323c, const char*, NO_PARAMS, NO_ARGS);
	};

	class TableManager {
	public:
		DefineStaticMethod(GetSchema, 0x9b3ace, SchemaWrapper*, Params(int unk1), Args(unk1));
		DefineStaticMethod(GetSchemaNamed, 0x9b3b11, SchemaWrapper*, Params(const char* unk1), Args(unk1));
		DefineStaticMethod(GetTable, 0x9b3b64, TableWrapper*, Params(int unk1), Args(unk1));
		DefineStaticMethod(GetTableNamed, 0x9b3ba7, TableWrapper*, Params(const char* unk1), Args(unk1));
		DefineStaticMethod(GetSchemaCount, 0x9b3abe, int, NO_PARAMS, NO_ARGS);
		DefineStaticMethod(GetTableCount, 0x9b3b54, int, NO_PARAMS, NO_ARGS);
	};

	DefineFunction(EvalBool, 0x9962d2, bool, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineFunction(EvalBool, 0x9962fe, bool, Params(const char* unk1), Args(unk1));
	DefineFunction(EvalFloat, 0x99624f, double, Params(const char* unk1, double unk2), Args(unk1, unk2));
	DefineFunction(EvalFloat, 0x99627d, double, Params(const char* unk1), Args(unk1));
	DefineFunction(EvalInt, 0x996294, int, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineFunction(EvalInt, 0x9962c1, int, Params(const char* unk1), Args(unk1));
	DefineFunction(Command, 0x996225, void, Params(const char* unk1), Args(unk1));
	DefineFunction(Execute, 0x99607d, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineFunction(Execute, 0x996145, void, Params(const char* unk1), Args(unk1));
};

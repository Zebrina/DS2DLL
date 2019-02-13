#pragma once

class Skrit {
public:
	enum eResult {

	};

	class FuelWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x9ad16d, void, Params(), Args());
		DefineMethod(FindFirstKey, 0x9bd65f, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(FindFirstKeyAndValue, 0x9bd936, bool, Params(), Args());
		DefineMethod(FindNextKey, 0x9bd75a, bool, Params(), Args());
		DefineMethod(FindNextKeyAndValue, 0x9bd9f4, bool, Params(), Args());
		DefineConstMethod(GetBool, 0x9bd617, bool, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
		DefineConstMethod(GetBool, 0x9bd647, bool, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(GetFoundBool, 0x9bd8e6, bool, Params(), Args());
		DefineConstMethod(GetFoundKeyAndBool, 0x9bdb7a, bool, Params(gpbstring<char>& unk1), Args(gpbstring<char>& unk1));
		DefineConstMethod(GetIsDirectory, 0x9bceaa, bool, Params(), Args());
		DefineConstMethod(GetIsEmpty, 0x9bced1, bool, Params(), Args());
		DefineConstMethod(GetIsLoaded, 0x9bce93, bool, Params(), Args());
		DefineConstMethod(HasKey, 0x9bd4de, bool, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(HasParent, 0x9bd09a, bool, Params(), Args());
		DefineConstMethod(HasType, 0x9bcf86, bool, Params(), Args());
		DefineMethod(Load, 0x9bce2c, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(SkipNextKeyAndValue, 0x9bda50, bool, Params(), Args());
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetAddress() const; //0x009bcffe
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetAddress(bool unk1) const; //0x009bcfad
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetFoundKeyAndString(gpbstring<char>& unk1) const; //0x009bdaa2
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetFoundString() const; //0x009bd7b1
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetString(const char* unk1, const gpbstring<char>& unk2) const; //0x009bd50a
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetString(const char* unk1) const; //0x009bd55c
		DefineMethod(GetChildNamed, 0x9bd13d, FuelWrapper*, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(GetChildTyped, 0x9bd177, FuelWrapper*, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(GetFoundChild, 0x9bd41a, FuelWrapper*, Params(int unk1), Args(int unk1));
		DefineMethod(GetOwningDirectory, 0x9bd0e3, FuelWrapper*, Params(), Args());
		DefineMethod(GetParent, 0x9bd067, FuelWrapper*, Params(), Args());
		/*Skrit::FuelWrapper*/ public: const char* /*__thiscall*/ GetName() const; //0x009bcef8
		/*Skrit::FuelWrapper*/ public: const char* /*__thiscall*/ GetType() const; //0x009bcf3f
		DefineConstMethod(GetFloat, 0x9bd5c5, double, Params(const char* unk1, double unk2), Args(const char* unk1, double unk2));
		DefineConstMethod(GetFloat, 0x9bd5fa, double, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(GetFoundFloat, 0x9bd88d, double, Params(), Args());
		DefineConstMethod(GetFoundKeyAndFloat, 0x9bdb30, double, Params(gpbstring<char>& unk1), Args(gpbstring<char>& unk1));
		DefineMethod(FindChildren, 0x9bd2ac, int, Params(), Args());
		DefineMethod(FindChildren, 0x9bd1b1, int, Params(const char* unk1, const char* unk2, int unk3), Args(const char* unk1, const char* unk2, int unk3));
		DefineMethod(FindChildren, 0x9bd224, int, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
		DefineMethod(FindChildren, 0x9bd23f, int, Params(int unk1), Args(int unk1));
		DefineMethod(FindChildrenNamed, 0x9bd2bf, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
		DefineMethod(FindChildrenNamed, 0x9bd32f, int, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(FindChildrenTyped, 0x9bd347, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
		DefineMethod(FindChildrenTyped, 0x9bd3b7, int, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(GetChecksum, 0x9bd019, int, Params(), Args());
		DefineConstMethod(GetChildCount, 0x9bd116, int, Params(), Args());
		DefineConstMethod(GetFoundChildCount, 0x9bd3cf, int, Params(), Args());
		DefineConstMethod(GetFoundInt, 0x9bd83d, int, Params(), Args());
		DefineConstMethod(GetFoundKeyAndInt, 0x9bdae7, int, Params(gpbstring<char>& unk1), Args(gpbstring<char>& unk1));
		DefineConstMethod(GetInt, 0x9bd57d, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
		DefineConstMethod(GetInt, 0x9bd5ad, int, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(GetKeyCount, 0x9bd4b7, int, Params(), Args());
		DefineMethod(GetRecursiveChecksum, 0x9bd040, int, Params(), Args());
		DefineMethod(Unload, 0x9bce68, void, Params(), Args());
	};

	class Machine {
	public:
		DefineConstMethod(DisassembleCurrent, 0x9ad6d8, void, Params(), Args());
		DefineConstMethod(DisassembleCurrent, 0x9ad6bc, void, Params(ReportSys::Context* unk1), Args(ReportSys::Context* unk1));
	};

	class Object {
	public:
		DefineConstMethod(IsStateChangePending, 0x408f67, bool, Params(), Args());
		/*Skrit::Object*/ public: const gpbstring<char>& /*__thiscall*/ GetName() const; //0x00408f60
		DefineMethod(AddTimerSeconds, 0x9a7818, float, Params(int unk1, float unk2), Args(int unk1, float unk2));
		DefineConstMethod(GetPollPeriod, 0x408f86, float, Params(), Args());
		DefineMethod(CreateFrameTimer, 0x9a7724, int, Params(int unk1), Args(int unk1));
		DefineMethod(CreateTimer, 0x9a76de, int, Params(float unk1), Args(float unk1));
		DefineConstMethod(GetCurrentState, 0x408f71, int, Params(), Args());
		DefineConstMethod(GetPendingState, 0x408f75, int, Params(), Args());
		DefineMethod(CreateFrameTimer, 0x9a774a, void, Params(int unk1, int unk2), Args(int unk1, int unk2));
		DefineMethod(CreateTimer, 0x9a7708, void, Params(int unk1, float unk2), Args(int unk1, float unk2));
		DefineMethod(DestroyTimer, 0x9a7766, void, Params(int unk1), Args(int unk1));
		DefineMethod(ResetTimerSeconds, 0x9a7879, void, Params(int unk1, float unk2), Args(int unk1, float unk2));
		DefineMethod(SetNewTimerSeconds, 0x9a78cf, void, Params(int unk1, float unk2), Args(int unk1, float unk2));
		DefineMethod(SetPollPeriod, 0x408f79, void, Params(float unk1), Args(float unk1));
		DefineMethod(SetTimerGlobal, 0x9a77a2, void, Params(int unk1, bool unk2), Args(int unk1, bool unk2));
		DefineMethod(SetTimerRepeatCount, 0x9a77d9, void, Params(int unk1, int unk2), Args(int unk1, int unk2));
	};

	class RecordWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x408dd4, void, Params(), Args());
		DefineConstMethod(GetBool, 0x9b3552, bool, Params(const char* unk1), Args(const char* unk1));
		/*Skrit::RecordWrapper*/ public: gpbstring<char> /*__thiscall*/ GetString(const char* unk1) const; //0x009b34b3
		DefineConstMethod(GetFloat, 0x9b36c2, double, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(GetInt, 0x9b360a, int, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(Delete, 0x9b348a, void, Params(), Args());
		DefineMethod(SetBool, 0x9b35b6, void, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
		DefineMethod(SetFloat, 0x9b375f, void, Params(const char* unk1, double unk2), Args(const char* unk1, double unk2));
		DefineMethod(SetInt, 0x9b366e, void, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
		DefineMethod(SetString, 0x9b351b, void, Params(const char* unk1, const gpbstring<char>& unk2), Args(const char* unk1, const gpbstring<char>& unk2));
	};

	class DataSetWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x408dd5, void, Params(), Args());
		DefineMethod(GetRecord, 0x9b38b3, RecordWrapper*, Params(int unk1), Args(int unk1));
		DefineConstMethod(GetRecordCount, 0x9b387b, int, Params(), Args());
	};

	class SchemaWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x408dd6, void, Params(), Args());
		/*Skrit::SchemaWrapper*/ public: const char* /*__thiscall*/ GetColumnName(int unk1) const; //0x009b3a6b
		/*Skrit::SchemaWrapper*/ public: const char* /*__thiscall*/ GetGroup() const; //0x009b3a08
		/*Skrit::SchemaWrapper*/ public: const char* /*__thiscall*/ GetName() const; //0x009b39d5
		DefineConstMethod(GetColumnCount, 0x9b3a3b, int, Params(), Args());
	};

	class SiegeRailWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x6d2170, void, Params(), Args());
		/*Skrit::SiegeRailWrapper*/ public: const siege::database_guid& /*__thiscall*/ GetDestinationNode() const; //0x006d2650
		/*Skrit::SiegeRailWrapper*/ public: const siege::database_guid& /*__thiscall*/ GetSourceNode() const; //0x006d2620
		/*Skrit::SiegeRailWrapper*/ public: const Quat& /*__thiscall*/ GetRotation(int unk1) const; //0x006d26d0
		/*Skrit::SiegeRailWrapper*/ public: const QuatColl& /*__thiscall*/ GetRotations() const; //0x006d2710
		/*Skrit::SiegeRailWrapper*/ public: const SiegePos& /*__thiscall*/ GetDestinationPos() const; //0x006d2630
		/*Skrit::SiegeRailWrapper*/ public: const SiegePos& /*__thiscall*/ GetSourcePos() const; //0x006d2600
		/*Skrit::SiegeRailWrapper*/ public: const SiegeRot& /*__thiscall*/ GetDestinationRot() const; //0x006d2640
		/*Skrit::SiegeRailWrapper*/ public: const SiegeRot& /*__thiscall*/ GetSourceRot() const; //0x006d2610
		/*Skrit::SiegeRailWrapper*/ public: const vector_3& /*__thiscall*/ GetPoint(int unk1) const; //0x006d2660
		/*Skrit::SiegeRailWrapper*/ public: const Vector3Coll& /*__thiscall*/ GetPoints() const; //0x006d26b0
		DefineConstMethod(GetNumPoints, 0x6d2970, int, Params(), Args());
		DefineConstMethod(GetNumRotations, 0x6d2990, int, Params(), Args());
		/*Skrit::SiegeRailWrapper*/ public: QuatColl& /*__thiscall*/ GetRotations(); //0x006d2720
		/*Skrit::SiegeRailWrapper*/ public: Vector3Coll& /*__thiscall*/ GetPoints(); //0x006d26c0
		DefineMethod(AppendDestination, 0x6d3230, void, Params(const SiegePos& unk1, const SiegeRot& unk2, float unk3), Args(const SiegePos& unk1, const SiegeRot& unk2, float unk3));
		DefineMethod(AppendDestination, 0x6d3210, void, Params(const SiegePos& unk1, float unk2), Args(const SiegePos& unk1, float unk2));
		DefineMethod(AppendDestination, 0x6d31f0, void, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
		DefineMethod(AppendDestination, 0x6d3220, void, Params(const SiegeRot& unk1, float unk2), Args(const SiegeRot& unk1, float unk2));
		DefineMethod(Initialize, 0x6d31e0, void, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	};

	class TableWrapper {
	public:
		DefineStaticMethod(FUBI_CollectedClass, 0x408dd3, void, Params(), Args());
		DefineMethod(Query, 0x9b330a, DataSetWrapper*, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(AddRecord, 0x9b3372, RecordWrapper*, Params(), Args());
		DefineMethod(GetSchema, 0x9b32a2, SchemaWrapper*, Params(), Args());
		/*Skrit::TableWrapper*/ public: const char* /*__thiscall*/ GetGroup() const; //0x009b326f
		/*Skrit::TableWrapper*/ public: const char* /*__thiscall*/ GetName() const; //0x009b323c
	};

	class TableManager {
	public:
		DefineStaticMethod(GetSchema, 0x9b3ace, SchemaWrapper*, Params(int unk1), Args(int unk1));
		DefineStaticMethod(GetSchemaNamed, 0x9b3b11, SchemaWrapper*, Params(const char* unk1), Args(const char* unk1));
		DefineStaticMethod(GetTable, 0x9b3b64, TableWrapper*, Params(int unk1), Args(int unk1));
		DefineStaticMethod(GetTableNamed, 0x9b3ba7, TableWrapper*, Params(const char* unk1), Args(const char* unk1));
		DefineStaticMethod(GetSchemaCount, 0x9b3abe, int, Params(), Args());
		DefineStaticMethod(GetTableCount, 0x9b3b54, int, Params(), Args());
	};

	/*Skrit*/ bool /*__cdecl*/ EvalBool(const char* unk1, bool unk2); //0x009962d2
	/*Skrit*/ bool /*__cdecl*/ EvalBool(const char* unk1); //0x009962fe
	/*Skrit*/ double /*__cdecl*/ EvalFloat(const char* unk1, double unk2); //0x0099624f
	/*Skrit*/ double /*__cdecl*/ EvalFloat(const char* unk1); //0x0099627d
	/*Skrit*/ int /*__cdecl*/ EvalInt(const char* unk1, int unk2); //0x00996294
	/*Skrit*/ int /*__cdecl*/ EvalInt(const char* unk1); //0x009962c1
	/*Skrit*/ void /*__cdecl*/ Command(const char* unk1); //0x00996225
	/*Skrit*/ void /*__cdecl*/ Execute(const char* unk1, const char* unk2); //0x0099607d
	/*Skrit*/ void /*__cdecl*/ Execute(const char* unk1); //0x00996145
};

#pragma once

class Skrit {
public:
	enum eResult {

	};

	class FuelWrapper {
	public:
		/*Skrit::FuelWrapper*/ private: /*static*/ void /*__cdecl*/ FUBI_CollectedClass(); //0x009ad16d
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ FindFirstKey(const char* unk1); //0x009bd65f
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ FindFirstKeyAndValue(); //0x009bd936
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ FindNextKey(); //0x009bd75a
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ FindNextKeyAndValue(); //0x009bd9f4
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ GetBool(const char* unk1, bool unk2) const; //0x009bd617
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ GetBool(const char* unk1) const; //0x009bd647
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ GetFoundBool() const; //0x009bd8e6
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ GetFoundKeyAndBool(gpbstring<char>& unk1) const; //0x009bdb7a
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ GetIsDirectory() const; //0x009bceaa
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ GetIsEmpty() const; //0x009bced1
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ GetIsLoaded() const; //0x009bce93
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ HasKey(const char* unk1) const; //0x009bd4de
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ HasParent() const; //0x009bd09a
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ HasType() const; //0x009bcf86
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ Load(const char* unk1); //0x009bce2c
		/*Skrit::FuelWrapper*/ public: bool /*__thiscall*/ SkipNextKeyAndValue(); //0x009bda50
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetAddress() const; //0x009bcffe
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetAddress(bool unk1) const; //0x009bcfad
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetFoundKeyAndString(gpbstring<char>& unk1) const; //0x009bdaa2
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetFoundString() const; //0x009bd7b1
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetString(const char* unk1, const gpbstring<char>& unk2) const; //0x009bd50a
		/*Skrit::FuelWrapper*/ public: gpbstring<char> /*__thiscall*/ GetString(const char* unk1) const; //0x009bd55c
		/*Skrit::FuelWrapper*/ public: FuelWrapper* /*__thiscall*/ GetChildNamed(const char* unk1); //0x009bd13d
		/*Skrit::FuelWrapper*/ public: FuelWrapper* /*__thiscall*/ GetChildTyped(const char* unk1); //0x009bd177
		/*Skrit::FuelWrapper*/ public: FuelWrapper* /*__thiscall*/ GetFoundChild(int unk1); //0x009bd41a
		/*Skrit::FuelWrapper*/ public: FuelWrapper* /*__thiscall*/ GetOwningDirectory(); //0x009bd0e3
		/*Skrit::FuelWrapper*/ public: FuelWrapper* /*__thiscall*/ GetParent(); //0x009bd067
		/*Skrit::FuelWrapper*/ public: const char* /*__thiscall*/ GetName() const; //0x009bcef8
		/*Skrit::FuelWrapper*/ public: const char* /*__thiscall*/ GetType() const; //0x009bcf3f
		/*Skrit::FuelWrapper*/ public: double /*__thiscall*/ GetFloat(const char* unk1, double unk2) const; //0x009bd5c5
		/*Skrit::FuelWrapper*/ public: double /*__thiscall*/ GetFloat(const char* unk1) const; //0x009bd5fa
		/*Skrit::FuelWrapper*/ public: double /*__thiscall*/ GetFoundFloat() const; //0x009bd88d
		/*Skrit::FuelWrapper*/ public: double /*__thiscall*/ GetFoundKeyAndFloat(gpbstring<char>& unk1) const; //0x009bdb30
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ FindChildren(); //0x009bd2ac
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ FindChildren(const char* unk1, const char* unk2, int unk3); //0x009bd1b1
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ FindChildren(const char* unk1, const char* unk2); //0x009bd224
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ FindChildren(int unk1); //0x009bd23f
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ FindChildrenNamed(const char* unk1, int unk2); //0x009bd2bf
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ FindChildrenNamed(const char* unk1); //0x009bd32f
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ FindChildrenTyped(const char* unk1, int unk2); //0x009bd347
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ FindChildrenTyped(const char* unk1); //0x009bd3b7
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ GetChecksum() const; //0x009bd019
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ GetChildCount() const; //0x009bd116
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ GetFoundChildCount() const; //0x009bd3cf
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ GetFoundInt() const; //0x009bd83d
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ GetFoundKeyAndInt(gpbstring<char>& unk1) const; //0x009bdae7
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ GetInt(const char* unk1, int unk2) const; //0x009bd57d
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ GetInt(const char* unk1) const; //0x009bd5ad
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ GetKeyCount() const; //0x009bd4b7
		/*Skrit::FuelWrapper*/ public: int /*__thiscall*/ GetRecursiveChecksum(); //0x009bd040
		/*Skrit::FuelWrapper*/ public: void /*__thiscall*/ Unload(); //0x009bce68
	};

	class Machine {
	public:
		/*Skrit::Machine*/ public: void /*__thiscall*/ DisassembleCurrent() const; //0x009ad6d8
		/*Skrit::Machine*/ public: void /*__thiscall*/ DisassembleCurrent(ReportSys::Context* unk1) const; //0x009ad6bc
	};

	class Object {
	public:
		/*Skrit::Object*/ public: bool /*__thiscall*/ IsStateChangePending() const; //0x00408f67
		/*Skrit::Object*/ public: const gpbstring<char>& /*__thiscall*/ GetName() const; //0x00408f60
		/*Skrit::Object*/ public: float /*__thiscall*/ AddTimerSeconds(int unk1, float unk2); //0x009a7818
		/*Skrit::Object*/ public: float /*__thiscall*/ GetPollPeriod() const; //0x00408f86
		/*Skrit::Object*/ public: int /*__thiscall*/ CreateFrameTimer(int unk1); //0x009a7724
		/*Skrit::Object*/ public: int /*__thiscall*/ CreateTimer(float unk1); //0x009a76de
		/*Skrit::Object*/ public: int /*__thiscall*/ GetCurrentState() const; //0x00408f71
		/*Skrit::Object*/ public: int /*__thiscall*/ GetPendingState() const; //0x00408f75
		/*Skrit::Object*/ public: void /*__thiscall*/ CreateFrameTimer(int unk1, int unk2); //0x009a774a
		/*Skrit::Object*/ public: void /*__thiscall*/ CreateTimer(int unk1, float unk2); //0x009a7708
		/*Skrit::Object*/ public: void /*__thiscall*/ DestroyTimer(int unk1); //0x009a7766
		/*Skrit::Object*/ public: void /*__thiscall*/ ResetTimerSeconds(int unk1, float unk2); //0x009a7879
		/*Skrit::Object*/ public: void /*__thiscall*/ SetNewTimerSeconds(int unk1, float unk2); //0x009a78cf
		/*Skrit::Object*/ public: void /*__thiscall*/ SetPollPeriod(float unk1); //0x00408f79
		/*Skrit::Object*/ public: void /*__thiscall*/ SetTimerGlobal(int unk1, bool unk2); //0x009a77a2
		/*Skrit::Object*/ public: void /*__thiscall*/ SetTimerRepeatCount(int unk1, int unk2); //0x009a77d9
	};

	class RecordWrapper {
	public:
		/*Skrit::RecordWrapper*/ public: /*static*/ void /*__cdecl*/ FUBI_CollectedClass(); //0x00408dd4
		/*Skrit::RecordWrapper*/ public: bool /*__thiscall*/ GetBool(const char* unk1) const; //0x009b3552
		/*Skrit::RecordWrapper*/ public: gpbstring<char> /*__thiscall*/ GetString(const char* unk1) const; //0x009b34b3
		/*Skrit::RecordWrapper*/ public: double /*__thiscall*/ GetFloat(const char* unk1) const; //0x009b36c2
		/*Skrit::RecordWrapper*/ public: int /*__thiscall*/ GetInt(const char* unk1) const; //0x009b360a
		/*Skrit::RecordWrapper*/ public: void /*__thiscall*/ Delete(); //0x009b348a
		/*Skrit::RecordWrapper*/ public: void /*__thiscall*/ SetBool(const char* unk1, bool unk2); //0x009b35b6
		/*Skrit::RecordWrapper*/ public: void /*__thiscall*/ SetFloat(const char* unk1, double unk2); //0x009b375f
		/*Skrit::RecordWrapper*/ public: void /*__thiscall*/ SetInt(const char* unk1, int unk2); //0x009b366e
		/*Skrit::RecordWrapper*/ public: void /*__thiscall*/ SetString(const char* unk1, const gpbstring<char>& unk2); //0x009b351b
	};

	class DataSetWrapper {
	public:
		/*Skrit::DataSetWrapper*/ public: /*static*/ void /*__cdecl*/ FUBI_CollectedClass(); //0x00408dd5
		/*Skrit::DataSetWrapper*/ public: RecordWrapper* /*__thiscall*/ GetRecord(int unk1); //0x009b38b3
		/*Skrit::DataSetWrapper*/ public: int /*__thiscall*/ GetRecordCount() const; //0x009b387b
	};

	class SchemaWrapper {
	public:
		/*Skrit::SchemaWrapper*/ public: /*static*/ void /*__cdecl*/ FUBI_CollectedClass(); //0x00408dd6
		/*Skrit::SchemaWrapper*/ public: const char* /*__thiscall*/ GetColumnName(int unk1) const; //0x009b3a6b
		/*Skrit::SchemaWrapper*/ public: const char* /*__thiscall*/ GetGroup() const; //0x009b3a08
		/*Skrit::SchemaWrapper*/ public: const char* /*__thiscall*/ GetName() const; //0x009b39d5
		/*Skrit::SchemaWrapper*/ public: int /*__thiscall*/ GetColumnCount() const; //0x009b3a3b
	};

	class SiegeRailWrapper {
	public:
		/*Skrit::SiegeRailWrapper*/ private: /*static*/ void /*__cdecl*/ FUBI_CollectedClass(); //0x006d2170
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
		/*Skrit::SiegeRailWrapper*/ public: int /*__thiscall*/ GetNumPoints() const; //0x006d2970
		/*Skrit::SiegeRailWrapper*/ public: int /*__thiscall*/ GetNumRotations() const; //0x006d2990
		/*Skrit::SiegeRailWrapper*/ public: QuatColl& /*__thiscall*/ GetRotations(); //0x006d2720
		/*Skrit::SiegeRailWrapper*/ public: Vector3Coll& /*__thiscall*/ GetPoints(); //0x006d26c0
		/*Skrit::SiegeRailWrapper*/ public: void /*__thiscall*/ AppendDestination(const SiegePos& unk1, const SiegeRot& unk2, float unk3); //0x006d3230
		/*Skrit::SiegeRailWrapper*/ public: void /*__thiscall*/ AppendDestination(const SiegePos& unk1, float unk2); //0x006d3210
		/*Skrit::SiegeRailWrapper*/ public: void /*__thiscall*/ AppendDestination(const SiegePos& unk1); //0x006d31f0
		/*Skrit::SiegeRailWrapper*/ public: void /*__thiscall*/ AppendDestination(const SiegeRot& unk1, float unk2); //0x006d3220
		/*Skrit::SiegeRailWrapper*/ public: void /*__thiscall*/ Initialize(const SiegePos& unk1); //0x006d31e0
	};

	class TableWrapper {
	public:
		/*Skrit::TableWrapper*/ public: /*static*/ void /*__cdecl*/ FUBI_CollectedClass(); //0x00408dd3
		/*Skrit::TableWrapper*/ public: DataSetWrapper* /*__thiscall*/ Query(const char* unk1); //0x009b330a
		/*Skrit::TableWrapper*/ public: RecordWrapper* /*__thiscall*/ AddRecord(); //0x009b3372
		/*Skrit::TableWrapper*/ public: SchemaWrapper* /*__thiscall*/ GetSchema(); //0x009b32a2
		/*Skrit::TableWrapper*/ public: const char* /*__thiscall*/ GetGroup() const; //0x009b326f
		/*Skrit::TableWrapper*/ public: const char* /*__thiscall*/ GetName() const; //0x009b323c
	};

	class TableManager {
	public:
		/*Skrit::TableManager*/ public: /*static*/ SchemaWrapper* /*__cdecl*/ GetSchema(int unk1); //0x009b3ace
		/*Skrit::TableManager*/ public: /*static*/ SchemaWrapper* /*__cdecl*/ GetSchemaNamed(const char* unk1); //0x009b3b11
		/*Skrit::TableManager*/ public: /*static*/ TableWrapper* /*__cdecl*/ GetTable(int unk1); //0x009b3b64
		/*Skrit::TableManager*/ public: /*static*/ TableWrapper* /*__cdecl*/ GetTableNamed(const char* unk1); //0x009b3ba7
		/*Skrit::TableManager*/ public: /*static*/ int /*__cdecl*/ GetSchemaCount(); //0x009b3abe
		/*Skrit::TableManager*/ public: /*static*/ int /*__cdecl*/ GetTableCount(); //0x009b3b54
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

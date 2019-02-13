#pragma once

#include "ClassMacros.h"

enum eAnimChore;
enum eWorldEvent;

class MCP {
public:
	enum eOrientMode {

	};

	enum eReqFlag {

	};

	enum eRequest {

	};

	enum eReqRetCode {

	};

	enum eRID {

	};

	class Manager {
	public:
		DefineSingleton(Manager, 0x41425f);

		/*Manager*/ private: /*static*/ Manager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0041425f
		DefineMethod(BeginTeleport, 0x882005, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
		DefineMethod(Flush, 0x881f10, bool, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
		DefineMethod(Flush, 0x4126a7, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
		DefineMethod(GetLastChoreRequestedIsStillValid, 0x96a35c, bool, Params(const Goid_* unk1, eAnimChore unk2, eAnimStance unk3), Args(const Goid_* unk1, eAnimChore unk2, eAnimStance unk3));
		DefineMethod(GetTargetUnusedGatherPoint, 0x96abeb, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3));
		DefineMethod(MessagesAreInSync, 0x9680e1, bool, Params(const Goid_* unk1, eRID unk2, eWorldEvent unk3), Args(const Goid_* unk1, eRID unk2, eWorldEvent unk3));
		DefineMethod(ReconstructDependancy, 0x96942c, bool, Params(const Goid_* unk1, const Goid_* unk2, float unk3), Args(const Goid_* unk1, const Goid_* unk2, float unk3));
		DefineMethod(GetLastRequestTimeRemaining, 0x96811c, float, Params(const Goid_* unk1), Args(const Goid_* unk1));
		DefineMethod(MakeContinuousMoveRequest, 0x968ed1, eReqRetCode, Params(const Goid_* unk1, const SiegePos& unk2, float unk3), Args(const Goid_* unk1, const SiegePos& unk2, float unk3));
		DefineMethod(MakeJumpRailRequest, 0x969db2, eReqRetCode, Params(const Goid_* unk1, eAnimChore unk2, const SiegePos& unk3, float unk4, float unk5, unsigned long unk6, bool unk7), Args(const Goid_* unk1, eAnimChore unk2, const SiegePos& unk3, float unk4, float unk5, unsigned long unk6, bool unk7));
		DefineMethod(MakeLineRailRequest, 0x96a9d9, eReqRetCode, Params(const Goid_* unk1, eAnimChore unk2, unsigned long unk3, float unk4, const vector_3& unk5, bool unk6), Args(const Goid_* unk1, eAnimChore unk2, unsigned long unk3, float unk4, const vector_3& unk5, bool unk6));
		DefineMethod(MakeLineRailRequest, 0x96a5ed, eReqRetCode, Params(const Goid_* unk1, eAnimChore unk2, unsigned long unk3, float unk4, const vector_3& unk5, float unk6, bool unk7), Args(const Goid_* unk1, eAnimChore unk2, unsigned long unk3, float unk4, const vector_3& unk5, float unk6, bool unk7));
		DefineMethod(MakeRequest, 0x96cb1d, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const Goid_* unk3, float unk4, float unk5, float unk6, eReqFlag unk7), Args(const Goid_* unk1, eRequest unk2, const Goid_* unk3, float unk4, float unk5, float unk6, eReqFlag unk7));
		DefineMethod(MakeRequest, 0x96cba0, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const Goid_* unk3, float unk4, float unk5, float unk6), Args(const Goid_* unk1, eRequest unk2, const Goid_* unk3, float unk4, float unk5, float unk6));
		DefineMethod(MakeRequest, 0x968cd1, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const Goid_* unk3, eReqFlag unk4, float unk5), Args(const Goid_* unk1, eRequest unk2, const Goid_* unk3, eReqFlag unk4, float unk5));
		DefineMethod(MakeRequest, 0x9693dc, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const Goid_* unk3, eReqFlag unk4), Args(const Goid_* unk1, eRequest unk2, const Goid_* unk3, eReqFlag unk4));
		DefineMethod(MakeRequest, 0x9693bf, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const Goid_* unk3), Args(const Goid_* unk1, eRequest unk2, const Goid_* unk3));
		DefineMethod(MakeRequest, 0x96a54b, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, float unk4, eReqFlag unk5), Args(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, float unk4, eReqFlag unk5));
		DefineMethod(MakeRequest, 0x96a521, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, float unk4), Args(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, float unk4));
		DefineMethod(MakeRequest, 0x968b28, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, eReqFlag unk4), Args(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, eReqFlag unk4));
		DefineMethod(MakeRequest, 0x969391, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegePos& unk3), Args(const Goid_* unk1, eRequest unk2, const SiegePos& unk3));
		DefineMethod(MakeRequest, 0x968be9, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegeRot& unk3, eReqFlag unk4), Args(const Goid_* unk1, eRequest unk2, const SiegeRot& unk3, eReqFlag unk4));
		DefineMethod(MakeRequest, 0x9693a8, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegeRot& unk3), Args(const Goid_* unk1, eRequest unk2, const SiegeRot& unk3));
		DefineMethod(MakeRequest, 0x9693fa, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, eAnimChore unk3, const Skrit::SiegeRailWrapper& unk4, float unk5, unsigned long unk6, bool unk7), Args(const Goid_* unk1, eRequest unk2, eAnimChore unk3, const Skrit::SiegeRailWrapper& unk4, float unk5, unsigned long unk6, bool unk7));
		DefineMethod(MakeRequest, 0x968de8, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, eAnimChore unk3, const Skrit::SiegeRailWrapper& unk4, float unk5, unsigned long unk6, unsigned long unk7, bool unk8), Args(const Goid_* unk1, eRequest unk2, eAnimChore unk3, const Skrit::SiegeRailWrapper& unk4, float unk5, unsigned long unk6, unsigned long unk7, bool unk8));
		DefineMethod(MakeRequest, 0x968a27, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, eAnimChore unk3, unsigned long unk4, unsigned long unk5), Args(const Goid_* unk1, eRequest unk2, eAnimChore unk3, unsigned long unk4, unsigned long unk5));
		DefineMethod(MakeRequest, 0x96cc5e, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, const Goid_* unk4, float unk5, float unk6, float unk7, eReqFlag unk8), Args(const Goid_* unk1, eRequest unk2, float unk3, const Goid_* unk4, float unk5, float unk6, float unk7, eReqFlag unk8));
		DefineMethod(MakeRequest, 0x96cc21, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, const Goid_* unk4, float unk5, float unk6, float unk7), Args(const Goid_* unk1, eRequest unk2, float unk3, const Goid_* unk4, float unk5, float unk6, float unk7));
		DefineMethod(MakeRequest, 0x96a59d, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, const SiegePos& unk4, float unk5, eReqFlag unk6), Args(const Goid_* unk1, eRequest unk2, float unk3, const SiegePos& unk4, float unk5, eReqFlag unk6));
		DefineMethod(MakeRequest, 0x96a576, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, const SiegePos& unk4, float unk5), Args(const Goid_* unk1, eRequest unk2, float unk3, const SiegePos& unk4, float unk5));
		DefineMethod(MakeRequest, 0x96c4ed, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8, eReqFlag unk9, float unk10), Args(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8, eReqFlag unk9, float unk10));
		DefineMethod(MakeRequest, 0x96ccda, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8, eReqFlag unk9), Args(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8, eReqFlag unk9));
		DefineMethod(MakeRequest, 0x96cc9c, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8), Args(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8));
		DefineMethod(MakeRequest, 0x969b3a, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const SiegePos& unk5, float unk6, eReqFlag unk7), Args(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const SiegePos& unk5, float unk6, eReqFlag unk7));
		DefineMethod(MakeRequest, 0x96a5c5, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const SiegePos& unk5, float unk6), Args(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const SiegePos& unk5, float unk6));
		DefineMethod(MakeRequest, 0x969363, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, eReqFlag unk3), Args(const Goid_* unk1, eRequest unk2, eReqFlag unk3));
		DefineMethod(MakeRequest, 0x96cb5e, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, const Goid_* unk4, float unk5, float unk6, float unk7, eReqFlag unk8), Args(const Goid_* unk1, eRequest unk2, unsigned long unk3, const Goid_* unk4, float unk5, float unk6, float unk7, eReqFlag unk8));
		DefineMethod(MakeRequest, 0x96cbe0, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, const Goid_* unk4, float unk5, float unk6, float unk7), Args(const Goid_* unk1, eRequest unk2, unsigned long unk3, const Goid_* unk4, float unk5, float unk6, float unk7));
		DefineMethod(MakeRequest, 0x96a4f5, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, const SiegePos& unk4, float unk5, eReqFlag unk6), Args(const Goid_* unk1, eRequest unk2, unsigned long unk3, const SiegePos& unk4, float unk5, eReqFlag unk6));
		DefineMethod(MakeRequest, 0x96a4ca, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, const SiegePos& unk4, float unk5), Args(const Goid_* unk1, eRequest unk2, unsigned long unk3, const SiegePos& unk4, float unk5));
		DefineMethod(MakeRequest, 0x968804, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, eReqFlag unk4), Args(const Goid_* unk1, eRequest unk2, unsigned long unk3, eReqFlag unk4));
		DefineMethod(MakeRequest, 0x96937a, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3), Args(const Goid_* unk1, eRequest unk2, unsigned long unk3));
		DefineMethod(MakeRequest, 0x96934d, eReqRetCode, Params(const Goid_* unk1, eRequest unk2), Args(const Goid_* unk1, eRequest unk2));
		DefineMethod(MakeSpeedRequest, 0x968f5a, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, float unk4), Args(const Goid_* unk1, eRequest unk2, unsigned long unk3, float unk4));
	};
};

/*__STATIC__*/ const char* /*__cdecl*/ ToString(eOrientMode unk1); //0x00880bd0
/*__STATIC__*/ const char* /*__cdecl*/ ToString(eReqRetCode unk1); //0x00967fe2
/*__STATIC__*/ const char* /*__cdecl*/ ToString(eRequest unk1); //0x00967fd0
/*__STATIC__*/ const char* /*__cdecl*/ ToString(eRID unk1); //0x00880c1e

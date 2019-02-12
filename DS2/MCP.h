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
		/*Manager*/ public: bool /*__thiscall*/ BeginTeleport(const Goid_* unk1); //0x00882005
		/*Manager*/ public: bool /*__thiscall*/ Flush(const Goid_* unk1, float unk2); //0x00881f10
		/*Manager*/ public: bool /*__thiscall*/ Flush(const Goid_* unk1); //0x004126a7
		/*Manager*/ public: bool /*__thiscall*/ GetLastChoreRequestedIsStillValid(const Goid_* unk1, eAnimChore unk2, eAnimStance unk3); //0x0096a35c
		/*Manager*/ public: bool /*__thiscall*/ GetTargetUnusedGatherPoint(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3); //0x0096abeb
		/*Manager*/ public: bool /*__thiscall*/ MessagesAreInSync(const Goid_* unk1, eRID unk2, eWorldEvent unk3); //0x009680e1
		/*Manager*/ public: bool /*__thiscall*/ ReconstructDependancy(const Goid_* unk1, const Goid_* unk2, float unk3); //0x0096942c
		/*Manager*/ public: float /*__thiscall*/ GetLastRequestTimeRemaining(const Goid_* unk1); //0x0096811c
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeContinuousMoveRequest(const Goid_* unk1, const SiegePos& unk2, float unk3); //0x00968ed1
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeJumpRailRequest(const Goid_* unk1, eAnimChore unk2, const SiegePos& unk3, float unk4, float unk5, unsigned long unk6, bool unk7); //0x00969db2
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeLineRailRequest(const Goid_* unk1, eAnimChore unk2, unsigned long unk3, float unk4, const vector_3& unk5, bool unk6); //0x0096a9d9
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeLineRailRequest(const Goid_* unk1, eAnimChore unk2, unsigned long unk3, float unk4, const vector_3& unk5, float unk6, bool unk7); //0x0096a5ed
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const Goid_* unk3, float unk4, float unk5, float unk6, eReqFlag unk7); //0x0096cb1d
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const Goid_* unk3, float unk4, float unk5, float unk6); //0x0096cba0
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const Goid_* unk3, eReqFlag unk4, float unk5); //0x00968cd1
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const Goid_* unk3, eReqFlag unk4); //0x009693dc
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const Goid_* unk3); //0x009693bf
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, float unk4, eReqFlag unk5); //0x0096a54b
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, float unk4); //0x0096a521
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, eReqFlag unk4); //0x00968b28
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const SiegePos& unk3); //0x00969391
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const SiegeRot& unk3, eReqFlag unk4); //0x00968be9
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, const SiegeRot& unk3); //0x009693a8
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, eAnimChore unk3, const Skrit::SiegeRailWrapper& unk4, float unk5, unsigned long unk6, bool unk7); //0x009693fa
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, eAnimChore unk3, const Skrit::SiegeRailWrapper& unk4, float unk5, unsigned long unk6, unsigned long unk7, bool unk8); //0x00968de8
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, eAnimChore unk3, unsigned long unk4, unsigned long unk5); //0x00968a27
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, float unk3, const Goid_* unk4, float unk5, float unk6, float unk7, eReqFlag unk8); //0x0096cc5e
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, float unk3, const Goid_* unk4, float unk5, float unk6, float unk7); //0x0096cc21
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, float unk3, const SiegePos& unk4, float unk5, eReqFlag unk6); //0x0096a59d
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, float unk3, const SiegePos& unk4, float unk5); //0x0096a576
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8, eReqFlag unk9, float unk10); //0x0096c4ed
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8, eReqFlag unk9); //0x0096ccda
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8); //0x0096cc9c
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const SiegePos& unk5, float unk6, eReqFlag unk7); //0x00969b3a
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const SiegePos& unk5, float unk6); //0x0096a5c5
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, eReqFlag unk3); //0x00969363
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, unsigned long unk3, const Goid_* unk4, float unk5, float unk6, float unk7, eReqFlag unk8); //0x0096cb5e
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, unsigned long unk3, const Goid_* unk4, float unk5, float unk6, float unk7); //0x0096cbe0
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, unsigned long unk3, const SiegePos& unk4, float unk5, eReqFlag unk6); //0x0096a4f5
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, unsigned long unk3, const SiegePos& unk4, float unk5); //0x0096a4ca
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, unsigned long unk3, eReqFlag unk4); //0x00968804
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2, unsigned long unk3); //0x0096937a
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeRequest(const Goid_* unk1, eRequest unk2); //0x0096934d
		/*Manager*/ public: eReqRetCode /*__thiscall*/ MakeSpeedRequest(const Goid_* unk1, eRequest unk2, unsigned long unk3, float unk4); //0x00968f5a
	};
};

/*__STATIC__*/ const char* /*__cdecl*/ ToString(eOrientMode unk1); //0x00880bd0
/*__STATIC__*/ const char* /*__cdecl*/ ToString(eReqRetCode unk1); //0x00967fe2
/*__STATIC__*/ const char* /*__cdecl*/ ToString(eRequest unk1); //0x00967fd0
/*__STATIC__*/ const char* /*__cdecl*/ ToString(eRID unk1); //0x00880c1e

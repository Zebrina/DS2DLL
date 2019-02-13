#pragma once

#include "ClassMacros.h"

class GameSave {
public:
	DefineSingleton(GameSave, 0x40a277);

	/*GameSave*/ private: /*static*/ GameSave* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a277
	DefineMethod(RCCreateDisbandedMember, 0x414392, void, Params(const Goid_* unk1, unsigned long unk2, bool unk3, bool unk4), Args(const Goid_* unk1, unsigned long unk2, bool unk3, bool unk4));
	DefineMethod(RCCreateMemberForDisband, 0x417162, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCFileTransferComplete, 0x416abf, void, Params(), Args());
	DefineMethod(RCInitiateSaveFileTransfer, 0x41bca2, void, Params(const gpbstring<unsigned short>& unk1), Args(const gpbstring<unsigned short>& unk1));
	DefineMethod(RCInstantiateDisbandedMember, 0x4159e0, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCSendClientData, 0x4178be, void, Params(const_mem_ptr unk1, unsigned long unk2), Args(const_mem_ptr unk1, unsigned long unk2));
	DefineMethod(RCUpdateDownloadProgress, 0x41486a, void, Params(const PlayerId_* unk1, float unk2), Args(const PlayerId_* unk1, float unk2));
	DefineMethod(RSAckClientData, 0x41473e, void, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RSCreateDisbandedMember, 0x415825, void, Params(const Goid_* unk1, const gpbstring<char>& unk2, SiegePos unk3, const_mem_ptr unk4, bool unk5, bool unk6), Args(const Goid_* unk1, const gpbstring<char>& unk2, SiegePos unk3, const_mem_ptr unk4, bool unk5, bool unk6));
	DefineMethod(RSCreateMemberForDisband, 0x41776d, void, Params(const gpbstring<char>& unk1, const_mem_ptr unk2, const PlayerId_* unk3), Args(const gpbstring<char>& unk1, const_mem_ptr unk2, const PlayerId_* unk3));
	DefineMethod(RSInstantiateDisbandedMember, 0x416914, void, Params(const Goid_* unk1, const SiegePos& unk2), Args(const Goid_* unk1, const SiegePos& unk2));
	DefineMethod(RSReassignStartingPositions, 0x414654, void, Params(), Args());
	DefineMethod(RSSetDisbandedMemberJournalInfo, 0x414501, void, Params(const Goid_* unk1, const PlayerId_* unk2), Args(const Goid_* unk1, const PlayerId_* unk2));
	DefineMethod(IsBookmarkLoaded, 0x40852a, bool, Params(), Args());
	DefineMethod(SaveAll, 0x40851c, bool, Params(), Args());
	DefineMethod(SaveBookmark, 0x4220b3, bool, Params(const gpbstring<char>& unk1, bool unk2, bool unk3), Args(const gpbstring<char>& unk1, bool unk2, bool unk3));
	DefineMethod(ActivateBookmarkTimer, 0x412f68, void, Params(float unk1), Args(float unk1));
	DefineMethod(LoadBookmark, 0x423817, void, Params(int unk1), Args(int unk1));
	DefineMethod(RCActivateBookmark, 0x41f0bc, void, Params(int unk1), Args(int unk1));
	DefineMethod(ReturnFromBookmark, 0x423961, void, Params(), Args());
	DefineMethod(RSAckSaveFileTransfer, 0x417283, void, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RSDeclineSaveFileTransfer, 0x412fb8, void, Params(), Args());
	DefineMethod(SActivateBookmark, 0x41f660, void, Params(int unk1), Args(int unk1));
};

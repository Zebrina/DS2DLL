#pragma once

#include "ClassMacros.h"

class GameSave {
public:
	DefineSingleton(GameSave, 0x40a277);

	/*GameSave*/ private: /*static*/ GameSave* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a277
	/*GameSave*/ private: void /*__thiscall*/ RCCreateDisbandedMember(const Goid_* unk1, unsigned long unk2, bool unk3, bool unk4); //0x00414392
	/*GameSave*/ private: void /*__thiscall*/ RCCreateMemberForDisband(const Goid_* unk1, unsigned long unk2); //0x00417162
	/*GameSave*/ private: void /*__thiscall*/ RCFileTransferComplete(); //0x00416abf
	/*GameSave*/ private: void /*__thiscall*/ RCInitiateSaveFileTransfer(const gpbstring<unsigned short>& unk1); //0x0041bca2
	/*GameSave*/ private: void /*__thiscall*/ RCInstantiateDisbandedMember(const Goid_* unk1); //0x004159e0
	/*GameSave*/ private: void /*__thiscall*/ RCSendClientData(const_mem_ptr unk1, unsigned long unk2); //0x004178be
	/*GameSave*/ private: void /*__thiscall*/ RCUpdateDownloadProgress(const PlayerId_* unk1, float unk2); //0x0041486a
	/*GameSave*/ private: void /*__thiscall*/ RSAckClientData(const PlayerId_* unk1); //0x0041473e
	/*GameSave*/ private: void /*__thiscall*/ RSCreateDisbandedMember(const Goid_* unk1, const gpbstring<char>& unk2, SiegePos unk3, const_mem_ptr unk4, bool unk5, bool unk6); //0x00415825
	/*GameSave*/ private: void /*__thiscall*/ RSCreateMemberForDisband(const gpbstring<char>& unk1, const_mem_ptr unk2, const PlayerId_* unk3); //0x0041776d
	/*GameSave*/ private: void /*__thiscall*/ RSInstantiateDisbandedMember(const Goid_* unk1, const SiegePos& unk2); //0x00416914
	/*GameSave*/ private: void /*__thiscall*/ RSReassignStartingPositions(); //0x00414654
	/*GameSave*/ private: void /*__thiscall*/ RSSetDisbandedMemberJournalInfo(const Goid_* unk1, const PlayerId_* unk2); //0x00414501
	/*GameSave*/ public: bool /*__thiscall*/ IsBookmarkLoaded(); //0x0040852a
	/*GameSave*/ public: bool /*__thiscall*/ SaveAll(); //0x0040851c
	/*GameSave*/ public: bool /*__thiscall*/ SaveBookmark(const gpbstring<char>& unk1, bool unk2, bool unk3); //0x004220b3
	/*GameSave*/ public: void /*__thiscall*/ ActivateBookmarkTimer(float unk1); //0x00412f68
	/*GameSave*/ public: void /*__thiscall*/ LoadBookmark(int unk1); //0x00423817
	/*GameSave*/ public: void /*__thiscall*/ RCActivateBookmark(int unk1); //0x0041f0bc
	/*GameSave*/ public: void /*__thiscall*/ ReturnFromBookmark(); //0x00423961
	/*GameSave*/ public: void /*__thiscall*/ RSAckSaveFileTransfer(const PlayerId_* unk1); //0x00417283
	/*GameSave*/ public: void /*__thiscall*/ RSDeclineSaveFileTransfer(); //0x00412fb8
	/*GameSave*/ public: void /*__thiscall*/ SActivateBookmark(int unk1); //0x0041f660
};

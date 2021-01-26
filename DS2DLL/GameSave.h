#pragma once

class GameSave {
public:
	$Singleton(GameSave, 0x0040a277);

	$Method(0x00414392, RCCreateDisbandedMember, void, const Goid* unk1, uint unk2, bool unk3, bool unk4);
	$Method(0x00417162, RCCreateMemberForDisband, void, const Goid* unk1, uint unk2);
	$Method(0x00416abf, RCFileTransferComplete, void);
	$Method(0x0041bca2, RCInitiateSaveFileTransfer, void, const GPWString& unk1);
	$Method(0x004159e0, RCInstantiateDisbandedMember, void, const Goid* unk1);
	$Method(0x004178be, RCSendClientData, void, const_mem_ptr unk1, uint unk2);
	$Method(0x0041486a, RCUpdateDownloadProgress, void, const PlayerId* unk1, float unk2);
	$Method(0x0041473e, RSAckClientData, void, const PlayerId* unk1);
	$Method(0x00415825, RSCreateDisbandedMember, void, const Goid* unk1, const GPBString& unk2, SiegePos unk3, const_mem_ptr unk4, bool unk5, bool unk6);
	$Method(0x0041776d, RSCreateMemberForDisband, void, const GPBString& unk1, const_mem_ptr unk2, const PlayerId* unk3);
	$Method(0x00416914, RSInstantiateDisbandedMember, void, const Goid* unk1, const SiegePos& unk2);
	$Method(0x00414654, RSReassignStartingPositions, void);
	$Method(0x00414501, RSSetDisbandedMemberJournalInfo, void, const Goid* unk1, const PlayerId* unk2);
	$Method(0x0040852a, IsBookmarkLoaded, bool);
	$Method(0x0040851c, SaveAll, bool);
	$Method(0x004220b3, SaveBookmark, bool, const GPBString& unk1, bool unk2, bool unk3);
	$Method(0x00412f68, ActivateBookmarkTimer, void, float unk1);
	$Method(0x00423817, LoadBookmark, void, int unk1);
	$Method(0x0041f0bc, RCActivateBookmark, void, int unk1);
	$Method(0x00423961, ReturnFromBookmark, void);
	$Method(0x00417283, RSAckSaveFileTransfer, void, const PlayerId* unk1);
	$Method(0x00412fb8, RSDeclineSaveFileTransfer, void);
	$Method(0x0041f660, SActivateBookmark, void, int unk1);

	// 0x00
	$Padding(0x00, 0xac);
	// 0xac
	bool bookmarkLoaded;
	bool bAD;
	bool bAE;
	bool bAF;
    // 0xB0
    $Padding(0xb0, 0xf0);
};

STATIC_ASSERT(sizeof(GameSave) == 0xf0);

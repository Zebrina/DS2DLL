#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "Go.h"
#include "GridItem.h"
#include "Player.h"
#include "UIGridbox.h"

class UIInventoryManager {
public:
	$Singleton(UIInventoryManager, 0x0043d9b7);

	$Method(0x00486d03, ActivateEquipment, void, int characterIndex, bool activate);
	$Method(0x0049525b, CheckSetQuickSlot, void, int characterIndex, int slot);

	$Method(0x0049064b, RCCancelTrade, void, uint unk1);
	$Method(0x0048786e, HasEnteredUnlockCode, bool, const Goid* unk1);
	$Method(0x004878bc, SHasTicketItem, bool, const Goid* unk1);
	$Method(0x004893ae, RCCombinePotions, FuBiCookie*, const Goid* unk1, const Goid* unk2, Go* unk3, float unk4, float unk5);
	$Method(0x00488883, RCCombinePotionsDest, FuBiCookie*, const Goid* unk1, Go* unk2, float unk3, float unk4);
	$Method(0x0048a0ab, RSCombinePotions, FuBiCookie*, Go* unk1, Go* unk2, Go* unk3, float unk4, float unk5);
	$Method(0x00495384, AttemptActiveSlotEquip, void, int characterIndex);
	$Method(0x0048aeac, AttemptItemUnlock, void, const GPBString& unk1);
	$Method(0x004891ca, AttemptSpellEquip, void, int spellSlot);
	$Method(0x00489175, AttemptSpellRemoval, void, int spellSlot);
	$Method(0x0048ecb1, CalculateGridHighlights, void, UIGridbox* unk1);
	$Method(0x00485f90, CancelItemUnlock, void);
	$Method(0x0043e1a0, ClearGUIRolloverSkill, void);
	$Method(0x0048922e, DeactivateItems, void);
	$Method(0x0048fdd9, ListenerCharacterRolloff, void);
	$Method(0x0048fad0, ListenerCharacterRollover, void);
	$Method(0x00494827, RCAckInitiateTrade, void, Go* unk1, Go* unk2, Go* unk3, uint unk4, uint unk5);
	$Method(0x0048b380, RCActivateItemUnlockInterace, void, const Goid* unk1, uint unk2);
	$Method(0x004929d3, RCActivateStash, void, const Goid* unk1, const Goid* unk2, uint unk3);
	$Method(0x004911fb, RCAddToDestGridbox, void, GridItem unk1, uint unk2);
	$Method(0x00490a17, RCAttemptTradeCompletion, void, Go* unk1, Go* unk2);
	$Method(0x00490d54, RCCompleteTrade, void, Go* unk1, Go* unk2);
	$Method(0x00487462, RCGoldTransferComplete, void, Go* unk1);
	$Method(0x0048a9b0, RCPlayerBusyDialog, void, uint unk1);
	$Method(0x0048ab29, RCPlayerNotInRangeDialog, void, uint unk1);
	$Method(0x00487e9c, RCPrepareForDeletion, void, const Goid* unk1, uint unk2);
	$Method(0x00487fe7, RCRemoveFromDestGridbox, void, int unk1, Player* unk2);
	$Method(0x0048b467, RCRetrieveItemUnlockCode, void, uint unk1);
	$Method(0x0048aca2, RCSetTradeDestAccept, void, bool unk1, uint unk2);
	$Method(0x00492fdf, RCSetTradeSourceAccept, void, bool unk1, uint unk2);
	$Method(0x00485e34, RCTradeFailed, void, uint unk1);
	$Method(0x0048d48e, RCTradeUpdateGoldDest, void, uint unk1, int unk2);
	$Method(0x0048d357, RCTradeUpdateGoldSource, void, uint unk1, int unk2);
	$Method(0x004933ec, RSActivateStash, void, const Goid* unk1, const Goid* unk2);
	$Method(0x00493651, RSAddToDestGridbox, void, GridItem unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x00492526, RSAttemptTradeCompletion, void, Go* unk1, Go* unk2);
	$Method(0x00492386, RSCancelTrade, void, Go* unk1, Go* unk2);
	$Method(0x004926a7, RSCompleteTrade, void, Go* unk1, Go* unk2);
	$Method(0x0048810b, RSGoldTransferComplete, void, Go* unk1, int unk2);
	$Method(0x00486a5e, RSPaperDollHandleItem, void, const Goid* unk1, eEquipSlot unk2, const Goid* unk3);
	$Method(0x00493937, RSRemoveFromDestGridbox, void, int unk1, Player* unk2);
	$Method(0x00494eb5, RSReqInitiateTrade, void, Go* unk1, Go* unk2, Go* unk3);
	$Method(0x00487261, RSSetTradeInvalid, void, Go* unk1);
	$Method(0x00487170, RSSetTradeValid, void, Go* unk1);
	$Method(0x00493549, RSTradeAccept, void, bool unk1, Player* unk2, Player* unk3);
	$Method(0x00487352, RSTradeFailed, void, Go* unk1, Go* unk2);
	$Method(0x0049319d, RSTradeUpdateGold, void, Go* unk1, Go* unk2, int unk3);
	$Method(0x0048b9ab, SActivateItemUnlockInterface, void, const Goid* unk1, const Goid* unk2);
	$Method(0x00488b54, SPrepareForDeletion, void, const Goid* unk1, const Goid* unk2);
	$Method(0x0048b9d8, SRetrieveItemUnlockCode, void, const Goid* unk1);

	// 0x000
    bool b000 = true;
    bool b001;
    bool b002;
    bool b003;
    // 0x004
    $Padding(0x004, 0x00c);
    // 0x00c
    Goid* goid00C = Goid::Invalid;
    // 0x010
    Goid* goid010 = Goid::Invalid;
    // 0x014
	$Padding(0x014, 0x300);
    // 0x300
    Goid* goid300 = Goid::Invalid;
    // 0x304
    Goid* goid304 = Goid::Invalid;
    // 0x308
    bool b308 = false;
    bool b309 = false;
    bool b30A;
    bool b30B = false;
    // 0x30c
    $Padding(0x30c, 0x34c);
    // 0x34c
    bool b34C = false;
    // 0x350
    Goid* goid350 = Goid::Invalid;
    // 0x354
    bool b354 = false;
    // 0x358
    Goid* goid358 = Goid::Invalid;
    // 0x35c
    $Padding(0x35c, 0x364);
};

STATIC_ASSERT(sizeof(UIInventoryManager) == 0x364);
STATIC_ASSERT_OFFSETOF(UIInventoryManager, goid00C, 0x00c);
STATIC_ASSERT_OFFSETOF(UIInventoryManager, goid358, 0x358);

#pragma once

#include "DS2DLL\DS2DLL.h"
#include "DS2DLL\Enums.h"
#include "DS2DLL\FuBi.h"
#include "DS2DLL\Go.h"
#include "DS2DLL\GoidScid.h"
#include "DS2DLL\GPString.h"
#include "DS2DLL\UIButton.h"
#include "DS2DLL\UIPartyManager.h"
#include "DS2DLL\UIStatusBar.h"
#include "DS2DLL\UIText.h"
#include "DS2DLL\UITextBox.h"
#include "DS2DLL\UIWindow.h"
#include "PartySizeExpansion.h"

constexpr size_t EXPANDED_MAX_PARTY_SIZE = 9;

class ExtendedUIPartyManager {
public:
	$Singleton(ExtendedUIPartyManager, 0x0040a5f3);

	inline UIPartyManager* GetBase() {
		return (UIPartyManager*)this;
	}
	inline const UIPartyManager* GetBase() const {
		return (UIPartyManager*)this;
	}

	$Method(0x004acf24, BaseUpdateMemberLabels, void);
	$Method(0x004ad223, BaseUpdateTombstoneLabels, void);

	void InitializeMemberLabels();
	void InitializeTombstoneLabels();
	void InitializeAwpPortraitSelection();

	void UpdateMemberLabels();
	void UpdateTombstoneLabels();

	void AwpPortraitSelectionSetVisible(bool visible);

	// 0x000
	Go* partyMembers[EXPANDED_MAX_PARTY_SIZE];
	// 0x024
	void* unused_024_048[EXPANDED_MAX_PARTY_SIZE];
	// 0x048
	$Padding(0x048, 0x0ac);
	// 0x0ac
	void* unused_0ac_0c4[MAX_PARTY_SIZE];
	// 0x0c4
	$Padding(0x0c4, 0x450);
	// 0x450 (Extended)
	UIText* memberLabels[EXPANDED_MAX_PARTY_SIZE];
	UIText* tombstoneLabels[EXPANDED_MAX_PARTY_SIZE];
	UIWindow* awpPortraitSelection[EXPANDED_MAX_PARTY_SIZE];

	friend void WriteUIPartyManagerHooks();
};

STATIC_ASSERT_OFFSETOF(ExtendedUIPartyManager, unused_024_048, 0x024);
STATIC_ASSERT_OFFSETOF(ExtendedUIPartyManager, unused_0ac_0c4, 0x0ac);
STATIC_ASSERT_OFFSETOF(ExtendedUIPartyManager, memberLabels, 0x450);

void WriteUIPartyManagerHooks();

#include "ExtendedUIPartyManager.h"

#include "DS2DLL\GoidScid.h"
#include "DS2DLL\GoPlacement.h"
#include "DS2DLL\StaticMethods.h"
#include "DS2DLL\UIGame.h"
#include "DS2DLL\UIShell.h"

void ExtendedUIPartyManager::InitializeMemberLabels() {
	UIShell* shell = UIShell::GetSingleton();
	ASSERT(shell != nullptr);

	char windowName[sizeof("member_") + 1];
	for (int i = 0; i < EXPANDED_MAX_PARTY_SIZE; ++i) {
		snprintf(windowName, sizeof(windowName), "member_%u", i + 1);
		UIText* text = (UIText*)shell->FindUIWindow(windowName, "member_labels", WES_NONEXISTING);
		if (text) {
			text->autoSize = true;
		}
		memberLabels[i] = text;
	}
}
void ExtendedUIPartyManager::InitializeTombstoneLabels() {
	UIShell* shell = UIShell::GetSingleton();
	ASSERT(shell != nullptr);

	char windowName[sizeof("tombstone_") + 1];
	for (int i = 0; i < EXPANDED_MAX_PARTY_SIZE; ++i) {
		snprintf(windowName, sizeof(windowName), "tombstone_%u", i + 1);
		UIText* text = (UIText*)shell->FindUIWindow(windowName, "tombstone_labels", WES_NONEXISTING);
		if (text) {
			text->autoSize = true;
		}
		tombstoneLabels[i] = text;
	}
}
void ExtendedUIPartyManager::InitializeAwpPortraitSelection() {
	UIShell* shell = UIShell::GetSingleton();
	ASSERT(shell != nullptr);

	char windowName[sizeof("awp_portrait_selection_") + 1];
	for (int i = 0; i < EXPANDED_MAX_PARTY_SIZE; ++i) {
		snprintf(windowName, sizeof(windowName), "awp_portrait_selection_%u", i + 1);
		awpPortraitSelection[i] = shell->FindUIWindow(windowName, "character_awp", WES_NONEXISTING);
	}
}

void ExtendedUIPartyManager::UpdateMemberLabels() {
	// TODO: Implement a better solution.

	UIPartyManager* partyManager = GetBase();

	if (!partyManager->bShowMemberLabels || IsMultiPlayer()) {
		return;
	}

	for (int i = 0; i < EXPANDED_MAX_PARTY_SIZE; ++i) {
		UIText* text = memberLabels[i];
		if (!text) {
			continue;
		}

		text->SetVisible(false);

		Go* go = partyMembers[i];

		// 0x004acf87
		if (!go->IsInActiveScreenWorldFrustum()) {
			continue;
		}

		GoPlacement* placement = go->placement;

		// 0x004acf9e
		const SiegePos* pos = &(go->placement)->GetPosition();

		//pos->sub_6D2820();

		// TODO: Something with pos.

		text->SetVisible(true);

		// TODO: More stuff with pos.

		UIGame* game = UIGame::GetSingleton();

		// TODO: Stuff

		text->SetRect(0, 0, 0, 0, false);
	}

	/*
	STATIC_ASSERT(sizeof(memberLabels) == sizeof(unused_024_048));

	memcpy(unused_024_048, memberLabels, sizeof(unused_024_048));

	// Call base method.
	BaseUpdateMemberLabels();

	ZeroMemory(unused_024_048, sizeof(unused_024_048));
	*/
}
void ExtendedUIPartyManager::UpdateTombstoneLabels() {
	// TODO: Implement a better solution.

	STATIC_ASSERT(sizeof(tombstoneLabels) == sizeof(unused_024_048));

	memcpy(unused_024_048, tombstoneLabels, sizeof(unused_024_048));

	// Call base method.
	BaseUpdateTombstoneLabels();

	ZeroMemory(unused_024_048, sizeof(unused_024_048));
}

void ExtendedUIPartyManager::AwpPortraitSelectionSetVisible(bool visible) {
	for (int i = 0; i < EXPANDED_MAX_PARTY_SIZE; ++i) {
		UIWindow* window = awpPortraitSelection[i];
		if (window) {
			window->SetVisible(visible);
		}
	}
}

void WriteUIPartyManagerHooks() {
	// Hook initialize function.
	SafeWriteHook(0x004b966d, &ExtendedUIPartyManager::InitializeMemberLabels);

	// Hook update function.
	SafeWriteHook(0x00480f9f, &ExtendedUIPartyManager::UpdateMemberLabels);

	// Hook initialize function.
	SafeWriteHook(0x004b9674, &ExtendedUIPartyManager::InitializeTombstoneLabels);

	// Hook update function.
	SafeWriteHook(0x00480faa, &ExtendedUIPartyManager::UpdateTombstoneLabels);
}

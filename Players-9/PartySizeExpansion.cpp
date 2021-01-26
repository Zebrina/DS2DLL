#include "PartySizeExpansion.h"

#include "DS2DLL\Formation.h"
#include "DS2DLL\UIPartyManager.h"
#include "DS2DLL\UIShell.h"
#include "ExtendedUIPartyManager.h"
#include "MemUtil.h"

/*
static void __fastcall InitializeMemberLabels(UIPartyManager* this_) {
	UIShell* shell = UIShell::GetSingleton();
	char windowName[] = "member_N";
	for (int i = 0; i < EXPANDED_MAX_PARTY_SIZE; ++i) {
		windowName[sizeof("member_") - 1] = '1' + i;
		UIText* text = (UIText*)shell->FindUIWindow(windowName, "member_labels", WES_NONEXISTING);
		if (text) {
			text->autoSize = true;
		}
		this_->memberLabels[i] = text;
	}
}
static int __fastcall UpdateMemberLabels(UIPartyManager* this_) {
	STATIC_ASSERT(sizeof(this_->memberLabels) == sizeof(this_->unused_024_048));

	memcpy(this_->unused_024_048, this_->memberLabels, sizeof(this_->unused_024_048));

	// Call base method.
	return ((int(__thiscall*)(UIPartyManager*))0x004acf24)(this_);
}
static void __fastcall InitializeTombstoneLabels(UIPartyManager* this_) {
	UIShell* shell = UIShell::GetSingleton();
	char windowName[] = "tombstone_N";
	for (int i = 0; i < EXPANDED_MAX_PARTY_SIZE; ++i) {
		windowName[sizeof("tombstone_") - 1] = '1' + i;
		UIText* text = (UIText*)shell->FindUIWindow(windowName, "tombstone_labels", WES_NONEXISTING);
		if (text) {
			text->autoSize = true;
		}
		this_->tombstoneLabels[i] = text;
	}
}
static int __fastcall UpdateTombstoneLabels(UIPartyManager* this_) {
	STATIC_ASSERT(sizeof(this_->tombstoneLabels) == sizeof(this_->unused_024_048));

	memcpy(this_->unused_024_048, this_->tombstoneLabels, sizeof(this_->unused_024_048));

	// Call base method.
	return ((int(__thiscall*)(UIPartyManager*))0x004ad223)(this_);
}
*/

static void WriteMemberLabelEdits() {
	// Hook initialize function.
	//SafeWriteHook(0x004b966d, InitializeMemberLabels);

	// Hook update function.
	//SafeWriteHook(0x00480f9f, UpdateMemberLabels);

	// Update offsets.
	SafeWrite8(0x004acf4f + 2, offsetof(ExtendedUIPartyManager, unused_024_048));			// add ebx, 0x18
	SafeWrite8(0x004acf63 + 2, 0x100 - offsetof(ExtendedUIPartyManager, unused_024_048));	// mov eax, [ebx - 0x18]
	SafeWrite8(0x004acfe1 + 2, 0x100 - offsetof(ExtendedUIPartyManager, unused_024_048));	// mov eax, [ebx - 0x18]

	// Update max party size constant.
	SafeWrite32(0x004acf52 + 3, EXPANDED_MAX_PARTY_SIZE); // mov [ebp - 0x38], 6
}

static void WriteTombstoneLabelEdits() {
	// Hook initialize function.
	//SafeWriteHook(0x004b9674, InitializeTombstoneLabels);

	// Hook update function.
	//SafeWriteHook(0x00480faa, UpdateTombstoneLabels);

	// Update offsets.
	SafeWrite8(0x004ad244 + 2, offsetof(ExtendedUIPartyManager, unused_024_048));			// lea ebx, [ecx + 0x30]
	SafeWrite8(0x004ad257 + 2, 0x100 - offsetof(ExtendedUIPartyManager, unused_024_048));	// mov eax, [ebx - 0x30]
	SafeWrite8(0x004ad300 + 2, 0x100 - offsetof(ExtendedUIPartyManager, unused_024_048));	// mov eax, [ebx - 0x30]

	// Update max party size constant.
	SafeWrite32(0x004ad247 + 3, EXPANDED_MAX_PARTY_SIZE); // mov [ebp - 0x38], 6
}

static void WriteAwpPortraitSelectionEdits() {
	constexpr uint8_t ASM_SEGMENT_1[] {
		0x89, 0x86, 0x94, 0x03, 0x00, 0x00,	// mov [esi + 0x394], eax
		0x89, 0xf1,							// mov ecx, esi
	};
	constexpr uint8_t ASM_SEGMENT_2[] {
		0x53,								// push ebx
		0x68, 0x20, 0x81, 0xb9, 0x00,		// push 0x00b98120 // "data_bar"
	};

	// Update initialization.
	SafeWrite(0x004b91a4, ASM_SEGMENT_1);
	SafeWriteCall(0x004b91a4 + sizeof(ASM_SEGMENT_1), &ExtendedUIPartyManager::InitializeAwpPortraitSelection);
	SafeWriteJump(0x004b91a4 + sizeof(ASM_SEGMENT_1) + 5, 0x004b9258 - sizeof(ASM_SEGMENT_2));
	SafeWriteBreakpointRange(0x004b91a4 + sizeof(ASM_SEGMENT_1) + 5 + 5, 0x004b9258 - sizeof(ASM_SEGMENT_2));
	SafeWrite(0x004b9258 - sizeof(ASM_SEGMENT_2), ASM_SEGMENT_2);

	constexpr uint8_t ASM_SEGMENT_3[] {
		0x53,		// push ebx
		0x89, 0xf1,	// mov ecx, esi
	};

	SafeWrite(0x004b72c3, ASM_SEGMENT_3);
	SafeWriteCall(0x004b72c3 + sizeof(ASM_SEGMENT_3), &ExtendedUIPartyManager::AwpPortraitSelectionSetVisible);
	SafeWriteJumpShort(0x004b72c3 + sizeof(ASM_SEGMENT_3) + 5, 0x004b730b);
	SafeWriteBreakpointRange(0x004b72c3 + sizeof(ASM_SEGMENT_3) + 5 + 2, 0x004b730b);

	constexpr intptr_t AWP_PORTRAIT_SELECTION_OFFSET = offsetof(ExtendedUIPartyManager, awpPortraitSelection);

	// Update offsets.
	SafeWrite32(0x004b728f + 2, offsetof(ExtendedUIPartyManager, awpPortraitSelection));

	constexpr uint8_t ASM_SEGMENT_4[] {
		0x89, 0xf0, // mov eax, esi
		0x05,		// add eax, %IMM32%
	};

	constexpr uint8_t ASM_SEGMENT_5[]{
		0x8b, 0x04, 0x88,	// mov eax, dword ptr [eax + ecx * 4]
		0x31, 0xc9,			// xor ecx, ecx
	};

	SafeWrite(0x004b734d, ASM_SEGMENT_4);
	SafeWrite32(0x004b734d + sizeof(ASM_SEGMENT_4), offsetof(ExtendedUIPartyManager, awpPortraitSelection));
	SafeWrite(0x004b734d + sizeof(ASM_SEGMENT_4) + sizeof(uint32_t), ASM_SEGMENT_5);
	SafeWriteJumpShort(0x004b734d + sizeof(ASM_SEGMENT_4) + sizeof(uint32_t) + sizeof(ASM_SEGMENT_5), 0x004b738c);
	SafeWriteBreakpointRange(0x004b734d + sizeof(ASM_SEGMENT_4) + sizeof(uint32_t) + sizeof(ASM_SEGMENT_5) + 2, 0x004b738c);
}

void WritePartyExpansionHooks() {
	SafeWrite32(0x00484b6e + 1, sizeof(ExtendedUIPartyManager));
	
	WriteMemberLabelEdits();
	WriteTombstoneLabelEdits();
	WriteAwpPortraitSelectionEdits();

	// Update max party size constants.

	// Formation max party size constant.
	SafeWrite32(0x00cedc9c, EXPANDED_MAX_PARTY_SIZE);

	// Set max party size.
	SafeWrite8(0x00405ee6 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp eax, 6
	SafeWrite32(0x00405eeb + 3, EXPANDED_MAX_PARTY_SIZE); // mov [ebp + 8], 6

	// Loading saves.
	SafeWrite8(0x0041c921 + 3, EXPANDED_MAX_PARTY_SIZE); // cmp dword ptr [ebp + 0x18], 6

	SafeWrite8(0x00412699 + 1, EXPANDED_MAX_PARTY_SIZE); // push 6
	SafeWrite8(0x004805df + 2, EXPANDED_MAX_PARTY_SIZE); // cmp eax, 6
	SafeWrite8(0x004a4866 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp eax, 6
	SafeWrite8(0x004a63ed + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004a642d + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004a6461 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004a9ab6 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004aaba3 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp ebx, 6
	SafeWrite8(0x004aac0b + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004aac6b + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004aacf2 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004aad37 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004ab94e + 3, EXPANDED_MAX_PARTY_SIZE); // cmp dword ptr [ebp - 8], 6
	SafeWrite8(0x004ab957 + 3, EXPANDED_MAX_PARTY_SIZE); // cmp dword ptr [ebp - 4], 6
	SafeWrite8(0x004b54b1 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004b609b + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004b6856 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004b7214 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004b7948 + 1, EXPANDED_MAX_PARTY_SIZE); // push 6
	//SafeWrite8(0x004b794B + 1, (sizeof(ExtendedUIPartyManager::partyMembers) + sizeof(ExtendedUIPartyManager::unused_024_048)) / 4); // push 0x2e
	SafeWrite32(0x004bba46 + 3, EXPANDED_MAX_PARTY_SIZE); // mov [ebp - 0x24], 6
	SafeWrite8(0x004bbc43 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp ecx, 6
	SafeWrite8(0x004bbc73 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6

	// Related to memory allocation.
	SafeWrite8(0x004bbbcc + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6

    // When asking new member to join and party has 6 members.
    SafeWrite8(0x004d0ea6 + 2, EXPANDED_MAX_PARTY_SIZE * 4);

	SafeWrite8(0x004bc7fb + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite32(0x004bc80d + 3, EXPANDED_MAX_PARTY_SIZE); // mov dword ptr [ebp - 0x10], 6
	SafeWrite8(0x004bcac5 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004bcc41 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004bfb79 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp ebx, 6
	SafeWrite8(0x004d0b40 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp eax, 6
	SafeWrite8(0x004d1633 + 1, EXPANDED_MAX_PARTY_SIZE); // push 6
	SafeWrite8(0x004feb3a + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004febba + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004ab39f + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004ab50e + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x00489e9d + 3, EXPANDED_MAX_PARTY_SIZE); // cmp dword ptr [ebp - 8], 6
	SafeWrite8(0x004956c5 + 3, EXPANDED_MAX_PARTY_SIZE); // cmp dword ptr [ebp - 8], 6
	SafeWrite8(0x00495808 + 3, EXPANDED_MAX_PARTY_SIZE); // cmp dword ptr [ebp - 8], 6
	SafeWrite8(0x004a580d + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004a63ac + 3, EXPANDED_MAX_PARTY_SIZE); // cmp dword ptr [ebp - 4], 6
	SafeWrite8(0x004a64b1 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004a9a54 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004aa55d + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004aacb0 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004ac862 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004b55d4 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004b61cc + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite8(0x004b636a + 3, EXPANDED_MAX_PARTY_SIZE); // cmp dword ptr [ebp - 4], 6
	SafeWrite32(0x004b3599 + 3, EXPANDED_MAX_PARTY_SIZE); // mov [ebp - 0x20], 6
	SafeWrite8(0x004b9891 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004af1b7 + 3, EXPANDED_MAX_PARTY_SIZE); // cmp dword ptr [ebp - 0x1c], 6
	SafeWrite8(0x004a4580 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edx, 6
	SafeWrite8(0x004d18ac + 3, EXPANDED_MAX_PARTY_SIZE * 4); // cmp [ebp - 4], 0x18
	SafeWrite8(0x00476302 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004b5310 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite32(0x004b9a03 + 3, EXPANDED_MAX_PARTY_SIZE); // mov [ebp - 0x2c], 6
	SafeWrite8(0x004bcac5 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6
	SafeWrite32(0x004ab537 + 3, EXPANDED_MAX_PARTY_SIZE); // mov [ebp - 0x14], 6
	SafeWrite32(0x004b41b8 + 3, EXPANDED_MAX_PARTY_SIZE); // mov [ebp - 0x18], 6
	// When accessing skill tab.
	SafeWrite8(0x004b654f + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	// Clean-up when quitting game.
	SafeWrite8(0x004b1610 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
#if 1
#endif
#if 0
	// When saving game.
	SafeWrite8(0x004bd35c + 3, EXPANDED_MAX_PARTY_SIZE); // cmp dword ptr [ebp + 8], 6
#endif
#if 1
#endif
#if 0
//SafeWrite8(0x004fe6fb + 2, EXPANDED_MAX_PARTY_SIZE); // cmp eax, 6 ??
//SafeWrite8(0x0051d461 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp esi, 6 ?? dword_CE6D9C
#endif
#if 1
#endif
#if 1
#endif
#if 1
#endif
#if 1
#endif
#if 0
	SafeWrite8(0x004bce0f + 2, EXPANDED_MAX_PARTY_SIZE + 1); // cmp esi, 7
	SafeWrite8(0x004bd149 + 3, EXPANDED_MAX_PARTY_SIZE + 1); // cmp dword ptr [ebp - 0x14], 7
#endif

//SafeWrite32(0x00525cc4 + 1, EXPANDED_MAX_PARTY_SIZE); // ??

	//-------------
	// MULTIPLAYER
	//-------------
#if 0
	SafeWrite8(0x004fe8e3 + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	SafeWrite8(0x004fe94e + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
	// staging_area_party_manager.gas
	SafeWrite8(0x004fe7df + 2, EXPANDED_MAX_PARTY_SIZE); // cmp edi, 6
#endif
}

#pragma once

#include "GPString.h"

class UIFrontend {
public:
	$Singleton(UIFrontend, 0x00410450);

	$Method(0x0044a109, InitFrontendDialog, void);
	$Method(0x00451d69, CanStartWorld, bool, const GPBString& unk1);
	$Method(0x0041028e, GetBackToSp, bool);
	$Method(0x004521fd, HasPartyContinue, bool);
	$Method(0x0044a11e, ProcessUserDataAccessInfoRequest, bool);
	$Method(0x0044e868, ProcessUserRegistrationFormCancel, bool);
	$Method(0x0044e5f4, ProcessUserRegistrationFormOK, bool);
	$Method(0x0044a121, ProcessUserRemoveRequest, bool);
	$Method(0x0044cabd, ShowUserRegistrationForm, bool);
	$Method(0x00410287, GetDrawnMapTemplate, const GPBString&);
	$Method(0x0044a0e9, GetSelectedMapName, const GPBString&);
	$Method(0x00410270, GetMPSelectorIndex, int);
	$Method(0x00410259, GetSelectorIndex, int);
	$Method(0x0044e4d4, ActivateAboutBox, void);
	$Method(0x0044ae0a, ActivateOptions, void);
	$Method(0x00452a15, AttemptLoadSelectedGame, void);
	$Method(0x0044c8dd, DeleteActiveParty, void);
	$Method(0x0044ae15, DestroyDrawnMap, void);
	$Method(0x0044e558, LoadGameSelect, void);
	$Method(0x0045267a, LoadSelectedGame, void);
	$Method(0x0044b75a, PlayFrontendSound, void, const GPBString& soundName);
	$Method(0x0044d99e, RefreshSelectedCharacter, void);
	$Method(0x004108e2, SetDrawnMapTemplate, void, const GPBString& unk1);
	$Method(0x00410277, SetMPSelectorIndex, void, int index);
	$Method(0x00410260, SetSelectorIndex, void, int index);
	$Method(0x0044df7b, SetWorldMode, void, const GPBString& worldMode);
	$Method(0x004501ff, ShowBookmarkGames, void);
	$Method(0x0044d981, ShowNextParty, void);
	$Method(0x0044d965, ShowPreviousParty, void);
	$Method(0x00450207, ShowSaveGames, void);
	$Method(0x0044edf5, TransitionFromCreateParty, void, bool unk1);
	$Method(0x0044c87d, TransitionFromDifficulty, void);
	$Method(0x0044c6d9, TransitionFromLoadGame, void);
	$Method(0x0044c636, TransitionFromMain, void);
	$Method(0x0044c803, TransitionFromMapSelect, void);
	$Method(0x0044c8ad, TransitionFromMP, void);
	$Method(0x00451f48, TransitionFromPartyImport, bool, bool unk1);
	$Method(0x0044c666, TransitionFromSP, void);
	$Method(0x0044ad26, TransitionToContinue, void);
	$Method(0x0044e320, TransitionToCreateParty, void);
	$Method(0x0044c833, TransitionToDifficulty, void);
	$Method(0x0044ad18, TransitionToExit, void);
	$Method(0x00450e1a, TransitionToLoadGame, void, bool unk1);
	$Method(0x0044ba7a, TransitionToLogo, void);
	$Method(0x0044e225, TransitionToMain, void);
	$Method(0x0044c709, TransitionToMapSelect, void);
	$Method(0x0044d265, TransitionToMP, void);
	$Method(0x0044adc8, TransitionToMPGamespy, void);
	$Method(0x0044ad86, TransitionToMPInternet, void);
	$Method(0x0044ad44, TransitionToMPNetwork, void);
	$Method(0x00451ef7, TransitionToPartyImport, bool);
	$Method(0x00452105, TransitionToSP, void, bool unk1);

	// 0x00
	$Padding(0x00, 0x60);
	// 0x60
	GPBString selectedMapName;
	// 0x64
	$Padding(0x64, 0x80);
	// 0x80
	int spSelectorIndex;
	// 0x84
	int mpSelectorIndex;
	// 0x88
	$Padding(0x88, 0xa0);
	// 0xa0
	GPBString drawnMapTemplate;
	// 0xa4
	$Padding(0xa4, 0xb4);
	// 0x0b4
	bool backToSp;
    // 0x0b8
    $Padding(0xb8, 0xc8);
};

STATIC_ASSERT(sizeof(UIFrontend) == 0xc8);
STATIC_ASSERT_OFFSETOF(UIFrontend, backToSp, 0xb4);

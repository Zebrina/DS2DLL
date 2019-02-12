#pragma once

#include "ClassMacros.h"

class UIFrontend {
public:
	DefineSingleton(UIFrontend, 0x410450);

	/*UIFrontend*/ private: /*static*/ UIFrontend* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00410450
	/*UIFrontend*/ public: bool /*__thiscall*/ CanStartWorld(const gpbstring<char>& unk1); //0x00451d69
	/*UIFrontend*/ public: bool /*__thiscall*/ GetBackToSp(); //0x0041028e
	/*UIFrontend*/ public: bool /*__thiscall*/ HasPartyContinue(); //0x004521fd
	/*UIFrontend*/ public: bool /*__thiscall*/ ProcessUserDataAccessInfoRequest(); //0x0044a11e
	/*UIFrontend*/ public: bool /*__thiscall*/ ProcessUserRegistrationFormCancel(); //0x0044e868
	/*UIFrontend*/ public: bool /*__thiscall*/ ProcessUserRegistrationFormOK(); //0x0044e5f4
	/*UIFrontend*/ public: bool /*__thiscall*/ ProcessUserRemoveRequest(); //0x0044a121
	/*UIFrontend*/ public: bool /*__thiscall*/ ShowUserRegistrationForm(); //0x0044cabd
	/*UIFrontend*/ public: bool /*__thiscall*/ TransitionFromPartyImport(bool unk1); //0x00451f48
	/*UIFrontend*/ public: bool /*__thiscall*/ TransitionToPartyImport(); //0x00451ef7
	/*UIFrontend*/ public: const gpbstring<char>& /*__thiscall*/ GetDrawnMapTemplate(); //0x00410287
	/*UIFrontend*/ public: const gpbstring<char>& /*__thiscall*/ GetSelectedMapName(); //0x0044a0e9
	/*UIFrontend*/ public: int /*__thiscall*/ GetMPSelectorIndex(); //0x00410270
	/*UIFrontend*/ public: int /*__thiscall*/ GetSelectorIndex(); //0x00410259
	/*UIFrontend*/ public: void /*__thiscall*/ ActivateAboutBox(); //0x0044e4d4
	/*UIFrontend*/ public: void /*__thiscall*/ ActivateOptions(); //0x0044ae0a
	/*UIFrontend*/ public: void /*__thiscall*/ AttemptLoadSelectedGame(); //0x00452a15
	/*UIFrontend*/ public: void /*__thiscall*/ DeleteActiveParty(); //0x0044c8dd
	/*UIFrontend*/ public: void /*__thiscall*/ DestroyDrawnMap(); //0x0044ae15
	/*UIFrontend*/ public: void /*__thiscall*/ InitFrontendDialog(); //0x0044a109
	/*UIFrontend*/ public: void /*__thiscall*/ LoadGameSelect(); //0x0044e558
	/*UIFrontend*/ public: void /*__thiscall*/ LoadSelectedGame(); //0x0045267a
	/*UIFrontend*/ public: void /*__thiscall*/ PlayFrontendSound(const gpbstring<char>& unk1); //0x0044b75a
	/*UIFrontend*/ public: void /*__thiscall*/ RefreshSelectedCharacter(); //0x0044d99e
	/*UIFrontend*/ public: void /*__thiscall*/ SetDrawnMapTemplate(const gpbstring<char>& unk1); //0x004108e2
	/*UIFrontend*/ public: void /*__thiscall*/ SetMPSelectorIndex(int unk1); //0x00410277
	/*UIFrontend*/ public: void /*__thiscall*/ SetSelectorIndex(int unk1); //0x00410260
	/*UIFrontend*/ public: void /*__thiscall*/ SetWorldMode(const gpbstring<char>& unk1); //0x0044df7b
	/*UIFrontend*/ public: void /*__thiscall*/ ShowBookmarkGames(); //0x004501ff
	/*UIFrontend*/ public: void /*__thiscall*/ ShowNextParty(); //0x0044d981
	/*UIFrontend*/ public: void /*__thiscall*/ ShowPreviousParty(); //0x0044d965
	/*UIFrontend*/ public: void /*__thiscall*/ ShowSaveGames(); //0x00450207
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionFromCreateParty(bool unk1); //0x0044edf5
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionFromDifficulty(); //0x0044c87d
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionFromLoadGame(); //0x0044c6d9
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionFromMain(); //0x0044c636
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionFromMapSelect(); //0x0044c803
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionFromMP(); //0x0044c8ad
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionFromSP(); //0x0044c666
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToContinue(); //0x0044ad26
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToCreateParty(); //0x0044e320
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToDifficulty(); //0x0044c833
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToExit(); //0x0044ad18
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToLoadGame(bool unk1); //0x00450e1a
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToLogo(); //0x0044ba7a
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToMain(); //0x0044e225
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToMapSelect(); //0x0044c709
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToMP(); //0x0044d265
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToMPGamespy(); //0x0044adc8
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToMPInternet(); //0x0044ad86
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToMPNetwork(); //0x0044ad44
	/*UIFrontend*/ public: void /*__thiscall*/ TransitionToSP(bool unk1); //0x00452105
};

#pragma once

#include "ClassMacros.h"

class UIFrontend {
public:
	DefineSingleton(UIFrontend, 0x410450);

	/*UIFrontend*/ private: /*static*/ UIFrontend* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00410450
	DefineMethod(CanStartWorld, 0x451d69, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetBackToSp, 0x41028e, bool, Params(), Args());
	DefineMethod(HasPartyContinue, 0x4521fd, bool, Params(), Args());
	DefineMethod(ProcessUserDataAccessInfoRequest, 0x44a11e, bool, Params(), Args());
	DefineMethod(ProcessUserRegistrationFormCancel, 0x44e868, bool, Params(), Args());
	DefineMethod(ProcessUserRegistrationFormOK, 0x44e5f4, bool, Params(), Args());
	DefineMethod(ProcessUserRemoveRequest, 0x44a121, bool, Params(), Args());
	DefineMethod(ShowUserRegistrationForm, 0x44cabd, bool, Params(), Args());
	DefineMethod(TransitionFromPartyImport, 0x451f48, bool, Params(bool unk1), Args(bool unk1));
	DefineMethod(TransitionToPartyImport, 0x451ef7, bool, Params(), Args());
	/*UIFrontend*/ public: const gpbstring<char>& /*__thiscall*/ GetDrawnMapTemplate(); //0x00410287
	/*UIFrontend*/ public: const gpbstring<char>& /*__thiscall*/ GetSelectedMapName(); //0x0044a0e9
	DefineMethod(GetMPSelectorIndex, 0x410270, int, Params(), Args());
	DefineMethod(GetSelectorIndex, 0x410259, int, Params(), Args());
	DefineMethod(ActivateAboutBox, 0x44e4d4, void, Params(), Args());
	DefineMethod(ActivateOptions, 0x44ae0a, void, Params(), Args());
	DefineMethod(AttemptLoadSelectedGame, 0x452a15, void, Params(), Args());
	DefineMethod(DeleteActiveParty, 0x44c8dd, void, Params(), Args());
	DefineMethod(DestroyDrawnMap, 0x44ae15, void, Params(), Args());
	DefineMethod(InitFrontendDialog, 0x44a109, void, Params(), Args());
	DefineMethod(LoadGameSelect, 0x44e558, void, Params(), Args());
	DefineMethod(LoadSelectedGame, 0x45267a, void, Params(), Args());
	DefineMethod(PlayFrontendSound, 0x44b75a, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RefreshSelectedCharacter, 0x44d99e, void, Params(), Args());
	DefineMethod(SetDrawnMapTemplate, 0x4108e2, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetMPSelectorIndex, 0x410277, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetSelectorIndex, 0x410260, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetWorldMode, 0x44df7b, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(ShowBookmarkGames, 0x4501ff, void, Params(), Args());
	DefineMethod(ShowNextParty, 0x44d981, void, Params(), Args());
	DefineMethod(ShowPreviousParty, 0x44d965, void, Params(), Args());
	DefineMethod(ShowSaveGames, 0x450207, void, Params(), Args());
	DefineMethod(TransitionFromCreateParty, 0x44edf5, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(TransitionFromDifficulty, 0x44c87d, void, Params(), Args());
	DefineMethod(TransitionFromLoadGame, 0x44c6d9, void, Params(), Args());
	DefineMethod(TransitionFromMain, 0x44c636, void, Params(), Args());
	DefineMethod(TransitionFromMapSelect, 0x44c803, void, Params(), Args());
	DefineMethod(TransitionFromMP, 0x44c8ad, void, Params(), Args());
	DefineMethod(TransitionFromSP, 0x44c666, void, Params(), Args());
	DefineMethod(TransitionToContinue, 0x44ad26, void, Params(), Args());
	DefineMethod(TransitionToCreateParty, 0x44e320, void, Params(), Args());
	DefineMethod(TransitionToDifficulty, 0x44c833, void, Params(), Args());
	DefineMethod(TransitionToExit, 0x44ad18, void, Params(), Args());
	DefineMethod(TransitionToLoadGame, 0x450e1a, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(TransitionToLogo, 0x44ba7a, void, Params(), Args());
	DefineMethod(TransitionToMain, 0x44e225, void, Params(), Args());
	DefineMethod(TransitionToMapSelect, 0x44c709, void, Params(), Args());
	DefineMethod(TransitionToMP, 0x44d265, void, Params(), Args());
	DefineMethod(TransitionToMPGamespy, 0x44adc8, void, Params(), Args());
	DefineMethod(TransitionToMPInternet, 0x44ad86, void, Params(), Args());
	DefineMethod(TransitionToMPNetwork, 0x44ad44, void, Params(), Args());
	DefineMethod(TransitionToSP, 0x452105, void, Params(bool unk1), Args(bool unk1));
};

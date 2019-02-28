#pragma once



class UIFrontend {
public:
	DefineSingleton(UIFrontend, 0x410450);

	DefineMethod(CanStartWorld, 0x451d69, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetBackToSp, 0x41028e, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(HasPartyContinue, 0x4521fd, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ProcessUserDataAccessInfoRequest, 0x44a11e, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ProcessUserRegistrationFormCancel, 0x44e868, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ProcessUserRegistrationFormOK, 0x44e5f4, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ProcessUserRemoveRequest, 0x44a121, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowUserRegistrationForm, 0x44cabd, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionFromPartyImport, 0x451f48, bool, Params(bool unk1), Args(unk1));
	DefineMethod(TransitionToPartyImport, 0x451ef7, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetDrawnMapTemplate, 0x410287, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetSelectedMapName, 0x44a0e9, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMPSelectorIndex, 0x410270, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetSelectorIndex, 0x410259, int, NO_PARAMS, NO_ARGS);
	DefineMethod(ActivateAboutBox, 0x44e4d4, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ActivateOptions, 0x44ae0a, void, NO_PARAMS, NO_ARGS);
	DefineMethod(AttemptLoadSelectedGame, 0x452a15, void, NO_PARAMS, NO_ARGS);
	DefineMethod(DeleteActiveParty, 0x44c8dd, void, NO_PARAMS, NO_ARGS);
	DefineMethod(DestroyDrawnMap, 0x44ae15, void, NO_PARAMS, NO_ARGS);
	DefineMethod(InitFrontendDialog, 0x44a109, void, NO_PARAMS, NO_ARGS);
	DefineMethod(LoadGameSelect, 0x44e558, void, NO_PARAMS, NO_ARGS);
	DefineMethod(LoadSelectedGame, 0x45267a, void, NO_PARAMS, NO_ARGS);
	DefineMethod(PlayFrontendSound, 0x44b75a, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RefreshSelectedCharacter, 0x44d99e, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetDrawnMapTemplate, 0x4108e2, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetMPSelectorIndex, 0x410277, void, Params(int unk1), Args(unk1));
	DefineMethod(SetSelectorIndex, 0x410260, void, Params(int unk1), Args(unk1));
	DefineMethod(SetWorldMode, 0x44df7b, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(ShowBookmarkGames, 0x4501ff, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowNextParty, 0x44d981, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowPreviousParty, 0x44d965, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowSaveGames, 0x450207, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionFromCreateParty, 0x44edf5, void, Params(bool unk1), Args(unk1));
	DefineMethod(TransitionFromDifficulty, 0x44c87d, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionFromLoadGame, 0x44c6d9, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionFromMain, 0x44c636, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionFromMapSelect, 0x44c803, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionFromMP, 0x44c8ad, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionFromSP, 0x44c666, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToContinue, 0x44ad26, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToCreateParty, 0x44e320, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToDifficulty, 0x44c833, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToExit, 0x44ad18, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToLoadGame, 0x450e1a, void, Params(bool unk1), Args(unk1));
	DefineMethod(TransitionToLogo, 0x44ba7a, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToMain, 0x44e225, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToMapSelect, 0x44c709, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToMP, 0x44d265, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToMPGamespy, 0x44adc8, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToMPInternet, 0x44ad86, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToMPNetwork, 0x44ad44, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToSP, 0x452105, void, Params(bool unk1), Args(unk1));
};

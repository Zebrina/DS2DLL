#pragma once

#include "ClassMacros.h"

class UIMultiplayer {
public:
	DefineSingleton(UIMultiplayer, 0x4013e3);

	DefineMethod(AcceptGamelistColumnChanges, 0x4f0455, bool, Params(UIListbox* unk1), Args(unk1));
	DefineMethod(IsPartyCountValid, 0x4f031c, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(RCEndGameActivateStagingReturn, 0x4efa39, FuBi::Cookie__*, NO_PARAMS, NO_ARGS);
	DefineMethod(RCStartNetworkGame, 0x4f01bc, FuBi::Cookie__*, NO_PARAMS, NO_ARGS);
	DefineMethod(HideLobbyInterface, 0x4f044a, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RefreshClientGroupStatus, 0x4f0473, void, Params(unsigned int unk1), Args(unk1));
	DefineMethod(RefreshGamelistColumnHeaders, 0x4f0464, void, Params(UIListReport* unk1), Args(unk1));
	DefineMethod(ShowFirstTimeHelp, 0x4f2a19, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(ShowLobbyInterface, 0x4f043f, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TeamManagerCalculateColumns, 0x4f04da, void, Params(unsigned int unk1), Args(unk1));
	DefineMethod(TeamManagerCastSpell, 0x4f049e, void, Params(unsigned int unk1, unsigned int unk2), Args(unk1, unk2));
	DefineMethod(TeamManagerRolloffPortrait, 0x4f04bc, void, Params(unsigned int unk1, unsigned int unk2), Args(unk1, unk2));
	DefineMethod(TeamManagerRolloverPortrait, 0x4f04cb, void, Params(unsigned int unk1, unsigned int unk2), Args(unk1, unk2));
	DefineMethod(TeamManagerSetFollow, 0x4f04ad, void, Params(unsigned int unk1, unsigned int unk2), Args(unk1, unk2));
	DefineMethod(UpdateGroupStatusRollover, 0x4f0484, void, Params(unsigned int unk1), Args(unk1));
	DefineMethod(TransitionFromPartyConvert, 0x4f5fe6, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionFromPartyImport, 0x4f4af8, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToPartyConvert, 0x4f04f3, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToPartyImport, 0x4f05ac, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(TransitionToPartySelect, 0x4f0635, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(SKickPlayer, 0x4f0ecf, void, Params(const PlayerId_* unk1), Args(unk1));
};

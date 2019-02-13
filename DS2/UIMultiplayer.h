#pragma once

#include "ClassMacros.h"

class UIMultiplayer {
public:
	DefineSingleton(UIMultiplayer, 0x4013e3);

	/*UIMultiplayer*/ private: /*static*/ UIMultiplayer* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004013e3
	DefineMethod(AcceptGamelistColumnChanges, 0x4f0455, bool, Params(UIListbox* unk1), Args(UIListbox* unk1));
	DefineMethod(IsPartyCountValid, 0x4f031c, bool, Params(), Args());
	DefineMethod(RCEndGameActivateStagingReturn, 0x4efa39, FuBi::Cookie__*, Params(), Args());
	DefineMethod(RCStartNetworkGame, 0x4f01bc, FuBi::Cookie__*, Params(), Args());
	DefineMethod(HideLobbyInterface, 0x4f044a, void, Params(), Args());
	DefineMethod(RefreshClientGroupStatus, 0x4f0473, void, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(RefreshGamelistColumnHeaders, 0x4f0464, void, Params(UIListReport* unk1), Args(UIListReport* unk1));
	DefineMethod(ShowFirstTimeHelp, 0x4f2a19, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(ShowLobbyInterface, 0x4f043f, void, Params(), Args());
	DefineMethod(TeamManagerCalculateColumns, 0x4f04da, void, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(TeamManagerCastSpell, 0x4f049e, void, Params(unsigned int unk1, unsigned int unk2), Args(unsigned int unk1, unsigned int unk2));
	DefineMethod(TeamManagerRolloffPortrait, 0x4f04bc, void, Params(unsigned int unk1, unsigned int unk2), Args(unsigned int unk1, unsigned int unk2));
	DefineMethod(TeamManagerRolloverPortrait, 0x4f04cb, void, Params(unsigned int unk1, unsigned int unk2), Args(unsigned int unk1, unsigned int unk2));
	DefineMethod(TeamManagerSetFollow, 0x4f04ad, void, Params(unsigned int unk1, unsigned int unk2), Args(unsigned int unk1, unsigned int unk2));
	DefineMethod(UpdateGroupStatusRollover, 0x4f0484, void, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(TransitionFromPartyConvert, 0x4f5fe6, bool, Params(), Args());
	DefineMethod(TransitionFromPartyImport, 0x4f4af8, bool, Params(), Args());
	DefineMethod(TransitionToPartyConvert, 0x4f04f3, bool, Params(), Args());
	DefineMethod(TransitionToPartyImport, 0x4f05ac, bool, Params(), Args());
	DefineMethod(TransitionToPartySelect, 0x4f0635, bool, Params(), Args());
	DefineMethod(SKickPlayer, 0x4f0ecf, void, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
};

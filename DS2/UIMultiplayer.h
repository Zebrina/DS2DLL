#pragma once

#include "ClassMacros.h"

class UIMultiplayer {
public:
	DefineSingleton(UIMultiplayer, 0x4013e3);

	/*UIMultiplayer*/ private: /*static*/ UIMultiplayer* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004013e3
	/*UIMultiplayer*/ private: bool /*__thiscall*/ AcceptGamelistColumnChanges(UIListbox* unk1); //0x004f0455
	/*UIMultiplayer*/ private: bool /*__thiscall*/ IsPartyCountValid(); //0x004f031c
	/*UIMultiplayer*/ private: FuBi::Cookie__* /*__thiscall*/ RCEndGameActivateStagingReturn(); //0x004efa39
	/*UIMultiplayer*/ private: FuBi::Cookie__* /*__thiscall*/ RCStartNetworkGame(); //0x004f01bc
	/*UIMultiplayer*/ private: void /*__thiscall*/ HideLobbyInterface(); //0x004f044a
	/*UIMultiplayer*/ private: void /*__thiscall*/ RefreshClientGroupStatus(unsigned int unk1); //0x004f0473
	/*UIMultiplayer*/ private: void /*__thiscall*/ RefreshGamelistColumnHeaders(UIListReport* unk1); //0x004f0464
	/*UIMultiplayer*/ private: void /*__thiscall*/ ShowFirstTimeHelp(const gpbstring<char>& unk1); //0x004f2a19
	/*UIMultiplayer*/ private: void /*__thiscall*/ ShowLobbyInterface(); //0x004f043f
	/*UIMultiplayer*/ private: void /*__thiscall*/ TeamManagerCalculateColumns(unsigned int unk1); //0x004f04da
	/*UIMultiplayer*/ private: void /*__thiscall*/ TeamManagerCastSpell(unsigned int unk1, unsigned int unk2); //0x004f049e
	/*UIMultiplayer*/ private: void /*__thiscall*/ TeamManagerRolloffPortrait(unsigned int unk1, unsigned int unk2); //0x004f04bc
	/*UIMultiplayer*/ private: void /*__thiscall*/ TeamManagerRolloverPortrait(unsigned int unk1, unsigned int unk2); //0x004f04cb
	/*UIMultiplayer*/ private: void /*__thiscall*/ TeamManagerSetFollow(unsigned int unk1, unsigned int unk2); //0x004f04ad
	/*UIMultiplayer*/ private: void /*__thiscall*/ UpdateGroupStatusRollover(unsigned int unk1); //0x004f0484
	/*UIMultiplayer*/ public: bool /*__thiscall*/ TransitionFromPartyConvert(); //0x004f5fe6
	/*UIMultiplayer*/ public: bool /*__thiscall*/ TransitionFromPartyImport(); //0x004f4af8
	/*UIMultiplayer*/ public: bool /*__thiscall*/ TransitionToPartyConvert(); //0x004f04f3
	/*UIMultiplayer*/ public: bool /*__thiscall*/ TransitionToPartyImport(); //0x004f05ac
	/*UIMultiplayer*/ public: bool /*__thiscall*/ TransitionToPartySelect(); //0x004f0635
	/*UIMultiplayer*/ public: void /*__thiscall*/ SKickPlayer(const PlayerId_* unk1); //0x004f0ecf
};

#pragma once

#include "ClassMacros.h"

class CGameOptions {
public:
	DefineSingleton(CGameOptions, 0x503592);

	/*CGameOptions*/ private: /*static*/ CGameOptions* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00503592
	/*CGameOptions*/ public: bool /*__thiscall*/ IsGoldSharingEnabled(); //0x0040601d
	/*CGameOptions*/ public: bool /*__thiscall*/ IsLocationSelectEnabled(); //0x00405ff6
	/*CGameOptions*/ public: bool /*__thiscall*/ IsNewCharactersOnlyEnabled(); //0x00406003
	/*CGameOptions*/ public: bool /*__thiscall*/ IsPasswordProtectionEnabled(); //0x00405fe9
	/*CGameOptions*/ public: bool /*__thiscall*/ IsPausingEnabled(); //0x00406010
	/*CGameOptions*/ public: int /*__thiscall*/ GetCharacterCount(); //0x00406051
	/*CGameOptions*/ public: int /*__thiscall*/ GetCharacterLimit(); //0x00406044
	/*CGameOptions*/ public: int /*__thiscall*/ GetDifficulty(); //0x00403fc3
	/*CGameOptions*/ public: int /*__thiscall*/ GetMaxPartySize(); //0x00406037
	/*CGameOptions*/ public: int /*__thiscall*/ GetPlayerLimit(); //0x0040602a
	/*CGameOptions*/ public: void /*__thiscall*/ AllowGoldSharing(bool unk1); //0x00405eab
	/*CGameOptions*/ public: void /*__thiscall*/ AllowLocationSelect(bool unk1); //0x00405e21
	/*CGameOptions*/ public: void /*__thiscall*/ AllowPausing(bool unk1); //0x00405e7d
	/*CGameOptions*/ public: void /*__thiscall*/ NewCharacterOnly(bool unk1); //0x00405e4f
	/*CGameOptions*/ public: void /*__thiscall*/ SetCharacterLimit(int unk1); //0x00405f25
	/*CGameOptions*/ public: void /*__thiscall*/ SetCharacterUberLevel(int unk1); //0x00405fc1
	/*CGameOptions*/ public: void /*__thiscall*/ SetDifficulty(int unk1); //0x00403fc0
	/*CGameOptions*/ public: void /*__thiscall*/ SetMapName(const gpbstring<char>& unk1); //0x004079a7
	/*CGameOptions*/ public: void /*__thiscall*/ SetMaxPartySize(int unk1); //0x00405ed9
	/*CGameOptions*/ public: void /*__thiscall*/ SetPartyAverageUberLevel(int unk1); //0x00405f99
	/*CGameOptions*/ public: void /*__thiscall*/ SetPasswordProtected(bool unk1); //0x00405d99
	/*CGameOptions*/ public: void /*__thiscall*/ SetPlayerLimit(int unk1); //0x00405dc7
	/*CGameOptions*/ public: void /*__thiscall*/ SetWorldName(const gpbstring<char>& unk1); //0x004079ef
};

#pragma once

#include "ClassMacros.h"

class UIGame {
public:
	DefineSingleton(UIGame, 0x40a5ed);

	/*UIGame*/ private: /*static*/ UIGame* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5ed
	/*UIGame*/ public: bool /*__thiscall*/ IsSelectionDown(); //0x004092cf
	/*UIGame*/ public: bool /*__thiscall*/ SelectAllPartyMembers(); //0x0047713e
	/*UIGame*/ public: bool /*__thiscall*/ SelectLastPlayer(); //0x0047cad8
	/*UIGame*/ public: bool /*__thiscall*/ SelectNextPlayer(); //0x0047cabb
	/*UIGame*/ public: bool /*__thiscall*/ ShowSocialWindowFriendslist(); //0x0047d705
	/*UIGame*/ public: bool /*__thiscall*/ TeleportGameObject(const Goid_* unk1, const SiegePos& unk2, bool unk3, bool unk4) const; //0x00474e6d
	/*UIGame*/ public: bool /*__thiscall*/ TeleportGameObject(const Goid_* unk1, const SiegePos& unk2, bool unk3) const; //0x00474e50
	/*UIGame*/ public: bool /*__thiscall*/ TeleportGameObject(const Scid_* unk1, const RegionId_* unk2, const SiegePos& unk3, bool unk4) const; //0x00474e7c
	/*UIGame*/ public: bool /*__thiscall*/ ToggleClothMap(); //0x0047af10
	/*UIGame*/ public: bool /*__thiscall*/ ToggleJournal(); //0x0047b039
	/*UIGame*/ public: const gpbstring<char>& /*__thiscall*/ GetJournalTabGroup(); //0x004092a8
	/*UIGame*/ public: const Goid_* /*__thiscall*/ ClosestSelectedCharacter(const Goid_* unk1); //0x0047916d
	/*UIGame*/ public: const Goid_* /*__thiscall*/ ClosestSelectedCharacter(const SiegePos& unk1); //0x004775ac
	/*UIGame*/ public: const Goid_* /*__thiscall*/ GetActorWhoCarriesObject(const Goid_* unk1); //0x00474d6c
	/*UIGame*/ public: FuBi::Cookie__* /*__thiscall*/ RSTeleportGameObject(const Goid_* unk1, const SiegePos& unk2, bool unk3) const; //0x00476404
	/*UIGame*/ public: GoidColl& /*__thiscall*/ GetSelectedItems(); //0x004795eb
	/*UIGame*/ public: void /*__cdecl*/ DisplayMsgF(const char* unk1, ... unk2) const; //0x0047d801
	/*UIGame*/ public: void /*__cdecl*/ DisplayMsgSoundF(const char* unk1, const char* unk2, ... unk3) const; //0x0047da24
	/*UIGame*/ public: void /*__cdecl*/ SDisplayMsgF(unsigned long unk1, const char* unk2, ... unk3) const; //0x0047dadf
	/*UIGame*/ public: void /*__cdecl*/ SDisplayMsgSoundF(unsigned long unk1, const char* unk2, const char* unk3, ... unk4) const; //0x0047db68
	/*UIGame*/ public: void /*__cdecl*/ SScreenMsgToPlayersF(const SiegePos& unk1, const char* unk2, ... unk3) const; //0x0047e859
	/*UIGame*/ public: void /*__thiscall*/ DisplayMsgSound(const char* unk1, const char* unk2) const; //0x0047b6af
	/*UIGame*/ public: void /*__thiscall*/ DisplayMsgSoundEx(const char* unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7) const; //0x0047b574
	/*UIGame*/ public: void /*__thiscall*/ RankPartyMembers(); //0x00477e13
	/*UIGame*/ public: void /*__thiscall*/ RCDisplayMsg(unsigned long unk1, const char* unk2) const; //0x0047d716
	/*UIGame*/ public: void /*__thiscall*/ RCDisplayMsgEx(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7) const; //0x0047b382
	/*UIGame*/ public: void /*__thiscall*/ RCDisplayMsgSound(unsigned long unk1, const char* unk2, const char* unk3) const; //0x0047d843
	/*UIGame*/ public: void /*__thiscall*/ RCDisplayMsgSoundEx(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7, const char* unk8) const; //0x0047d92c
	/*UIGame*/ public: void /*__thiscall*/ RequestClassDamageWatch(const Goid_* unk1, float unk2); //0x00480d92
	/*UIGame*/ public: void /*__thiscall*/ SDisplayMsg(unsigned long unk1, const char* unk2) const; //0x0047db39
	/*UIGame*/ public: void /*__thiscall*/ SDisplayMsgEx(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7) const; //0x0047d70d
	/*UIGame*/ public: void /*__thiscall*/ SDisplayMsgSound(unsigned long unk1, const char* unk2, const char* unk3) const; //0x0047dbab
	/*UIGame*/ public: void /*__thiscall*/ SDisplayMsgSoundEx(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7, const char* unk8) const; //0x0047dbb4
	/*UIGame*/ public: void /*__thiscall*/ SetEscNisToFrontEnd(bool unk1); //0x004092bf
	/*UIGame*/ public: void /*__thiscall*/ SetRadarIconVisibility(const gpbstring<char>& unk1, bool unk2); //0x004730cc
	/*UIGame*/ public: void /*__thiscall*/ SetRadarVisible(bool unk1); //0x004730a9
	/*UIGame*/ public: void /*__thiscall*/ SetSingleSelect(bool unk1); //0x004092af
	/*UIGame*/ public: void /*__thiscall*/ SScreenMsgToPlayers(const SiegePos& unk1, const char* unk2) const; //0x0047da88
	/*UIGame*/ public: void /*__thiscall*/ ToggleRadar(); //0x004730e0
};

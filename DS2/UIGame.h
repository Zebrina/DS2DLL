#pragma once

#include "ClassMacros.h"

class UIGame {
public:
	DefineSingleton(UIGame, 0x40a5ed);

	/*UIGame*/ private: /*static*/ UIGame* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5ed
	DefineMethod(IsSelectionDown, 0x4092cf, bool, Params(), Args());
	DefineMethod(SelectAllPartyMembers, 0x47713e, bool, Params(), Args());
	DefineMethod(SelectLastPlayer, 0x47cad8, bool, Params(), Args());
	DefineMethod(SelectNextPlayer, 0x47cabb, bool, Params(), Args());
	DefineMethod(ShowSocialWindowFriendslist, 0x47d705, bool, Params(), Args());
	DefineConstMethod(TeleportGameObject, 0x474e6d, bool, Params(const Goid_* unk1, const SiegePos& unk2, bool unk3, bool unk4), Args(const Goid_* unk1, const SiegePos& unk2, bool unk3, bool unk4));
	DefineConstMethod(TeleportGameObject, 0x474e50, bool, Params(const Goid_* unk1, const SiegePos& unk2, bool unk3), Args(const Goid_* unk1, const SiegePos& unk2, bool unk3));
	DefineConstMethod(TeleportGameObject, 0x474e7c, bool, Params(const Scid_* unk1, const RegionId_* unk2, const SiegePos& unk3, bool unk4), Args(const Scid_* unk1, const RegionId_* unk2, const SiegePos& unk3, bool unk4));
	DefineMethod(ToggleClothMap, 0x47af10, bool, Params(), Args());
	DefineMethod(ToggleJournal, 0x47b039, bool, Params(), Args());
	/*UIGame*/ public: const gpbstring<char>& /*__thiscall*/ GetJournalTabGroup(); //0x004092a8
	/*UIGame*/ public: const Goid_* /*__thiscall*/ ClosestSelectedCharacter(const Goid_* unk1); //0x0047916d
	/*UIGame*/ public: const Goid_* /*__thiscall*/ ClosestSelectedCharacter(const SiegePos& unk1); //0x004775ac
	/*UIGame*/ public: const Goid_* /*__thiscall*/ GetActorWhoCarriesObject(const Goid_* unk1); //0x00474d6c
	DefineConstMethod(RSTeleportGameObject, 0x476404, FuBi::Cookie__*, Params(const Goid_* unk1, const SiegePos& unk2, bool unk3), Args(const Goid_* unk1, const SiegePos& unk2, bool unk3));
	/*UIGame*/ public: GoidColl& /*__thiscall*/ GetSelectedItems(); //0x004795eb
	/*UIGame*/ public: void /*__cdecl*/ DisplayMsgF(const char* unk1, ... unk2) const; //0x0047d801
	/*UIGame*/ public: void /*__cdecl*/ DisplayMsgSoundF(const char* unk1, const char* unk2, ... unk3) const; //0x0047da24
	/*UIGame*/ public: void /*__cdecl*/ SDisplayMsgF(unsigned long unk1, const char* unk2, ... unk3) const; //0x0047dadf
	/*UIGame*/ public: void /*__cdecl*/ SDisplayMsgSoundF(unsigned long unk1, const char* unk2, const char* unk3, ... unk4) const; //0x0047db68
	/*UIGame*/ public: void /*__cdecl*/ SScreenMsgToPlayersF(const SiegePos& unk1, const char* unk2, ... unk3) const; //0x0047e859
	DefineConstMethod(DisplayMsgSound, 0x47b6af, void, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
	DefineConstMethod(DisplayMsgSoundEx, 0x47b574, void, Params(const char* unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7), Args(const char* unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7));
	DefineMethod(RankPartyMembers, 0x477e13, void, Params(), Args());
	DefineConstMethod(RCDisplayMsg, 0x47d716, void, Params(unsigned long unk1, const char* unk2), Args(unsigned long unk1, const char* unk2));
	DefineConstMethod(RCDisplayMsgEx, 0x47b382, void, Params(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7), Args(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7));
	DefineConstMethod(RCDisplayMsgSound, 0x47d843, void, Params(unsigned long unk1, const char* unk2, const char* unk3), Args(unsigned long unk1, const char* unk2, const char* unk3));
	DefineConstMethod(RCDisplayMsgSoundEx, 0x47d92c, void, Params(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7, const char* unk8), Args(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7, const char* unk8));
	DefineMethod(RequestClassDamageWatch, 0x480d92, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineConstMethod(SDisplayMsg, 0x47db39, void, Params(unsigned long unk1, const char* unk2), Args(unsigned long unk1, const char* unk2));
	DefineConstMethod(SDisplayMsgEx, 0x47d70d, void, Params(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7), Args(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7));
	DefineConstMethod(SDisplayMsgSound, 0x47dbab, void, Params(unsigned long unk1, const char* unk2, const char* unk3), Args(unsigned long unk1, const char* unk2, const char* unk3));
	DefineConstMethod(SDisplayMsgSoundEx, 0x47dbb4, void, Params(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7, const char* unk8), Args(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7, const char* unk8));
	DefineMethod(SetEscNisToFrontEnd, 0x4092bf, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetRadarIconVisibility, 0x4730cc, void, Params(const gpbstring<char>& unk1, bool unk2), Args(const gpbstring<char>& unk1, bool unk2));
	DefineMethod(SetRadarVisible, 0x4730a9, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetSingleSelect, 0x4092af, void, Params(bool unk1), Args(bool unk1));
	DefineConstMethod(SScreenMsgToPlayers, 0x47da88, void, Params(const SiegePos& unk1, const char* unk2), Args(const SiegePos& unk1, const char* unk2));
	DefineMethod(ToggleRadar, 0x4730e0, void, Params(), Args());
};

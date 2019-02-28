#pragma once

#include "FuBi.h"

struct Goid_;
struct RegionId_;
struct Scid_;
struct SiegePos;

class UIGame {
public:
	DefineSingleton(UIGame, 0x40a5ed);

	DefineMethod(IsSelectionDown, 0x4092cf, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(SelectAllPartyMembers, 0x47713e, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(SelectLastPlayer, 0x47cad8, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(SelectNextPlayer, 0x47cabb, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowSocialWindowFriendslist, 0x47d705, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(TeleportGameObject, 0x474e6d, bool, Params(const Goid_* unk1, const SiegePos& unk2, bool unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(TeleportGameObject, 0x474e50, bool, Params(const Goid_* unk1, const SiegePos& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(TeleportGameObject, 0x474e7c, bool, Params(const Scid_* unk1, const RegionId_* unk2, const SiegePos& unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(ToggleClothMap, 0x47af10, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ToggleJournal, 0x47b039, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetJournalTabGroup, 0x4092a8, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(ClosestSelectedCharacter, 0x47916d, const Goid_*, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(ClosestSelectedCharacter, 0x4775ac, const Goid_*, Params(const SiegePos& unk1), Args(unk1));
	DefineMethod(GetActorWhoCarriesObject, 0x474d6c, const Goid_*, Params(const Goid_* unk1), Args(unk1));
	DefineConstMethod(RSTeleportGameObject, 0x476404, FuBi::Cookie__*, Params(const Goid_* unk1, const SiegePos& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetSelectedItems, 0x4795eb, GoidColl&, NO_PARAMS, NO_ARGS);
	DefineConstVarArgMethod(DisplayMsgF, 0x47d801, void, Params(const char* format), Args(format));
	DefineConstVarArgMethod(DisplayMsgSoundF, 0x47da24, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstVarArgMethod(SDisplayMsgF, 0x47dadf, void, Params(unsigned long unk1, const char* unk2), Args(unk1, unk2));
	DefineConstVarArgMethod(SDisplayMsgSoundF, 0x47db68, void, Params(unsigned long unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineConstVarArgMethod(SScreenMsgToPlayersF, 0x47e859, void, Params(const SiegePos& pos, const char* format), Args(pos, format));
	DefineConstMethod(DisplayMsgSound, 0x47b6af, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(DisplayMsgSoundEx, 0x47b574, void, Params(const char* unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineMethod(RankPartyMembers, 0x477e13, void, NO_PARAMS, NO_ARGS);
	DefineConstMethod(RCDisplayMsg, 0x47d716, void, Params(unsigned long unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(RCDisplayMsgEx, 0x47b382, void, Params(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineConstMethod(RCDisplayMsgSound, 0x47d843, void, Params(unsigned long unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(RCDisplayMsgSoundEx, 0x47d92c, void, Params(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7, const char* unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
	DefineMethod(RequestClassDamageWatch, 0x480d92, void, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
	DefineConstMethod(SDisplayMsg, 0x47db39, void, Params(unsigned long unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(SDisplayMsgEx, 0x47d70d, void, Params(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineConstMethod(SDisplayMsgSound, 0x47dbab, void, Params(unsigned long unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(SDisplayMsgSoundEx, 0x47dbb4, void, Params(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7, const char* unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
	DefineMethod(SetEscNisToFrontEnd, 0x4092bf, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetRadarIconVisibility, 0x4730cc, void, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SetRadarVisible, 0x4730a9, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetSingleSelect, 0x4092af, void, Params(bool unk1), Args(unk1));
	DefineConstMethod(SScreenMsgToPlayers, 0x47da88, void, Params(const SiegePos& unk1, const char* unk2), Args(unk1, unk2));
	DefineMethod(ToggleRadar, 0x4730e0, void, NO_PARAMS, NO_ARGS);
};

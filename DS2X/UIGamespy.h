#pragma once

#include "Enums.h"
#include "GPBString.h"



enum eGamespyPopupMenuID {

};

enum eRoomType {

};

class UIEditBox;
struct PlayerId_;

class UIGamespy {
public:
	DefineSingleton(UIGamespy, 0x4243cb);

	DefineMethod(SetSavedLoginInfo, 0x4e0104, void, Params(UIEditBox* unk1, UIEditBox* unk2), Args(unk1, unk2));
	DefineMethod(CanAddClientToSocialWindow, 0x4dc8f5, bool, Params(int unk1), Args(unk1));
	DefineMethod(CreateNewAccount, 0x4de081, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(CreateNewTeam, 0x4dc502, bool, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineMethod(FullLogin, 0x4dda34, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(IsClientLocal, 0x4dc8da, bool, Params(int unk1), Args(unk1));
	DefineMethod(IsClientTagValid, 0x4dc4e3, bool, Params(int unk1), Args(unk1));
	DefineMethod(IsConnected, 0x4dc7b8, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsOnTeamTeam, 0x4dc98c, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsProfileConnected, 0x4dc7c9, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ProcessClientPvPStatusChange, 0x4dc4f1, bool, Params(int unk1), Args(unk1));
	DefineMethod(ProcessClientTeamStatusChange, 0x4dc91f, bool, Params(int unk1), Args(unk1));
	DefineMethod(ProfileLogin, 0x4dda5d, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetClentName, 0x4de75f, gpbstring<char>, Params(int unk1), Args(unk1));
	DefineMethod(GetClientPartyName, 0x4def8c, gpbstring<char>, Params(int unk1), Args(unk1));
	DefineMethod(GetPlayerIdFromTag, 0x4dc95c, const PlayerId_*, Params(int unk1), Args(unk1));
	DefineMethod(GetClientPartyLvl, 0x4dc8af, int, Params(int unk1), Args(unk1));
	DefineMethod(GetClientPartySize, 0x4dc884, int, Params(int unk1), Args(unk1));
	DefineMethod(GetClientPvPStatus, 0x4dc4fc, int, Params(int unk1), Args(unk1));
	DefineMethod(GetClientTeamOption, 0x4dc4f6, int, Params(int unk1), Args(unk1));
	DefineMethod(GetFirstClient, 0x4dc83d, int, Params(eRoomType unk1), Args(unk1));
	DefineMethod(GetNextClient, 0x4dc85c, int, Params(eRoomType unk1, int unk2), Args(unk1, unk2));
	DefineMethod(CloseHostGameInterface, 0x4dc4db, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ConnectPeer, 0x424876, void, Params(const char* unk1), Args(unk1));
	DefineMethod(ConnectPeerWithProfile, 0x4248a2, void, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(ConnectProfile, 0x4248d1, void, Params(const char* unk1, const char* unk2, const char* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(CreateChatRoom, 0x4de25c, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(DisconnectPeer, 0x4dc7d4, void, NO_PARAMS, NO_ARGS);
	DefineMethod(DisconnectProfile, 0x4dc804, void, NO_PARAMS, NO_ARGS);
	DefineMethod(HostGame, 0x4de00a, void, NO_PARAMS, NO_ARGS);
	DefineMethod(JoinChatRoom, 0x4de854, void, Params(int unk1), Args(unk1));
	DefineMethod(JoinGame, 0x4ddfad, void, Params(int unk1), Args(unk1));
	DefineMethod(LeaveChatRoom, 0x4dcec5, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(LeaveTeam, 0x4dc507, void, NO_PARAMS, NO_ARGS);
	DefineMethod(OpenHostGameInterface, 0x4dce6e, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(ProcessPopupMenu, 0x4dc4d5, void, Params(int unk1), Args(unk1));
	DefineMethod(ReconnectProfile, 0x4df1ef, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RefreshSocialWindow, 0x4ddbec, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowCreateChatChannelInterface, 0x4de2e7, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowLoginInterface, 0x4de663, void, NO_PARAMS, NO_ARGS);
	DefineMethod(StartListingGames, 0x4ddf71, void, NO_PARAMS, NO_ARGS);
	DefineMethod(StopListingGames, 0x4dc82a, void, NO_PARAMS, NO_ARGS);
};

DefineFunction(ToInt, 0x4dc402, int, Params(eGamespyPopupMenuID unk1), Args(unk1));

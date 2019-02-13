#pragma once

#include "ClassMacros.h"

class UIGamespy {
public:
	DefineSingleton(UIGamespy, 0x4243cb);

	/*UIGamespy*/ private: /*static*/ UIGamespy* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004243cb
	DefineMethod(SetSavedLoginInfo, 0x4e0104, void, Params(UIEditBox* unk1, UIEditBox* unk2), Args(UIEditBox* unk1, UIEditBox* unk2));
	DefineMethod(CanAddClientToSocialWindow, 0x4dc8f5, bool, Params(int unk1), Args(int unk1));
	DefineMethod(CreateNewAccount, 0x4de081, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4));
	DefineMethod(CreateNewTeam, 0x4dc502, bool, Params(const gpbstring<char>& unk1, int unk2), Args(const gpbstring<char>& unk1, int unk2));
	DefineMethod(FullLogin, 0x4dda34, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3));
	DefineMethod(IsClientLocal, 0x4dc8da, bool, Params(int unk1), Args(int unk1));
	DefineMethod(IsClientTagValid, 0x4dc4e3, bool, Params(int unk1), Args(int unk1));
	DefineMethod(IsConnected, 0x4dc7b8, bool, Params(), Args());
	DefineMethod(IsOnTeamTeam, 0x4dc98c, bool, Params(), Args());
	DefineMethod(IsProfileConnected, 0x4dc7c9, bool, Params(), Args());
	DefineMethod(ProcessClientPvPStatusChange, 0x4dc4f1, bool, Params(int unk1), Args(int unk1));
	DefineMethod(ProcessClientTeamStatusChange, 0x4dc91f, bool, Params(int unk1), Args(int unk1));
	DefineMethod(ProfileLogin, 0x4dda5d, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3));
	/*UIGamespy*/ public: gpbstring<char> /*__thiscall*/ GetClentName(int unk1); //0x004de75f
	/*UIGamespy*/ public: gpbstring<char> /*__thiscall*/ GetClientPartyName(int unk1); //0x004def8c
	/*UIGamespy*/ public: const PlayerId_* /*__thiscall*/ GetPlayerIdFromTag(int unk1); //0x004dc95c
	DefineMethod(GetClientPartyLvl, 0x4dc8af, int, Params(int unk1), Args(int unk1));
	DefineMethod(GetClientPartySize, 0x4dc884, int, Params(int unk1), Args(int unk1));
	DefineMethod(GetClientPvPStatus, 0x4dc4fc, int, Params(int unk1), Args(int unk1));
	DefineMethod(GetClientTeamOption, 0x4dc4f6, int, Params(int unk1), Args(int unk1));
	DefineMethod(GetFirstClient, 0x4dc83d, int, Params(eRoomType unk1), Args(eRoomType unk1));
	DefineMethod(GetNextClient, 0x4dc85c, int, Params(eRoomType unk1, int unk2), Args(eRoomType unk1, int unk2));
	DefineMethod(CloseHostGameInterface, 0x4dc4db, void, Params(), Args());
	DefineMethod(ConnectPeer, 0x424876, void, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(ConnectPeerWithProfile, 0x4248a2, void, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(ConnectProfile, 0x4248d1, void, Params(const char* unk1, const char* unk2, const char* unk3, bool unk4), Args(const char* unk1, const char* unk2, const char* unk3, bool unk4));
	DefineMethod(CreateChatRoom, 0x4de25c, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
	DefineMethod(DisconnectPeer, 0x4dc7d4, void, Params(), Args());
	DefineMethod(DisconnectProfile, 0x4dc804, void, Params(), Args());
	DefineMethod(HostGame, 0x4de00a, void, Params(), Args());
	DefineMethod(JoinChatRoom, 0x4de854, void, Params(int unk1), Args(int unk1));
	DefineMethod(JoinGame, 0x4ddfad, void, Params(int unk1), Args(int unk1));
	DefineMethod(LeaveChatRoom, 0x4dcec5, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(LeaveTeam, 0x4dc507, void, Params(), Args());
	DefineMethod(OpenHostGameInterface, 0x4dce6e, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
	DefineMethod(ProcessPopupMenu, 0x4dc4d5, void, Params(int unk1), Args(int unk1));
	DefineMethod(ReconnectProfile, 0x4df1ef, void, Params(), Args());
	DefineMethod(RefreshSocialWindow, 0x4ddbec, void, Params(), Args());
	DefineMethod(ShowCreateChatChannelInterface, 0x4de2e7, void, Params(), Args());
	DefineMethod(ShowLoginInterface, 0x4de663, void, Params(), Args());
	DefineMethod(StartListingGames, 0x4ddf71, void, Params(), Args());
	DefineMethod(StopListingGames, 0x4dc82a, void, Params(), Args());
};

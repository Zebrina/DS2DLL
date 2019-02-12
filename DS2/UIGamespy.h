#pragma once

#include "ClassMacros.h"

class UIGamespy {
public:
	DefineSingleton(UIGamespy, 0x4243cb);

	/*UIGamespy*/ private: /*static*/ UIGamespy* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004243cb
	/*UIGamespy*/ private: void /*__thiscall*/ SetSavedLoginInfo(UIEditBox* unk1, UIEditBox* unk2); //0x004e0104
	/*UIGamespy*/ public: bool /*__thiscall*/ CanAddClientToSocialWindow(int unk1); //0x004dc8f5
	/*UIGamespy*/ public: bool /*__thiscall*/ CreateNewAccount(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4); //0x004de081
	/*UIGamespy*/ public: bool /*__thiscall*/ CreateNewTeam(const gpbstring<char>& unk1, int unk2); //0x004dc502
	/*UIGamespy*/ public: bool /*__thiscall*/ FullLogin(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3); //0x004dda34
	/*UIGamespy*/ public: bool /*__thiscall*/ IsClientLocal(int unk1); //0x004dc8da
	/*UIGamespy*/ public: bool /*__thiscall*/ IsClientTagValid(int unk1); //0x004dc4e3
	/*UIGamespy*/ public: bool /*__thiscall*/ IsConnected(); //0x004dc7b8
	/*UIGamespy*/ public: bool /*__thiscall*/ IsOnTeamTeam(); //0x004dc98c
	/*UIGamespy*/ public: bool /*__thiscall*/ IsProfileConnected(); //0x004dc7c9
	/*UIGamespy*/ public: bool /*__thiscall*/ ProcessClientPvPStatusChange(int unk1); //0x004dc4f1
	/*UIGamespy*/ public: bool /*__thiscall*/ ProcessClientTeamStatusChange(int unk1); //0x004dc91f
	/*UIGamespy*/ public: bool /*__thiscall*/ ProfileLogin(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3); //0x004dda5d
	/*UIGamespy*/ public: gpbstring<char> /*__thiscall*/ GetClentName(int unk1); //0x004de75f
	/*UIGamespy*/ public: gpbstring<char> /*__thiscall*/ GetClientPartyName(int unk1); //0x004def8c
	/*UIGamespy*/ public: const PlayerId_* /*__thiscall*/ GetPlayerIdFromTag(int unk1); //0x004dc95c
	/*UIGamespy*/ public: int /*__thiscall*/ GetClientPartyLvl(int unk1); //0x004dc8af
	/*UIGamespy*/ public: int /*__thiscall*/ GetClientPartySize(int unk1); //0x004dc884
	/*UIGamespy*/ public: int /*__thiscall*/ GetClientPvPStatus(int unk1); //0x004dc4fc
	/*UIGamespy*/ public: int /*__thiscall*/ GetClientTeamOption(int unk1); //0x004dc4f6
	/*UIGamespy*/ public: int /*__thiscall*/ GetFirstClient(eRoomType unk1); //0x004dc83d
	/*UIGamespy*/ public: int /*__thiscall*/ GetNextClient(eRoomType unk1, int unk2); //0x004dc85c
	/*UIGamespy*/ public: void /*__thiscall*/ CloseHostGameInterface(); //0x004dc4db
	/*UIGamespy*/ public: void /*__thiscall*/ ConnectPeer(const char* unk1); //0x00424876
	/*UIGamespy*/ public: void /*__thiscall*/ ConnectPeerWithProfile(const char* unk1, int unk2); //0x004248a2
	/*UIGamespy*/ public: void /*__thiscall*/ ConnectProfile(const char* unk1, const char* unk2, const char* unk3, bool unk4); //0x004248d1
	/*UIGamespy*/ public: void /*__thiscall*/ CreateChatRoom(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x004de25c
	/*UIGamespy*/ public: void /*__thiscall*/ DisconnectPeer(); //0x004dc7d4
	/*UIGamespy*/ public: void /*__thiscall*/ DisconnectProfile(); //0x004dc804
	/*UIGamespy*/ public: void /*__thiscall*/ HostGame(); //0x004de00a
	/*UIGamespy*/ public: void /*__thiscall*/ JoinChatRoom(int unk1); //0x004de854
	/*UIGamespy*/ public: void /*__thiscall*/ JoinGame(int unk1); //0x004ddfad
	/*UIGamespy*/ public: void /*__thiscall*/ LeaveChatRoom(const gpbstring<char>& unk1); //0x004dcec5
	/*UIGamespy*/ public: void /*__thiscall*/ LeaveTeam(); //0x004dc507
	/*UIGamespy*/ public: void /*__thiscall*/ OpenHostGameInterface(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x004dce6e
	/*UIGamespy*/ public: void /*__thiscall*/ ProcessPopupMenu(int unk1); //0x004dc4d5
	/*UIGamespy*/ public: void /*__thiscall*/ ReconnectProfile(); //0x004df1ef
	/*UIGamespy*/ public: void /*__thiscall*/ RefreshSocialWindow(); //0x004ddbec
	/*UIGamespy*/ public: void /*__thiscall*/ ShowCreateChatChannelInterface(); //0x004de2e7
	/*UIGamespy*/ public: void /*__thiscall*/ ShowLoginInterface(); //0x004de663
	/*UIGamespy*/ public: void /*__thiscall*/ StartListingGames(); //0x004ddf71
	/*UIGamespy*/ public: void /*__thiscall*/ StopListingGames(); //0x004dc82a
};

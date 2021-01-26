#pragma once

#include "Enums.h"
#include "GPString.h"

enum eGamespyPopupMenuID {

};

enum eRoomType {

};

class UIEditBox;
struct PlayerId;

class UIGamespy {
public:
	$Singleton(UIGamespy, 0x004243cb);

	$Method(0x004e0104, SetSavedLoginInfo, void, UIEditBox* unk1, UIEditBox* unk2);
	$Method(0x004dc8f5, CanAddClientToSocialWindow, bool, int unk1);
	$Method(0x004de081, CreateNewAccount, bool, const GPBString& unk1, const GPBString& unk2, const GPBString& unk3, const GPBString& unk4);
	$Method(0x004dc502, CreateNewTeam, bool, const GPBString& unk1, int unk2);
	$Method(0x004dda34, FullLogin, bool, const GPBString& unk1, const GPBString& unk2, const GPBString& unk3);
	$Method(0x004dc8da, IsClientLocal, bool, int unk1);
	$Method(0x004dc4e3, IsClientTagValid, bool, int unk1);
	$Method(0x004dc7b8, IsConnected, bool);
	$Method(0x004dc98c, IsOnTeamTeam, bool);
	$Method(0x004dc7c9, IsProfileConnected, bool);
	$Method(0x004dc4f1, ProcessClientPvPStatusChange, bool, int unk1);
	$Method(0x004dc91f, ProcessClientTeamStatusChange, bool, int unk1);
	$Method(0x004dda5d, ProfileLogin, bool, const GPBString& unk1, const GPBString& unk2, const GPBString& unk3);
	$Method(0x004de75f, GetClentName, GPBString, int unk1);
	$Method(0x004def8c, GetClientPartyName, GPBString, int unk1);
	$Method(0x004dc95c, GetPlayerIdFromTag, const PlayerId*, int unk1);
	$Method(0x004dc8af, GetClientPartyLvl, int, int unk1);
	$Method(0x004dc884, GetClientPartySize, int, int unk1);
	$Method(0x004dc4fc, GetClientPvPStatus, int, int unk1);
	$Method(0x004dc4f6, GetClientTeamOption, int, int unk1);
	$Method(0x004dc83d, GetFirstClient, int, eRoomType unk1);
	$Method(0x004dc85c, GetNextClient, int, eRoomType unk1, int unk2);
	$Method(0x004dc4db, CloseHostGameInterface, void);
	$Method(0x00424876, ConnectPeer, void, const char* unk1);
	$Method(0x004248a2, ConnectPeerWithProfile, void, const char* unk1, int unk2);
	$Method(0x004248d1, ConnectProfile, void, const char* unk1, const char* unk2, const char* unk3, bool unk4);
	$Method(0x004de25c, CreateChatRoom, void, const GPBString& unk1, const GPBString& unk2);
	$Method(0x004dc7d4, DisconnectPeer, void);
	$Method(0x004dc804, DisconnectProfile, void);
	$Method(0x004de00a, HostGame, void);
	$Method(0x004de854, JoinChatRoom, void, int unk1);
	$Method(0x004ddfad, JoinGame, void, int unk1);
	$Method(0x004dcec5, LeaveChatRoom, void, const GPBString& unk1);
	$Method(0x004dc507, LeaveTeam, void);
	$Method(0x004dce6e, OpenHostGameInterface, void, const GPBString& unk1, const GPBString& unk2);
	$Method(0x004dc4d5, ProcessPopupMenu, void, int unk1);
	$Method(0x004df1ef, ReconnectProfile, void);
	$Method(0x004ddbec, RefreshSocialWindow, void);
	$Method(0x004de2e7, ShowCreateChatChannelInterface, void);
	$Method(0x004de663, ShowLoginInterface, void);
	$Method(0x004ddf71, StartListingGames, void);
	$Method(0x004dc82a, StopListingGames, void);

	// 0x00
	$Padding(0x00, 0x40);
};

STATIC_ASSERT(sizeof(UIGamespy) >= 0x40);

$Function(0x004dc402, ToInt, int, eGamespyPopupMenuID unk1);

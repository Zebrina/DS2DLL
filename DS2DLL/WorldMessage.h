#pragma once

#include "Enums.h"
#include "GoidScid.h"

class WorldMessage {
public:
	WorldMessage() = default;
	WorldMessage(const WorldMessage&) = default;
	~WorldMessage() = default;

	WorldMessage& operator=(const WorldMessage&) = default;

	$ConstMethod(0x00408302, HasEvent, bool, eWorldEvent worldEvent);
	$ConstMethod(0x004082ff, GetWorldEvent, eWorldEvent);
	$ConstMethod(0x0040831b, GetSendFrom, const Goid*);
	$ConstMethod(0x0040831f, GetSendTo, const Goid*);
	$ConstMethod(0x00408323, GetSendToScid, const Scid*);
	$ConstMethod(0x00408317, GetData1, int);

    // 0x00
	eWorldEvent worldEvent;
	// 0x04
	Goid* sendFrom;
	// 0x08
	Goid* sendTo;
	// 0x0c
	Scid* sendToScid;
	// 0x10
    $Padding(0x10, 0x1c);
	// 0x1c
	int data1;
};

// Size confirmed.
STATIC_ASSERT(sizeof(WorldMessage) == 0x20);

$Function(0x0084858c, SendWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Goid* to, uint data1);
$Function(0x0084856a, SendWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Goid* to);
$Function(0x008488d9, SendWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Scid* to, uint data1);
$Function(0x008488b7, SendWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Scid* to);
$Function(0x008485b1, SSendWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Goid* to, uint data1);
$Function(0x008485d6, SSendWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Goid* to);
$Function(0x00848920, SSendWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Scid* to, uint data1);
$Function(0x008488fe, SSendWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Scid* to);
$Function(0x008485f8, RSSendWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Goid* to, uint data1);
$Function(0x00848c63, PostWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Goid* to, float unk4);
$Function(0x00848c39, PostWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Goid* to, uint data1, float unk5);
$Function(0x00848d86, PostWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Scid* to, float unk4);
$Function(0x00848d5c, PostWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Scid* to, uint data1, float unk5);
$Function(0x00848cb4, SPostWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Goid* to, float unk4);
$Function(0x00848c8a, SPostWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Goid* to, uint data1, float unk5);
$Function(0x00848dd7, SPostWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Scid* to, float unk4);
$Function(0x00848dad, SPostWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Scid* to, uint data1, float unk5);
$Function(0x00848d1d, SConditionalPostWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Scid* to, float unk4);
$Function(0x00848cdb, SConditionalPostWorldMessage, void, eWorldEvent worldEvent, const Goid* from, const Scid* to, uint data1, float unk5);

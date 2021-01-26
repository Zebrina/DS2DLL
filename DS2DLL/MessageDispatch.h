#pragma once

#include "WorldMessage.h"

// Exported as: MESSAGE_DISPATCH_FLAG
enum eMessageDispatchFlag {

};

class MessageDispatch {
public:
	$Singleton(MessageDispatch, 0x00414265);

	$Method(0x00886891, RCSend, void, WorldMessage& unk1, eMessageDispatchFlag unk2);
	$Method(0x00887229, SSend, void, WorldMessage& unk1, eMessageDispatchFlag unk2);
	$Method(0x004126bc, SSendDelayed, void, WorldMessage& unk1, eMessageDispatchFlag unk2);
};

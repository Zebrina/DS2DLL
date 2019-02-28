#pragma once

#include "WorldMessage.h"

// Exported as: MESSAGE_DISPATCH_FLAG
enum eMessageDispatchFlag {

};

class MessageDispatch {
public:
	DefineSingleton(MessageDispatch, 0x414265);

	DefineMethod(RCSend, 0x886891, void, Params(WorldMessage& unk1, eMessageDispatchFlag unk2), Args(unk1, unk2));
	DefineMethod(SSend, 0x887229, void, Params(WorldMessage& unk1, eMessageDispatchFlag unk2), Args(unk1, unk2));
	DefineMethod(SSendDelayed, 0x4126bc, void, Params(WorldMessage& unk1, eMessageDispatchFlag unk2), Args(unk1, unk2));
};

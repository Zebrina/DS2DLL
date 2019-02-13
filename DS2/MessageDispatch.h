#pragma once

#include "ClassMacros.h"

enum MESSAGE_DISPATCH_FLAG {

} MessageDispatchFlag;

class MessageDispatch {
public:
	DefineSingleton(MessageDispatch, 0x414265);

	/*MessageDispatch*/ private: /*static*/ MessageDispatch* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414265
	DefineMethod(RCSend, 0x886891, void, Params(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2), Args(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2));
	DefineMethod(SSend, 0x887229, void, Params(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2), Args(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2));
	DefineMethod(SSendDelayed, 0x4126bc, void, Params(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2), Args(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2));
};

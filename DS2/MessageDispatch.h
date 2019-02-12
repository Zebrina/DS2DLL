#pragma once

#include "ClassMacros.h"

enum MESSAGE_DISPATCH_FLAG {

} MessageDispatchFlag;

class MessageDispatch {
public:
	DefineSingleton(MessageDispatch, 0x414265);

	/*MessageDispatch*/ private: /*static*/ MessageDispatch* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414265
	/*MessageDispatch*/ private: void /*__thiscall*/ RCSend(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2); //0x00886891
	/*MessageDispatch*/ private: void /*__thiscall*/ SSend(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2); //0x00887229
	/*MessageDispatch*/ private: void /*__thiscall*/ SSendDelayed(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2); //0x004126bc
};

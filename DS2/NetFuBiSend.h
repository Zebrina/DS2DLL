#pragma once

#include "ClassMacros.h"

class NetFuBiSend {
public:
	DefineSingleton(NetFuBiSend, 0x424367);

	/*NetFuBiSend*/ private: /*static*/ NetFuBiSend* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00424367
	DefineMethod(SetSendDelay, 0x423a33, void, Params(float unk1), Args(float unk1));
};

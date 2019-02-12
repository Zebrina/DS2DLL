#pragma once

#include "ClassMacros.h"

class NetFuBiSend {
public:
	DefineSingleton(NetFuBiSend, 0x424367);

	/*NetFuBiSend*/ private: /*static*/ NetFuBiSend* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00424367
	/*NetFuBiSend*/ public: void /*__thiscall*/ SetSendDelay(float unk1); //0x00423a33
};

#pragma once

#include "ClassMacros.h"

class UI {
public:
	DefineSingleton(UI, 0x4013dd);

	/*UI*/ private: /*static*/ UI* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004013dd
	/*UI*/ public: bool /*__thiscall*/ HasUIFrontend(); //0x00401010
	/*UI*/ public: bool /*__thiscall*/ HasUIGame(); //0x00401000
	/*UI*/ public: bool /*__thiscall*/ HasUIMultiplayer(); //0x00401008
	/*UI*/ public: bool /*__thiscall*/ HasUIOptions(); //0x00401018
};

#pragma once

#include "ClassMacros.h"

class UI {
public:
	DefineSingleton(UI, 0x4013dd);

	/*UI*/ private: /*static*/ UI* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004013dd
	DefineMethod(HasUIFrontend, 0x401010, bool, Params(), Args());
	DefineMethod(HasUIGame, 0x401000, bool, Params(), Args());
	DefineMethod(HasUIMultiplayer, 0x401008, bool, Params(), Args());
	DefineMethod(HasUIOptions, 0x401018, bool, Params(), Args());
};

#pragma once

#include "ClassMacros.h"

class Services {
public:
	DefineSingleton(Services, 0x414306);

	/*Services*/ private: /*static*/ Services* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414306
	/*Services*/ public: /*static*/ void /*__cdecl*/ CheckAllSkrits(); //0x0090f01e
	/*Services*/ public: /*static*/ void /*__cdecl*/ CheckSkrit(const gpbstring<char>& unk1); //0x0090ec8f
	/*Services*/ public: siege::Console& /*__thiscall*/ GetOutputConsole(); //0x0090ea3f
};

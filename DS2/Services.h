#pragma once

#include "ClassMacros.h"

class Services {
public:
	DefineSingleton(Services, 0x414306);

	/*Services*/ private: /*static*/ Services* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414306
	DefineStaticMethod(CheckAllSkrits, 0x90f01e, void, Params(), Args());
	DefineStaticMethod(CheckSkrit, 0x90ec8f, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	/*Services*/ public: siege::Console& /*__thiscall*/ GetOutputConsole(); //0x0090ea3f
};

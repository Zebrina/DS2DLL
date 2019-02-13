#pragma once

#include "ClassMacros.h"

class UIChat {
public:
	DefineSingleton(UIChat, 0x424395);

	/*UIChat*/ private: /*static*/ UIChat* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00424395
	DefineMethod(ClearInterface, 0x4d7372, void, Params(), Args());
	DefineMethod(SetInterface, 0x4d77f3, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
};

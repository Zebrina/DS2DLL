#pragma once

#include "ClassMacros.h"

class UIChat {
public:
	DefineSingleton(UIChat, 0x424395);

	/*UIChat*/ private: /*static*/ UIChat* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00424395
	/*UIChat*/ public: void /*__thiscall*/ ClearInterface(); //0x004d7372
	/*UIChat*/ public: void /*__thiscall*/ SetInterface(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x004d77f3
};

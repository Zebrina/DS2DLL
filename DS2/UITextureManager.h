#pragma once

#include "ClassMacros.h"

class UITextureManager {
public:
	DefineSingleton(UITextureManager, 0x4be95d);

	/*UITextureManager*/ private: /*static*/ UITextureManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004be95d
	/*UITextureManager*/ public: gpbstring<char> /*__thiscall*/ GetTextureName(unsigned int unk1); //0x007a3c90
};

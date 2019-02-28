#pragma once

class UITextureManager {
public:
	DefineSingleton(UITextureManager, 0x4be95d);

	DefineMethod(GetTextureName, 0x7a3c90, gpbstring<char>, Params(unsigned int unk1), Args(unk1));
};

#pragma once

class Gamespy {
public:
	enum eConnectionType {

	};
};

DefineFunction(ToString, 0x582c5c, const char*, Params(Gamespy::eConnectionType unk1), Args(unk1));

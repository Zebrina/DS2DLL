#pragma once



class Gamespy {
public:
	enum eConnectionType {
		conntype_not_connected = 0,
		conntype_private = 1,
		conntype_public = 2,
		conntype_lan = 3,
	};
};

DefineFunction(ToString, 0x582c5c, const char*, Params(Gamespy::eConnectionType connectionType), Args(connectionType));

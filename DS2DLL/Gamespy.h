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

$Function(0x00582c5c, ToString, const char*, Gamespy::eConnectionType connectionType);

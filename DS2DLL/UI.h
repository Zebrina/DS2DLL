#pragma once

class UI {
public:
	$Singleton(UI, 0x004013dd);

	$Method(0x00401010, HasUIFrontend, bool);
	$Method(0x00401000, HasUIGame, bool);
	$Method(0x00401008, HasUIMultiplayer, bool);
	$Method(0x00401018, HasUIOptions, bool);
};

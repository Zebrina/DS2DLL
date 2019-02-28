#pragma once



class UI {
public:
	DefineSingleton(UI, 0x4013dd);

	DefineMethod(HasUIFrontend, 0x401010, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(HasUIGame, 0x401000, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(HasUIMultiplayer, 0x401008, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(HasUIOptions, 0x401018, bool, NO_PARAMS, NO_ARGS);
};

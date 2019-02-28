#pragma once

class Services {
public:
	DefineSingleton(Services, 0x414306);

	DefineStaticMethod(CheckAllSkrits, 0x90f01e, void, NO_PARAMS, NO_ARGS);
	DefineStaticMethod(CheckSkrit, 0x90ec8f, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetOutputConsole, 0x90ea3f, siege::Console&, NO_PARAMS, NO_ARGS);
};

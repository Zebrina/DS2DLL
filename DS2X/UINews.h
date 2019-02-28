#pragma once



class UINews {
public:
	DefineSingleton(UINews, 0x44abec);

	DefineMethod(HideInterface, 0x454c03, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ProcessUserRegistration, 0x456864, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ScrollNews, 0x45554e, void, Params(int unk1), Args(unk1));
	DefineMethod(ShowNewsMessages, 0x4555ed, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowUserMessages, 0x4555ae, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowUserRegistration, 0x45503c, void, NO_PARAMS, NO_ARGS);
	DefineMethod(TriggerMoreButton, 0x456353, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(ShowInterface, 0x4557a2, void, NO_PARAMS, NO_ARGS);
};

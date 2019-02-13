#pragma once

#include "ClassMacros.h"

class UINews {
public:
	DefineSingleton(UINews, 0x44abec);

	/*UINews*/ private: /*static*/ UINews* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0044abec
	DefineMethod(HideInterface, 0x454c03, void, Params(), Args());
	DefineMethod(ProcessUserRegistration, 0x456864, void, Params(), Args());
	DefineMethod(ScrollNews, 0x45554e, void, Params(int unk1), Args(int unk1));
	DefineMethod(ShowNewsMessages, 0x4555ed, void, Params(), Args());
	DefineMethod(ShowUserMessages, 0x4555ae, void, Params(), Args());
	DefineMethod(ShowUserRegistration, 0x45503c, void, Params(), Args());
	DefineMethod(TriggerMoreButton, 0x456353, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(ShowInterface, 0x4557a2, void, Params(), Args());
};

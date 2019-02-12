#pragma once

#include "ClassMacros.h"

class UINews {
public:
	DefineSingleton(UINews, 0x44abec);

	/*UINews*/ private: /*static*/ UINews* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0044abec
	/*UINews*/ protected: void /*__thiscall*/ HideInterface(); //0x00454c03
	/*UINews*/ protected: void /*__thiscall*/ ProcessUserRegistration(); //0x00456864
	/*UINews*/ protected: void /*__thiscall*/ ScrollNews(int unk1); //0x0045554e
	/*UINews*/ protected: void /*__thiscall*/ ShowNewsMessages(); //0x004555ed
	/*UINews*/ protected: void /*__thiscall*/ ShowUserMessages(); //0x004555ae
	/*UINews*/ protected: void /*__thiscall*/ ShowUserRegistration(); //0x0045503c
	/*UINews*/ protected: void /*__thiscall*/ TriggerMoreButton(unsigned long unk1); //0x00456353
	/*UINews*/ public: void /*__thiscall*/ ShowInterface(); //0x004557a2
};

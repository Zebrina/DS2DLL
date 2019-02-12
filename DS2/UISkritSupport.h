#pragma once

#include "ClassMacros.h"

class UISkritSupport {
public:
	DefineSingleton(UISkritSupport, 0x45e356);

	/*UISkritSupport*/ private: /*static*/ UISkritSupport* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0045e356
	/*UISkritSupport*/ public: void /*__thiscall*/ RCHideInterfaceByPlayer(const gpbstring<char>& unk1, const PlayerId_* unk2); //0x004633f2
	/*UISkritSupport*/ public: void /*__thiscall*/ RCShowInterfaceByPlayer(const gpbstring<char>& unk1, const PlayerId_* unk2); //0x004632c7
	/*UISkritSupport*/ public: void /*__thiscall*/ RSHideInterfaceByPlayer(const gpbstring<char>& unk1, const PlayerId_* unk2); //0x00463620
	/*UISkritSupport*/ public: void /*__thiscall*/ RSShowInterfaceByPlayer(const gpbstring<char>& unk1, const PlayerId_* unk2); //0x00463533
};

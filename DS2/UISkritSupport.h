#pragma once

#include "ClassMacros.h"

class UISkritSupport {
public:
	DefineSingleton(UISkritSupport, 0x45e356);

	DefineMethod(RCHideInterfaceByPlayer, 0x4633f2, void, Params(const gpbstring<char>& unk1, const PlayerId_* unk2), Args(unk1, unk2));
	DefineMethod(RCShowInterfaceByPlayer, 0x4632c7, void, Params(const gpbstring<char>& unk1, const PlayerId_* unk2), Args(unk1, unk2));
	DefineMethod(RSHideInterfaceByPlayer, 0x463620, void, Params(const gpbstring<char>& unk1, const PlayerId_* unk2), Args(unk1, unk2));
	DefineMethod(RSShowInterfaceByPlayer, 0x463533, void, Params(const gpbstring<char>& unk1, const PlayerId_* unk2), Args(unk1, unk2));
};

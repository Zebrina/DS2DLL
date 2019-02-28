#pragma once



class UICharacterSelectSinglePlayer {
public:
	DefineSingleton(UICharacterSelectSinglePlayer, 0x429e9c);

	DefineStaticMethod(FUBI_GetClassSingleton$, 0x429e9c, UICharacterSelectSinglePlayer*, NO_PARAMS, NO_ARGS);
	DefineMethod(RCGeneratePortrait, 0x449630, FuBi::Cookie__*, Params(const PlayerId_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RSGeneratePortrait, 0x449537, FuBi::Cookie__*, Params(const PlayerId_* unk1), Args(unk1));
};

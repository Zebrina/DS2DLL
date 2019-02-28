#pragma once



class UICharacterSelectMultiPlayer {
public:
	DefineSingleton(UICharacterSelectMultiPlayer, 0x42439b);

	DefineStaticMethod(FUBI_GetClassSingleton$, 0x42439b, UICharacterSelectMultiPlayer*, NO_PARAMS, NO_ARGS);
	DefineMethod(RCGeneratePortrait, 0x4d531c, FuBi::Cookie__*, Params(const PlayerId_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RSGeneratePortrait, 0x4d5223, FuBi::Cookie__*, Params(const PlayerId_* unk1), Args(unk1));
};

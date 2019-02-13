#pragma once

class UIMessage {
public:
	DefineConstMethod(GetCode, 0x5029d6, eUIMessage, Params(), Args());
	DefineConstMethod(GetKey, 0x5029d9, int, Params(), Args());
	DefineMethod(SetKey, 0x5029de, void, Params(int unk1), Args(int unk1));
};

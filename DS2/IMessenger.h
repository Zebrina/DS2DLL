#pragma once

class IMessenger {
public:
	DefineConstMethod(FUBI_RENAME_IsProcessingMessage, 0x5029f6, bool, Params(), Args());
	DefineMethod(FUBI_RENAME_Notify, 0x5029ed, void, Params(const gpbstring<char>& unk1, UIWindow* unk2), Args(const gpbstring<char>& unk1, UIWindow* unk2));
};

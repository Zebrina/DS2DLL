#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "GoCommon.h"



class Membership;

class GoCommon {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x408818, GoCommon*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x40880f, unsigned long, Params(GoCommon* unk1), Args(unk1));
	DefineMethod(SetScreenName, 0x40b36a, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SSetScreenName, 0x40b341, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetHasOneShotTriggered, 0x80412b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAutoExpirationClass, 0x804c52, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetForcedExpirationClass, 0x804c1b, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMembership, 0x4087fa, const Membership&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRarity, 0x4087fe, ePClass, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSetScreenName, 0x8039a6, FuBi::Cookie__*, Params(const gpbstring<unsigned short>& unk1), Args(unk1));
	DefineConstMethod(GetScreenName, 0x40c8af, void, Params(gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RCCopyMembership, 0x806507, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCRestoreLastMembership, 0x8065ec, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSetRolloverHelpKey, 0x8072da, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RestoreLastMembership, 0x40bb81, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSSetRolloverHelpKey, 0x8076e1, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SCopyMembership, 0x8068b0, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetRarity, 0x408802, void, Params(ePClass unk1), Args(unk1));
	DefineMethod(SRestoreLastMembership, 0x8068b9, void, NO_PARAMS, NO_ARGS);
};

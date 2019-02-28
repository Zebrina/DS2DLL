#pragma once

class UIStoreManager {
public:
	DefineSingleton(UIStoreManager, 0x429ea2);

	DefineMethod(DoesPartyHaveTemplate, 0x4d1a07, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetActiveStoreBuyer, 0x428d5f, const Goid_*, NO_PARAMS, NO_ARGS);
};

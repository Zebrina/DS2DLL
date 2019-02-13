#pragma once

#include "ClassMacros.h"

class UIStoreManager {
public:
	DefineSingleton(UIStoreManager, 0x429ea2);

	/*UIStoreManager*/ private: /*static*/ UIStoreManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429ea2
	DefineMethod(DoesPartyHaveTemplate, 0x4d1a07, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	/*UIStoreManager*/ public: const Goid_* /*__thiscall*/ GetActiveStoreBuyer(); //0x00428d5f
};

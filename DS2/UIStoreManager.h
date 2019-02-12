#pragma once

#include "ClassMacros.h"

class UIStoreManager {
public:
	DefineSingleton(UIStoreManager, 0x429ea2);

	/*UIStoreManager*/ private: /*static*/ UIStoreManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429ea2
	/*UIStoreManager*/ public: bool /*__thiscall*/ DoesPartyHaveTemplate(const gpbstring<char>& unk1); //0x004d1a07
	/*UIStoreManager*/ public: const Goid_* /*__thiscall*/ GetActiveStoreBuyer(); //0x00428d5f
};

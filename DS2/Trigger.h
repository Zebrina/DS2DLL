#pragma once

#include "ClassMacros.h"

class trigger {
public:
	class TriggerSys {
	public:
		DefineSingleton(TriggerSys, 0x414259);

		/*trigger::TriggerSys*/ private: /*static*/ TriggerSys* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414259
		DefineMethod(SSendActionToPartyMembersRemainingInNode, 0x8b6faa, bool, Params(const SiegeId_* unk1, const gpbstring<char>& unk2), Args(const SiegeId_* unk1, const gpbstring<char>& unk2));
		DefineMethod(RCSendActionToPartyMembersRemainingInNode, 0x8b6762, void, Params(const_mem_ptr unk1), Args(const_mem_ptr unk1));
		DefineMethod(SDeactivateTrigger, 0x8b6f56, void, Params(const Goid_* unk1, unsigned short unk2), Args(const Goid_* unk1, unsigned short unk2));
	};
} typedef Trigger;

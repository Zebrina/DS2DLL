#pragma once

#include "ClassMacros.h"

class trigger {
public:
	class TriggerSys {
	public:
		DefineSingleton(TriggerSys, 0x414259);

		/*trigger::TriggerSys*/ private: /*static*/ TriggerSys* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414259
		/*trigger::TriggerSys*/ public: bool /*__thiscall*/ SSendActionToPartyMembersRemainingInNode(const SiegeId_* unk1, const gpbstring<char>& unk2); //0x008b6faa
		/*trigger::TriggerSys*/ public: void /*__thiscall*/ RCSendActionToPartyMembersRemainingInNode(const_mem_ptr unk1); //0x008b6762
		/*trigger::TriggerSys*/ public: void /*__thiscall*/ SDeactivateTrigger(const Goid_* unk1, unsigned short unk2); //0x008b6f56
	};
} typedef Trigger;

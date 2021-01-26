#pragma once

#include "Memory.h"

class trigger {
public:
	class TriggerSys {
	public:
		$Singleton(TriggerSys, 0x00414259);

		$Method(0x008b6faa, SSendActionToPartyMembersRemainingInNode, bool, const SiegeId* unk1, const GPBString& unk2);
		$Method(0x008b6762, RCSendActionToPartyMembersRemainingInNode, void, const_mem_ptr unk1);
		$Method(0x008b6f56, SDeactivateTrigger, void, const Goid* unk1, unsigned short unk2);
	};
} typedef Trigger;

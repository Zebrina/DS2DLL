#pragma once

class trigger {
public:
	class TriggerSys {
	public:
		DefineSingleton(TriggerSys, 0x414259);

		DefineMethod(SSendActionToPartyMembersRemainingInNode, 0x8b6faa, bool, Params(const SiegeId_* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
		DefineMethod(RCSendActionToPartyMembersRemainingInNode, 0x8b6762, void, Params(const_mem_ptr unk1), Args(unk1));
		DefineMethod(SDeactivateTrigger, 0x8b6f56, void, Params(const Goid_* unk1, unsigned short unk2), Args(unk1, unk2));
	};
} typedef Trigger;

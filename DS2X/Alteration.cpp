#include "Alteration.h"

#include "AIQuery.h"
#include "Enums.h"
#include "GoActor.h"
#include "Report.h"
#include "Player.h"
#include "Skrit.h"

#include <iterator>
#include <vector>

const char** BASE_ALTERATION_NAMES = (const char**)0xcedf68;
size_t BASE_ALTERATION_COUNT = 181;

constexpr const char* RULED_EXTENDED = "world/global/rules/rules_extended";

const char* __cdecl ToStringEx(eAlteration alteration) {
	switch (alteration) {
	case ALTER_MAX_LIFE_PERCENT:
		return "alter_max_life_percent";
	case ALTER_MAX_MANA_PERCENT:
		return "alter_max_mana_percent";
	default:
		return "";
	}
}

void __declspec(naked) AlterationToStringHook(eAlteration alteration) {
	__asm {
		push ebp
		mov ebp, esp
		cmp [ebp + 0x8], ALTER_MAX_LIFE_PERCENT
		push [ebp + 0x8]
		jnl extended_alteration // Jump if not less than ALTER_MAX_LIFE_PERCENT.
		mov eax, 0x931aea
		jmp eax // Jump back to base function.
	extended_alteration:
		call ToStringEx
		pop ebp
		// Use ebp for jumping here since it will be popped immediately after we return and
		// we need to preserve the eax register (aka return value).
		mov ebp, 0x931af4
		jmp ebp // Jump back to base function.
	}
}

float __cdecl SkritCalculateMaxLifeHook(Skrit::Object* skrit, const char* functionName, Go* client) {
	//float maxLife = SkritCalculateMaxLife(skrit, "CalculateMaxLifeExtended$", client);
	float maxLife = SkritCalculateMaxLife(skrit, functionName, client);
	return maxLife;
}
float __cdecl SkritCalculateMaxManaHook(Skrit::Object* skrit, const char* functionName, Go* client) {
	//float maxMana = SkritCalculateMaxMana(skrit, "CalculateMaxLifeExtended$", client);
	float maxMana = SkritCalculateMaxMana(skrit, functionName, client);
	if (maxMana > 1000.0f) {
		//Report::MessageBox("Player");
		float maxManaPercent = AIQuery::GetSingleton()->GetAlterationSum(client, ALTER_MAX_MANA_PERCENT);
		if (maxManaPercent > 0.0f) {
			char msg[100];
			sprintf_s(msg, "%f", maxManaPercent);
			Report::MessageBox(msg);
		}
	}
	return maxMana;
}

int __fastcall RegisterAlterationSystemTypes(void* this_, void*, const char** alterNames, int, int count, int) {
	typedef int(__thiscall *Base)(void*, const char**, int, int, int);

	//Report::MessageBoxF("%i", count);

	static std::vector<const char*> alterations(count);
	std::copy(alterNames, alterNames + count, alterations.begin());
	alterations.push_back("ALTER_MAX_LIFE_PERCENT");
	alterations.push_back("ALTER_MAX_MANA_PERCENT");

	return ((Base)0x6239a3)(this_, alterations.data(), 0, alterations.size(), 0);
}

void WriteAlterationHooks() {
	//SafeWriteJump(0x931ae4, (uintptr_t)AlterationToStringHook);
	//SafeWrite8(0x931ae4 + 5, 0x90); // NOP

	//SafeWrite32(0x84460f + 1, (uintptr_t)&RULED_EXTENDED);

	SafeWriteCall(0xb864c9, (uintptr_t)RegisterAlterationSystemTypes);

	SafeWriteCall(0x842160, (uintptr_t)SkritCalculateMaxLifeHook);
	SafeWriteCall(0x84219d, (uintptr_t)SkritCalculateMaxManaHook);
}

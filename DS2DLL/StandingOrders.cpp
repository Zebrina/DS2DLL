#ifdef _DEBUG

#include "Enums.h"
#include "EventHandler.h"
#include "SystemTypeExtension.h"

template <>
void SystemTypeExtender<eStandingOrders>::SystemTypeRegistrationCallback() {
	DEBUG_ONLY({
		AddCustomSystemType("SO_TEST_1");
		AddCustomSystemType("SO_TEST_2");
		AddCustomSystemType("SO_TEST_3");
		AddCustomSystemType("SO_TEST_4");
		AddCustomSystemType("SO_TEST_5");
	});
}

$OnDllInjection() {
	SystemTypeExtender<eStandingOrders>* instance = SystemTypeExtender<eStandingOrders>::GetSingleton();
	instance->WriteRegistrationHook(0x00b85c2b);
	instance->WriteToStringHook((uintptr_t)(const char*(*)(eStandingOrders))ToString);
}

#endif

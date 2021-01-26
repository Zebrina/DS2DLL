#ifdef _DEBUG

#include "DS2DLL.h"
#include "Enums.h"
#include "EventHandler.h"
#include "SystemTypeExtension.h"

FEX const char* ToString(eEquipSlot equipSlot) {
	return SystemTypeExtender<eEquipSlot>::GetSingleton()->ToString(equipSlot);
};

template <>
void SystemTypeExtender<eEquipSlot>::SystemTypeRegistrationCallback() {
	DEBUG_ONLY({
		AddCustomSystemType("es_test_1");
		AddCustomSystemType("es_test_2");
		AddCustomSystemType("es_test_3");
		AddCustomSystemType("es_test_4");
		AddCustomSystemType("es_test_5");
	});
}

$OnDllInjection() {
	SystemTypeExtender<eEquipSlot>* instance = SystemTypeExtender<eEquipSlot>::GetSingleton();
	instance->WriteRegistrationHook(0x00b8516a);
}

#endif

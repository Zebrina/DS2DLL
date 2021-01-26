#pragma once

#include <vector>

template <typename SystemTypeEnum>
class SystemTypeExtender {
public:
	MakeOnDemandSingleton(SystemTypeExtender);

	size_t Count() const {
		return systemTypes.size();
	}

	const char* __cdecl ToString(SystemTypeEnum value) const {
		if ((size_t)value >= Count()) {
			//value = instance->defaultValue;
			return "";
		}
		return systemTypes[value];
	}

	void Initialize(const char** baseNames, size_t baseCount, SystemTypeEnum defaultValue) {
		if (systemTypes.empty()) {
			systemTypes.reserve(baseCount);
			for (size_t i = 0; i < baseCount; ++i) {
				systemTypes.push_back(baseNames[i]);
			}
			this->baseCount = baseCount;
			this->defaultValue = defaultValue;
		}
	}
	
	SystemTypeEnum AddCustomSystemType(const char* name) {
		SystemTypeEnum value = (SystemTypeEnum)-1;
		if (!systemTypes.empty()) {
			value = (SystemTypeEnum)systemTypes.size();
			size_t len = strlen(name);
			char* nameCopy = new char[len + 1];
			strcpy_s(nameCopy, len + 1, name);
			systemTypes.push_back(nameCopy);
		}
		return value;
	}

	static void WriteRegistrationHook(uintptr_t address) {
		SafeWriteCall(address, (uintptr_t)SystemTypeEnumRegistrationHook);
	}
	static void WriteToStringHook(uintptr_t address) {
		SafeWriteJump(address, (uintptr_t)ToStringHook);
	}

private:
	std::vector<const char*> systemTypes;
	size_t baseCount;
	SystemTypeEnum defaultValue;

	const char** CStrings() const {
		return (const char**)systemTypes.data();
	}

	void SystemTypeRegistrationCallback() {
		// Specialize this method for post-registration code.
	}
	static int __fastcall SystemTypeEnumRegistrationHook(void* this_, void*, const char** baseNames, int arg2, size_t baseCount, SystemTypeEnum defaultValue) {
		typedef int(__thiscall *Base)(void*, const char**, int, size_t, SystemTypeEnum);

		SystemTypeExtender* instance = GetSingleton();
		instance->Initialize(baseNames, baseCount, defaultValue);
		instance->SystemTypeRegistrationCallback();

		return ((Base)0x006239a3)(this_, instance->CStrings(), arg2, instance->Count(), defaultValue);
	}
	static const char* __cdecl ToStringHook(SystemTypeEnum value) {
		return GetSingleton()->ToString(value);
	}
};

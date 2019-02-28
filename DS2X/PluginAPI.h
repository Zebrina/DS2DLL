#pragma once

struct PluginInfo {
	const char* pluginName = "";
	unsigned int version = 0u;
	const char* versionString = "";
	const char* pluginRequirements = "";
};

class PluginAPI {
public:
	enum SystemTypeEnum {
		Alteration,
	};

	unsigned int RegisterSystemTypeEnum(SystemTypeEnum type, const char* name);
};

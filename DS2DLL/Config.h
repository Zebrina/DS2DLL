#pragma once

#include "GPString.h"

class Config {
public:
	$Singleton(Config, 0x004013e9);

	$ConstMethod(0x00401ff1, GetBool, bool, const char* key);
	$ConstMethod(0x00401fe5, GetBool, bool, const char* key, bool defaultValue);
	$ConstMethod(0x00402011, GetInt, int, const char* key);
	$ConstMethod(0x00402005, GetInt, int, const char* key, int defaultValue);
	$ConstMethod(0x0040203e, GetFloat, float, const char* key);
	$ConstMethod(0x00402025, GetFloat, float, const char* key, float defaultValue);
	$ConstMethod(0x004023da, GetString, GPBString, const char* key);
	$ConstMethod(0x004023a7, GetString, GPBString, const char* key, const char* defaultValue);

	// 0x00
	void* ptr00;
    // 0x04
    $Padding(0x04, 0x90);
};

STATIC_ASSERT(sizeof(Config) == 0x90);

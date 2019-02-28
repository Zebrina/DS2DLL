#pragma once

#include "GPString.h"

#include <string>

template <typename T>
class gpbstring {
public:
	//gpbstring() = delete;
	//gpbstring(const gpbstring&) = delete;
	//~gpbstring() = delete;

	//gpbstring& operator=(const gpbstring&) = delete;

	operator const char*() const {
		return str;
	}

private:
	const T* str;
};

STATIC_ASSERT_SIZEOF(gpbstring<char>, 0x4);

#pragma once

#include <cstdio>
#include <cstdlib>

template <typename T, typename X>
T Reinterpret(X x) {
    union {
        X x;
        T t;
    } u;
    u.x = x;
    return u.t;
}

int PrintLine(const char* format, ...);
int PrintSystemError(const char* format, ...);
void AlertError(LPCWSTR formatw, ...);

void SystemPause();

template <typename T>
inline T Limit(T value, T minValue, T maxValue) {
	if (value < minValue) {
		return minValue;
	} else if (value > maxValue) {
		return maxValue;
	}
	return value;
}

bool StringNullOrEmpty(const char* str);

#define GetArraySize(arrayType) (sizeof(arrayType) / sizeof(arrayType[0]))

#define CLEARED_FLAGS 0u
#define EnumFlag(bit) ((unsigned int)(1 << (bit - 1)))
#define SetFlags(value, flag) (((unsigned int&)value)|=(flag))
#define ClearFlags(value, flag) (((unsigned int&)value)&=(~(flag)))
#define TestFlags(value, flag) ((unsigned int)((value)&(flag))!=0)

#define PrettyFunctionMessage(message) __FUNCSIG__ ": " message

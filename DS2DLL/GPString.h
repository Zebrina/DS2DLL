#pragma once

#include "Memory.h"

#include <cstring>

template <typename T>
class gpbstring {
public:
    gpbstring() {
        str = (T*)Memory::Malloc(sizeof(wchar_t));
        str[0] = (T)0x0;
    }
    gpbstring(const gpbstring& other) {
        *this = other;
    }
    gpbstring(const T* initialStr) {
        size_t memLength = (StrLength(initialStr) + 1) * sizeof(wchar_t);
        str = (T*)Memory::Malloc(memLength);
        memcpy(str, initialStr, memLength);
    }
	~gpbstring() = default;

    void* operator new(size_t) = delete;
    void* operator new[](size_t) = delete;
    void operator delete(void*) = delete;
    void operator delete[](void*) = delete;

    gpbstring& operator=(const char*) {
        // Throw exception...
    }
    gpbstring& operator=(const wchar_t*) {
        // Throw exception...
    }

	operator const T*() const {
		return str;
	}
    
    size_t Length() {
        return StrLength(str);
    }

    gpbstring<char>& ConvertToBasic() {
        // Throw exception...
    }
    // Use with caution!
    gpbstring<wchar_t>& ConvertToWide() {
        // Throw exception...
    }

public:
	T* str;

    $Method(0x0040188e, StringAssignInternal, void, const void* start, const void* end);

    $StaticMethod(0x0099745f, StringToolAssign, gpbstring<char>&, gpbstring<char>& str, const char* value);
};

typedef gpbstring<char> GPBString;
typedef gpbstring<wchar_t> GPWString;

#define GPBStringEMPTY (*reinterpret_cast<gpbstring<char>*>(0x00ce6000))

STATIC_ASSERT(sizeof(GPBString) == 4);
STATIC_ASSERT(sizeof(GPWString) == 4);

/*
template <>
GPBString& GPBString::operator=(const char* value) {
    StringAssignInternal(value, value + StrMemSize(value));
    return *this;
}
template <>
GPBString& GPBString::operator=(const wchar_t* value) {
    char buffer[DEFAULT_STRING_BUFFER_SIZE];
    size_t memSize = StrWideToBasic(value, buffer, DEFAULT_STRING_BUFFER_SIZE);
    StringAssignInternal(buffer, buffer + memSize);
    return *this;
}
template <>
GPWString& GPWString::operator=(const char* value) {
    wchar_t buffer[DEFAULT_STRING_BUFFER_SIZE];
    size_t memSize = StrBasicToWide(value, buffer, DEFAULT_STRING_BUFFER_SIZE);
    StringAssignInternal(buffer, buffer + memSize);
    return *this;
}
template <>
GPWString& GPWString::operator=(const wchar_t* value) {
    StringAssignInternal(value, value + StrMemSize(value));
    return *this;
}
*/

/*
template <>
GPBString& GPBString::ConvertToBasic() {
    return *this;
}
template <>
GPBString& GPWString::ConvertToBasic() {
    char buffer[DEFAULT_STRING_BUFFER_SIZE];
    size_t memSize = StrWideToBasic(str, buffer, DEFAULT_STRING_BUFFER_SIZE);
    StringAssignInternal(buffer, buffer + memSize);
    return reinterpret_cast<gpbstring<char>&>(*this);
}
template <>
GPWString& GPBString::ConvertToWide() {
    wchar_t buffer[DEFAULT_STRING_BUFFER_SIZE];
    size_t memSize = StrBasicToWide(str, buffer, DEFAULT_STRING_BUFFER_SIZE);
    StringAssignInternal(buffer, buffer + memSize);
    return reinterpret_cast<gpbstring<wchar_t>&>(*this);
}
template <>
GPWString& GPWString::ConvertToWide() {
    return *this;
}
*/

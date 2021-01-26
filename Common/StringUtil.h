#pragma once

#include <cctype>

constexpr size_t DEFAULT_STRING_BUFFER_SIZE = 255u;

template <typename T>
struct Self {
    __forceinline T operator()(T t) const {
        return t;
    }
};

template <typename T>
static size_t StrLength(const T* str) {
    size_t length = 0;
    T* strp = const_cast<T*>(str);
    while (*strp != (T)0) {
        ++length;
        ++strp;
    }
    return length;
}
template <typename T>
static size_t StrMemSize(const T* str) {
    return (StrLength(str) + 1) * sizeof(T);
}

int StrCompareNoCase(const char* str1, const char* str2, size_t max = 0);
template <typename Mod = Self<char>>
int StrCompare(const char* str1, const char* str2, Mod mod) {
    if (str1 == nullptr && str2 == nullptr) {
        return 0;
    } else if (str1 == nullptr) {
        return '\0' - mod(str2[0]);
    } else if (str2 == nullptr) {
        return mod(str1[0]) - '\0';
    }
    size_t index = 0;
    int cmp;
    while ((cmp = (mod(str1[index]) - mod(str2[index]))) == 0 && str1[index] != '\0' && str2[index] != '\0') {
        index += 1;
    }
    return cmp;
}

int StrFind(const char* src, char c);
int StrFind(const char* src, size_t length, char c);
template <class T>
int StrFind(const char* src, T predicate) {
	for (size_t i = 0; src[i] != '\0'; ++i) {
		if (predicate(src[i])) {
			return i;
		}
	}
	return -1;
}
template <class T>
int StrFind(const char* src, size_t length, T predicate) {
	for (size_t i = 0; i < length && src[i] != '\0'; ++i) {
		if (predicate(src[i])) {
			return i;
		}
	}
	return -1;
}
int StrFind(const char* src, const char* sub);
int StrFindNoCase(const char* src, const char* sub);

size_t StrCount(const char* src, char c);
template <class T>
size_t StrCount(const char* src, T predicate) {
	size_t count = 0;
	for (int i = 0; src[i] != '\0'; ++i) {
		if (predicate(src[i])) {
			count += 1;
		}
	}
	return count;
}

size_t StrCopy(char* destBuffer, size_t destSize, const char* src);
template <class T>
size_t StrCopyMod(char* destBuffer, size_t destSize, const char* src, T mod) {
    --destSize;
    size_t index;
    for (index = 0; index < destSize && src[index] != '\0'; ++index) {
        destBuffer[index] = mod(src[index]);
    }
    destBuffer[index] = '\0';
    return index;
}

size_t StrConcat(char* destBuffer, size_t destSize, const char* srcArray[], size_t srcCount, const char* separator = "");

// Returns the size in bytes of the transformed string including null terminator.
size_t StrBasicToWide(const char* src, wchar_t* dest, size_t destSize);
// Returns the size in bytes of the transformed string including null terminator.
// Only works on UTF-16 strings that exclusively contain ascii characters.
size_t StrWideToBasic(const wchar_t* src, char* dest, size_t destSize);

struct ToLower {
    char operator()(char c) const {
        return tolower(c);
    }
};
struct ToUpper {
    char operator()(char c) const {
        return toupper(c);
    }
};

template <typename T, typename Mod = Self<T>>
T StrHash(const char* src, Mod mod) {
    T hash = 0;
    for (uint i = 0; src[i] != '\0'; ++i) {
        hash += mod(src[i]);
        hash += (hash << 10);
        hash ^= (hash >> 6);
    }
    hash += (hash << 3);
    hash ^= (hash >> 11);
    hash += (hash << 15);
    return hash;
}

template <typename T, typename Mod = Self<T>>
struct StrHasher {
    Mod mod;
    T operator()(const char* src) const {
        return StrHash<T, Mod>(src, mod);
    }
};

template <typename Mod = Self<char>>
struct StrEquals {
    Mod mod;
    bool operator()(const char* str1, const char* str2) const {
        return StrCompare<Mod>(str1, str2, mod) == 0;
    }
};

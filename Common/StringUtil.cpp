#include "StringUtil.h"

#include <algorithm>
#include <climits>

int StrCompareNoCase(const char* str1, const char* str2, size_t max) {
	if (str1 == nullptr && str2 == nullptr) {
		return 0;
	} else if (str1 == nullptr) {
		return '\0' - tolower(str2[0]);
	} else if (str2 == nullptr) {
		return tolower(str1[0]) - '\0';
	}
    if (max == 0) {
        max = UINT_MAX;
    }
	size_t index = 0;
	int cmp;
	while (max-- != 0 && (cmp = (tolower(str1[index]) - tolower(str2[index]))) == 0 && str1[index] != '\0' && str2[index] != '\0') {
		index += 1;
	}
	return cmp;
}

int StrFind(const char* src, char c) {
    int index;
	for (index = 0; src[index] != '\0'; ++index) {
		if ((src[index] == c)) {
            return index;
		}
	}
	return -1;
}
int StrFind(const char* src, size_t length, char c) {
	for (int i = 0; (size_t)i < length && src[i] != '\0'; ++i) {
		if (src[i] == c) {
            return i;
		}
	}
	return -1;
}
int StrFind(const char* src, const char* sub) {
    int index;
    int end = strlen(src) - strlen(sub);
    for (index = 0; index < end; ++index) {
        bool match = true;
        for (int sIndex = 0; sub[sIndex] != '\0'; ++sIndex) {
            if (src[index + sIndex] != sub[sIndex]) {
                match = false;
                break;
            }
        }
        if (match) {
            return index;
        }
    }
    return -1;
}
int StrFindNoCase(const char* src, const char* sub) {
    int index;
    int end = strlen(src) - strlen(sub);
    for (index = 0; index < end; ++index) {
        bool match = true;
        for (int sIndex = 0; sub[sIndex] != '\0'; ++sIndex) {
            if (tolower(src[index + sIndex]) != tolower(sub[sIndex])) {
                match = false;
                break;
            }
        }
        if (match) {
            return index;
        }
    }
    return -1;
}

size_t StrCount(const char* src, char c) {
	int count = 0;
	for (int i = 0; src[i] != '\0'; ++i) {
		if (src[i] == c) {
			count += 1;
		}
	}
	return count;
}

size_t StrCopy(char* destBuffer, size_t destSize, const char* src) {
	--destSize;
	size_t index;
	for (index = 0; index < destSize && src[index] != '\0'; ++index) {
		destBuffer[index] = src[index];
	}
	destBuffer[index] = '\0';
	return index;
}

size_t StrConcat(char* destBuffer, size_t destSize, const char* srcArray[], size_t srcCount, const char* separator) {
	size_t n = 0;
	if (destSize > 0) {
		destBuffer[0] = '\0';
		for (size_t i = 0; i < srcCount; ++i) {
			if (i > 0) {
				n += StrCopy(destBuffer + n, destSize - n, separator);
			}
			n += StrCopy(destBuffer + n, destSize - n, srcArray[i]);
		}
	}
	return n;
}

size_t StrBasicToWide(const char* src, wchar_t* dest, size_t destSize) {
    ASSERT(destSize > 0);

    size_t index = 0;
    while (index < (destSize - 1) && src[index] != '\0') {
        dest[index] = src[index];
        ++index;
    }
    dest[index] = 0;
    return (index + 1) * sizeof(wchar_t);
}
size_t StrWideToBasic(const wchar_t* src, char* dest, size_t destSize) {
    ASSERT(destSize > 0);

    size_t index = 0;
    while (index < (destSize - 1) && src[index] != (wchar_t)0) {
        dest[index] = (char)src[index];
        ++index;
    }
    dest[index] = '\0';
    return (index + 1) * sizeof(char);
}

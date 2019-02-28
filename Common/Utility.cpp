#include "Utility.h"

void SystemPause() {
	system("pause");
}

size_t StrCopy(char* destBuffer, size_t destSize, const char* src) {
	--destSize;
	size_t i = 0;
	for (; i < destSize && src[i] != '\0'; ++i) {
		destBuffer[i] = src[i];
	}
	destBuffer[i] = '\0';
	return i;
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

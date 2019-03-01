#include "Utility.h"

int PrintLine(const char* format, va_list args, bool includeLastError) {
	int n = vprintf(format, args);
	if (n > 0) {
		if (includeLastError) {
			DWORD error = GetLastError();
			if (error == 0) {
				constexpr const char EXPECTED_ERROR[] = " Expected an error but there was none.";
				fputs(EXPECTED_ERROR, stdout);
				n += sizeof(EXPECTED_ERROR);
			} else {
				n += printf(" Error code: %i.", error);
			}
		}

		putchar('\n');
		n += 1;
	}
	return n;
}

int PrintLine(const char* format, ...) {
	va_list args;
	va_start(args, format);
	int n = PrintLine(format, args, false);
	va_end(args);
	return n;
}

int PrintSystemError(const char* format, ...) {
	va_list args;
	va_start(args, format);
	int n = PrintLine(format, args, true);
	va_end(args);
	return n;
}

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

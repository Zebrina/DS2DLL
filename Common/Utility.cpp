#include "Utility.h"

constexpr const size_t MESSAGEBOX_BUFFER_SIZE = 100;

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

void AlertError(LPCWSTR formatw, ...) {
	wchar_t buffer[MESSAGEBOX_BUFFER_SIZE];
	va_list args;
	va_start(args, formatw);
	vswprintf_s(buffer, MESSAGEBOX_BUFFER_SIZE, formatw, args);
	va_end(args);
	MessageBoxW(NULL, buffer, L"Error! \u00af\\_(\u30c4)_/\u00af", MB_OK);
}
void AlertWarning(LPCWSTR formatw, ...) {
	wchar_t buffer[MESSAGEBOX_BUFFER_SIZE];
	va_list args;
	va_start(args, formatw);
	vswprintf_s(buffer, MESSAGEBOX_BUFFER_SIZE, formatw, args);
	va_end(args);
	MessageBoxW(NULL, buffer, L"Warning! \u0669(\u204e\u275b\u1d17\u275b\u204e)\u06f6", MB_OK);
}

void SystemPause() {
    system("pause");
}

bool StringNullOrEmpty(const char* str) {
	return str == nullptr || *str == '\0';
}

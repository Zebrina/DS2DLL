#pragma once

/*
#include <cstdio>

struct LoaderInfo {
	HANDLE hProcess;
	FILE* out;
	FILE* log;

	LoaderInfo() {
		ZeroMemory(this, sizeof(*this));
	}

	template <typename... VA>
	int Print(const char* format, VA... va) {
		int n = 0;
		if (out) {
			n = fprintf(out, format, va...);
		}
		return n;
	}
	template <typename... VA>
	int PrintSystemError(const char* format, VA... va) {
		DWORD error = GetLastError();
		int n;
		if (error == 0) {
			n = printf("Expected an error but there was none.\n");
		} else {
			char message[MAX_PATH];
			int n = snprintf(message, sizeof(message), format, va...);
			if (n > 0) {
				strcpy_s(message + n, sizeof(message) - n, " Error code: %i.\n");
				n = Print(message, GetLastError());
			}
		}
		return n;
	}
	template <typename... VA>
	int Log(const char* format, VA... va) {
		int n = 0;
		if (log) {
			n = fprintf(log, format, va...);
		}
		return n;
	}
};
*/

extern HMODULE DS2XModuleHandle;

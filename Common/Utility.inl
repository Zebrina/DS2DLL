template <typename... VA>
int PrintLine(const char* format, VA... va) {
	int n = printf(format, va...);
	if (n > 0) {
		printf("\n");
		n += 1;
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
			n = printf(message, GetLastError());
		}
	}
	return n;
}

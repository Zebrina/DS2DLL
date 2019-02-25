#pragma once

#include <cstdio>

class Logger {
public:
	constexpr Logger();
	Logger(const char* fileName);

	bool Open(const char* fileName);
	bool IsOpen() const;
	bool Close();

private:
	FILE* fd;
};

#include "Logging.h"

constexpr const char* FILEMODE = "w+";

constexpr Logger::Logger() :
	fd(nullptr) {
}
Logger::Logger(const char* fileName) {
	fopen_s(&fd, fileName, FILEMODE);
}

bool Logger::Open(const char* fileName) {
	if (fd) {
		fclose(fd);
	}
	fopen_s(&fd, fileName, FILEMODE);
}
bool Logger::IsOpen() const {
	return fd != nullptr;
}
bool Logger::Close() {
	if (fd) {
		fclose(fd);
	}
}

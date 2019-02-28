#include "Output.h"

constexpr OutputBase::OutputBase() :
	fd(nullptr),
	tabSize(DEFAULT_TAB_SIZE),
	indentLevel(0) {
}
OutputBase::OutputBase(FILE* fd, short tabSize, short indentLevel) :
	fd(fd),
	tabSize(tabSize),
	indentLevel(indentLevel) {
}

bool OutputBase::IsOpen() const {
	return fd != nullptr;
}

Print::Print(short tabSize) :
	Print(stdout, tabSize) {
}
Print::Print(FILE* stream, short tabSize) :
	OutputBase(stream, tabSize) {
}
Print::Print(const Print& other) {
	memcpy_s(this, sizeof(Print), &other, sizeof(OutputBase));
}

void Print::Close() {
	fd = nullptr;
}

#pragma warning(push)
#pragma warning(disable: 4996)
Log::Log(const char* fileName, FileMode mode, short tabSize) :
	OutputBase(fopen(fileName, InterpretFileMode(mode)), tabSize) {
}
#pragma warning(pop)
Log::Log(Log&& other) {
	memcpy_s(this, sizeof(Print), &other, sizeof(OutputBase));
	other.fd = nullptr;
}
Log::~Log() {
	CloseFile(fd);
}

errno_t Log::Open(const char* fileName, FileMode mode) {
	CloseFile(fd);
	return fopen_s(&fd, fileName, InterpretFileMode(mode));
}

void Log::Close() {
	CloseFile(fd);
	fd = nullptr;
}

__forceinline const char* Log::InterpretFileMode(FileMode& mode) {
	return (const char*)&mode;
}
inline void Log::CloseFile(FILE*& fdOut) {
	if (fd) {
		fclose(fd);
	}
}

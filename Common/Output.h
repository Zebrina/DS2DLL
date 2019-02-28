#pragma once

#include <cstdio>
#include <string>
#include <vector>

static constexpr short DEFAULT_TAB_SIZE = 4;

class OutputBase {
public:
	bool IsOpen() const;

	int Message(const char* format, ...);
	int Warning(const char* format, ...);
	int Error(const char* format, ...);

	void BeginSection(const std::string& section);
	void EndSection();

protected:
	FILE* fd;
	short tabSize;
	short indentLevel;
	std::vector<std::string> sections;

	constexpr OutputBase();
	OutputBase(FILE* fd, short tabSize, short indentLevel = 0);
	OutputBase(const OutputBase&) = default;
	OutputBase(OutputBase&&) = default;

	void IncreaseIndent();
	void DecreaseIndent();
	int Tab();

private:
	int MessageWithTag(const char* tag, const char* format, va_list args);
};

class Print : public OutputBase {
public:
	Print(short tabSize = DEFAULT_TAB_SIZE);
	Print(FILE* stream, short tabSize = DEFAULT_TAB_SIZE);
	Print(const Print&) = default;
	Print(Print&&) = default;

	void Close();
};

class Log : public OutputBase {
public:
	enum FileMode : uint16_t {
		OVERWRITE = 'w\0',
		APPEND = 'a\0',
	};

	Log(const char* fileName, FileMode mode = OVERWRITE, short tabSize = DEFAULT_TAB_SIZE);
	Log(const Log&) = delete;
	Log(Log&&);
	~Log();

	errno_t Open(const char* fileName, FileMode mode);
	void Close();

private:
	__forceinline const char* InterpretFileMode(FileMode& mode);
	inline void CloseFile(FILE*& fdOut);
};

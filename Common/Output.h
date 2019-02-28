#pragma once

#include <cstdio>

static constexpr short DEFAULT_TAB_SIZE = 4;

class OutputBase {
public:
	bool IsOpen() const;

	template <typename... VA, const char* TAG = nullptr>
	inline int Message(const char* format, VA... va) {
		return MessageWithTag(nullptr, format, va);
	}
	template <typename... VA>
	inline int Warning(const char* format, VA... va) {
		return MessageWithTag("[WARNING]", format, va);
	}
	template <typename... VA>
	inline int Error(const char* format, VA... va) {
		return MessageWithTag("[ERROR]", format, va);
	}

protected:
	FILE* fd;
	short tabSize;
	short indentLevel;

	constexpr OutputBase();
	OutputBase(FILE* fd, short tabSize, short indentLevel = 0);

	template <typename... VA>
	int MessageWithTag(const char* tag, const char* format, VA... va) {
		int n = 0;
		if (fd) {
			if (tag) {
				n = fprintf(fd, tag) + fprintf(fd, " ");
			}
			n += fprintf(fd, format, va...);
			if (n > 0) {
				fprintf(fd, "\n");
				n += 1;
			}
		}
		return n;
	}
};

class Print : public OutputBase {
public:
	Print(short tabSize = DEFAULT_TAB_SIZE);
	Print(FILE* stream, short tabSize = DEFAULT_TAB_SIZE);
	Print(const Print&);

	void Close();
};

class Log : public OutputBase {
public:
	enum FileMode : uint16_t {
		WRITE = 'w\0',
		APPEND = 'a\0',
	};

	Log(const char* fileName, FileMode mode = WRITE, short tabSize = DEFAULT_TAB_SIZE);
	Log(const Log&) = delete;
	Log(Log&&);
	~Log();

	errno_t Open(const char* fileName, FileMode mode);
	void Close();

private:
	__forceinline const char* InterpretFileMode(FileMode& mode);
	inline void CloseFile(FILE*& fdOut);
};

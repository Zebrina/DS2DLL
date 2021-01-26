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

int OutputBase::Message(const char* format, ...) {
	va_list args;
	va_start(args, format);
	int n = MessageWithTag(nullptr, format, args);
	va_end(args);
	return n;
}
int OutputBase::Warning(const char* format, ...) {
	va_list args;
	va_start(args, format);
	int n = MessageWithTag("[WARNING]", format, args);
	va_end(args);
	return n;
}
int OutputBase::Error(const char* format, ...) {
	va_list args;
	va_start(args, format);
	int n = MessageWithTag("[ERROR]", format, args);
	va_end(args);
	return n;
}

void OutputBase::BeginSection(const std::string& section) {
	Tab();
	fputs("[ New section: ", fd);
	for (int i = 0, n = sections.size(); i < n; ++i) {
		fputs(sections[i].c_str(), fd);
		fputs(" -> ", fd);
	}
	fputs(section.c_str(), fd);
	fputs(" ]", fd);
	sections.push_back(section);
	IncreaseIndent();
}
void OutputBase::EndSection() {
	DecreaseIndent();
	Tab();
	fputs("[ End of section: ", fd);
	fputs(sections.back().c_str(), fd);
	for (int i = sections.size() - 2; i >= 0; --i) {
		fputs(" <- ", fd);
		fputs(sections[i].c_str(), fd);
	}
	fputs(" ]", fd);
	sections.pop_back();
}

void OutputBase::IncreaseIndent() {
	++indentLevel;
}
void OutputBase::DecreaseIndent() {
	--indentLevel;
}
int OutputBase::Tab() {
	int tabLength = tabSize * indentLevel;
	for (int i = 0; i < tabLength; ++i) {
		fputc(' ', fd);
	}
	return tabLength;
}

int OutputBase::MessageWithTag(const char* tag, const char* format, va_list args) {
	int n = 0;
	if (fd) {
		n = Tab();
		if (tag) {
			n += fprintf(fd, tag) + fprintf(fd, " ");
		}
		n += vfprintf(fd, format, args);
		if (n > 0) {
			fputc('\n', fd);
			n += 1;
		}
	}
	return n;
}

Print::Print(short tabSize) :
	Print(stdout, tabSize) {
}
Print::Print(FILE* stream, short tabSize) :
	OutputBase(stream, tabSize) {
}

void Print::Close() {
	fd = nullptr;
}

#pragma warning(push)
#pragma warning(disable: 4996)
Log::Log(const char* fileName, FileMode mode, short tabSize) :
	OutputBase(fopen(fileName, FileModeToString(mode)), tabSize) {
}
#pragma warning(pop)
Log::Log(Log&& other) :
	OutputBase(other) {
	other.fd = nullptr;
}
Log::~Log() {
	CloseFile(fd);
}

errno_t Log::Open(const char* fileName, FileMode mode) {
	CloseFile(fd);
	return fopen_s(&fd, fileName, FileModeToString(mode));
}

void Log::Close() {
	CloseFile(fd);
	fd = nullptr;
}

inline void Log::CloseFile(FILE*& fdOut) {
	if (fd) {
		fclose(fd);
	}
}

const char* Log::FileModeToString(FileMode mode) {
	switch (mode) {
	case OVERWRITE:
		return "w";
	case APPEND:
		return "a";
	default:
		return "";
	}
}

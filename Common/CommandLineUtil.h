#pragma once

#include <cctype>
#include <map>
#include <vector>

typedef std::vector<string> CommandLineArgValues;
typedef std::map<string, string> CommandLineKeyValues;

class CommandLineArguments {
public:

	bool GetBool(const char* key, bool defaultValue = false);
	int GetInt(const char* key, int defaultValue = 0);
	float GetFloat(const char* key, float defaultValue = 0.0f);
	string GetString(const char* key, const char* defaultValue = "");
	bool ExtractBool(const char* key, bool defaultValue = false);
	int ExtractInt(const char* key, int defaultValue = 0);
	float ExtractFloat(const char* key, float defaultValue = 0.0f);
	string ExtractString(const char* key, const char* defaultValue = "");

private:
	std::map<string, string> map;
};

template <class T = int(__cdecl*)(int)>
void ParseCommandLineArgs(const char* src, CommandLineArgValues argsOut, T delim = isspace) {
	bool quote = false;
	int tokenStart = -1;
	for (int i = 0; src[i] != '\0'; ++i) {
		char c = src[i];
		if (c == '"') {
			quote = !quote;
		} else {
			bool isDelim = delim(c);
			if (isDelim) {
				if (!quote && tokenStart >= 0) {
					argsOut.push_back(std::string(src + tokenStart, i - tokenStart));
					tokenStart = -1;
				}
			} else if (tokenStart < 0) {
				tokenStart = i;
			}
		}
	}
}

void CommandLineArgsToKeyValues(CommandLineKeyValues& keyValuesOut, const CommandLineArgValues& args);
size_t CommandLineKeyValuesToString(char* destBuffer, size_t destSize, const CommandLineArgValues& args);
size_t CommandLineKeyValuesToString(char* destBuffer, size_t destSize, const CommandLineKeyValues& keyValues);

template <size_t SIZE>
void CommandLineExtractStringValue(CommandLineKeyValues& cmdKeyValues, const char* keyName, char (&valueOut)[SIZE], const char* defaultValue) {
	auto found = cmdKeyValues.find(keyName);
	if (found != cmdKeyValues.end()) {
		strcpy_s(valueOut, found->second.c_str());
		cmdKeyValues.erase(found);
	} else {
		strcpy_s(valueOut, defaultValue);
	}
}
void CommandLineExtractIntValue(CommandLineKeyValues& cmdKeyValues, const char* keyName, int& valueOut, int defaultValue);
void CommandLineExtractFloatValue(CommandLineKeyValues& cmdKeyValues, const char* keyName, float& valueOut, float defaultValue);
void CommandLineExtractBoolValue(CommandLineKeyValues& cmdKeyValues, const char* keyName, bool& valueOut, bool defaultValue);

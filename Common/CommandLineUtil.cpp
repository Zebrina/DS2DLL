#include "CommandLineUtil.h"

void CommandLineArgsToKeyValues(CommandLineKeyValues& keyValuesOut, const CommandLineArgValues& args) {
	for (auto it = args.cbegin(); it != args.cend(); ++it) {
		size_t split = StrFind(it->c_str(), it->size(), '=');
		if (split < it->size()) {
			keyValuesOut.insert_or_assign(std::string(it->c_str(), split), std::string(it->c_str() + split + 1, it->size() - split - 1));
		} else {
			keyValuesOut.insert_or_assign(*it, "");
		}
	}
}
size_t CommandLineKeyValuesToString(char* destBuffer, size_t destSize, const CommandLineArgValues& args) {
	size_t n = 0;
	if (destSize > 0) {
		destBuffer[0] = '\0';
		for (auto it = args.cbegin(); n < destSize && it != args.cend(); ++it) {
			if (n > 0) {
				destBuffer[n++] = ' ';
			}
			n += StrCopy(destBuffer + n, destSize - n, it->c_str());
		}
	}
	return n;
}
size_t CommandLineKeyValuesToString(char* destBuffer, size_t destSize, const CommandLineKeyValues& keyValues) {
	size_t n = 0;
	if (destSize > 0) {
		destBuffer[0] = '\0';
		for (auto it = keyValues.cbegin(); n < destSize && it != keyValues.cend(); ++it) {
			if (n > 0) {
				destBuffer[n++] = ' ';
			}
			n += StrCopy(destBuffer + n, destSize - n, it->first.c_str());
			if (n >= destSize) {
				break;
			}
			destBuffer[n++] = '=';
			if (n >= destSize) {
				break;
			}
			n += StrCopy(destBuffer + n, destSize - n, it->second.c_str());
		}
	}
	return n;
}

void CommandLineExtractIntValue(CommandLineKeyValues& cmdKeyValues, const char* keyName, int& valueOut, int defaultValue) {
	auto found = cmdKeyValues.find(keyName);
	if (found != cmdKeyValues.end()) {
		valueOut = stoi(found->second);
		cmdKeyValues.erase(found);
	} else {
		valueOut = defaultValue;
	}
}
void CommandLineExtractFloatValue(CommandLineKeyValues& cmdKeyValues, const char* keyName, float& valueOut, float defaultValue) {
	auto found = cmdKeyValues.find(keyName);
	float value = defaultValue;
	if (found != cmdKeyValues.end()) {
		valueOut = stof(found->second);
		cmdKeyValues.erase(found);
	} else {
		valueOut = defaultValue;
	}
}
void CommandLineExtractBoolValue(CommandLineKeyValues& cmdKeyValues, const char* keyName, bool& valueOut, bool defaultValue) {
	auto found = cmdKeyValues.find(keyName);
	if (found != cmdKeyValues.end()) {
		valueOut = StrCompareNoCase(found->second.c_str(), "true") == 0 || strcmp(found->second.c_str(), "1") == 0;
		cmdKeyValues.erase(found);
	} else {
		valueOut = defaultValue;
	}
}

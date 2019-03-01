#pragma once

#include <cstdio>
#include <cstdlib>

int PrintLine(const char* format, ...);
int PrintSystemError(const char* format, ...);

void SystemPause();

size_t StrCopy(char* destBuffer, size_t destSize, const char* src);
size_t StrConcat(char* destBuffer, size_t destSize, const char* srcArray[], size_t srcCount, const char* separator = "");

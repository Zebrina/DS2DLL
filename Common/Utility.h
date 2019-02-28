#pragma once

#include <cstdio>
#include <cstdlib>

template <typename... VA>
int PrintLine(const char* format, VA... va);

template <typename... VA>
int PrintSystemError(const char* format, VA... va);

void SystemPause();

size_t StrCopy(char* destBuffer, size_t destSize, const char* src);
size_t StrConcat(char* destBuffer, size_t destSize, const char* srcArray[], size_t srcCount, const char* separator = "");

#include "Utility.inl"

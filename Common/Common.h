#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <climits>

#undef min
#undef max
#undef FindWindow
#undef GetMessage
#undef MessageBox

#include "Types.h"
#include "Utility.h"
#include "StringUtil.h"
#include "DebugMacros.h"
#include "ClassMacros.h"

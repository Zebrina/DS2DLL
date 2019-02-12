#pragma once

#ifdef _DEBUG
#define DEBUG_ONLY(proc) do { proc; } while (false)
#define DEBUG_ONLY_IF(condition, proc) do { if (condition) { proc; } } while (false)
#define RELEASE_ONLY(proc)
#define RELEASE_ONLY_IF(condition, proc)
#else
#define DEBUG_ONLY(proc)
#define DEBUG_ONLY_IF(condition, proc)
#define RELEASE_ONLY(proc) do { proc; } while (false)
#define RELEASE_ONLY_IF(condition, proc) do { if (condition) { proc; } } while (false)
#endif // __DEBUG
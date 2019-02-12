#include "SafeWrite.h"

#include <Windows.h>

void SafeWriteBuf(uintptr_t addr, void* data, size_t len)
{
	DWORD oldProtect;

	VirtualProtect((void*)addr, len, PAGE_EXECUTE_READWRITE, &oldProtect);
	memcpy((void*)addr, data, len);
	VirtualProtect((void*)addr, len, oldProtect, &oldProtect);
}

void SafeWrite8(uintptr_t addr, uint8_t data)
{
	SafeWriteBuf(addr, &data, sizeof(data));
}

void SafeWrite16(uintptr_t addr, uint16_t data)
{
	SafeWriteBuf(addr, &data, sizeof(data));
}

void SafeWrite32(uintptr_t addr, uint32_t data)
{
	SafeWriteBuf(addr, &data, sizeof(data));
}

void SafeWrite64(uintptr_t addr, uint64_t data)
{
	SafeWriteBuf(addr, &data, sizeof(data));
}

static bool SafeWriteJump_Internal(uintptr_t src, uintptr_t dst, uint8_t op)
{
#pragma pack(push, 1)
	struct Code
	{
		uint8_t op;
		int32_t displ;
	};
#pragma pack(pop)

	static_assert(sizeof(Code) == 5, "sizeof(Code) == 5");

	ptrdiff_t delta = dst - (src + sizeof(Code));
	if((delta < INT_MIN) || (delta > INT_MAX))
		return false;

	Code code;

	code.op = op;
	code.displ = delta;

	SafeWriteBuf(src, &code, sizeof(code));

	return true;
}

bool SafeWriteJump(uintptr_t src, uintptr_t dst)
{
	return SafeWriteJump_Internal(src, dst, 0xE9);
}

bool SafeWriteCall(uintptr_t src, uintptr_t dst)
{
	return SafeWriteJump_Internal(src, dst, 0xE8);
}

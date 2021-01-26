/*
	Credits: SKSE Team (https://skse.silverlock.org/)

	Ported for use in this project by Zebrina.
*/

#include "SafeWrite.h"

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

/*
bool SafeWriteJump(uintptr_t src, uintptr_t dst)
{
	return SafeWriteJump_Internal(src, dst, 0xE9);
}
*/

/*
bool SafeWriteCall(uintptr_t src, uintptr_t dst)
{
	return SafeWriteJump_Internal(src, dst, 0xE8);
}
*/

// Additions by Zebrina.

static void SafeMemSet(memptr address, byte value, uint size) {
    DWORD oldProtect;
    VirtualProtect((void*)address, size, PAGE_EXECUTE_READWRITE, &oldProtect);
    memset((void*)address, value, size);
    VirtualProtect((void*)address, size, oldProtect, &oldProtect);
}

void SafeWriteN(memptr address, const void* buffer, UInt32 size) {
	DWORD oldProtect;
	VirtualProtect((void*)address, size, PAGE_EXECUTE_READWRITE, &oldProtect);
	memcpy((void*)address, buffer, size);
	VirtualProtect((void*)address, size, oldProtect, &oldProtect);
}
void SafeWrite1(memptr address, Int8 value) {
	SafeWriteN(address, &value, sizeof(Int8));
}
void SafeWrite1(memptr address, UInt8 value) {
	SafeWriteN(address, &value, sizeof(UInt8));
}
void SafeWrite2(memptr address, Int16 value) {
	SafeWriteN(address, &value, sizeof(Int16));
}
void SafeWrite2(memptr address, UInt16 value) {
	SafeWriteN(address, &value, sizeof(UInt16));
}
void SafeWrite4(memptr address, Int32 value) {
	SafeWriteN(address, &value, sizeof(Int32));
}
void SafeWrite4(memptr address, UInt32 value) {
	SafeWriteN(address, &value, sizeof(UInt32));
}
void SafeWrite4(memptr address, void* value) {
    SafeWriteN(address, &value, sizeof(void*));
}
void SafeWrite8(memptr address, Int64 value) {
	SafeWriteN(address, &value, sizeof(Int64));
}
void SafeWrite8(memptr address, UInt64 value) {
	SafeWriteN(address, &value, sizeof(UInt64));
}

void SafeWriteString(memptr address, const string& value) {
    SafeWriteN(address, value.c_str(), value.size());
}
void SafeWriteString(memptr address, const char* value) {
    ASSERT(value != nullptr);
    SafeWriteN(address, value, strlen(value) + 1);
}
void SafeWriteFormat(memptr address, uint bufferSize, const char* format, ...) {
    DWORD oldProtect;
    VirtualProtect((void*)address, bufferSize, PAGE_EXECUTE_READWRITE, &oldProtect);
    va_list args;
    va_start(args, format);
    vsnprintf((char*)address, bufferSize, format, args);
    va_end(args);
    VirtualProtect((void*)address, bufferSize, oldProtect, &oldProtect);
}

void SafeWriteNoOperation(memptr address, uint repeat) {
    SafeMemSet(address, 0x90, repeat);
}
void SafeWriteNoOperationRange(memptr start, memptr end) {
    int size = end - start;
    if (size > 0) {
        SafeMemSet(start, 0x90, size);
    }
}

void SafeWriteBreakpoint(memptr address, uint repeat) {
    SafeMemSet(address, 0xcc, repeat);
}
void SafeWriteBreakpointRange(memptr start, memptr end) {
    int size = end - start;
    if (size > 0) {
        SafeMemSet(start, 0xcc, size);
    }
}

bool FlushInstructionCache() {
	return FlushInstructionCache(GetCurrentProcess(), NULL, 0) != FALSE;
}

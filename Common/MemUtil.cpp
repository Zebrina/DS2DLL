#include "MemUtil.h"

#if 0
static inline uintptr_t GetVirtualFunctionTable(void* ptr) {
	return *(uintptr_t*)ptr;
}
static inline uintptr_t GetVirtualFunctionTableFunction(uintptr_t vftbl, uint32_t offset) {
	return ((uintptr_t*)vftbl)[offset];
}
static inline uintptr_t GetVirtualFunction(void* ptr, uint32_t offset) {
	return GetVirtualFunctionTableFunction(GetVirtualFunctionTable(ptr), offset);
}
#endif

constexpr VirtualFunctionTable::VirtualFunctionTable(uintptr_t vftbl) :
	vftbl(vftbl) {
}
VirtualFunctionTable::VirtualFunctionTable(void* ptr) :
	vftbl(GetVfTbl(ptr)) {
}

uintptr_t VirtualFunctionTable::GetFunctionPtr(uint32_t offset) const {
	return GetVfTblFn(vftbl, offset);
}

VirtualFunctionTable::operator uint32_t() const {
	return vftbl;
}

VirtualFunctionTable& VirtualFunctionTable::operator=(uintptr_t otherVftbl) {
	vftbl = otherVftbl;
	return *this;
}

bool VirtualFunctionTable::operator==(const VirtualFunctionTable& other) const {
	return vftbl == other.vftbl;
}
bool VirtualFunctionTable::operator!=(const VirtualFunctionTable& other) const {
	return vftbl != other.vftbl;
}

/*
#include "skse64_common/SafeWrite.h"

void __stdcall MemUtil::WriteRedirectionHook(IntPtr targetOfHook, IntPtr sourceBegin, IntPtr sourceEnd, UInt32 asmSegSize) {
	SafeWriteJump(targetOfHook, sourceBegin);

	for (int i = 5; i < asmSegSize; ++i) {
		SafeWrite8(targetOfHook + i, 0x90); // nop
	}

	SafeWriteJump(sourceEnd, targetOfHook + asmSegSize);
}
MemUtil::IntPtr __stdcall MemUtil::WriteVTableHook(IntPtr vtable, UInt32 fn, IntPtr fnPtr) {
	IntPtr originalFunction = vtable[fn];

	SafeWrite64(vtable + fn * sizeof(void*), fnPtr);

	return originalFunction;
}

void __stdcall MemUtil::WriteOpCode8(IntPtr target, OpCode8 op) {
	SafeWrite8(target, op);
}
void __stdcall MemUtil::WriteOpCode16(IntPtr target, OpCode16 op) {
	SafeWrite16(target, op);
}
void __stdcall MemUtil::WriteOpCode24(IntPtr target, OpCode24 op) {
	SafeWriteBuf(target, reinterpret_cast<void*>(&op), 3);
}
void __stdcall MemUtil::WriteOpCode8WithImmediate(IntPtr target, OpCode8 op, IntPtr var) {
	SafeWrite8(target, op);
	SafeWrite64(target + 0x1, var);
}
void __stdcall MemUtil::WriteOpCode16WithImmediate(IntPtr target, OpCode16 op, IntPtr var) {
	SafeWrite16(target, op);
	SafeWrite64(target + 0x2, var);
}
void __stdcall MemUtil::WriteOpCode24WithImmediate(IntPtr target, OpCode24 op, IntPtr var) {
	SafeWriteBuf(target, reinterpret_cast<void*>(&op), 3);
	SafeWrite64(target + 0x3, var);
}
*/

#pragma once

#include <cstddef>

#include "SafeWrite.h"

#define NAKED __declspec(naked)
#define NORETURN __declspec(noreturn)

// "destructor was implicitly defined as deleted"
#pragma warning(disable : 4624)

#define DeclareNoConstructorDestructor(type) \
	type() = delete; \
	type(const type&) = delete; \
	~type() = delete; \
	type& operator=(const type&) = delete
#define DeclareVirtualNoConstructorDestructor(type) \
	type() = delete; \
	type(const type&) = delete; \
	virtual ~type(); \
	type& operator=(const type&) = delete

// "frame pointer register 'ebp' modified by inline assembly code"
#pragma warning(disable : 4731)

#define $Var(address, name, type) type& name = static_cast<type&>(*(type*)address); static_assert(address != 0x0, "Address must not be null.")

#define $Method(address, name, returns, ...) \
	inline returns name(__VA_ARGS__) { \
		__asm { \
            __asm mov esp, ebp \
			__asm pop ebp \
			__asm mov eax, address \
			__asm jmp eax \
		} \
	} static_assert(address != 0x0, "Address must not be null.")
#define $ConstMethod(address, name, returns, ...) \
	inline returns name(__VA_ARGS__) const { \
		__asm { \
            __asm mov esp, ebp \
			__asm pop ebp \
			__asm mov eax, address \
			__asm jmp eax \
		} \
	} static_assert(address != 0x0, "Address must not be null.")
#define $StaticMethod(address, name, returns, ...) \
	inline static returns __cdecl name(__VA_ARGS__) { \
		__asm { \
            __asm mov esp, ebp \
			__asm pop ebp \
			__asm mov eax, address \
			__asm jmp eax \
		} \
	} static_assert(address != 0x0, "Address must not be null.")

#define $Function(address, name, returns, ...) \
	inline __declspec(naked) returns __cdecl name(__VA_ARGS__) { \
		__asm { \
			__asm mov eax, address \
			__asm jmp eax \
		} \
	} static_assert(address != 0x0, "Address must not be null.")
#define $StaticFunction(address, name, returns, ...) \
	inline __declspec(naked) static returns __cdecl name(__VA_ARGS__) { \
		__asm { \
			__asm mov eax, address \
			__asm jmp eax \
		} \
	} static_assert(address != 0x0, "Address must not be null.")
#define $WinApiFunction(address, name, returns, ...) \
    inline __declspec(naked) returns __stdcall name(__VA_ARGS__) { \
		__asm { \
			__asm mov eax, address \
			__asm jmp eax \
		} \
	} static_assert(address != 0x0, "Address must not be null.")

#define $TemplateMethod(address, name, returns, ...) \
    template <> \
	$Method(address, name, returns, __VA_ARGS__)
#define $TemplateConstMethod(address, name, returns, ...) \
    template <> \
	$ConstMethod(address, name, returns, __VA_ARGS__)
#define $TemplateStaticMethod(address, name, returns, ...) \
    template <> \
	$StaticMethod(address, name, returns, __VA_ARGS__)

#define $Singleton(type, address) \
	type() = delete; \
	~type() = delete; \
	type(const type&) = delete; \
	type(type&&) = delete; \
	type& operator=(const type&) = delete; \
	type& operator=(type&&) = delete; \
    void* operator new(size_t) = delete; \
    void* operator new[](size_t) = delete; \
    void operator delete(void*) = delete; \
    void operator delete[](void*) = delete; \
	inline static type* GetSingleton() { \
		return ((type*(*)())address)(); \
	} static_assert(address != 0x0, "Address must not be null.")

#define name_Hook $$##name

#define _StructTypeEx(name, type, size) type name[(size) / sizeof(type)]
#define _StructType(type, size) _StructTypeEx(type##s, type, size)
#define $Padding(from, to) \
	__pragma(pack(push, 1)) \
	union { \
		_StructType(int, (to) - (from)); \
		_StructTypeEx(unsigned_ints, unsigned int, (to) - (from)); \
		_StructTypeEx(ptrs, void*, (to) - (from)); \
		_StructType(float, (to) - (from)); \
		_StructType(char, (to) - (from)); \
		_StructTypeEx(strings, char*, (to) - (from)); \
		_StructTypeEx(wstrings, wchar_t*, (to) - (from)); \
	} fill_##from##_##to; \
	__pragma(pack(pop)) \
	static_assert((to - from) >= 4 && ((to - from) % 4) == 0, "Size of padding must be >= 4 and a multiple of 4.")

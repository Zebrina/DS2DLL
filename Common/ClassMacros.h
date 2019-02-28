#pragma once

#include <cstddef>

#include "SafeWrite.h"

#ifdef Params
#error Params already defined.
#endif // Params
#ifdef Args
#error Args already defined.
#endif // Args
#ifdef DefineFunction
#error DefineFunction already defined.
#endif // DefineFunction
#ifdef OverloadFunction
#error OverloadFunction already defined.
#endif // OverloadFunction
#ifdef DefineMethod
#error DefineMethod already defined.
#endif // DefineMethod

#define _ASSERT_ADDRESS_NOT_NULL(address) static_assert(address != 0x0, "Address must not be null.")

#define Params(...) __VA_ARGS__
#define Args(...) __VA_ARGS__

#define NO_PARAMS
#define NO_ARGS
#define _NON_CONST

#define _NON_STATIC
#define _TrimFirstVarArg(arg, ...) __VA_ARGS__
#define _PushVarArg(arg, ...) _TrimFirstVarArg(void*, arg, __VA_ARGS__)

#define _DefineMethod(name, cl, addr, ret, params, fnParams, fnArgs, cnst) \
	inline ret name(params) cnst { \
		typedef ret (cl *fn)(fnParams); \
		return ((fn)addr)(fnArgs); \
	} _ASSERT_ADDRESS_NOT_NULL(addr)

//
#define DefineMethod(name, address, returnType, params, args) \
	_DefineMethod(name, __thiscall, address, returnType, params, _PushVarArg(void*, params), _PushVarArg(this, args), _NON_CONST)
//
#define DefineConstMethod(name, address, returnType, params, args) \
	_DefineMethod(name, __thiscall, address, returnType, params, _PushVarArg(const void*, params), _PushVarArg(this, args), const)
//
#define DefineStaticMethod(name, address, returnType, params, args) \
	static _DefineMethod(name, __cdecl, address, returnType, params, params, args, _NON_CONST)
//
#define DefineFunction(name, address, returnType, params, args) \
	_DefineMethod(name, __cdecl, address, returnType, params, params, args, _NON_CONST)

/*#define _DefineVarArgMethod(name, addr, stat, ret, params, fnParams, fnArgs, cnst) \
	template<typename... A> stat ret name(params, A... args) cnst { \
		typedef ret(__cdecl *fn)(fnParams, ...); \
		return ((fn)addr)(fnArgs, args...); \
	} _ASSERT_ADDRESS_NOT_NULL(addr)
	*/
#pragma warning(disable : 4731)
#define _DefineVarArgMethod(name, addr, stat, ret, params, fnParams, fnArgs, cnst) \
	inline stat ret __cdecl name(params, ...) cnst { \
		__asm { \
			__asm pop ebp \
			__asm mov eax, addr \
			__asm jmp eax \
		} \
	} _ASSERT_ADDRESS_NOT_NULL(addr)

#define DefineVarArgMethod(name, address, returnType, params, args) \
	_DefineVarArgMethod(name, address, _NON_STATIC, returnType, params, _PushVarArg(void*, params), _PushVarArg(this, args), _NON_CONST)
#define DefineConstVarArgMethod(name, address, returnType, params, args) \
	_DefineVarArgMethod(name, address, _NON_STATIC, returnType, params, _PushVarArg(void*, params), _PushVarArg(this, args), const)
#define DefineStaticVarArgMethod(name, address, returnType, params, args) \
	_DefineVarArgMethod(name, address, static, returnType, params, params, args, _NON_CONST)
#define DefineVarArgFunction(name, address, returnType, params, args) \
	_DefineVarArgMethod(name, address, _NON_STATIC, returnType, params, params, args, _NON_CONST)

#define _DefineTemplateMethod(type, name, cl, addr, stat, ret, params, tParams, tArgs, cnst) \
	template <> \
	inline stat ret type##::##name(params) cnst { \
		typedef ret (cl *fn)(tParams); \
		return ((fn)addr)(tArgs); \
	} _ASSERT_ADDRESS_NOT_NULL(addr)

#define DefineTemplateMethod(type, name, address, returnType, params, args) \
	_DefineTemplateMethod(type, name, __thiscall, address, _NON_STATIC, returnType, params, _PushVarArg(void*, params), _PushVarArg(this, args), _NON_CONST)
#define DefineTemplateConstMethod(type, name, address, returnType, params, args) \
	_DefineTemplateMethod(type, name, __thiscall, address, _NON_STATIC, returnType, params, _PushVarArg(const void*, params), _PushVarArg(this, args), const)
#define DefineTemplateStaticMethod(type, name, address, returnType, params, args) \
	_DefineTemplateMethod(type, name, __cdecl, address, static, returnType, params, params, args, _NON_CONST)

// Singletons are exported as: FUBI_GetClassSingleton

#define _DefineSingleton(type) \
	type() = delete; \
	~type() = delete; \
	type(const type&) = delete; \
	type(type&&) = delete; \
	type& operator=(const type&) = delete; \
	type& operator=(type&&) = delete;

#define DefineSingleton(type, address) \
	_DefineSingleton(type) \
	inline static type* GetSingleton() { \
		return ((type*(*)())address)(); \
	} _ASSERT_ADDRESS_NOT_NULL(address)
#define DefineSingletonPtr(type, address) \
	_DefineSingleton(type) \
	inline static type* GetSingleton() { \
		return *(type**)address; \
	}

#define _ExpandValue(value) value

#define _StructTypeEx(name, type, size) type name[(size) / sizeof(type)]
#define _StructType(type, size) _StructTypeEx(type##s, type, size)
#define FillStruct(from, to) \
	__pragma(pack(push, 1)) \
	union { \
		_StructType(char, (to) - (from)); \
		_StructType(int, (to) - (from)); \
		_StructTypeEx(unsigned_ints, unsigned int, (to) - (from)); \
		_StructTypeEx(ptrs, void*, (to) - (from)); \
		_StructType(float, (to) - (from)); \
		_StructTypeEx(strings, char*, (to) - (from)); \
	} fill_##from##_##to; \
	__pragma(pack(pop)) \
	static_assert((to - from) >= 4, "Size must be greater than 4 bytes.")
//#define FillStructFrom(type, from, to) char fill_##from##_##to[to - (offsetof(type, from)+sizeof(from))]

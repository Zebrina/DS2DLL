#pragma once

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
#ifdef DeclareMethod
#error DeclareMethod already defined.
#endif // DeclareMethod

#define ASSERT_ADDRESS_NOT_NULL(address) static_assert(address != 0x0, "Address must not be null.")

// Defined to avoid missing function definition warning in Visual Studio.
#define VOID void

#define Params(...) __VA_ARGS__
#define Args(...) __VA_ARGS__

#define DeclareFunction(name, ret, ...) \
	typedef ret (__cdecl *zzz##name)(__VA_ARGS__); \
	static zzz##name name(__VA_ARGS__); \
	ASSERT_ADDRESS_NOT_NULL(address)
//
#define DefineFunction(name, address, ret, ...) \
	typedef ret (__cdecl *zzz##name)(__VA_ARGS__); \
	static zzz##name name=(zzz##name)address; \
	ASSERT_ADDRESS_NOT_NULL(address)

//
#define OverloadFunction(name, target, ret, params, args) \
	static ret name(params) { \
		target(args); \
	}

//
#define DeclareMethod(name, address, ret, params, args) \
private: \
	typedef ret (__thiscall *zzz##name)(void*, params); \
public: \
	ret name(params) { \
		return ((zzz##name)address)(this, args); \
	} \
	ASSERT_ADDRESS_NOT_NULL(address)
//
#define DeclareMethodNoParams(name, address, ret) \
private: \
	typedef ret (__thiscall *zzz##name)(void*); \
public: \
	ret name() { \
		return ((zzz##name)address)(this); \
	} \
	ASSERT_ADDRESS_NOT_NULL(address)

//
#define DefineSingleton(T, address) \
private: \
	T(); \
public: \
	static T* FUBI_GetClassSingleton() { \
		return ((T*(*)())address)(); \
	} \
	ASSERT_ADDRESS_NOT_NULL(address)

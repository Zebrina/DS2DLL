#pragma once

#define _MakeSingleton(className, accessMethod) \
	className(const className&) = delete; \
	className(className&&) = delete; \
	className& operator=(const className&) = delete; \
	className& operator=(className&&) = delete; \
private: \
	className() = default; \
public: \
	accessMethod

// Implementation of singleton access methods. For internal use.
#define _SingletonAccessMethodImplementation(className) \
	static className singleton; \
	return &singleton;
#define _OnDemandSingletonAccessMethodImplementation(className) \
	static className* singleton = nullptr; \
	if (dispose) { \
		delete singleton; \
		singleton = nullptr; \
	} else if (singleton == nullptr) { \
		singleton = new className(); \
	} \
	return singleton; \

#define MakeSingletonDeclaration(className) _MakeSingleton(className, \
	static className* GetSingleton(); \
	)
#define MakeSingletonImplementation(className) \
	className* className::GetSingleton() { \
		_SingletonAccessMethodImplementation(className) \
	}
#define MakeSingleton(className) _MakeSingleton(className, \
	static className* GetSingleton() { \
		_SingletonAccessMethodImplementation(className) \
	})
#define MakeOnDemandSingletonDeclaration(className) _MakeSingleton(className, \
	static className* GetSingleton(bool dispose = false); \
	)
#define MakeOnDemandSingletonImplementation(className) \
	className* className::GetSingleton(bool dispose) { \
		_OnDemandSingletonAccessMethodImplementation(className) \
	}
#define MakeOnDemandSingleton(className) _MakeSingleton(className, \
	static className* GetSingleton(bool dispose = false) { \
		_OnDemandSingletonAccessMethodImplementation(className) \
	})

#define DisposeSingleton(className) className::GetSingleton(true)

/*
template <class T>
class Singleton {
public:
	Singleton(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;

	static T* GetSingleton() {
		static T singleton;
		return &singleton;
	}

protected:
	Singleton() = default;
};

template <class T, class Alloc = new T>
class OnDemandSingleton {
public:
	OnDemandSingleton(const OnDemandSingleton&) = delete;
	OnDemandSingleton(OnDemandSingleton&&) = delete;

	static T* GetSingleton() {
		static T* singleton = nullptr;
		if (singleton == nullptr) {
			singleton = Alloc();
		}
		return singleton;
	}

protected:
	OnDemandSingleton() = default;
};
*/

template <class T>
class Singleton {
public:
    static T* GetSingleton() {
        if (!singleton) {
            singleton = new T();
            atexit(Free);
        }
        return singleton;
    }

protected:
    Singleton() {
    }

    static T* singleton;

private:
    Singleton(const Singleton&) = delete;

    Singleton& operator=(const Singleton&) = delete;

    static void Free() {
        delete singleton;
    }
};

template <class T>
T* Singleton<T>::singleton = nullptr;

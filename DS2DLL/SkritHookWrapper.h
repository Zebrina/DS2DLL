#pragma once

#include "SkritObject.h"
#include <Singleton.h>
#include <string>
#include <vector>

template <memptr BaseAddress, memptr HookAddress, typename ReturnType, typename ...Args>
class SkritHookWrapper : public Singleton<SkritHookWrapper<BaseAddress, HookAddress, ReturnType, Args...>> {
private:
    typedef ReturnType(__cdecl *Function)(Args...);
    typedef ReturnType(__cdecl *SkritFunction)(SkritObject*, const char*, Args...);
    typedef ReturnType(__cdecl *HookFunction)(Function next, Args...);

public:
    SkritHookWrapper() {
        SafeWriteHook(HookAddress, OnCall);
        FlushInstructionCache();
    }

    void Register(HookFunction hook) {
        hooks.push_back(hook);
    }

protected:
    static ReturnType __cdecl OnCall(SkritObject* skrit, const char* functionName, Args... args) {
        SkritHookWrapper* singleton = SkritHookWrapper::singleton;
        singleton->skrit = skrit;
        singleton->functionName = functionName;
        singleton->position = 0;
        return CallNextInChain(args...);
    }

private:
    SkritObject* skrit;
    const char* functionName;
    size_t position;
    std::vector<HookFunction> hooks;

    static ReturnType __cdecl CallNextInChain(Args... args) {
        auto singleton = SkritHookWrapper::singleton;
        size_t currentPosition = singleton->position;
        if (currentPosition >= singleton->hooks.size()) {
            return ((SkritFunction)BaseAddress)(singleton->skrit, singleton->functionName, args...);
        }
        HookFunction nextHook = singleton->hooks[(singleton->position)++];
        return nextHook(CallNextInChain, args...);
    }
};

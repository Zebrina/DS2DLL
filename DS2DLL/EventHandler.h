#pragma once

#include "UIShell.h"
#include <Events.h>
#include <Singleton.h>

enum EventType {
    ON_DLL_INJECTION,
    ON_CONFIG_LOADED,
    ON_UISHELL_INITIALIZED,
    NUM_EVENT_TYPES,
};

enum EventPriority {
    INTERNAL = 1000,
    PLUGIN = 0,
};

class EventHandler : public Singleton<EventHandler> {
public:
    EventHandler();

    EventDispatcher<EventPriority>* GetDispatcher(EventType type);

    void Dispatch(EventType type);

    void Dispose();

private:
    EventDispatcher<EventPriority>* dispatchers[NUM_EVENT_TYPES];

    struct UIShell_ : public UIShell {
        $Method(0x0074BA80, DefaultInitialization, UIShell*, const char*, int, int);
        UIShell* Initialize(const char* str, int screenWidth, int screenHeight);
    };
};

#define $OnEvent(type, ...) \
    static void __forceinline __cdecl $$OnEvent_##type(__VA_ARGS__); \
    namespace { \
        struct $$EVENT_##type##_REGISTRATION { \
            $$EVENT_##type##_REGISTRATION() { \
                EventHandler::GetSingleton()->GetDispatcher(type)->AddSink($$OnEvent_##type, INTERNAL); \
            } \
        } static $$EVENT_##type##_INSTANCE; \
    } \
    void $$OnEvent_##type(__VA_ARGS__)
#define $OnDllInjection() $OnEvent(ON_DLL_INJECTION)
#define $OnConfigLoaded() $OnEvent(ON_CONFIG_LOADED)

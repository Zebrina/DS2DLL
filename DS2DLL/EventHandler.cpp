#include "EventHandler.h"

#include "Config.h"

EventHandler::EventHandler() {
    ZeroMemory(this, sizeof(EventHandler));

    SafeWriteHook(0x0045E97D, &UIShell_::Initialize);
}

EventDispatcher<EventPriority>* EventHandler::GetDispatcher(EventType type) {
    ASSERT(type >= 0 && type < NUM_EVENT_TYPES);
    if (!dispatchers[type]) {
        dispatchers[type] = new EventDispatcher<EventPriority>();
    }
    return dispatchers[type];
}

void EventHandler::Dispatch(EventType type) {
    ASSERT(type >= 0 && type < NUM_EVENT_TYPES);
    EventDispatcher<EventPriority>* dispatcher = dispatchers[type];
    if (dispatcher) {
        dispatcher->Invoke();
        delete dispatcher;
        dispatchers[type] = nullptr;
    }
}

void EventHandler::Dispose() {
    for (int i = 0; i < NUM_EVENT_TYPES; ++i) {
        delete dispatchers[i];
        dispatchers[i] = nullptr;
    }
}

UIShell* EventHandler::UIShell_::Initialize(const char* str, int screenWidth, int screenHeight) {
    UIShell* shell = DefaultInitialization(str, screenWidth, screenHeight);
    EventHandler::GetSingleton()->Dispatch(ON_UISHELL_INITIALIZED);
    return shell;
}

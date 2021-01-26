#include "Config.h"

#include "EventHandler.h"

$OnDllInjection() {
    struct ConfigHooks {
        $Method(0x005fd0e5, Initialize, void*, void*);
        void* Initialize_Hook(void* arg1) {
            void* result = Initialize(arg1);
            EventHandler::GetSingleton()->Dispatch(ON_CONFIG_LOADED);
            return result;
        }
    };

    SafeWriteHook(0x00611f0e, &ConfigHooks::Initialize_Hook);
}

#pragma once

#include "DS2DLL.h"
#include "GPString.h"

namespace Skrit {
    class Object {
    public:
        $ConstMethod(0x00408f60, GetName, const GPBString&);
        $ConstMethod(0x00408f67, IsStateChangePending, bool);
        $Method(0x009a7818, AddTimerSeconds, float, int unk1, float unk2);
        $ConstMethod(0x00408f86, GetPollPeriod, float);
        $ConstMethod(0x00408f71, GetCurrentState, int);
        $ConstMethod(0x00408f75, GetPendingState, int);
        $Method(0x009a76de, CreateTimer, int, float timeout);
        $Method(0x009a7708, CreateTimer, void, int timerId, float timeout);
        $Method(0x009a7724, CreateFrameTimer, int, int unk1);
        $Method(0x009a774a, CreateFrameTimer, void, int timerId, int unk2);
        $Method(0x009a7766, DestroyTimer, void, int timerId);
        $Method(0x009a7879, ResetTimerSeconds, void, int timerId, float unk2);
        $Method(0x009a78cf, SetNewTimerSeconds, void, int timerId, float unk2);
        $Method(0x00408f79, SetPollPeriod, void, float unk1);
        $Method(0x009a77a2, SetTimerGlobal, void, int timerId, bool unk2);
        $Method(0x009a77d9, SetTimerRepeatCount, void, int timerId, int unk2);

        FEX bool GetTraceOpCodes() const;
        FEX void SetTraceOpCodes(bool enable);
        FEX bool GetTraceSysCalls() const;
        FEX void SetTraceSysCalls(bool enable);
        FEX bool GetTraceSkritCalls() const;
        FEX void SetTraceSkritCalls(bool enable);
        FEX bool GetTraceStateChanges() const;
        FEX void SetTraceStateChanges(bool enable);
        FEX bool GetTraceEvents() const;
        FEX void SetTraceEvents(bool enable);

        // 0x00
        $Padding(0x00, 0x04);
        // 0x04
        void* ptr_04;
        // 0x08
        GPBString fullName;
        // 0x0c
        $Padding(0x0c, 0x10);
        // 0x10
        void* ptr_10;
        // 0x14
        $Padding(0x10, 0x18);
        // 0x18
        int int_18;
        // 0x1c
        void* ptr_1c;
        // 0x20
        $Padding(0x20, 0x2c);
        // 0x2c
        int currentState;
        // 0x30
        int pendingState;
        // 0x34
        void* ptr_34;
        // 0x38
        float pollPeriod;
        // 0x3c
        $Padding(0x3c, 0x74);
        // 0x74
        bool bTraceOpCodes;
        bool bTraceSysCalls;
        bool bTraceSkritCalls;
        bool bTraceStateChanges;
        // 0x78
        bool bTraceEvents;
    };
}

typedef Skrit::Object SkritObject;

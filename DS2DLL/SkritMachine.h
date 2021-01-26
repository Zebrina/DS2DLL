#pragma once

#include "GPFastVector.h"

namespace Skrit {
    struct Module {
        const char* name;
        uint extra;
        uint crc;
    };

    class Machine {
    public:
        inline static Machine* GetSingleton() {
            return (Machine*)0x00d01740;
        }

        $Method(0x009C1666, Unknown9C1666, void);
        // "Server::*"
        // "Player::*"
        // "WorldTime::*"
        $Method(0x009C195C, Unknown9C195C, void, const char*);

        $Method(0x009C16A3, Unknown9C16A3, void, bool);

        $Method(0x009C3AA8, Unknown9C3AA8, int, const char*);

        $Method(0x009C3AA8, Unknown84CE57, void*, int);

        // "OnGoUpdate"
        // "OnGoDraw"
        $Method(0x009C3633, Unknown9C3633, int, const char*);


        
        $Method(0x009C5C7D, Unknown9C5C7D, int, int, int);

        $Method(0x0092E596, Unknown92E596, int, int);

        $Method(0x009C3990, Unknown9C3990, int, int);

        
        

        // These are exported but do nothing.
        //$ConstMethod(0x009ad6d8, DisassembleCurrent, void);
        //$ConstMethod(0x009ad6bc, DisassembleCurrent, void, ReportSys::Context* context);

        // 0x00
        $Padding(0x00, 0xdc);
        // 0xdc
        GPFastVector<Module> modules;
    };
}

typedef Skrit::Module SkritModule;
typedef Skrit::Machine SkritMachine;

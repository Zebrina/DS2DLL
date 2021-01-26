#pragma once

struct IDirect3D9;

class RapiOwner {
public:
    inline static RapiOwner* GetSingleton() {
        return (RapiOwner*)0x00D0158C;
    }

    // 0x000
    $Padding(0x000, 0x004);
    // 0x004
    IDirect3D9* d3d9;
    // 0x008
    $Padding(0x008, 0x250);
};

STATIC_ASSERT(sizeof(RapiOwner) == 0x250);

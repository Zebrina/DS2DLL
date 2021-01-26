#include "PClass.h"

#include "Enums.h"
#include "EventHandler.h"
#include "Go.h"
#include "GoCommon.h"
#include "GoGui.h"
#include "UIShell.h"
#include <cstdlib>

$Var(0x00bcbed0, BASE_LOOKUP, const PClass*);

PClass::PClass() :
    name("INVALID"),
    value(INVALID) {
}
PClass::PClass(const char* name, ePClass value) :
    name(name),
    value(value) {
}

PClassExtra::PClassExtra(const char* name, ePClass value, const char* aVisibleName, hexcolorcode color) :
    PClass(name, value),
    visibleName("$MSG$<modifier>"),
    color(color) {
    wchar_t colorTagBuf[32];
    swprintf(colorTagBuf, 32, L"<%hs>", name);
    colorTag = colorTagBuf;
    visibleName += aVisibleName;
}

PClassManager::~PClassManager() {
    delete data;
}

ePClass PClassManager::RegisterPClass(const char* internalName, const char* visibleName, hexcolorcode color, ePClass pContentProxy) {
    if (!finalized && nextValue != INVALID) {
        ePClass value = (ePClass)(nextValue | pContentProxy);
        nextValue = (ePClass)(nextValue << 1);

        lookup.emplace_back(internalName, value, visibleName, color);
        UIShell::ToolTipColorLookup[internalName] = color;

        return value;
    }
    return INVALID;
}

const PClassExtra* PClassManager::Get(ePClass value) const {
    for (size_t i = 0; i < lookup.size(); ++i) {
        const PClassExtra& pClassExtra = lookup[i];
        if (pClassExtra.value == value) {
            return &pClassExtra;
        }
    }
    return nullptr;
}

void PClassManager::Finalize(const PClass*& dataInOut, uint& countInOut) {
    ASSERT(!finalized);
    finalized = true;

    uint count = countInOut + lookup.size();
    data = new PClass[count];

    for (uint i = 0; i < countInOut; ++i) {
        data[i] = dataInOut[i];
    }
    for (uint i = 0; i < lookup.size(); ++i) {
        data[i + countInOut] = lookup[i];
    }

    dataInOut = data;
    countInOut = count;
}

PClassManager* gPClassManager;

static const wchar_t* __stdcall GetCustomScreenNameColorTag(ePClass value) {
    const wchar_t* colorTag = nullptr;
    if (value >= USER_DEFINED) {
        const PClassExtra* pClass = gPClassManager->Get(value);
        if (pClass) {
            colorTag = pClass->colorTag.c_str();
        }
    }
    return colorTag;
}

static const char* __stdcall GetCustomBaseScreenNamePrefix(ePClass value) {
    const char* namePrefix = nullptr;
    if (value >= USER_DEFINED) {
        const PClassExtra* pClass = gPClassManager->Get(value);
        if (pClass) {
            namePrefix = pClass->visibleName.c_str();
        }
    }
    return namePrefix;
}

static const char* __stdcall GetCustomTooltip(ePClass value) {
    const char* tooltip = nullptr;
    if (value >= USER_DEFINED) {
        const PClass* pClass = gPClassManager->Get(value);
        if (pClass) {
            tooltip = pClass->name;
        }
    }
    return tooltip;
}

static void NAKED SetScreenNameColor() {
    __asm {
        jnz custom
        push 0x00bc10C4 // push "<unique>"
        mov ecx, 0x0080845b
        jmp ecx

        custom :
        push eax // Preserve eax.
            push eax
            call GetCustomScreenNameColorTag
            test eax, eax
            mov ecx, eax
            pop eax // Restore eax.
            jz other
            push ecx // Push custom tag.
            mov ecx, 0x0080845b
            jmp ecx

            other :
        mov ecx, 0x008082c5
            jmp ecx
    }
}

static void NAKED SetUnidentifiedBaseScreenName() {
    __asm {
        jnz custom
        mov[ebp - 0x2d], 0
        // Jump back to 'push "$MSG$<modifier>Unique"'
        mov ecx, 0x0049986f
        jmp ecx
        custom :
        push eax // Preserve eax.
            push ecx
            call GetCustomBaseScreenNamePrefix
            test eax, eax
            mov[ebp - 0x2d], eax
            pop eax // Restore eax.
            jz other
            // Push custom modifier string and jump back to 'call 0x00401a15'
            push[ebp - 0x2d]
            mov[ebp - 0x2d], 0
            mov ecx, 0x00499874
            jmp ecx
            other :
        mov[ebp - 0x2d], 0
            // Jump back to 0x004998bb
            push 0x004998bb
            ret
    }
}

static void NAKED SetInventoryBaseScreenName() {
    __asm {
        cmp eax, UNIQUE
        jnz custom
        // Jump back to 'push "$MSG$<modifier>Unique"'
        mov eax, 0x008086F7
        jmp eax
        custom :
        push eax // Preserve eax.
            push eax
            call GetCustomBaseScreenNamePrefix
            mov ecx, eax
            pop eax // Restore eax.
            test ecx, ecx
            jz other
            // Push custom modifier string and jump back to UIShell call.
            push ecx
            mov eax, 0x00808708
            jmp eax
            other :
        // Jump back to 0x008086fe
        mov ecx, 0x008086fe
            jmp ecx
    }
}

static void NAKED SetBackgroundColor() {
    __asm {
        cmp eax, RARE
        jnz custom
        // Jump back to 'push edi; push "rare"'
        mov ecx, 0x0043743c
        jmp ecx
        custom :
        push eax // Preserve eax.
            push eax
            call GetCustomTooltip
            mov ecx, eax
            pop eax // Restore eax.
            test ecx, ecx
            jz other
            // Push custom tooltip string and jump back to UIShell call.
            push edi
            push ecx
            mov ecx, 0x00437543
            jmp ecx
            other :
        // Jump back to 0x00437447
        mov ecx, 0x00437447
            jmp ecx
    }
}

static void NAKED SetDroppedColor() {
    __asm {
        cmp eax, RARE
        jnz custom
        // Jump back to 'push 0xffffffff; push "rare"'
        mov ecx, 0x0180d0a2
        jmp ecx
        custom :
        push eax // Preserve eax.
            push eax
            call GetCustomTooltip
            mov ecx, eax
            pop eax // Restore eax.
            test ecx, ecx
            jz other
            // Push custom tooltip string and jump back to UIShell call.
            push 0xffffffff
            push ecx
            mov ecx, 0x0180d3a1
            jmp ecx
            other :
        // Jump back to 0x00437447
        mov ecx, 0x0180d0ae
            jmp ecx
    }
}

$OnDllInjection() {
    gPClassManager = PClassManager::GetSingleton();

    SafeWriteJump(0x008082b9, SetScreenNameColor);
    DEBUG_ONLY(SafeWriteNoOperationRange(0x008082b9 + 5, 0x008082c5)); // Easier to read assembly.

    SafeWriteJump(0x00499869, SetUnidentifiedBaseScreenName);
    DEBUG_ONLY(SafeWriteNoOperationRange(0x00499869 + 5, 0x0049986f));

    SafeWriteJump(0x008086F2, SetInventoryBaseScreenName);

    SafeWriteJump(0x00437434, SetBackgroundColor);
    DEBUG_ONLY(SafeWriteNoOperationRange(0x00437434 + 5, 0x0043743c));

    SafeWriteJump(0x0180d09d, SetDroppedColor);

    gPClassManager->RegisterPClass("quest", "Quest", 0xFFDB7093, NORMAL);
    gPClassManager->RegisterPClass("crafted", "Crafted", 0xFFFF8A00, RARE);
    //gPClassManager->RegisterPClass("illustrious", "Illustrious", 0xFF66AB7F, UNIQUE);
    gPClassManager->RegisterPClass("runeword", "Runeword", 0xFFADA156, UNIQUE);


    // unique 0xffcc66ff
    // rare 0xff00ffff
    // enchanted 0xff00ff00


    // 0xFF66E57F

    struct InternalPClassManager {
        $Method(0x00622be2, Initialize, void, const PClass* data, uint count, ePClass defaultValue);
        void __thiscall Initialize_Hook(const PClass* data, uint count, ePClass defaultValue) {
            gPClassManager->Finalize(data, count);

            Initialize(data, count, defaultValue);
        }
    };

    SafeWriteHook(0x00b860d9, &InternalPClassManager::Initialize_Hook);
}

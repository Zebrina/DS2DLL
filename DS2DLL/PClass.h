#pragma once

#include "Enums.h"
#include "Singleton.h"
#include <string>
#include <vector>

constexpr size_t BASE_PCLASS_COUNT = 5;

struct PClass {
    const char* name;
    ePClass value;
    PClass();
    PClass(const char* name, ePClass value);
    PClass& operator=(const PClass&) = default;
};

STATIC_ASSERT(sizeof(PClass) == 8);

struct PClassExtra : PClass {
    std::wstring colorTag;
    std::string visibleName;
    hexcolorcode color;
    PClassExtra(const char* name, ePClass value, const char* aVisibleName, hexcolorcode color);
    PClassExtra& operator=(const PClassExtra&) = default;
};

class PClassManager : public Singleton<PClassManager> {
public:
    PClassManager() = default;
    ~PClassManager();

    ePClass RegisterPClass(const char* internalName, const char* visibleName, hexcolorcode color, ePClass pContentProxy = INVALID);

    const PClassExtra* Get(ePClass value) const;

    void Finalize(const PClass*& baseData, uint& count);

private:
    PClass* data;
    std::vector<PClassExtra> lookup;
    ePClass nextValue = USER_DEFINED;
    bool finalized = false;
};

#include "GoAspect.h"

FEX void GoAspect::SetForceNoRender(bool flag) {
    if (flag) {
        SetFlags(flags, FORCE_NO_RENDER);
    } else {
        ClearFlags(flags, FORCE_NO_RENDER);
    }
}

FEX void GoAspect::SetIsDoor(bool flag) {
    if (flag) {
        SetFlags(flags, IS_DOOR);
    } else {
        ClearFlags(flags, IS_DOOR);
    }
}
FEX void GoAspect::SetIsGagged(bool flag) {
    if (flag) {
        SetFlags(flags, IS_GAGGED);
    } else {
        ClearFlags(flags, IS_GAGGED);
    }
}

FEX void GoAspect::SetIsSelectable(bool flag) {
    if (flag) {
        SetFlags(flags, IS_SELECTABLE);
    } else {
        ClearFlags(flags, IS_SELECTABLE);
    }
}

FEX void GoAspect::SetIsUsable(bool flag) {
    if (flag) {
        SetFlags(flags, IS_USABLE);
    } else {
        ClearFlags(flags, IS_USABLE);
    }
}

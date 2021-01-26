#include "UIShell.h"

#include "EventHandler.h"
#include "GoCommon.h"
#include "PClass.h"
#include "Report.h"

std::unordered_map<const char*, hexcolorcode, StrHasher<uint, ToLower>, StrEquals<ToLower>> UIShell::ToolTipColorLookup;

hexcolorcode UIShell::GetToolTipColor(const char* tooltipName, hexcolorcode defaultValue) const {
    hexcolorcode color = GetToolTipColorInternal(tooltipName, defaultValue);
    if (color == defaultValue) {
        uint count = ToolTipColorLookup.count(tooltipName);
        auto it = ToolTipColorLookup.find(tooltipName);
        if (it != ToolTipColorLookup.end()) {
            color = it->second;
        }
    }
    return color;
}
FEX hexcolorcode UIShell::FUBI_RENAME(GetToolTipColor)(const GPBString& tooltipName, hexcolorcode defaultValue) const {
    return GetToolTipColor(tooltipName, defaultValue);
}
FEX hexcolorcode UIShell::FUBI_RENAME(GetToolTipColor)(const GPBString& tooltipName) const {
    return GetToolTipColor(tooltipName);
}

$OnDllInjection() {
    SafeWriteHook(0x0075f8ef, &UIShell::GetToolTipColor);
    SafeWriteHook(0x00805464, &UIShell::GetToolTipColor);
    SafeWriteHook(0x008fc527, &UIShell::GetToolTipColor);

    // push offset UIShell::GetToolTipColor
    SafeWrite4(0x0043754e + 1, Reinterpret<memptr>(&UIShell::GetToolTipColor));
    SafeWrite4(0x0180d3ac + 1, Reinterpret<memptr>(&UIShell::GetToolTipColor));
}

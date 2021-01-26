#include "GoCommon.h"

#include "StringTool.h"

FEX void GoCommon::FUBI_RENAME(GetBaseScreenName)(GPBString& nameOut) const {
    return GetBaseScreenName(nameOut);
}

FEX void GoCommon::GetDescription(GPBString& descriptionOut) const {
    // NYI
}
FEX void GoCommon::SetDescription(const GPBString& newDescription) {
    StringTool::Assign(description, newDescription);
}
FEX void GoCommon::SSetDescription(const GPBString& newDescription) {
    // NYI
    SetDescription(newDescription);
}
FEX FuBiCookie* GoCommon::RCSetDescription(const GPWString& newDescription) {
    // NYI
    return nullptr;
}

FEX void GoCommon::GetCustomName(GPBString& nameOut) const {
    // NYI
}
FEX void GoCommon::SetCustomName(const GPBString& newName) {
    StringTool::Assign(customName, newName);
}
FEX void GoCommon::SSetCustomName(const GPBString& newName) {
    // NYI
    SetCustomName(newName);
}
FEX FuBiCookie* RCSetCustomName(const GPWString& newName) {
    // NYI
    return nullptr;
}

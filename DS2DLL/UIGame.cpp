#include "UIGame.h"

FEX bool UIGame::GetEscNisToFrontEnd() const {
    return bEscNisToFrontEnd;
}
FEX bool UIGame::GetSingleSelect() const {
    return bSingleSelect;
}

FEX hexcolorcode UIGame::GetPartyMemberGlowColor() const {
    return partyMemberColor;
}
FEX void UIGame::SetPartyMemberGlowColor(hexcolorcode color) {
    partyMemberColor = color;
}
FEX hexcolorcode UIGame::GetFocusPartyMemberGlowColor() const {
    return partyMemberFocusColor;
}
FEX void UIGame::SetFocusPartyMemberGlowColor(hexcolorcode color) {
    partyMemberFocusColor = color;
}

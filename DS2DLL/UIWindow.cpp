#include "UIWindow.h"

int UIWindow::GetPositionX() const {
    return rect.left;
}
int UIWindow::GetPositionY() const {
    return rect.top;
}
void UIWindow::SetPosition(int x, int y) {
    SetRect(x, y, x + GetWidth(), y + GetHeight(), false);
}
int UIWindow::GetWidth() const {
    return rect.right - rect.left;
}
int UIWindow::GetHeight() const {
    return rect.bottom - rect.top;
}

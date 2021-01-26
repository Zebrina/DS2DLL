#include "AppModule.h"

#include "AppModuleExtension.h"

$Var(0x00d021e0, GPGMutex, HANDLE);

FEX bool AppModule::GetCapsLock() const {
	return GetKeyState(VK_CAPITAL) & 0x0001;
}
FEX bool AppModule::GetScrollLock() const {
	return GetKeyState(VK_SCROLL) & 0x0001;
}
FEX bool AppModule::GetNumLock() const {
	return GetKeyState(VK_NUMLOCK) & 0x0001;
}
FEX bool AppModule::GetKey(int virtualKeyCode) const {
	return GetKeyState(virtualKeyCode) & 0x8000;
}

FEX float AppModule::GetFrameRate() const {
	return frameRate;
}

FEX bool AppModule::GetAlwaysActive() const {
    int i = sizeof(SYSTEMTIME);
	return ((AppModuleExtension*)this)->GetAlwaysActive();
}
FEX void AppModule::SetAlwaysActive(bool value) {
	((AppModuleExtension*)this)->SetAlwaysActive(value);
}
FEX void AppModule::ToggleAlwaysActive() {
    ((AppModuleExtension*)this)->ToggleAlwaysActive();
}

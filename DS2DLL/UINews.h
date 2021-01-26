#pragma once

class UINews {
public:
	$Singleton(UINews, 0x0044abec);

	$Method(0x00454c03, HideInterface, void);
	$Method(0x00456864, ProcessUserRegistration, void);
	$Method(0x0045554e, ScrollNews, void, int unk1);
	$Method(0x004555ed, ShowNewsMessages, void);
	$Method(0x004555ae, ShowUserMessages, void);
	$Method(0x0045503c, ShowUserRegistration, void);
	$Method(0x00456353, TriggerMoreButton, void, uint unk1);
	$Method(0x004557a2, ShowInterface, void);

	$Padding(0x000, 0x100);
};

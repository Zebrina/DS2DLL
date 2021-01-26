#pragma once

#include "UIWindow.h"

class IMessenger {
public:
    //$Method(0x005029ed, FUBI_RENAME_Notify, void, const GPBString& unk1, UIWindow* unk2);
    //$ConstMethod(0x005029f6, FUBI_RENAME_IsProcessingMessage, bool);

    // 0x00
    virtual void VF01(); // PURE
    // 0x04
    virtual void VF02(); // PURE
    // 0x08
    virtual void VF03(); // PURE
    // 0x0c
    virtual void VF04(); // PURE
    // 0x10
    virtual void VF05(); // PURE
    // 0x14
    virtual void VF06(); // PURE
    // 0x18
    virtual void VF07(); // PURE
    // 0x1c
    virtual void VF08(); // PURE
    // 0x20
    virtual void VF09(); // PURE
    // 0x24
    virtual void VF10(); // PURE
    // 0x28
    virtual void Notify(const GPBString&, UIWindow*); // PURE
    // 0x2c
    virtual void VF12(); // PURE
    // 0x30
    virtual void VF13(); // PURE
    // 0x34
    virtual bool IsProcessingMessage() const; // PURE
};

class Messenger : public IMessenger {
public:
	$Singleton(Messenger, 0x0076ce60);

    // 0x04
    $Padding(0x04, 0x38);
};

STATIC_ASSERT(sizeof(Messenger) == 0x38);

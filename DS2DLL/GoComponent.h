#pragma once

#include "Go.h"
#include "GoDataComponent.h"
#include "GoidScid.h"
#include "GPString.h"

class GoComponent {
public:
	$ConstMethod(0x00502e90, GetGo, Go*);
    $ConstMethod(0x007b10d5, GetGoid, const Goid*);
    $ConstMethod(0x007b10dc, GetScid, const Scid*);
	$ConstMethod(0x00502e94, GetData, const GoDataComponent*);
	$ConstMethod(0x007b10cd, GetName, const GPBString&);

    // 0x00
    virtual int VF01();
    // 0x04
    virtual int VF02();
    // 0x08
    virtual GoComponent* Clone(); // ??
    // 0x0c
    virtual void VF04();
    // 0x10
    virtual void VF05();
    // 0x14
    virtual void VF06();
    // 0x18
    virtual void VF07();
    // 0x1c
    virtual void VF08();
    // 0x20
    virtual void VF09();
    // 0x24
    virtual void VF10();
    // 0x28
    virtual void VF11();
    // 0x2c
    virtual void VF12();
    // 0x30
    virtual void VF13();
    // 0x34
    virtual void VF14();
    // 0x38
    virtual void VF15();
    // 0x3c
    virtual void VF16();
    // 0x40
    virtual void VF17();
    // 0x44
    virtual void VF18();
    // 0x48
    virtual void VF19();
    // 0x4c
    virtual void VF20();
    // 0x50
    virtual void VF21();
    // 0x50
    virtual void VF22();
    // 0x54
    virtual void VF23();
    // 0x58
    virtual void VF24();
    // 0x5c
    virtual void VF25();
    // 0x60
    virtual void VF26();

	// 0x04
	Go* go;
	// 0x08
	GoDataComponent* dataComponent;
    // 0x0c
    $Padding(0x0c, 0x14);
};

STATIC_ASSERT(sizeof(GoComponent) == 0x14);

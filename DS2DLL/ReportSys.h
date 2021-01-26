#pragma once

#include "GPString.h"
#include <climits>

class ReportSys {
public:
	class Context {
	public:
		$ConstMethod(0x004289f0, IsEnabled, bool);
		$ConstMethod(0x00428a2d, IsInReport, bool);
		$Method(0x004289de, Enable, void, bool flag);
		$Method(0x004289eb, Disable, void);
		$Method(0x00429e6e, Toggle, void);
		$Method(0x006727da, Output, bool, const char* message, int unk2 = INT_MAX);
		$Method(0x00429e81, Output, bool, const GPBString& message);
		$Method(0x00428a6e, OutputF, bool, const char* format, ...);
		$Method(0x00428a82, OutputEol, bool);
		$Method(0x006726f3, OutputRaw, bool, const char* message, int unk2 = INT_MAX);
		$Method(0x00672237, BeginReport, void);
		$Method(0x006722f7, EndReport, void);
		$Method(0x00428a36, Indent, void);
		$Method(0x00428a41, Outdent, void);

        enum Flags {

        };

        // 0x00
        $Padding(0x00, 0x08);
        // 0x08
        int indent;
        // 0x0c
        $Padding(0x0c, 0x2c);
        // 0x20
        Flags flags;
        // 0x24
        $Padding(0x24, 0x2c);
        // 0x2c
        bool bEnabled;
        // 0x30
        $Padding(0x30, 0x3c);
        // 0x3c

        // 0x40
        $Padding(0x40, 0x50);
        // 0x50
	};
};

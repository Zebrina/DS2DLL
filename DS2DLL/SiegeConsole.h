#pragma once

namespace siege {
    class Console {
    public:
        $ConstMethod(0x00428afc, GetBottomUp, bool);
        $ConstMethod(0x00428b1c, GetRenderFilled, bool);
        $ConstMethod(0x00428b0b, GetRenderOutline, bool);
        $ConstMethod(0x00428b3e, GetFillColor, hexcolorcode);
        $ConstMethod(0x00428b4f, GetFootFillColor, hexcolorcode);
        $ConstMethod(0x00428b2d, GetOutlineColor, hexcolorcode);
        $Method(0x00428aff, SetBottomUp, void, bool value);
        $Method(0x00428b42, SetFillColor, void, hexcolorcode color);
        $Method(0x00428b53, SetFootFillColor, void, hexcolorcode color);
        $Method(0x00428b31, SetOutlineColor, void, hexcolorcode color);
        $Method(0x00428ad4, SetPosition, void, float x, float y);
        $Method(0x00428b20, SetRenderFilled, void, bool flag);
        $Method(0x00428b0f, SetRenderOutline, void, bool flag);
        $Method(0x00428ac1, SetSize, void, float width, float height);

        // 0x00
        bool bBottomUp;
        bool bRenderOutline;
        bool bRenderFilled;
        // 0x04
        hexcolorcode outlineColor;
        // 0x08
        hexcolorcode fillColor;
        // 0x0c
        hexcolorcode footFillColor;
        // 0x10
        $Padding(0x10, 0x34);
        // 0x34
        float width;
        // 0x38
        float height;
        // 0x3c
        float x;
        // 0x40
        float y;

    };
}

typedef siege::Console SiegeConsole;

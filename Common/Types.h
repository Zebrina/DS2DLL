#pragma once

#include <string>

typedef char				Int8;
typedef unsigned char		UInt8;
typedef short				Int16;
typedef unsigned short		UInt16;
typedef int					Int32;
typedef unsigned int		UInt32;
typedef long long			Int64;
typedef unsigned long long	UInt64;
//typedef std::string			String;

typedef char                sbyte;
typedef unsigned char	    byte;
typedef unsigned short	    ushort;
typedef unsigned int	    uint;
typedef long long           longint;
typedef unsigned long long  ulongint;
typedef std::string		    string;
typedef unsigned long       hexcolorcode;

enum : hexcolorcode {
    // X11 colors
    // Pink colors
    COLOR_PINK                    = 0xFFFFC0CB,
    COLOR_LIGHTPINK               = 0xFFFFB6C1,
    COLOR_HOTPINK                 = 0xFFFF69B4,
    COLOR_DEEPPINK                = 0xFFFF1493,
    COLOR_PALEVIOLETRED           = 0xFFDB7093,
    COLOR_MEDIUMVIOLETRED         = 0xFFC71585,
    // Red colors
    COLOR_LIGHTSALMON             = 0xFFFFA07A,
    COLOR_SALMON                  = 0xFFFA8072,
    COLOR_DARKSALMON              = 0xFFE9967A,
    COLOR_LIGHTCORAL              = 0xFFF08080,
    COLOR_INDIANRED               = 0xFFCD5C5C,
    COLOR_CRIMSON                 = 0xFFDC143C,
    COLOR_FIREBRICK               = 0xFFB22222,
    COLOR_DARKRED                 = 0xFF8B0000,
    COLOR_RED                     = 0xFFFF0000,
    // Orange colors
    COLOR_ORANGERED               = 0xFFFF4500,
    COLOR_TOMATO                  = 0xFFFF6347,
    COLOR_CORAL                   = 0xFFFF7F50,
    COLOR_DARKORANGE              = 0xFFFF8C00,
    COLOR_ORANGE                  = 0xFFFFA500,
    // Yellow colors
    COLOR_YELLOW                  = 0xFFFFFF00,
    COLOR_LIGHTYELLOW             = 0xFFFFFFE0,
    COLOR_LEMONCHIFFON            = 0xFFFFFACD,
    COLOR_LIGHTGOLDENRODYELLOW    = 0xFFFAFAD2,
    COLOR_PAPAYAWHIP              = 0xFFFFEFD5,
    COLOR_MOCCASIN                = 0xFFFFE4B5,
    COLOR_PEACHPUFF               = 0xFFFFDAB9,
    COLOR_PALEGOLDENROD           = 0xFFEEE8AA,
    COLOR_KHAKI                   = 0xFFF0E68C,
    COLOR_DARKKHAKI               = 0xFFBDB76B,
    COLOR_GOLD                    = 0xFFFFD700,
    // Brown colors
    COLOR_CORNSILK                = 0xFFFFF8DC,
    COLOR_BLANCHEDALMOND          = 0xFFFFEBCD,
    COLOR_BISQUE                  = 0xFFFFE4C4,
    COLOR_NAVAJOWHITE             = 0xFFFFDEAD,
    COLOR_WHEAT                   = 0xFFF5DEB3,
    COLOR_BURLYWOOD               = 0xFFDEB887,
    COLOR_TAN                     = 0xFFD2B48C,
    COLOR_ROSYBROWN               = 0xFFBC8F8F,
    COLOR_SANDYBROWN              = 0xFFF4A460,
    COLOR_GOLDENROD               = 0xFFDAA520,
    COLOR_DARKGOLDENROD           = 0xFFB8860B,
    COLOR_PERU                    = 0xFFCD853F,
    COLOR_CHOCOLATE               = 0xFFD2691E,
    COLOR_SADDLEBROWN             = 0xFF8B4513,
    COLOR_SIENNA                  = 0xFFA0522D,
    COLOR_BROWN                   = 0xFFA52A2A,
    COLOR_MAROON                  = 0xFF800000,
    // Green colors
    COLOR_DARKOLIVEGREEN          = 0xFF556B2F,
    COLOR_OLIVE                   = 0xFF808000,
    COLOR_OLIVEDRAB               = 0xFF6B8E23,
    COLOR_YELLOWGREEN             = 0xFF9ACD32,
    COLOR_LIMEGREEN               = 0xFF32CD32,
    COLOR_LIME                    = 0xFF00FF00,
    COLOR_LAWNGREEN               = 0xFF7CFC00,
    COLOR_CHARTREUSE              = 0xFF7FFF00,
    COLOR_GREENYELLOW             = 0xFFADFF2F,
    COLOR_SPRINGGREEN             = 0xFF00FF7F,
    COLOR_MEDIUMSPRINGGREEN       = 0xFF00FA9A,
    COLOR_LIGHTGREEN              = 0xFF90EE90,
    COLOR_PALEGREEN               = 0xFF98FB98,
    COLOR_DARKSEAGREEN            = 0xFF8FBC8F,
    COLOR_MEDIUMAQUAMARINE        = 0xFF66CDAA,
    COLOR_MEDIUMSEAGREEN          = 0xFF3CB371,
    COLOR_SEAGREEN                = 0xFF2E8B57,
    COLOR_FORESTGREEN             = 0xFF228B22,
    COLOR_GREEN                   = 0xFF008000,
    COLOR_DARKGREEN               = 0xFF006400,
    // Cyan colors
    COLOR_AQUA                    = 0xFF00FFFF,
    COLOR_CYAN                    = 0xFF00FFFF,
    COLOR_LIGHTCYAN               = 0xFFE0FFFF,
    COLOR_PALETURQUOISE           = 0xFFAFEEEE,
    COLOR_AQUAMARINE              = 0xFF7FFFD4,
    COLOR_TURQUOISE               = 0xFF40E0D0,
    COLOR_MEDIUMTURQUOISE         = 0xFF48D1CC,
    COLOR_DARKTURQUOISE           = 0xFF00CED1,
    COLOR_LIGHTSEAGREEN           = 0xFF20B2AA,
    COLOR_CADETBLUE               = 0xFF5F9EA0,
    COLOR_DARKCYAN                = 0xFF008B8B,
    COLOR_TEAL                    = 0xFF008080,
    // Blue colors
    COLOR_LIGHTSTEELBLUE          = 0xFFB0C4DE,
    COLOR_POWDERBLUE              = 0xFFB0E0E6,
    COLOR_LIGHTBLUE               = 0xFFADD8E6,
    COLOR_SKYBLUE                 = 0xFF87CEEB,
    COLOR_LIGHTSKYBLUE            = 0xFF87CEFA,
    COLOR_DEEPSKYBLUE             = 0xFF00BFFF,
    COLOR_DODGERBLUE              = 0xFF1E90FF,
    COLOR_CORNFLOWERBLUE          = 0xFF6495ED,
    COLOR_STEELBLUE               = 0xFF4682B4,
    COLOR_ROYALBLUE               = 0xFF4169E1,
    COLOR_BLUE                    = 0xFF0000FF,
    COLOR_MEDIUMBLUE              = 0xFF0000CD,
    COLOR_DARKBLUE                = 0xFF00008B,
    COLOR_NAVY                    = 0xFF000080,
    COLOR_MIDNIGHTBLUE            = 0xFF191970,
    // Purple, violet, and magenta colors
    COLOR_LAVENDER                = 0xFFE6E6FA,
    COLOR_THISTLE                 = 0xFFD8BFD8,
    COLOR_PLUM                    = 0xFFDDA0DD,
    COLOR_VIOLET                  = 0xFFEE82EE,
    COLOR_ORCHID                  = 0xFFDA70D6,
    COLOR_FUCHSIA                 = 0xFFFF00FF,
    COLOR_MAGENTA                 = 0xFFFF00FF,
    COLOR_MEDIUMORCHID            = 0xFFBA55D3,
    COLOR_MEDIUMPURPLE            = 0xFF9370DB,
    COLOR_BLUEVIOLET              = 0xFF8A2BE2,
    COLOR_DARKVIOLET              = 0xFF9400D3,
    COLOR_DARKORCHID              = 0xFF9932CC,
    COLOR_DARKMAGENTA             = 0xFF8B008B,
    COLOR_PURPLE                  = 0xFF800080,
    COLOR_INDIGO                  = 0xFF4B0082,
    COLOR_DARKSLATEBLUE           = 0xFF483D8B,
    COLOR_SLATEBLUE               = 0xFF6A5ACD,
    COLOR_MEDIUMSLATEBLUE         = 0xFF7B68EE,
    // White colors
    COLOR_WHITE                   = 0xFFFFFFFF,
    COLOR_SNOW                    = 0xFFFFFAFA,
    COLOR_HONEYDEW                = 0xFFF0FFF0,
    COLOR_MINTCREAM               = 0xFFF5FFFA,
    COLOR_AZURE                   = 0xFFF0FFFF,
    COLOR_ALICEBLUE               = 0xFFF0F8FF,
    COLOR_GHOSTWHITE              = 0xFFF8F8FF,
    COLOR_WHITESMOKE              = 0xFFF5F5F5,
    COLOR_SEASHELL                = 0xFFFFF5EE,
    COLOR_BEIGE                   = 0xFFF5F5DC,
    COLOR_OLDLACE                 = 0xFFFDF5E6,
    COLOR_FLORALWHITE             = 0xFFFFFAF0,
    COLOR_IVORY                   = 0xFFFFFFF0,
    COLOR_ANTIQUEWHITE            = 0xFFFAEBD7,
    COLOR_LINEN                   = 0xFFFAF0E6,
    COLOR_LAVENDERBLUSH           = 0xFFFFF0F5,
    COLOR_MISTYROSE               = 0xFFFFE4E1,
    // Gray and black colors
    COLOR_GAINSBORO               = 0xFFDCDCDC,
    COLOR_LIGHTGRAY               = 0xFFD3D3D3,
    COLOR_SILVER                  = 0xFFC0C0C0,
    COLOR_DARKGRAY                = 0xFFA9A9A9,
    COLOR_GRAY                    = 0xFF808080,
    COLOR_DIMGRAY                 = 0xFF696969,
    COLOR_LIGHTSLATEGRAY          = 0xFF778899,
    COLOR_SLATEGRAY               = 0xFF708090,
    COLOR_DARKSLATEGRAY           = 0xFF2F4F4F,
    COLOR_BLACK                   = 0xFF000000,
};

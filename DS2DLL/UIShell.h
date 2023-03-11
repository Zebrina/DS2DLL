#pragma once

#include "DS2DLL.h"
#include "GPFastVector.h"
#include "GPString.h"
#include "GUIInterface.h"
#include "UICursor.h"
#include "UITextureManager.h"
#include "UIWindow.h"
#include <map>
#include <string>
#include <unordered_map>

enum eUIWindowExistanceState {
	WES_NONEXISTING, // ??
    WES_UNKNOWN_1,
};

class UIShell {
public:
    static std::unordered_map<const char*, hexcolorcode, StrHasher<uint, ToLower>, StrEquals<ToLower>> ToolTipColorLookup;

    struct ToolTipColor {
        // 0x00
        const char* name;
        // 0x04
        $Padding(0x04, 0x10);
        // 0x10
        hexcolorcode color;
    };

    // Internally this seems to be a std::map.
    struct ToolTipColorMap {
        // 0x00
        $Padding(0x00, 0x04);
        // 0x04
        ToolTipColor* tail; // ??
        // 0x08
        uint count;
    };

	$Singleton(UIShell, 0x00503586);

	$Method(0x00742a10, EnableGroup, void, const char* unk1, bool unk2, bool unk3, const char* unk4);
	$Method(0x00742900, SendNotify, void, const char* unk1, const char* unk2, const char* unk3);
	$Method(0x0074d860, ActivateInterface, bool, const GPBString& unk1, bool unk2, float unk3);
	$Method(0x00456d5f, ActivateInterface, bool, const GPBString& unk1, bool unk2);
	$Method(0x0074ce70, AddChildInterfaceToInterface, bool, const GPBString& unk1, const GPBString& unk2);
	$Method(0x0074d910, AddInterfaceLayer, bool, const GPBString& unk1, const GPBString& unk2);
	$Method(0x00745490, DeleteUIWindow, bool, UIWindow* unk1);
	$Method(0x0073d1e0, DoWindowsOverlap, bool, UIWindow* unk1, UIWindow* unk2);
	$Method(0x00742f10, DoWindowsOverlap, bool, const char* unk1, const char* unk2, const char* unk3, const char* unk4);
	$Method(0x00485de5, GetGridPlace, bool);
	$ConstMethod(0x00502a0f, GetGuiDisabled, bool);
	$Method(0x00467c12, GetItemActive, bool);
	$ConstMethod(0x00502a5c, GetLButtonDown, bool);
	$ConstMethod(0x00502a73, GetRButtonDown, bool);
	$ConstMethod(0x004281b2, GetVisible, bool);
	$Method(0x0073f300, IsInterfaceActive, bool, const GPBString& unk1);
	$Method(0x00740150, IsInterfaceHidden, bool, const GPBString& unk1);
	$Method(0x007414d0, IsInterfaceMarkedForDeactivation, bool, const GPBString& unk1);
	$Method(0x0073f910, IsInterfaceVisible, bool, const GPBString& unk1);
	$Method(0x00502a31, PlaceInterfaceOnBottom, bool, const char* unk1);
	$Method(0x00749bc0, PlaceInterfaceOnBottom, bool, GUInterface* unk1);
	$Method(0x00502a16, PlaceInterfaceOnTop, bool, const char* unk1);
	$Method(0x00749b60, PlaceInterfaceOnTop, bool, GUInterface* unk1);
	$Method(0x00742b60, SendUIMessage, bool, eUIMessage unk1, const char* windowName, const char* interfaceName);
	$Method(0x005029fb, SendUIMessage, bool, eUIMessage unk1, const char* windowName);
	$Method(0x00740340, SendUIMessageToInterface, bool, eUIMessage unk1, const char* unk2);
	$Method(0x00748300, SetInterfaceDrawOrder, bool, GUInterface* unk1, int unk2);
	$Method(0x00741500, UnMarkInterfaceForDeactivation, bool, const GPBString& unk1);
	$Method(0x00748d40, UpdateWindowDrawOrder, bool, const GPBString& unk1, const GPBString& unk2, int unk3);
	$Method(0x004281c5, GetActiveCursor, UICursor*);
	$Method(0x00742ef0, LoadUICursor, UICursor*, const GPBString& unk1, const GPBString& unk2);
	$Method(0x0074cf20, CreateUIWindow, UIWindow*, const char* interfaceName, const char* windowTemplate, const char* windowName);
	$Method(0x00742200, FindUIWindow, UIWindow*, const char* windowName, const char* interfaceName, eUIWindowExistanceState unk3);
	$Method(0x0041041c, FindUIWindow, UIWindow*, const char* windowName, const char* interfaceName);
	$Method(0x0044a2d7, FindUIWindow, UIWindow*, const char* windowName, eUIWindowExistanceState unk2);
	$Method(0x00485dbb, FindUIWindow, UIWindow*, const char* windowName);
	$Method(0x004a45b5, GetRolloverName, const GPBString&);
	$Method(0x0073f5f0, GetActiveItemId, int);
	$ConstMethod(0x00472c78, GetMouseX, int);
	$ConstMethod(0x00472c7f, GetMouseY, int);
	$Method(0x0073d170, GetNumActiveItems, int, const GPBString& unused);
	$ConstMethod(0x0043d831, GetScreenHeight, int);
	$ConstMethod(0x0043d82d, GetScreenWidth, int);
	$Method(0x00740320, FindInterface, GUInterface*, const char* name);
	$Method(0x007403b0, GetCommunicationGoid, uint, const char* unk1);
	$Method(0x00746c10, AddActiveItem, void, UIWindow* unk1);
	$Method(0x0074a8e0, AddBlankInterface, void, const GPBString& unk1);
	$Method(0x0074b5a0, AddWindowToInterface, void, UIWindow* unk1, const GPBString& unk2, bool unk3);
	$Method(0x00477e0b, ClearActiveItems, void);
	$Method(0x0074d440, DeactivateInterface, void, const GPBString& unk1);
	$Method(0x0074a2c0, DeactivateInterfaceWindows, void, const GPBString& unk1);
	$Method(0x00744c50, HideGroup, void, const char* unk1, bool unk2, const char* unk3);
	$Method(0x00741f90, HideInterface, void, const GPBString& unk1, float unk2);
	$Method(0x0040131a, HideInterface, void, const GPBString& unk1);
	$Method(0x0074c850, MarkInterfaceForActivation, void, const GPBString& unk1, bool unk2);
	$Method(0x0074a3a0, MarkInterfaceForDeactivation, void, const GPBString& unk1);
	$Method(0x00749c00, MoveWindowsFromLayerToLayer, void, const GPBString& unk1, const GPBString& unk2, const GPBString& unk3);
	$Method(0x0073d230, PlayUISound, void, const GPBString& unk1);
	$Method(0x00744ca0, RemoveActiveItem, void, UIWindow* unk1);
	$Method(0x0074aa90, RemoveInterfaceLayer, void, const GPBString& unk1, const GPBString& unk2);
	$Method(0x00502a4c, SetActiveCursor, void, UICursor* unk1);
	$Method(0x007403e0, SetCommunicationGoid, void, const char* unk1, uint unk2);
	$Method(0x00472c86, SetGridPlace, void, bool unk1);
	$Method(0x0073f2b0, SetGuiDisabled, void, bool unk1, float unk2);
	$Method(0x00502a63, SetLButtonDown, void, bool unk1);
	$Method(0x00502a8a, SetMouseX, void, int unk1);
	$Method(0x00502a9a, SetMouseY, void, int unk1);
	$Method(0x00502a7a, SetRButtonDown, void, bool unk1);
	$Method(0x00470344, SetRolloverName, void, const GPBString& unk1);
	$Method(0x004281a2, SetVisible, void, bool unk1);
	$Method(0x00749ad0, ShiftGroup, void, const GPBString& unk1, const GPBString& unk2, int unk3, int unk4);
	$Method(0x00749950, ShiftInterface, void, const GPBString& unk1, int unk2, int unk3);
	$Method(0x00744c30, ShowGroup, void, const char* unk1, bool unk2, const char* unk3);
	$Method(0x00741e90, ShowInterface, void, const GPBString& unk1, float unk2);
	$Method(0x00401305, ShowInterface, void, const GPBString& unk1);
	$Method(0x0074d520, ShowInterfaceOnTop, void, const GPBString& unk1, float unk2);
	$Method(0x0049b60c, ShowInterfaceOnTop, void, const GPBString& unk1);

    hexcolorcode GetToolTipColor(const char* tooltipName, hexcolorcode defaultValue = COLOR_WHITE) const;

    $Method(0x007413e0, InternalInitializeScreenSize, void, int width, int height);

	// 0x000
	$Padding(0x000, 0x054);
	// 0x054
	int numActiveItems;
	// 0x058
	$Padding(0x058, 0x078);
	// 0x078
	int screenWidth;
	// 0x07c
	int screenHeight;
	// 0x080
	$Padding(0x080, 0x084);
	// 0x084
	UITextureManager* textureManager;
	// 0x088
	$Padding(0x088, 0x090);
	// 0x090
	int mouseX;
	// 0x094
	int mouseY;
	// 0x098
	bool lButtonDown;
	bool rButtonDown;
    bool b09A;
    bool b09B;
	// 0x09c
	$Padding(0x09c, 0x0a0);
	// 0x0a0
	bool bVisible;
    bool b0A1;
    bool b0A2;
    bool b0A3;
	// 0x0a4
	$Padding(0x0a4, 0x0b0);
    // 0x0b0
    bool b0B0;
    bool bShowTooltips;
    bool b0B2;
    bool b0B3;
    // 0x0b4
    $Padding(0x0b4, 0x0dc);
	// 0x0dd
    bool b0DC;
	bool bGridPlace;
    bool b0DE;
    bool b0DF;
	// 0x0e0
    ToolTipColorMap tooltipColors;
    //void* /*GPFastVector<ToolTipColor>*/ tooltipColors;
    // 0x0e4
    //void* ptr0E4;
    // 0x0e8
    //uint numTooltipColors;
	// 0x0ec
	bool bItemActive;
    bool b0ED;
	bool b0EF;
	// 0x0f0
	GPBString rolloverName;
	// 0x0f4
	$Padding(0x0f4, 0x108);
	// 0x108
	UICursor* activeCursor;
	// 0x10c
	$Padding(0x10c, 0x118);
    // 0x118
    uint timer; // ??
	// 0x11c
    $Padding(0x11c, 0x1cc);
	// 0x1cc
	bool bGuiDisabled;
	bool b1CD;
	bool b1CE;
	bool b1CF;
	// 0x1d0
	$Padding(0x1d0, 0x1d8);

private:
    $ConstMethod(0x00742530, GetToolTipColorInternal, hexcolorcode, const char* tooltipName, hexcolorcode defaultValue = COLOR_WHITE);
    FEX hexcolorcode FUBI_RENAME(GetToolTipColor)(const GPBString& tooltipName, hexcolorcode defaultValue) const;
    FEX hexcolorcode FUBI_RENAME(GetToolTipColor)(const GPBString& tooltipName) const;
};

STATIC_ASSERT(sizeof(UIShell) == 0x1d8);
STATIC_ASSERT_OFFSETOF(UIShell, numActiveItems, 0x054);
STATIC_ASSERT_OFFSETOF(UIShell, screenWidth, 0x078);
STATIC_ASSERT_OFFSETOF(UIShell, textureManager, 0x084);
STATIC_ASSERT_OFFSETOF(UIShell, mouseX, 0x090);
STATIC_ASSERT_OFFSETOF(UIShell, bVisible, 0x0a0);
STATIC_ASSERT_OFFSETOF(UIShell, bGridPlace, 0x0dd);
STATIC_ASSERT_OFFSETOF(UIShell, bItemActive, 0x0ec);
STATIC_ASSERT_OFFSETOF(UIShell, rolloverName, 0x0f0);
STATIC_ASSERT_OFFSETOF(UIShell, bGuiDisabled, 0x1cc);

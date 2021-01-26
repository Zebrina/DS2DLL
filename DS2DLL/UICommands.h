#pragma once

#include "Enums.h"
#include "GoidScid.h"
#include "SiegePos.h"

class UICommands {
public:
	$Singleton(UICommands, 0x00429eae);

	$Method(0x0046b6ac, CheckTalkBusy, bool, Go* unk1, Go* unk2);
	$Method(0x00469092, CommandUsePower, bool, const Goid* unk1, const Goid* unk2, bool unk3);
	$Method(0x0046910a, CommandUsePowerPosition, bool, const Goid* unk1, const SiegePos& unk2, bool unk3);
	$Method(0x00469ac7, ContinueSelectionHoldingOnTarget, bool, Go* unk1, const Goid* unk2, uint unk3);
	$Method(0x00428e89, GetSelectionHolding, bool);
	$Method(0x00428e67, IsActiveSkillMode, bool);
	$Method(0x0046d18d, IsActiveSkillMode, bool, bool unk1);
	$Method(0x00428e94, GetCurrentPowerRolloverObject, const Goid*);
	$Method(0x00428e8d, GetPowerBarUser, const Goid*);
	$Method(0x00428e85, GetSelectionHoldingObject, const Goid*);
	$Method(0x00428ea2, GetAreaEffectRadius, float);
	$Method(0x00428e9b, GetAreaEffectPosition, SiegePos&);
	$Method(0x0046d1b9, ActivatePower, void, int characterIndex);
	$Method(0x00469537, CommandTalk, void, Go* unk1, bool unk2);
	$Method(0x00469503, CommandTalk, void, Go* unk1, Go* unk2, eActionOrigin unk3);
	$Method(0x0046d6c2, ContextActionOnTerrain, void);
	$Method(0x00467b52, DisplayInvalidPowerTargetMessage, void);
	$Method(0x00469755, DisplayMaxBuffsMessage, void, const Goid* unk1);
	$Method(0x004697e5, DisplayMaxDebuffsMessage, void, const Goid* unk1);
	$Method(0x004696c5, DisplayNoManaMessage, void, const Goid* unk1);
	$Method(0x00469875, DisplayNoSummonMessage, void, const Goid* unk1);
	$Method(0x00467a72, DisplayPetTalkMessage, void);
	$Method(0x00467ae2, DisplayTownPortalMessage, void);
	$Method(0x0046a0f7, RCDisplayNoManaMessage, void, const Goid* unk1, uint unk2);
	$Method(0x00469dbf, RCResetDelayedPower, void, const Goid* unk1, uint unk2);
	$Method(0x0046b32c, RCTalkBusy, void, Go* unk1, uint unk2);
	$Method(0x0046c160, ResetActivatedPower, void);
	$Method(0x0046a485, RSActivatePowerPreLaunchFFX, void, const Goid* unk1);
	$Method(0x0046a614, RSResetDelayedPower, void, const Goid* unk1);
	$Method(0x0046b87d, RSTalk, void, Go* unk1, Go* unk2, eActionOrigin unk3);
	$Method(0x0046aa20, SDisplayNoManaMessage, void, const Goid* unk1);
	$Method(0x0046a733, SelectionActionOnTerrain, void);
	$Method(0x00428e6f, StartSelectionHolding, void, const Goid* unk1);
	$Method(0x00428e7c, StopSelectionHolding, void);
	$Method(0x0046b257, TalkBusy, void, Go* unk1);

	// 0x00
	$Padding(0x00, 0xc0);
};

STATIC_ASSERT(sizeof(UICommands) >= 0xc0);

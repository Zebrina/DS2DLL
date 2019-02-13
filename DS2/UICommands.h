#pragma once

#include "ClassMacros.h"

class UICommands {
public:
	DefineSingleton(UICommands, 0x429eae);

	/*UICommands*/ private: /*static*/ UICommands* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429eae
	DefineMethod(CheckTalkBusy, 0x46b6ac, bool, Params(Go* unk1, Go* unk2), Args(Go* unk1, Go* unk2));
	DefineMethod(CommandUsePower, 0x469092, bool, Params(const Goid_* unk1, const Goid_* unk2, bool unk3), Args(const Goid_* unk1, const Goid_* unk2, bool unk3));
	DefineMethod(CommandUsePowerPosition, 0x46910a, bool, Params(const Goid_* unk1, const SiegePos& unk2, bool unk3), Args(const Goid_* unk1, const SiegePos& unk2, bool unk3));
	DefineMethod(ContinueSelectionHoldingOnTarget, 0x469ac7, bool, Params(Go* unk1, const Goid_* unk2, unsigned long unk3), Args(Go* unk1, const Goid_* unk2, unsigned long unk3));
	DefineMethod(GetSelectionHolding, 0x428e89, bool, Params(), Args());
	DefineMethod(IsActiveSkillMode, 0x428e67, bool, Params(), Args());
	DefineMethod(IsActiveSkillMode, 0x46d18d, bool, Params(bool unk1), Args(bool unk1));
	/*UICommands*/ public: const Goid_* /*__thiscall*/ GetCurrentPowerRolloverObject(); //0x00428e94
	/*UICommands*/ public: const Goid_* /*__thiscall*/ GetPowerBarUser(); //0x00428e8d
	/*UICommands*/ public: const Goid_* /*__thiscall*/ GetSelectionHoldingObject(); //0x00428e85
	DefineMethod(GetAreaEffectRadius, 0x428ea2, float, Params(), Args());
	/*UICommands*/ public: SiegePos& /*__thiscall*/ GetAreaEffectPosition(); //0x00428e9b
	DefineMethod(ActivatePower, 0x46d1b9, void, Params(int unk1), Args(int unk1));
	DefineMethod(CommandTalk, 0x469537, void, Params(Go* unk1, bool unk2), Args(Go* unk1, bool unk2));
	DefineMethod(CommandTalk, 0x469503, void, Params(Go* unk1, Go* unk2, eActionOrigin unk3), Args(Go* unk1, Go* unk2, eActionOrigin unk3));
	DefineMethod(ContextActionOnTerrain, 0x46d6c2, void, Params(), Args());
	DefineMethod(DisplayInvalidPowerTargetMessage, 0x467b52, void, Params(), Args());
	DefineMethod(DisplayMaxBuffsMessage, 0x469755, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(DisplayMaxDebuffsMessage, 0x4697e5, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(DisplayNoManaMessage, 0x4696c5, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(DisplayNoSummonMessage, 0x469875, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(DisplayPetTalkMessage, 0x467a72, void, Params(), Args());
	DefineMethod(DisplayTownPortalMessage, 0x467ae2, void, Params(), Args());
	DefineMethod(RCDisplayNoManaMessage, 0x46a0f7, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCResetDelayedPower, 0x469dbf, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCTalkBusy, 0x46b32c, void, Params(Go* unk1, unsigned long unk2), Args(Go* unk1, unsigned long unk2));
	DefineMethod(ResetActivatedPower, 0x46c160, void, Params(), Args());
	DefineMethod(RSActivatePowerPreLaunchFFX, 0x46a485, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSResetDelayedPower, 0x46a614, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSTalk, 0x46b87d, void, Params(Go* unk1, Go* unk2, eActionOrigin unk3), Args(Go* unk1, Go* unk2, eActionOrigin unk3));
	DefineMethod(SDisplayNoManaMessage, 0x46aa20, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SelectionActionOnTerrain, 0x46a733, void, Params(), Args());
	DefineMethod(StartSelectionHolding, 0x428e6f, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(StopSelectionHolding, 0x428e7c, void, Params(), Args());
	DefineMethod(TalkBusy, 0x46b257, void, Params(Go* unk1), Args(Go* unk1));
};

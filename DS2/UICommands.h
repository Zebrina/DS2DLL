#pragma once

#include "ClassMacros.h"

class UICommands {
public:
	DefineSingleton(UICommands, 0x429eae);

	/*UICommands*/ private: /*static*/ UICommands* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429eae
	/*UICommands*/ public: bool /*__thiscall*/ CheckTalkBusy(Go* unk1, Go* unk2); //0x0046b6ac
	/*UICommands*/ public: bool /*__thiscall*/ CommandUsePower(const Goid_* unk1, const Goid_* unk2, bool unk3); //0x00469092
	/*UICommands*/ public: bool /*__thiscall*/ CommandUsePowerPosition(const Goid_* unk1, const SiegePos& unk2, bool unk3); //0x0046910a
	/*UICommands*/ public: bool /*__thiscall*/ ContinueSelectionHoldingOnTarget(Go* unk1, const Goid_* unk2, unsigned long unk3); //0x00469ac7
	/*UICommands*/ public: bool /*__thiscall*/ GetSelectionHolding(); //0x00428e89
	/*UICommands*/ public: bool /*__thiscall*/ IsActiveSkillMode(); //0x00428e67
	/*UICommands*/ public: bool /*__thiscall*/ IsActiveSkillMode(bool unk1); //0x0046d18d
	/*UICommands*/ public: const Goid_* /*__thiscall*/ GetCurrentPowerRolloverObject(); //0x00428e94
	/*UICommands*/ public: const Goid_* /*__thiscall*/ GetPowerBarUser(); //0x00428e8d
	/*UICommands*/ public: const Goid_* /*__thiscall*/ GetSelectionHoldingObject(); //0x00428e85
	/*UICommands*/ public: float /*__thiscall*/ GetAreaEffectRadius(); //0x00428ea2
	/*UICommands*/ public: SiegePos& /*__thiscall*/ GetAreaEffectPosition(); //0x00428e9b
	/*UICommands*/ public: void /*__thiscall*/ ActivatePower(int unk1); //0x0046d1b9
	/*UICommands*/ public: void /*__thiscall*/ CommandTalk(Go* unk1, bool unk2); //0x00469537
	/*UICommands*/ public: void /*__thiscall*/ CommandTalk(Go* unk1, Go* unk2, eActionOrigin unk3); //0x00469503
	/*UICommands*/ public: void /*__thiscall*/ ContextActionOnTerrain(); //0x0046d6c2
	/*UICommands*/ public: void /*__thiscall*/ DisplayInvalidPowerTargetMessage(); //0x00467b52
	/*UICommands*/ public: void /*__thiscall*/ DisplayMaxBuffsMessage(const Goid_* unk1); //0x00469755
	/*UICommands*/ public: void /*__thiscall*/ DisplayMaxDebuffsMessage(const Goid_* unk1); //0x004697e5
	/*UICommands*/ public: void /*__thiscall*/ DisplayNoManaMessage(const Goid_* unk1); //0x004696c5
	/*UICommands*/ public: void /*__thiscall*/ DisplayNoSummonMessage(const Goid_* unk1); //0x00469875
	/*UICommands*/ public: void /*__thiscall*/ DisplayPetTalkMessage(); //0x00467a72
	/*UICommands*/ public: void /*__thiscall*/ DisplayTownPortalMessage(); //0x00467ae2
	/*UICommands*/ public: void /*__thiscall*/ RCDisplayNoManaMessage(const Goid_* unk1, unsigned long unk2); //0x0046a0f7
	/*UICommands*/ public: void /*__thiscall*/ RCResetDelayedPower(const Goid_* unk1, unsigned long unk2); //0x00469dbf
	/*UICommands*/ public: void /*__thiscall*/ RCTalkBusy(Go* unk1, unsigned long unk2); //0x0046b32c
	/*UICommands*/ public: void /*__thiscall*/ ResetActivatedPower(); //0x0046c160
	/*UICommands*/ public: void /*__thiscall*/ RSActivatePowerPreLaunchFFX(const Goid_* unk1); //0x0046a485
	/*UICommands*/ public: void /*__thiscall*/ RSResetDelayedPower(const Goid_* unk1); //0x0046a614
	/*UICommands*/ public: void /*__thiscall*/ RSTalk(Go* unk1, Go* unk2, eActionOrigin unk3); //0x0046b87d
	/*UICommands*/ public: void /*__thiscall*/ SDisplayNoManaMessage(const Goid_* unk1); //0x0046aa20
	/*UICommands*/ public: void /*__thiscall*/ SelectionActionOnTerrain(); //0x0046a733
	/*UICommands*/ public: void /*__thiscall*/ StartSelectionHolding(const Goid_* unk1); //0x00428e6f
	/*UICommands*/ public: void /*__thiscall*/ StopSelectionHolding(); //0x00428e7c
	/*UICommands*/ public: void /*__thiscall*/ TalkBusy(Go* unk1); //0x0046b257
};

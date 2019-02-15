#pragma once

#include "MoodSetting.h"

#include "ClassMacros.h"

class Mood {
public:
	DefineSingleton(Mood, 0x414271);

	DefineMethod(IsAmbientTrackPlaying, 0x412a25, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsStandardTrackPlaying, 0x412a5a, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetGoRequestedMood, 0x91de81, const gpbstring<char>&, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(GetActiveDriftGo, 0x4129fa, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetActiveFogGo, 0x4129ee, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetActiveMusicGo, 0x412a02, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetActivePartyLightGo, 0x412a0a, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetActiveRainGo, 0x4129f2, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetActiveSkyboxGo, 0x412a06, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetActiveSnowGo, 0x4129f6, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetActiveSunGo, 0x4129ea, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetActiveWindGo, 0x4129fe, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetOriginalMoodSetting, 0x91e068, const MoodSetting&, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetGoMoodSetting, 0x91dff6, MoodSetting&, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(GetMoodSetting, 0x91e03c, MoodSetting&, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(FadeMoodVolume, 0x91d78c, void, Params(float unk1, float unk2), Args(unk1, unk2));
	DefineMethod(ForceUpdateDrift, 0x91d656, void, Params(float unk1), Args(unk1));
	DefineMethod(ForceUpdateFog, 0x91d53d, void, Params(float unk1), Args(unk1));
	DefineMethod(ForceUpdateMusic, 0x91ce19, void, Params(float unk1), Args(unk1));
	DefineMethod(ForceUpdatePartyLight, 0x91d6eb, void, Params(float unk1), Args(unk1));
	DefineMethod(ForceUpdateRain, 0x91d5d2, void, Params(float unk1), Args(unk1));
	DefineMethod(ForceUpdateSkybox, 0x91ce30, void, Params(float unk1), Args(unk1));
	DefineMethod(ForceUpdateSnow, 0x91d614, void, Params(float unk1), Args(unk1));
	DefineMethod(ForceUpdateWind, 0x91d698, void, Params(float unk1), Args(unk1));
	DefineMethod(PlayAmbientTrack, 0x412a0e, void, Params(float unk1), Args(unk1));
	DefineMethod(PlayStandardTrack, 0x412a43, void, Params(float unk1), Args(unk1));
	DefineMethod(RegisterMoodRequest, 0x921503, void, Params(const Goid_* unk1, const gpbstring<char>& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(RemoveFogCorrection, 0x91ce47, void, Params(float unk1), Args(unk1));
	DefineMethod(ResetMoodVolume, 0x91d7d5, void, Params(float unk1), Args(unk1));
	DefineMethod(RestoreFogCorrection, 0x91ce6d, void, Params(float unk1), Args(unk1));
	DefineMethod(SetActiveDriftGo, 0x91e53c, void, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetActiveFogGo, 0x91e383, void, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetActiveMusicGo, 0x91e639, void, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetActivePartyLightGo, 0x91e6f3, void, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetActiveRainGo, 0x91e450, void, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetActiveSkyboxGo, 0x91e696, void, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetActiveSnowGo, 0x91e4c6, void, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetActiveSunGo, 0x91e326, void, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetActiveWindGo, 0x91e5b2, void, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetMood, 0x91e093, void, Params(const gpbstring<char>& unk1, float unk2), Args(unk1, unk2));
	DefineMethod(StopAmbientTrack, 0x412a2c, void, Params(float unk1), Args(unk1));
	DefineMethod(StopStandardTrack, 0x412a61, void, Params(float unk1), Args(unk1));
};

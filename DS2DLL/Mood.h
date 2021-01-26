#pragma once

#include "MoodSetting.h"

class Mood {
public:
	$Singleton(Mood, 0x00414271);

	$Method(0x00412a25, IsAmbientTrackPlaying, bool);
	$Method(0x00412a5a, IsStandardTrackPlaying, bool);
	$Method(0x0091de81, GetGoRequestedMood, const GPBString&, const Goid* unk1);
	$Method(0x004129fa, GetActiveDriftGo, const Goid*);
	$Method(0x004129ee, GetActiveFogGo, const Goid*);
	$Method(0x00412a02, GetActiveMusicGo, const Goid*);
	$Method(0x00412a0a, GetActivePartyLightGo, const Goid*);
	$Method(0x004129f2, GetActiveRainGo, const Goid*);
	$Method(0x00412a06, GetActiveSkyboxGo, const Goid*);
	$Method(0x004129f6, GetActiveSnowGo, const Goid*);
	$Method(0x004129ea, GetActiveSunGo, const Goid*);
	$Method(0x004129fe, GetActiveWindGo, const Goid*);
	$Method(0x0091e068, GetOriginalMoodSetting, const MoodSetting&, const GPBString& unk1);
	$Method(0x0091dff6, GetGoMoodSetting, MoodSetting&, const Goid* unk1);
	$Method(0x0091e03c, GetMoodSetting, MoodSetting&, const GPBString& unk1);
	$Method(0x0091d78c, FadeMoodVolume, void, float unk1, float unk2);
	$Method(0x0091d656, ForceUpdateDrift, void, float unk1);
	$Method(0x0091d53d, ForceUpdateFog, void, float unk1);
	$Method(0x0091ce19, ForceUpdateMusic, void, float unk1);
	$Method(0x0091d6eb, ForceUpdatePartyLight, void, float unk1);
	$Method(0x0091d5d2, ForceUpdateRain, void, float unk1);
	$Method(0x0091ce30, ForceUpdateSkybox, void, float unk1);
	$Method(0x0091d614, ForceUpdateSnow, void, float unk1);
	$Method(0x0091d698, ForceUpdateWind, void, float unk1);
	$Method(0x00412a0e, PlayAmbientTrack, void, float unk1);
	$Method(0x00412a43, PlayStandardTrack, void, float unk1);
	$Method(0x00921503, RegisterMoodRequest, void, const Goid* unk1, const GPBString& unk2, bool unk3);
	$Method(0x0091ce47, RemoveFogCorrection, void, float unk1);
	$Method(0x0091d7d5, ResetMoodVolume, void, float unk1);
	$Method(0x0091ce6d, RestoreFogCorrection, void, float unk1);
	$Method(0x0091e53c, SetActiveDriftGo, void, const Goid* unk1, float unk2);
	$Method(0x0091e383, SetActiveFogGo, void, const Goid* unk1, float unk2);
	$Method(0x0091e639, SetActiveMusicGo, void, const Goid* unk1, float unk2);
	$Method(0x0091e6f3, SetActivePartyLightGo, void, const Goid* unk1, float unk2);
	$Method(0x0091e450, SetActiveRainGo, void, const Goid* unk1, float unk2);
	$Method(0x0091e696, SetActiveSkyboxGo, void, const Goid* unk1, float unk2);
	$Method(0x0091e4c6, SetActiveSnowGo, void, const Goid* unk1, float unk2);
	$Method(0x0091e326, SetActiveSunGo, void, const Goid* unk1, float unk2);
	$Method(0x0091e5b2, SetActiveWindGo, void, const Goid* unk1, float unk2);
	$Method(0x0091e093, SetMood, void, const GPBString& unk1, float unk2);
	$Method(0x00412a2c, StopAmbientTrack, void, float unk1);
	$Method(0x00412a61, StopStandardTrack, void, float unk1);

    // 0x000
    $Padding(0x000, 0x180);
};

STATIC_ASSERT(sizeof(Mood) == 0x180);

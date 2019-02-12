#pragma once

#include "ClassMacros.h"

class Mood {
public:
	DefineSingleton(Mood, 0x414271);

	/*Mood*/ private: /*static*/ Mood* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414271
	/*Mood*/ public: bool /*__thiscall*/ IsAmbientTrackPlaying(); //0x00412a25
	/*Mood*/ public: bool /*__thiscall*/ IsStandardTrackPlaying(); //0x00412a5a
	/*Mood*/ public: const gpbstring<char>& /*__thiscall*/ GetGoRequestedMood(const Goid_* unk1); //0x0091de81
	/*Mood*/ public: const Goid_* /*__thiscall*/ GetActiveDriftGo(); //0x004129fa
	/*Mood*/ public: const Goid_* /*__thiscall*/ GetActiveFogGo(); //0x004129ee
	/*Mood*/ public: const Goid_* /*__thiscall*/ GetActiveMusicGo(); //0x00412a02
	/*Mood*/ public: const Goid_* /*__thiscall*/ GetActivePartyLightGo(); //0x00412a0a
	/*Mood*/ public: const Goid_* /*__thiscall*/ GetActiveRainGo(); //0x004129f2
	/*Mood*/ public: const Goid_* /*__thiscall*/ GetActiveSkyboxGo(); //0x00412a06
	/*Mood*/ public: const Goid_* /*__thiscall*/ GetActiveSnowGo(); //0x004129f6
	/*Mood*/ public: const Goid_* /*__thiscall*/ GetActiveSunGo(); //0x004129ea
	/*Mood*/ public: const Goid_* /*__thiscall*/ GetActiveWindGo(); //0x004129fe
	/*Mood*/ public: const MoodSetting& /*__thiscall*/ GetOriginalMoodSetting(const gpbstring<char>& unk1); //0x0091e068
	/*Mood*/ public: MoodSetting& /*__thiscall*/ GetGoMoodSetting(const Goid_* unk1); //0x0091dff6
	/*Mood*/ public: MoodSetting& /*__thiscall*/ GetMoodSetting(const gpbstring<char>& unk1); //0x0091e03c
	/*Mood*/ public: void /*__thiscall*/ FadeMoodVolume(float unk1, float unk2); //0x0091d78c
	/*Mood*/ public: void /*__thiscall*/ ForceUpdateDrift(float unk1); //0x0091d656
	/*Mood*/ public: void /*__thiscall*/ ForceUpdateFog(float unk1); //0x0091d53d
	/*Mood*/ public: void /*__thiscall*/ ForceUpdateMusic(float unk1); //0x0091ce19
	/*Mood*/ public: void /*__thiscall*/ ForceUpdatePartyLight(float unk1); //0x0091d6eb
	/*Mood*/ public: void /*__thiscall*/ ForceUpdateRain(float unk1); //0x0091d5d2
	/*Mood*/ public: void /*__thiscall*/ ForceUpdateSkybox(float unk1); //0x0091ce30
	/*Mood*/ public: void /*__thiscall*/ ForceUpdateSnow(float unk1); //0x0091d614
	/*Mood*/ public: void /*__thiscall*/ ForceUpdateWind(float unk1); //0x0091d698
	/*Mood*/ public: void /*__thiscall*/ PlayAmbientTrack(float unk1); //0x00412a0e
	/*Mood*/ public: void /*__thiscall*/ PlayStandardTrack(float unk1); //0x00412a43
	/*Mood*/ public: void /*__thiscall*/ RegisterMoodRequest(const Goid_* unk1, const gpbstring<char>& unk2, bool unk3); //0x00921503
	/*Mood*/ public: void /*__thiscall*/ RemoveFogCorrection(float unk1); //0x0091ce47
	/*Mood*/ public: void /*__thiscall*/ ResetMoodVolume(float unk1); //0x0091d7d5
	/*Mood*/ public: void /*__thiscall*/ RestoreFogCorrection(float unk1); //0x0091ce6d
	/*Mood*/ public: void /*__thiscall*/ SetActiveDriftGo(const Goid_* unk1, float unk2); //0x0091e53c
	/*Mood*/ public: void /*__thiscall*/ SetActiveFogGo(const Goid_* unk1, float unk2); //0x0091e383
	/*Mood*/ public: void /*__thiscall*/ SetActiveMusicGo(const Goid_* unk1, float unk2); //0x0091e639
	/*Mood*/ public: void /*__thiscall*/ SetActivePartyLightGo(const Goid_* unk1, float unk2); //0x0091e6f3
	/*Mood*/ public: void /*__thiscall*/ SetActiveRainGo(const Goid_* unk1, float unk2); //0x0091e450
	/*Mood*/ public: void /*__thiscall*/ SetActiveSkyboxGo(const Goid_* unk1, float unk2); //0x0091e696
	/*Mood*/ public: void /*__thiscall*/ SetActiveSnowGo(const Goid_* unk1, float unk2); //0x0091e4c6
	/*Mood*/ public: void /*__thiscall*/ SetActiveSunGo(const Goid_* unk1, float unk2); //0x0091e326
	/*Mood*/ public: void /*__thiscall*/ SetActiveWindGo(const Goid_* unk1, float unk2); //0x0091e5b2
	/*Mood*/ public: void /*__thiscall*/ SetMood(const gpbstring<char>& unk1, float unk2); //0x0091e093
	/*Mood*/ public: void /*__thiscall*/ StopAmbientTrack(float unk1); //0x00412a2c
	/*Mood*/ public: void /*__thiscall*/ StopStandardTrack(float unk1); //0x00412a61
};

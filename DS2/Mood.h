#pragma once

#include "ClassMacros.h"

class Mood {
public:
	DefineSingleton(Mood, 0x414271);

	/*Mood*/ private: /*static*/ Mood* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414271
	DefineMethod(IsAmbientTrackPlaying, 0x412a25, bool, Params(), Args());
	DefineMethod(IsStandardTrackPlaying, 0x412a5a, bool, Params(), Args());
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
	DefineMethod(FadeMoodVolume, 0x91d78c, void, Params(float unk1, float unk2), Args(float unk1, float unk2));
	DefineMethod(ForceUpdateDrift, 0x91d656, void, Params(float unk1), Args(float unk1));
	DefineMethod(ForceUpdateFog, 0x91d53d, void, Params(float unk1), Args(float unk1));
	DefineMethod(ForceUpdateMusic, 0x91ce19, void, Params(float unk1), Args(float unk1));
	DefineMethod(ForceUpdatePartyLight, 0x91d6eb, void, Params(float unk1), Args(float unk1));
	DefineMethod(ForceUpdateRain, 0x91d5d2, void, Params(float unk1), Args(float unk1));
	DefineMethod(ForceUpdateSkybox, 0x91ce30, void, Params(float unk1), Args(float unk1));
	DefineMethod(ForceUpdateSnow, 0x91d614, void, Params(float unk1), Args(float unk1));
	DefineMethod(ForceUpdateWind, 0x91d698, void, Params(float unk1), Args(float unk1));
	DefineMethod(PlayAmbientTrack, 0x412a0e, void, Params(float unk1), Args(float unk1));
	DefineMethod(PlayStandardTrack, 0x412a43, void, Params(float unk1), Args(float unk1));
	DefineMethod(RegisterMoodRequest, 0x921503, void, Params(const Goid_* unk1, const gpbstring<char>& unk2, bool unk3), Args(const Goid_* unk1, const gpbstring<char>& unk2, bool unk3));
	DefineMethod(RemoveFogCorrection, 0x91ce47, void, Params(float unk1), Args(float unk1));
	DefineMethod(ResetMoodVolume, 0x91d7d5, void, Params(float unk1), Args(float unk1));
	DefineMethod(RestoreFogCorrection, 0x91ce6d, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetActiveDriftGo, 0x91e53c, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(SetActiveFogGo, 0x91e383, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(SetActiveMusicGo, 0x91e639, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(SetActivePartyLightGo, 0x91e6f3, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(SetActiveRainGo, 0x91e450, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(SetActiveSkyboxGo, 0x91e696, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(SetActiveSnowGo, 0x91e4c6, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(SetActiveSunGo, 0x91e326, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(SetActiveWindGo, 0x91e5b2, void, Params(const Goid_* unk1, float unk2), Args(const Goid_* unk1, float unk2));
	DefineMethod(SetMood, 0x91e093, void, Params(const gpbstring<char>& unk1, float unk2), Args(const gpbstring<char>& unk1, float unk2));
	DefineMethod(StopAmbientTrack, 0x412a2c, void, Params(float unk1), Args(float unk1));
	DefineMethod(StopStandardTrack, 0x412a61, void, Params(float unk1), Args(float unk1));
};

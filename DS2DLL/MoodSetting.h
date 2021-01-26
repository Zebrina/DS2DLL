#pragma once

#include "Enums.h"
#include "GPString.h"

struct MoodSetting {
	MoodSetting() = default;
	MoodSetting(const MoodSetting&) = default;
	~MoodSetting() = default;

	MoodSetting& operator=(const MoodSetting&) = default;

    // 0x00
	GPBString moodName;
	// 0x04
	float transitionTime;
	// 0x08
	bool bInterior;
	// 0x0c
	GPBString environEffect;
	// 0x10
	bool bFrustumEnabled;
	// 0x14
	float frustumWidth;
	// 0x18
	float frustumHeight;
	// 0x1c
	float frustumDepth;
	// 0x20
	bool bFogEnabled;
	// 0x24
	float fogNearDist;
	// 0x28
	float fogFarDist;
	// 0x2c
	float fogLowDetNearDist;
	// 0x30
	float fogLowDetFarDist;
	// 0x34
	hexcolorcode fogColor;
	// 0x38
	float fogDensity;
	// 0x3c
	bool bRainEnabled;
	// 0x40
	float rainDensity;
	// 0x44
	float rainLowDetDensity;
	// 0x48
	bool bLightning;
	bool bSnowEnabled;
	// 0x4c
	float snowDensity;
	// 0x50
	float snowLowDetDensity;
	// 0x54
	bool bDriftEnabled;
	// 0x58
	float driftDensity;
	// 0x5c
	float driftLowDetDensity;
	// 0x60
	GPBString driftTextures;
	// 0x64
	float driftMinSize;
	// 0x68
	float driftMaxSize;
	// 0x6c
	bool bWindEnabled;
	// 0x70
	float windVelocity;
	// 0x74
	float windDirection;
	// 0x78
	bool bMusicEnabled;
    bool b79;
    bool b7A;
    bool b7B;
	// 0x79
	$Padding(0x7c, 0x84);
	// 0x84
	bool bAmbientRandom;
    bool b85;
    bool b86;
    bool b87;
	// 0x85
	$Padding(0x88, 0x90);
	// 0x90
	bool bStandardRandom;
	// 0x94
	eMoodRoomType moodRoomType;
	// 0x98
	bool bSkyBoxEnabled;
	// 0x9c
	GPBString topTexture;
	// 0xa0
	GPBString bottomTexture;
	// 0xa4
	GPBString leftTexture;
	// 0xa8
	GPBString rightTexture;
	// 0xac
	GPBString frontTexture;
	// 0xb0
	GPBString backTexture;
	// 0xb4
	float horizonOffset;
	// 0xb8
	bool bPartyLightEnabled;
	// 0xbc
	float partyLightInnerRad;
	// 0xc0
	float partyLightOuterRad;
	// 0xc4
	float partyVertOffset;
	// 0xc8
    hexcolorcode partyLightColor;
	// 0xcc
    $Padding(0xcc, 0xdc);
};

// Size confirmed.
STATIC_ASSERT(sizeof(MoodSetting) == 0xdc);
STATIC_ASSERT_OFFSETOF(MoodSetting, bInterior, 0x08);
STATIC_ASSERT_OFFSETOF(MoodSetting, bFrustumEnabled, 0x10);
STATIC_ASSERT_OFFSETOF(MoodSetting, bFogEnabled, 0x20);
STATIC_ASSERT_OFFSETOF(MoodSetting, bRainEnabled, 0x3c);
STATIC_ASSERT_OFFSETOF(MoodSetting, bLightning, 0x48);
STATIC_ASSERT_OFFSETOF(MoodSetting, bSnowEnabled, 0x49);
STATIC_ASSERT_OFFSETOF(MoodSetting, bWindEnabled, 0x6c);
STATIC_ASSERT_OFFSETOF(MoodSetting, bMusicEnabled, 0x78);
STATIC_ASSERT_OFFSETOF(MoodSetting, bAmbientRandom, 0x84);
STATIC_ASSERT_OFFSETOF(MoodSetting, bStandardRandom, 0x90);
STATIC_ASSERT_OFFSETOF(MoodSetting, bSkyBoxEnabled, 0x98);
STATIC_ASSERT_OFFSETOF(MoodSetting, bPartyLightEnabled, 0xb8);

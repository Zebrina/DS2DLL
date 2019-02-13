#pragma once

enum eMoodRoomType;

struct MoodSetting {
	/*MoodSetting*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x004126dc
	DefineConstMethod(GetbAmbientRandom, 0x4128da, bool, Params(), Args());
	DefineConstMethod(GetbDriftEnabled, 0x41283d, bool, Params(), Args());
	DefineConstMethod(GetbFogEnabled, 0x41274f, bool, Params(), Args());
	DefineConstMethod(GetbFrustumEnabled, 0x41270b, bool, Params(), Args());
	DefineConstMethod(GetbInterior, 0x4126f6, bool, Params(), Args());
	DefineConstMethod(GetbLightning, 0x4127f9, bool, Params(), Args());
	DefineConstMethod(GetbMusicEnabled, 0x4128c9, bool, Params(), Args());
	DefineConstMethod(GetbPartyLightEnabled, 0x412977, bool, Params(), Args());
	DefineConstMethod(GetbRainEnabled, 0x4127c6, bool, Params(), Args());
	DefineConstMethod(GetbSkyboxEnabled, 0x41291f, bool, Params(), Args());
	DefineConstMethod(GetbSnowEnabled, 0x41280a, bool, Params(), Args());
	DefineConstMethod(GetbStandardRandom, 0x4128f1, bool, Params(), Args());
	DefineConstMethod(GetbWindEnabled, 0x412896, bool, Params(), Args());
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetbackTexture() const; //0x00412959
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetbottomTexture() const; //0x0041293d
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetdriftTextures() const; //0x00412870
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetenvironEffect() const; //0x00412707
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetfrontTexture() const; //0x00412952
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetleftTexture() const; //0x00412944
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetmoodName() const; //0x004126e2
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetrightTexture() const; //0x0041294b
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GettopTexture() const; //0x00412936
	DefineConstMethod(GetmoodRoomType, 0x412908, eMoodRoomType, Params(), Args());
	DefineConstMethod(GetdriftDensity, 0x41284e, float, Params(), Args());
	DefineConstMethod(GetdriftLowDetDensity, 0x41285f, float, Params(), Args());
	DefineConstMethod(GetdriftMaxSize, 0x412885, float, Params(), Args());
	DefineConstMethod(GetdriftMinSize, 0x412874, float, Params(), Args());
	DefineConstMethod(GetfogDensity, 0x4127b5, float, Params(), Args());
	DefineConstMethod(GetfogFarDist, 0x412771, float, Params(), Args());
	DefineConstMethod(GetfogLowDetFarDist, 0x412793, float, Params(), Args());
	DefineConstMethod(GetfogLowDetNearDist, 0x412782, float, Params(), Args());
	DefineConstMethod(GetfogNearDist, 0x412760, float, Params(), Args());
	DefineConstMethod(GetfrustumDepth, 0x41273e, float, Params(), Args());
	DefineConstMethod(GetfrustumHeight, 0x41272d, float, Params(), Args());
	DefineConstMethod(GetfrustumWidth, 0x41271c, float, Params(), Args());
	DefineConstMethod(GethorizonOffset, 0x412960, float, Params(), Args());
	DefineConstMethod(GetpartyLightInnerRad, 0x41298e, float, Params(), Args());
	DefineConstMethod(GetpartyLightOuterRad, 0x4129a5, float, Params(), Args());
	DefineConstMethod(GetpartyVertOffset, 0x4129bc, float, Params(), Args());
	DefineConstMethod(GetrainDensity, 0x4127d7, float, Params(), Args());
	DefineConstMethod(GetrainLowDetDensity, 0x4127e8, float, Params(), Args());
	DefineConstMethod(GetsnowDensity, 0x41281b, float, Params(), Args());
	DefineConstMethod(GetsnowLowDetDensity, 0x41282c, float, Params(), Args());
	DefineConstMethod(GettransitionTime, 0x4126e5, float, Params(), Args());
	DefineConstMethod(GetwindDirection, 0x4128b8, float, Params(), Args());
	DefineConstMethod(GetwindVelocity, 0x4128a7, float, Params(), Args());
	/*MoodSetting*/ public: unsigned long /*__thiscall*/ GetfogColor() const; //0x004127a4
	/*MoodSetting*/ public: unsigned long /*__thiscall*/ GetpartyLightColor() const; //0x004129d3
	DefineMethod(SetbackTexture, 0x419c07, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetbAmbientRandom, 0x4128e1, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbDriftEnabled, 0x412841, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbFogEnabled, 0x412753, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbFrustumEnabled, 0x41270f, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbInterior, 0x4126fa, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbLightning, 0x4127fd, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbMusicEnabled, 0x4128cd, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbottomTexture, 0x419ba3, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetbPartyLightEnabled, 0x41297e, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbRainEnabled, 0x4127ca, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbSkyboxEnabled, 0x412926, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbSnowEnabled, 0x41280e, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbStandardRandom, 0x4128f8, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetbWindEnabled, 0x41289a, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetdriftDensity, 0x412852, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetdriftLowDetDensity, 0x412863, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetdriftMaxSize, 0x412889, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetdriftMinSize, 0x412878, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetdriftTextures, 0x419b74, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetenvironEffect, 0x419b5e, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetfogColor, 0x4127a8, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetfogDensity, 0x4127b9, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetfogFarDist, 0x412775, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetfogLowDetFarDist, 0x412797, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetfogLowDetNearDist, 0x412786, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetfogNearDist, 0x412764, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetfrontTexture, 0x419bee, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetfrustumDepth, 0x412742, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetfrustumHeight, 0x412731, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetfrustumWidth, 0x412720, void, Params(float unk1), Args(float unk1));
	DefineMethod(SethorizonOffset, 0x412967, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetleftTexture, 0x419bbc, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetmoodName, 0x419b4b, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetmoodRoomType, 0x41290f, void, Params(eMoodRoomType unk1), Args(eMoodRoomType unk1));
	DefineMethod(SetpartyLightColor, 0x4129da, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetpartyLightInnerRad, 0x412995, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetpartyLightOuterRad, 0x4129ac, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetpartyVertOffset, 0x4129c3, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetrainDensity, 0x4127db, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetrainLowDetDensity, 0x4127ec, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetrightTexture, 0x419bd5, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetsnowDensity, 0x41281f, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetsnowLowDetDensity, 0x412830, void, Params(float unk1), Args(float unk1));
	DefineMethod(SettopTexture, 0x419b8a, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SettransitionTime, 0x4126e9, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetwindDirection, 0x4128bc, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetwindVelocity, 0x4128ab, void, Params(float unk1), Args(float unk1));
};

#pragma once

enum eMoodRoomType;

struct MoodSetting {
	/*MoodSetting*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x004126dc
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbAmbientRandom() const; //0x004128da
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbDriftEnabled() const; //0x0041283d
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbFogEnabled() const; //0x0041274f
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbFrustumEnabled() const; //0x0041270b
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbInterior() const; //0x004126f6
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbLightning() const; //0x004127f9
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbMusicEnabled() const; //0x004128c9
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbPartyLightEnabled() const; //0x00412977
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbRainEnabled() const; //0x004127c6
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbSkyboxEnabled() const; //0x0041291f
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbSnowEnabled() const; //0x0041280a
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbStandardRandom() const; //0x004128f1
	/*MoodSetting*/ public: bool /*__thiscall*/ GetbWindEnabled() const; //0x00412896
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetbackTexture() const; //0x00412959
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetbottomTexture() const; //0x0041293d
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetdriftTextures() const; //0x00412870
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetenvironEffect() const; //0x00412707
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetfrontTexture() const; //0x00412952
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetleftTexture() const; //0x00412944
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetmoodName() const; //0x004126e2
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GetrightTexture() const; //0x0041294b
	/*MoodSetting*/ public: const gpbstring<char>& /*__thiscall*/ GettopTexture() const; //0x00412936
	/*MoodSetting*/ public: eMoodRoomType /*__thiscall*/ GetmoodRoomType() const; //0x00412908
	/*MoodSetting*/ public: float /*__thiscall*/ GetdriftDensity() const; //0x0041284e
	/*MoodSetting*/ public: float /*__thiscall*/ GetdriftLowDetDensity() const; //0x0041285f
	/*MoodSetting*/ public: float /*__thiscall*/ GetdriftMaxSize() const; //0x00412885
	/*MoodSetting*/ public: float /*__thiscall*/ GetdriftMinSize() const; //0x00412874
	/*MoodSetting*/ public: float /*__thiscall*/ GetfogDensity() const; //0x004127b5
	/*MoodSetting*/ public: float /*__thiscall*/ GetfogFarDist() const; //0x00412771
	/*MoodSetting*/ public: float /*__thiscall*/ GetfogLowDetFarDist() const; //0x00412793
	/*MoodSetting*/ public: float /*__thiscall*/ GetfogLowDetNearDist() const; //0x00412782
	/*MoodSetting*/ public: float /*__thiscall*/ GetfogNearDist() const; //0x00412760
	/*MoodSetting*/ public: float /*__thiscall*/ GetfrustumDepth() const; //0x0041273e
	/*MoodSetting*/ public: float /*__thiscall*/ GetfrustumHeight() const; //0x0041272d
	/*MoodSetting*/ public: float /*__thiscall*/ GetfrustumWidth() const; //0x0041271c
	/*MoodSetting*/ public: float /*__thiscall*/ GethorizonOffset() const; //0x00412960
	/*MoodSetting*/ public: float /*__thiscall*/ GetpartyLightInnerRad() const; //0x0041298e
	/*MoodSetting*/ public: float /*__thiscall*/ GetpartyLightOuterRad() const; //0x004129a5
	/*MoodSetting*/ public: float /*__thiscall*/ GetpartyVertOffset() const; //0x004129bc
	/*MoodSetting*/ public: float /*__thiscall*/ GetrainDensity() const; //0x004127d7
	/*MoodSetting*/ public: float /*__thiscall*/ GetrainLowDetDensity() const; //0x004127e8
	/*MoodSetting*/ public: float /*__thiscall*/ GetsnowDensity() const; //0x0041281b
	/*MoodSetting*/ public: float /*__thiscall*/ GetsnowLowDetDensity() const; //0x0041282c
	/*MoodSetting*/ public: float /*__thiscall*/ GettransitionTime() const; //0x004126e5
	/*MoodSetting*/ public: float /*__thiscall*/ GetwindDirection() const; //0x004128b8
	/*MoodSetting*/ public: float /*__thiscall*/ GetwindVelocity() const; //0x004128a7
	/*MoodSetting*/ public: unsigned long /*__thiscall*/ GetfogColor() const; //0x004127a4
	/*MoodSetting*/ public: unsigned long /*__thiscall*/ GetpartyLightColor() const; //0x004129d3
	/*MoodSetting*/ public: void /*__thiscall*/ SetbackTexture(const gpbstring<char>& unk1); //0x00419c07
	/*MoodSetting*/ public: void /*__thiscall*/ SetbAmbientRandom(bool unk1); //0x004128e1
	/*MoodSetting*/ public: void /*__thiscall*/ SetbDriftEnabled(bool unk1); //0x00412841
	/*MoodSetting*/ public: void /*__thiscall*/ SetbFogEnabled(bool unk1); //0x00412753
	/*MoodSetting*/ public: void /*__thiscall*/ SetbFrustumEnabled(bool unk1); //0x0041270f
	/*MoodSetting*/ public: void /*__thiscall*/ SetbInterior(bool unk1); //0x004126fa
	/*MoodSetting*/ public: void /*__thiscall*/ SetbLightning(bool unk1); //0x004127fd
	/*MoodSetting*/ public: void /*__thiscall*/ SetbMusicEnabled(bool unk1); //0x004128cd
	/*MoodSetting*/ public: void /*__thiscall*/ SetbottomTexture(const gpbstring<char>& unk1); //0x00419ba3
	/*MoodSetting*/ public: void /*__thiscall*/ SetbPartyLightEnabled(bool unk1); //0x0041297e
	/*MoodSetting*/ public: void /*__thiscall*/ SetbRainEnabled(bool unk1); //0x004127ca
	/*MoodSetting*/ public: void /*__thiscall*/ SetbSkyboxEnabled(bool unk1); //0x00412926
	/*MoodSetting*/ public: void /*__thiscall*/ SetbSnowEnabled(bool unk1); //0x0041280e
	/*MoodSetting*/ public: void /*__thiscall*/ SetbStandardRandom(bool unk1); //0x004128f8
	/*MoodSetting*/ public: void /*__thiscall*/ SetbWindEnabled(bool unk1); //0x0041289a
	/*MoodSetting*/ public: void /*__thiscall*/ SetdriftDensity(float unk1); //0x00412852
	/*MoodSetting*/ public: void /*__thiscall*/ SetdriftLowDetDensity(float unk1); //0x00412863
	/*MoodSetting*/ public: void /*__thiscall*/ SetdriftMaxSize(float unk1); //0x00412889
	/*MoodSetting*/ public: void /*__thiscall*/ SetdriftMinSize(float unk1); //0x00412878
	/*MoodSetting*/ public: void /*__thiscall*/ SetdriftTextures(const gpbstring<char>& unk1); //0x00419b74
	/*MoodSetting*/ public: void /*__thiscall*/ SetenvironEffect(const gpbstring<char>& unk1); //0x00419b5e
	/*MoodSetting*/ public: void /*__thiscall*/ SetfogColor(unsigned long unk1); //0x004127a8
	/*MoodSetting*/ public: void /*__thiscall*/ SetfogDensity(float unk1); //0x004127b9
	/*MoodSetting*/ public: void /*__thiscall*/ SetfogFarDist(float unk1); //0x00412775
	/*MoodSetting*/ public: void /*__thiscall*/ SetfogLowDetFarDist(float unk1); //0x00412797
	/*MoodSetting*/ public: void /*__thiscall*/ SetfogLowDetNearDist(float unk1); //0x00412786
	/*MoodSetting*/ public: void /*__thiscall*/ SetfogNearDist(float unk1); //0x00412764
	/*MoodSetting*/ public: void /*__thiscall*/ SetfrontTexture(const gpbstring<char>& unk1); //0x00419bee
	/*MoodSetting*/ public: void /*__thiscall*/ SetfrustumDepth(float unk1); //0x00412742
	/*MoodSetting*/ public: void /*__thiscall*/ SetfrustumHeight(float unk1); //0x00412731
	/*MoodSetting*/ public: void /*__thiscall*/ SetfrustumWidth(float unk1); //0x00412720
	/*MoodSetting*/ public: void /*__thiscall*/ SethorizonOffset(float unk1); //0x00412967
	/*MoodSetting*/ public: void /*__thiscall*/ SetleftTexture(const gpbstring<char>& unk1); //0x00419bbc
	/*MoodSetting*/ public: void /*__thiscall*/ SetmoodName(const gpbstring<char>& unk1); //0x00419b4b
	/*MoodSetting*/ public: void /*__thiscall*/ SetmoodRoomType(eMoodRoomType unk1); //0x0041290f
	/*MoodSetting*/ public: void /*__thiscall*/ SetpartyLightColor(unsigned long unk1); //0x004129da
	/*MoodSetting*/ public: void /*__thiscall*/ SetpartyLightInnerRad(float unk1); //0x00412995
	/*MoodSetting*/ public: void /*__thiscall*/ SetpartyLightOuterRad(float unk1); //0x004129ac
	/*MoodSetting*/ public: void /*__thiscall*/ SetpartyVertOffset(float unk1); //0x004129c3
	/*MoodSetting*/ public: void /*__thiscall*/ SetrainDensity(float unk1); //0x004127db
	/*MoodSetting*/ public: void /*__thiscall*/ SetrainLowDetDensity(float unk1); //0x004127ec
	/*MoodSetting*/ public: void /*__thiscall*/ SetrightTexture(const gpbstring<char>& unk1); //0x00419bd5
	/*MoodSetting*/ public: void /*__thiscall*/ SetsnowDensity(float unk1); //0x0041281f
	/*MoodSetting*/ public: void /*__thiscall*/ SetsnowLowDetDensity(float unk1); //0x00412830
	/*MoodSetting*/ public: void /*__thiscall*/ SettopTexture(const gpbstring<char>& unk1); //0x00419b8a
	/*MoodSetting*/ public: void /*__thiscall*/ SettransitionTime(float unk1); //0x004126e9
	/*MoodSetting*/ public: void /*__thiscall*/ SetwindDirection(float unk1); //0x004128bc
	/*MoodSetting*/ public: void /*__thiscall*/ SetwindVelocity(float unk1); //0x004128ab
};

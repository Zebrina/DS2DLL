#pragma once

struct GoCloneReq {
	/*GoCloneReq*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00502e44
	/*GoCloneReq*/ public: void /*__thiscall*/ Init(); //0x00846b86
	/*GoCloneReq*/ public: void /*__thiscall*/ Init(const char* unk1, const PlayerId_* unk2); //0x00846d4d
	/*GoCloneReq*/ public: void /*__thiscall*/ Init(const char* unk1); //0x00846d81
	/*GoCloneReq*/ public: void /*__thiscall*/ Init(const Goid_* unk1, const char* unk2, const PlayerId_* unk3); //0x00846ce1
	/*GoCloneReq*/ public: void /*__thiscall*/ Init(const Goid_* unk1, const char* unk2); //0x00846d1a
	/*GoCloneReq*/ public: void /*__thiscall*/ Init(const Goid_* unk1, const Goid_* unk2, const PlayerId_* unk3); //0x00846baa
	/*GoCloneReq*/ public: void /*__thiscall*/ Init(const Goid_* unk1, const Goid_* unk2); //0x00846bc7
	/*GoCloneReq*/ public: void /*__thiscall*/ Init(const Goid_* unk1, const PlayerId_* unk2); //0x00846bde
	/*GoCloneReq*/ public: void /*__thiscall*/ Init(const Goid_* unk1); //0x00846bf6
	/*GoCloneReq*/ public: void /*__thiscall*/ SetFadeIn(bool unk1); //0x00502e62
	/*GoCloneReq*/ public: void /*__thiscall*/ SetForceClientAllowed(bool unk1); //0x004133e8
	/*GoCloneReq*/ public: void /*__thiscall*/ SetForcePosition(bool unk1); //0x00435bc2
	/*GoCloneReq*/ public: void /*__thiscall*/ SetForceServerOnly(bool unk1); //0x00435bd7
	/*GoCloneReq*/ public: void /*__thiscall*/ SetNoStartupFx(bool unk1); //0x00502e77
	/*GoCloneReq*/ public: void /*__thiscall*/ SetOmni(bool unk1); //0x0044a584
	/*GoCloneReq*/ public: void /*__thiscall*/ SetPrepareToDrawNow(bool unk1); //0x0044a599
	/*GoCloneReq*/ public: void /*__thiscall*/ SetSnapToTerrain(bool unk1); //0x00435bad
	/*GoCloneReq*/ public: void /*__thiscall*/ SetStartingOrient(const Quat& unk1); //0x00502e48
	/*GoCloneReq*/ public: void /*__thiscall*/ SetStartingPos(const SiegePos& unk1); //0x008472d9
};

#pragma once

class GoStash {
public:
	/*GoStash*/ private: /*static*/ GoStash* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00472780
	/*GoStash*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoStash* unk1); //0x00472777
	/*GoStash*/ public: float /*__thiscall*/ GetActivateRange() const; //0x009507ad
	/*GoStash*/ public: void /*__thiscall*/ RCAddToStash(const Goid_* unk1, unsigned long unk2); //0x0095089d
	/*GoStash*/ public: void /*__thiscall*/ RCDisableOmniStatus(const Goid_* unk1, const Goid_* unk2); //0x0095051e
	/*GoStash*/ public: void /*__thiscall*/ RCEnableOmniStatus(const Goid_* unk1); //0x009503d3
	/*GoStash*/ public: void /*__thiscall*/ RCRemoveFromStash(const Goid_* unk1, unsigned long unk2); //0x00950a42
	/*GoStash*/ public: void /*__thiscall*/ RSAddToStash(const Goid_* unk1, const Goid_* unk2); //0x00950c52
	/*GoStash*/ public: void /*__thiscall*/ RSRemoveFromStash(const Goid_* unk1, const Goid_* unk2, bool unk3); //0x00950eb8
};

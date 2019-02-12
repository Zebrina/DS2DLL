#pragma once

#include "ClassMacros.h"

enum eCameraMode;

class UICamera {
public:
	DefineSingleton(UICamera, 0x40a5e1);

	/*UICamera*/ private: /*static*/ UICamera* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5e1
	/*UICamera*/ public: eCameraMode /*__thiscall*/ GetCameraMode() const; //0x0040928d
	/*UICamera*/ public: eCameraMode /*__thiscall*/ GetPreviousMode() const; //0x00409290
	/*UICamera*/ public: float /*__thiscall*/ MouseDeltaZ(int unk1); //0x00464ff6
	/*UICamera*/ public: void /*__thiscall*/ MouseDeltaY(int unk1); //0x0046491c
	/*UICamera*/ public: void /*__thiscall*/ SetCameraMode(eCameraMode mode, bool unk2, eCameraInterp unk3); //0x004661be
	/*UICamera*/ public: void /*__thiscall*/ SetCameraMode(eCameraMode mode); //0x0040927a
	/*UICamera*/ public: void /*__thiscall*/ SetFollowCam(bool unk1); //0x0046661d
	/*UICamera*/ public: void /*__thiscall*/ SetFollowCamSmoothing(bool unk1); //0x00409294
	/*UICamera*/ public: void /*__thiscall*/ SetFreeLook(bool unk1); //0x00467012
	/*UICamera*/ public: void /*__thiscall*/ SetMaxDistance(float unk1); //0x0040a5c9
	/*UICamera*/ public: void /*__thiscall*/ SetMinDistance(float unk1); //0x0040a5b1
};

#pragma once

#include "UIWindow.h"

class UIObjectView : public UIWindow {
public:
	$Method(0x00772bd0, AddElement, bool, const GPBString& unk1, const GPBString& unk2, const GPBString& unk3, const Vector3& unk4, bool unk5);
	$Method(0x00771110, CameraPosCenterOnElement, bool, const GPBString& unk1, bool unk2);
	$Method(0x004424e8, CameraPosCenterOnElement, bool, const GPBString& unk1);
	$Method(0x004424f9, CameraPosZoomInOnTarget, bool);
	$Method(0x0044251d, GetCameraUseGameAspectRatio, bool);
	$Method(0x00442529, GetCameraUserCanTargetBones, bool);
	$Method(0x00442535, GetDownButtonState, bool);
	$Method(0x00772020, GetElementScreenName, bool, const GPBString& unk1, GPBString& unk2);
	$Method(0x00442405, GetFeetPlantWithScale, bool);
	$ConstMethod(0x00442442, GetIgnoreScale, bool);
	$Method(0x004423e2, GetUpdateObjectCenter, bool);
	$Method(0x004423c2, GetUpdateObjectOrient, bool);
	$Method(0x00770fe0, HasElementTag, bool, const GPBString& unk1);
	$Method(0x00771890, RemoveElement, bool, const GPBString& unk1);
	$Method(0x00771fd0, SelectElement, bool, const GPBString& unk1);
	$Method(0x00771300, SetElementData, bool, const GPBString& unk1, uint unk2);
	$Method(0x007704e0, SetObjectId, bool, uint unk1);
	$Method(0x007718e0, GetElementName, GPBString, const GPBString& unk1);
	$Method(0x00770fb0, GetElementWindow, UIWindow*, const GPBString& unk1);
	$ConstMethod(0x00770b80, GetElementTagByIndex, const GPBString&, uint unk1);
	$ConstMethod(0x00771340, GetElementTagByName, const GPBString&, const GPBString& unk1);
	$ConstMethod(0x0076edb0, GetSelectedElementTag, const GPBString&);
	$ConstMethod(0x00442395, GetObjectOrientation, const Quat&);
	$ConstMethod(0x0044248c, GetCameraPos, const Vector3&);
	$ConstMethod(0x004424a8, GetCameraPosCurrent, const Vector3&);
	$ConstMethod(0x004424af, GetCameraPosInitial, const Vector3&);
	$ConstMethod(0x004424cb, GetCameraPosLookAt, const Vector3&);
	$ConstMethod(0x004424bd, GetCameraPosMax, const Vector3&);
	$ConstMethod(0x004424b6, GetCameraPosMin, const Vector3&);
	$ConstMethod(0x004424c4, GetCameraPosStep, const Vector3&);
	$ConstMethod(0x004424d2, GetCameraPosZoomInTarget, const Vector3&);
	$ConstMethod(0x004424d9, GetCameraPosZoomOutTarget, const Vector3&);
	$Method(0x00771050, GetElementPos, const Vector3&, const GPBString& unk1);
	$Method(0x00771090, GetElementWorldPos, const Vector3&, const GPBString& unk1);
	$ConstMethod(0x0044238e, GetObjectCenter, const Vector3&);
	$ConstMethod(0x00442493, GetCameraPosX, float);
	$ConstMethod(0x0044249a, GetCameraPosY, float);
	$ConstMethod(0x004424a1, GetCameraPosZ, float);
	//$ConstMethod(0x0076f250, GetNumElements, int);
	$Method(0x007710d0, GetElementData, uint, const GPBString& unk1);
	$ConstMethod(0x00442387, GetObjectId, uint);
	$Method(0x00442421, GetSelectedObjectBone, uint);
	$Method(0x004424e0, CameraPosCenterOnObject, void);
	$Method(0x0076f4d0, CameraPosCenterOnObject, void, bool unk1);
	$Method(0x00770610, CameraPosStepInZ, void);
	$Method(0x00770750, CameraPosStepOutZ, void);
	$Method(0x00772170, SendMessageToElementGroup, void, const GPBString& unk1, const GPBString& unk2);
	$Method(0x00771f40, SetAspectAnimChore, void, const GPBString& unk1, const GPBString& unk2, uint unk3, uint unk4, bool unk5);
	$Method(0x0076f260, SetCameraPos, void, const Vector3& unk1, bool unk2);
	$Method(0x0044244d, SetCameraPos, void, const Vector3& unk1);
	$Method(0x0076f370, SetCameraPosX, void, float unk1);
	$Method(0x0076f3f0, SetCameraPosY, void, float unk1);
	$Method(0x0076f470, SetCameraPosZ, void, float unk1);
	$Method(0x0044245e, SetCameraPosZoomInTarget, void, const Vector3& unk1);
	$Method(0x00442475, SetCameraPosZoomOutTarget, void, const Vector3& unk1);
	$Method(0x00442503, SetCameraUseGameAspectRatio, void, bool unk1);
	$Method(0x00770ee0, SetElementGroupAlpha, void, const GPBString& unk1, float unk2);
	$Method(0x004423eb, SetFeetPlantWithScale, void, bool unk1);
	$Method(0x0076ed90, SetObjectCenter, void, const Vector3& unk1);
	$Method(0x00770570, SetObjectHeight, void, float unk1);
	$Method(0x0044239c, SetObjectOrientation, void, const Quat& unk1);
	$Method(0x00442411, SetSelectedObjectBone, void, uint unk1);
	$Method(0x0076edc0, SetSmoothTightness, void, const Vector3& unk1);
	$Method(0x00442428, SetUpdateAnimation, void, bool unk1);
	$Method(0x004423cb, SetUpdateObjectCenter, void, bool unk1);
	$Method(0x004423ab, SetUpdateObjectOrient, void, bool unk1);
	$Method(0x00770890, SetZoomSliderWindow, void, UISlider* unk1);

    // 0x74
    virtual int vf74() const;
};

#pragma once

class UIObjectView {
public:
	/*UIObjectView*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(UIWindow* unk1); //0x00442384
	/*UIObjectView*/ public: bool /*__thiscall*/ AddElement(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const vector_3& unk4, bool unk5); //0x00772bd0
	/*UIObjectView*/ public: bool /*__thiscall*/ CameraPosCenterOnElement(const gpbstring<char>& unk1, bool unk2); //0x00771110
	/*UIObjectView*/ public: bool /*__thiscall*/ CameraPosCenterOnElement(const gpbstring<char>& unk1); //0x004424e8
	/*UIObjectView*/ public: bool /*__thiscall*/ CameraPosZoomInOnTarget(); //0x004424f9
	/*UIObjectView*/ public: bool /*__thiscall*/ GetCameraUseGameAspectRatio(); //0x0044251d
	/*UIObjectView*/ public: bool /*__thiscall*/ GetCameraUserCanTargetBones(); //0x00442529
	/*UIObjectView*/ public: bool /*__thiscall*/ GetDownButtonState(); //0x00442535
	/*UIObjectView*/ public: bool /*__thiscall*/ GetElementScreenName(const gpbstring<char>& unk1, gpbstring<char>& unk2); //0x00772020
	/*UIObjectView*/ public: bool /*__thiscall*/ GetFeetPlantWithScale(); //0x00442405
	/*UIObjectView*/ public: bool /*__thiscall*/ GetIgnoreScale() const; //0x00442442
	/*UIObjectView*/ public: bool /*__thiscall*/ GetUpdateObjectCenter(); //0x004423e2
	/*UIObjectView*/ public: bool /*__thiscall*/ GetUpdateObjectOrient(); //0x004423c2
	/*UIObjectView*/ public: bool /*__thiscall*/ HasElementTag(const gpbstring<char>& unk1); //0x00770fe0
	/*UIObjectView*/ public: bool /*__thiscall*/ RemoveElement(const gpbstring<char>& unk1); //0x00771890
	/*UIObjectView*/ public: bool /*__thiscall*/ SelectElement(const gpbstring<char>& unk1); //0x00771fd0
	/*UIObjectView*/ public: bool /*__thiscall*/ SetElementData(const gpbstring<char>& unk1, unsigned long unk2); //0x00771300
	/*UIObjectView*/ public: bool /*__thiscall*/ SetObjectId(unsigned long unk1); //0x007704e0
	/*UIObjectView*/ public: gpbstring<char> /*__thiscall*/ GetElementName(const gpbstring<char>& unk1); //0x007718e0
	/*UIObjectView*/ public: UIWindow* /*__thiscall*/ GetElementWindow(const gpbstring<char>& unk1); //0x00770fb0
	/*UIObjectView*/ public: const gpbstring<char>& /*__thiscall*/ GetElementTagByIndex(unsigned int unk1) const; //0x00770b80
	/*UIObjectView*/ public: const gpbstring<char>& /*__thiscall*/ GetElementTagByName(const gpbstring<char>& unk1) const; //0x00771340
	/*UIObjectView*/ public: const gpbstring<char>& /*__thiscall*/ GetSelectedElementTag() const; //0x0076edb0
	/*UIObjectView*/ public: const Quat& /*__thiscall*/ GetObjectOrientation() const; //0x00442395
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetCameraPos() const; //0x0044248c
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetCameraPosCurrent() const; //0x004424a8
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetCameraPosInitial() const; //0x004424af
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetCameraPosLookAt() const; //0x004424cb
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetCameraPosMax() const; //0x004424bd
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetCameraPosMin() const; //0x004424b6
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetCameraPosStep() const; //0x004424c4
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetCameraPosZoomInTarget() const; //0x004424d2
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetCameraPosZoomOutTarget() const; //0x004424d9
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetElementPos(const gpbstring<char>& unk1); //0x00771050
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetElementWorldPos(const gpbstring<char>& unk1); //0x00771090
	/*UIObjectView*/ public: const vector_3& /*__thiscall*/ GetObjectCenter() const; //0x0044238e
	/*UIObjectView*/ public: float /*__thiscall*/ GetCameraPosX() const; //0x00442493
	/*UIObjectView*/ public: float /*__thiscall*/ GetCameraPosY() const; //0x0044249a
	/*UIObjectView*/ public: float /*__thiscall*/ GetCameraPosZ() const; //0x004424a1
	/*UIObjectView*/ public: int /*__thiscall*/ GetNumElements() const; //0x0076f250
	/*UIObjectView*/ public: unsigned long /*__thiscall*/ GetElementData(const gpbstring<char>& unk1); //0x007710d0
	/*UIObjectView*/ public: unsigned long /*__thiscall*/ GetObjectId() const; //0x00442387
	/*UIObjectView*/ public: unsigned long /*__thiscall*/ GetSelectedObjectBone(); //0x00442421
	/*UIObjectView*/ public: void /*__thiscall*/ CameraPosCenterOnObject(); //0x004424e0
	/*UIObjectView*/ public: void /*__thiscall*/ CameraPosCenterOnObject(bool unk1); //0x0076f4d0
	/*UIObjectView*/ public: void /*__thiscall*/ CameraPosStepInZ(); //0x00770610
	/*UIObjectView*/ public: void /*__thiscall*/ CameraPosStepOutZ(); //0x00770750
	/*UIObjectView*/ public: void /*__thiscall*/ SendMessageToElementGroup(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x00772170
	/*UIObjectView*/ public: void /*__thiscall*/ SetAspectAnimChore(const gpbstring<char>& unk1, const gpbstring<char>& unk2, unsigned long unk3, unsigned long unk4, bool unk5); //0x00771f40
	/*UIObjectView*/ public: void /*__thiscall*/ SetCameraPos(const vector_3& unk1, bool unk2); //0x0076f260
	/*UIObjectView*/ public: void /*__thiscall*/ SetCameraPos(const vector_3& unk1); //0x0044244d
	/*UIObjectView*/ public: void /*__thiscall*/ SetCameraPosX(float unk1); //0x0076f370
	/*UIObjectView*/ public: void /*__thiscall*/ SetCameraPosY(float unk1); //0x0076f3f0
	/*UIObjectView*/ public: void /*__thiscall*/ SetCameraPosZ(float unk1); //0x0076f470
	/*UIObjectView*/ public: void /*__thiscall*/ SetCameraPosZoomInTarget(const vector_3& unk1); //0x0044245e
	/*UIObjectView*/ public: void /*__thiscall*/ SetCameraPosZoomOutTarget(const vector_3& unk1); //0x00442475
	/*UIObjectView*/ public: void /*__thiscall*/ SetCameraUseGameAspectRatio(bool unk1); //0x00442503
	/*UIObjectView*/ public: void /*__thiscall*/ SetElementGroupAlpha(const gpbstring<char>& unk1, float unk2); //0x00770ee0
	/*UIObjectView*/ public: void /*__thiscall*/ SetFeetPlantWithScale(bool unk1); //0x004423eb
	/*UIObjectView*/ public: void /*__thiscall*/ SetObjectCenter(const vector_3& unk1); //0x0076ed90
	/*UIObjectView*/ public: void /*__thiscall*/ SetObjectHeight(float unk1); //0x00770570
	/*UIObjectView*/ public: void /*__thiscall*/ SetObjectOrientation(const Quat& unk1); //0x0044239c
	/*UIObjectView*/ public: void /*__thiscall*/ SetSelectedObjectBone(unsigned long unk1); //0x00442411
	/*UIObjectView*/ public: void /*__thiscall*/ SetSmoothTightness(const vector_3& unk1); //0x0076edc0
	/*UIObjectView*/ public: void /*__thiscall*/ SetUpdateAnimation(bool unk1); //0x00442428
	/*UIObjectView*/ public: void /*__thiscall*/ SetUpdateObjectCenter(bool unk1); //0x004423cb
	/*UIObjectView*/ public: void /*__thiscall*/ SetUpdateObjectOrient(bool unk1); //0x004423ab
	/*UIObjectView*/ public: void /*__thiscall*/ SetZoomSliderWindow(UISlider* unk1); //0x00770890
};

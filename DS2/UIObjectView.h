#pragma once

class UIObjectView {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x442384, int, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineMethod(AddElement, 0x772bd0, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const vector_3& unk4, bool unk5), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const vector_3& unk4, bool unk5));
	DefineMethod(CameraPosCenterOnElement, 0x771110, bool, Params(const gpbstring<char>& unk1, bool unk2), Args(const gpbstring<char>& unk1, bool unk2));
	DefineMethod(CameraPosCenterOnElement, 0x4424e8, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(CameraPosZoomInOnTarget, 0x4424f9, bool, Params(), Args());
	DefineMethod(GetCameraUseGameAspectRatio, 0x44251d, bool, Params(), Args());
	DefineMethod(GetCameraUserCanTargetBones, 0x442529, bool, Params(), Args());
	DefineMethod(GetDownButtonState, 0x442535, bool, Params(), Args());
	DefineMethod(GetElementScreenName, 0x772020, bool, Params(const gpbstring<char>& unk1, gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, gpbstring<char>& unk2));
	DefineMethod(GetFeetPlantWithScale, 0x442405, bool, Params(), Args());
	DefineConstMethod(GetIgnoreScale, 0x442442, bool, Params(), Args());
	DefineMethod(GetUpdateObjectCenter, 0x4423e2, bool, Params(), Args());
	DefineMethod(GetUpdateObjectOrient, 0x4423c2, bool, Params(), Args());
	DefineMethod(HasElementTag, 0x770fe0, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RemoveElement, 0x771890, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SelectElement, 0x771fd0, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetElementData, 0x771300, bool, Params(const gpbstring<char>& unk1, unsigned long unk2), Args(const gpbstring<char>& unk1, unsigned long unk2));
	DefineMethod(SetObjectId, 0x7704e0, bool, Params(unsigned long unk1), Args(unsigned long unk1));
	/*UIObjectView*/ public: gpbstring<char> /*__thiscall*/ GetElementName(const gpbstring<char>& unk1); //0x007718e0
	DefineMethod(GetElementWindow, 0x770fb0, UIWindow*, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
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
	DefineConstMethod(GetCameraPosX, 0x442493, float, Params(), Args());
	DefineConstMethod(GetCameraPosY, 0x44249a, float, Params(), Args());
	DefineConstMethod(GetCameraPosZ, 0x4424a1, float, Params(), Args());
	DefineConstMethod(GetNumElements, 0x76f250, int, Params(), Args());
	/*UIObjectView*/ public: unsigned long /*__thiscall*/ GetElementData(const gpbstring<char>& unk1); //0x007710d0
	/*UIObjectView*/ public: unsigned long /*__thiscall*/ GetObjectId() const; //0x00442387
	/*UIObjectView*/ public: unsigned long /*__thiscall*/ GetSelectedObjectBone(); //0x00442421
	DefineMethod(CameraPosCenterOnObject, 0x4424e0, void, Params(), Args());
	DefineMethod(CameraPosCenterOnObject, 0x76f4d0, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(CameraPosStepInZ, 0x770610, void, Params(), Args());
	DefineMethod(CameraPosStepOutZ, 0x770750, void, Params(), Args());
	DefineMethod(SendMessageToElementGroup, 0x772170, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
	DefineMethod(SetAspectAnimChore, 0x771f40, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, unsigned long unk3, unsigned long unk4, bool unk5), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, unsigned long unk3, unsigned long unk4, bool unk5));
	DefineMethod(SetCameraPos, 0x76f260, void, Params(const vector_3& unk1, bool unk2), Args(const vector_3& unk1, bool unk2));
	DefineMethod(SetCameraPos, 0x44244d, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
	DefineMethod(SetCameraPosX, 0x76f370, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetCameraPosY, 0x76f3f0, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetCameraPosZ, 0x76f470, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetCameraPosZoomInTarget, 0x44245e, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
	DefineMethod(SetCameraPosZoomOutTarget, 0x442475, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
	DefineMethod(SetCameraUseGameAspectRatio, 0x442503, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetElementGroupAlpha, 0x770ee0, void, Params(const gpbstring<char>& unk1, float unk2), Args(const gpbstring<char>& unk1, float unk2));
	DefineMethod(SetFeetPlantWithScale, 0x4423eb, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetObjectCenter, 0x76ed90, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
	DefineMethod(SetObjectHeight, 0x770570, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetObjectOrientation, 0x44239c, void, Params(const Quat& unk1), Args(const Quat& unk1));
	DefineMethod(SetSelectedObjectBone, 0x442411, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetSmoothTightness, 0x76edc0, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
	DefineMethod(SetUpdateAnimation, 0x442428, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetUpdateObjectCenter, 0x4423cb, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetUpdateObjectOrient, 0x4423ab, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetZoomSliderWindow, 0x770890, void, Params(UISlider* unk1), Args(UISlider* unk1));
};

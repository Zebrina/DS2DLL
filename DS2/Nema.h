#pragma once

enum eAnimChore;
enum eAnimEvent;
enum eAnimStance;

class nema {
public:
	enum eBoneFreeze {

	};

	ActiveBoneChore  {
	public:
		DefineConstMethod(BaseAnimDurationForStance, 0x5750f0, float, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineConstMethod(SubAnimDurationForStance, 0x574dd0, float, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
		DefineConstMethod(NumSubAnimsForStance, 0x574440, int, Params(unsigned long unk1), Args(unsigned long unk1));
	};

	class ActiveVertexChore {
	public:
		DefineConstMethod(BaseAnimDurationForStance, 0x5752c0, float, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineConstMethod(SubAnimDurationForStance, 0x574e70, float, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
		DefineConstMethod(NumSubAnimsForStance, 0x574470, int, Params(unsigned long unk1), Args(unsigned long unk1));
	};

	class Blender {
	public:
		DefineMethod(CreateDynamicAnimation, 0x56db50, bool, Params(eAnimChore unk1, eAnimStance unk2, float unk3), Args(eAnimChore unk1, eAnimStance unk2, float unk3));
		DefineMethod(GetLoopAtEnd, 0x56c1a0, bool, Params(eAnimChore unk1, eAnimStance unk2, unsigned long unk3), Args(eAnimChore unk1, eAnimStance unk2, unsigned long unk3));
		DefineMethod(GetLoopAtEnd, 0x44228d, bool, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineConstMethod(GetSubAnimsAreLoaded, 0x56b3d0, bool, Params(eAnimChore unk1, eAnimStance unk2), Args(eAnimChore unk1, eAnimStance unk2));
		DefineMethod(InitializeTimeWarpWithDynamicAnimation, 0x56dd70, bool, Params(eAnimChore unk1, eAnimStance unk2), Args(eAnimChore unk1, eAnimStance unk2));
		DefineMethod(IsIdle, 0x4421cc, bool, Params(), Args());
		DefineMethod(UpdateTimeWarp, 0x56a3c0, bool, Params(), Args());
		/*nema::Blender*/ public: gpbstring<char> /*__thiscall*/ GetActiveAnimNames(); //0x0056d7c0
		/*nema::Blender*/ public: const gpbstring<char>& /*__thiscall*/ GetAnimName(eAnimChore unk1, eAnimStance unk2, unsigned long unk3); //0x0056c1d0
		/*nema::Blender*/ public: const gpbstring<char>& /*__thiscall*/ GetBlendedPRSDebugName(unsigned long unk1); //0x0056b780
		DefineConstMethod(DurationOfCurrentTimeWarp, 0x56a3d0, float, Params(), Args());
		DefineConstMethod(GetBaseDuration, 0x44223c, float, Params(), Args());
		DefineConstMethod(GetBaseDuration, 0x56b5a0, float, Params(eAnimChore unk1, eAnimStance unk2), Args(eAnimChore unk1, eAnimStance unk2));
		DefineMethod(GetBlendGroupAnimWeight, 0x4421c0, float, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
		DefineMethod(GetBlendGroupWeight, 0x442198, float, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineConstMethod(GetDuration, 0x56b550, float, Params(eAnimChore unk1, eAnimStance unk2, unsigned long unk3), Args(eAnimChore unk1, eAnimStance unk2, unsigned long unk3));
		DefineConstMethod(GetDuration, 0x44221d, float, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineConstMethod(GetKeyEventTime, 0x56c130, float, Params(eAnimChore unk1, eAnimStance unk2, unsigned long unk3, unsigned long unk4, bool unk5), Args(eAnimChore unk1, eAnimStance unk2, unsigned long unk3, unsigned long unk4, bool unk5));
		DefineConstMethod(GetKeyEventTime, 0x442268, float, Params(unsigned long unk1, unsigned long unk2, bool unk3), Args(unsigned long unk1, unsigned long unk2, bool unk3));
		DefineConstMethod(GetScalarVelocity, 0x56b510, float, Params(eAnimChore unk1, eAnimStance unk2, unsigned long unk3), Args(eAnimChore unk1, eAnimStance unk2, unsigned long unk3));
		DefineConstMethod(GetScalarVelocity, 0x4421fe, float, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(TimeOfCurrentTimeWarp, 0x56cf60, float, Params(), Args());
		DefineConstMethod(GetMinDurationAnim, 0x442252, int, Params(), Args());
		DefineConstMethod(GetMinDurationAnim, 0x56b5e0, int, Params(eAnimChore unk1, eAnimStance unk2), Args(eAnimChore unk1, eAnimStance unk2));
		DefineConstMethod(GetNumSubAnims, 0x4421d0, int, Params(), Args());
		DefineConstMethod(GetNumSubAnims, 0x56b430, int, Params(eAnimChore unk1, eAnimStance unk2), Args(eAnimChore unk1, eAnimStance unk2));
		DefineConstMethod(GetSubAnimIndex, 0x56b480, int, Params(eAnimChore unk1, unsigned long unk2), Args(eAnimChore unk1, unsigned long unk2));
		DefineConstMethod(GetSubAnimIndex, 0x4421e6, int, Params(unsigned long unk1), Args(unsigned long unk1));
		/*nema::Blender*/ public: unsigned long /*__thiscall*/ GetNumberOfEvents(eAnimEvent unk1) const; //0x0056a3f0
		/*nema::Blender*/ public: unsigned long /*__thiscall*/ GetRecentEvents() const; //0x0056a3e0
		/*nema::Blender*/ public: unsigned long /*__thiscall*/ NumActiveBoneAnims() const; //0x00442f4c
		/*nema::Blender*/ public: unsigned long /*__thiscall*/ NumActiveVertexAnims() const; //0x00442f56
		/*nema::Blender*/ public: unsigned long /*__thiscall*/ OpenBlendGroup(); //0x00442121
		DefineMethod(AddAnimToBlendGroup, 0x56b7b0, void, Params(unsigned long unk1, float unk2, bool unk3), Args(unsigned long unk1, float unk2, bool unk3));
		DefineMethod(AddAnimToBlendGroup, 0x442166, void, Params(unsigned long unk1, float unk2), Args(unsigned long unk1, float unk2));
		DefineMethod(CloseBlendGroup, 0x44212d, void, Params(), Args());
		DefineMethod(CloseBlendGroup, 0x442139, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(CloseBlendGroupWithTransition, 0x44214c, void, Params(float unk1, bool unk2), Args(float unk1, bool unk2));
		DefineMethod(ResetTimeWarp, 0x445c61, void, Params(), Args());
		DefineMethod(SetBlendGroupAnimWeight, 0x4421a4, void, Params(unsigned long unk1, unsigned long unk2, float unk3), Args(unsigned long unk1, unsigned long unk2, float unk3));
		DefineMethod(SetBlendGroupWeight, 0x44217e, void, Params(unsigned long unk1, float unk2), Args(unsigned long unk1, float unk2));
	};

	class Aspect {
	public:
		DefineStaticMethod(FUBI_DoesHandleMgrExist, 0x54bdb0, bool, Params(), Args());
		DefineStaticMethod(FUBI_HandleIsValid, 0x54eb60, bool, Params(ResHandle<Aspect, ResHandleFields<24> > unk1), Args(ResHandle<Aspect, ResHandleFields<24> > unk1));
		DefineStaticMethod(FUBI_HandleGet, 0x54ced0, Aspect*, Params(ResHandle<Aspect, ResHandleFields<24> > unk1), Args(ResHandle<Aspect, ResHandleFields<24> > unk1));
		/*nema::Aspect*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleAddRef(ResHandle<Aspect, ResHandleFields<24> > unk1); //0x0054eb40
		/*nema::Aspect*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleRelease(ResHandle<Aspect, ResHandleFields<24> > unk1); //0x0055cfc0
		DefineMethod(AttachDeformableChild, 0x55ba90, bool, Params(ResHandle<Aspect, ResHandleFields<24> > unk1, const Quat& unk2, const vector_3& unk3), Args(ResHandle<Aspect, ResHandleFields<24> > unk1, const Quat& unk2, const vector_3& unk3));
		DefineMethod(AttachDeformableChild, 0x4285b5, bool, Params(ResHandle<Aspect, ResHandleFields<24> > unk1), Args(ResHandle<Aspect, ResHandleFields<24> > unk1));
		DefineMethod(AttachReverseLinkedChild, 0x55b730, bool, Params(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3, const Quat& unk4, const vector_3& unk5), Args(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3, const Quat& unk4, const vector_3& unk5));
		DefineMethod(AttachReverseLinkedChild, 0x428596, bool, Params(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3), Args(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3));
		DefineMethod(AttachRigidLinkedChild, 0x428558, bool, Params(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3, const Quat& unk4, const vector_3& unk5), Args(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3, const Quat& unk4, const vector_3& unk5));
		DefineMethod(AttachRigidLinkedChild, 0x428575, bool, Params(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3), Args(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3));
		DefineMethod(BlenderIsIdle, 0x54a340, bool, Params(), Args());
		DefineMethod(DetachAllChildren, 0x55bd10, bool, Params(), Args());
		DefineMethod(DetachChild, 0x55c000, bool, Params(ResHandle<Aspect, ResHandleFields<24> > unk1), Args(ResHandle<Aspect, ResHandleFields<24> > unk1));
		DefineConstMethod(GetBoneOrientation, 0x54a6c0, bool, Params(const char* unk1, vector_3& unk2, Quat& unk3), Args(const char* unk1, vector_3& unk2, Quat& unk3));
		DefineMethod(GetChoreWasRepeated, 0x42889b, bool, Params(), Args());
		DefineMethod(GetFreezeMeshFlag, 0x42879e, bool, Params(), Args());
		DefineMethod(GetHideMeshFlag, 0x428795, bool, Params(), Args());
		DefineConstMethod(GetIndexedBoneOrientation, 0x54aa90, bool, Params(int unk1, vector_3& unk2, Quat& unk3), Args(int unk1, vector_3& unk2, Quat& unk3));
		DefineConstMethod(GetIndexedBonePosition, 0x54ae80, bool, Params(int unk1, vector_3& unk2), Args(int unk1, vector_3& unk2));
		DefineConstMethod(GetIndexedCornerPosNorm, 0x5473d0, bool, Params(unsigned long unk1, unsigned long unk2, vector_3& unk3, vector_3& unk4), Args(unsigned long unk1, unsigned long unk2, vector_3& unk3, vector_3& unk4));
		DefineMethod(GetLockMeshFlag, 0x4287b9, bool, Params(), Args());
		DefineConstMethod(GetPrimaryBoneOrientation, 0x54acb0, bool, Params(vector_3& unk1, Quat& unk2), Args(vector_3& unk1, Quat& unk2));
		DefineMethod(GetRenderTracersFlag, 0x4287a8, bool, Params(), Args());
		DefineMethod(GetStandardBoneAnimationSendEvents, 0x428805, bool, Params(), Args());
		DefineConstMethod(GetUsingCombatStance, 0x4287df, bool, Params(), Args());
		DefineConstMethod(HasBlender, 0x428818, bool, Params(), Args());
		DefineMethod(GetBlender, 0x428824, Blender*, Params(), Args());
		DefineMethod(GetOrCreateBlender, 0x546c50, Blender*, Params(), Args());
		/*nema::Aspect*/ public: ResHandle<Aspect, ResHandleFields<24> > /*__thiscall*/ GetChild(unsigned long unk1); //0x0054ce40
		/*nema::Aspect*/ public: ResHandle<Aspect, ResHandleFields<24> > /*__thiscall*/ GetChildByDebugName(const gpbstring<char>& unk1); //0x00550b60
		/*nema::Aspect*/ public: ResHandle<Aspect, ResHandleFields<24> > /*__thiscall*/ GetParent(); //0x00550b00
		/*nema::Aspect*/ public: const char* /*__thiscall*/ GetDebugName() const; //0x0042b23f
		/*nema::Aspect*/ public: const gpbstring<char>& /*__thiscall*/ GetDebugNameString() const; //0x0042854a
		/*nema::Aspect*/ public: const Goid_* /*__thiscall*/ GetGoid() const; //0x0042854e
		/*nema::Aspect*/ public: const Quat& /*__thiscall*/ GetLinkOffsetRotation() const; //0x004285ec
		/*nema::Aspect*/ public: const vector_3& /*__thiscall*/ GetLinkOffsetPosition() const; //0x004285ce
		DefineConstMethod(GetCurrentChore, 0x428855, eAnimChore, Params(), Args());
		DefineConstMethod(GetNextChore, 0x428878, eAnimChore, Params(), Args());
		DefineConstMethod(GetPreviousChore, 0x42882b, eAnimChore, Params(), Args());
		DefineMethod(GetChoreStance, 0x428811, eAnimStance, Params(), Args());
		DefineConstMethod(GetCurrentStance, 0x42885c, eAnimStance, Params(), Args());
		DefineConstMethod(GetNextStance, 0x42887f, eAnimStance, Params(), Args());
		DefineConstMethod(GetPreviousStance, 0x428832, eAnimStance, Params(), Args());
		DefineConstMethod(GetCurrentAnimSpeed, 0x428871, float, Params(), Args());
		DefineConstMethod(GetCurrentVelocity, 0x4288be, float, Params(), Args());
		DefineMethod(GetMeshPuffDistance, 0x4287b2, float, Params(), Args());
		DefineConstMethod(GetNextAnimSpeed, 0x428894, float, Params(), Args());
		DefineConstMethod(GetPreviousAnimSpeed, 0x428847, float, Params(), Args());
		DefineConstMethod(GetBoneIndex, 0x54e820, int, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
		DefineConstMethod(GetCurrentFlags, 0x42886a, int, Params(), Args());
		DefineConstMethod(GetCurrentSubAnim, 0x428863, int, Params(), Args());
		DefineConstMethod(GetNextFlags, 0x42888d, int, Params(), Args());
		DefineConstMethod(GetNextSubAnim, 0x428886, int, Params(), Args());
		DefineMethod(GetNumberOfChildren, 0x429e48, int, Params(), Args());
		DefineMethod(GetNumCorners, 0x4285fc, int, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineConstMethod(GetPreviousFlags, 0x428840, int, Params(), Args());
		DefineConstMethod(GetPreviousSubAnim, 0x428839, int, Params(), Args());
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ GetBoneFrozenState(const char* unk1) const; //0x00547b10
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ GetCurrentReqBlock() const; //0x0042884e
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ GetDiffuseColor(); //0x0042874a
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ GetHandleValue(); //0x0042ccc4
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ GetIndexedBoneFrozenState(unsigned long unk1) const; //0x00547b50
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ GetInstanceAttrFlags(); //0x00428767
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ GetNumBones() const; //0x00428617
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ GetNumSubTextures(); //0x00428552
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ GetRecentBlenderEvents() const; //0x00546c90
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ GetSharedAttrFlags(); //0x00428761
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ SetBoneFrozenState(const char* unk1, nema::eBoneFreeze unk2, bool unk3); //0x0055e900
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ SetIndexedBoneFrozenState(unsigned long unk1, nema::eBoneFreeze unk2, bool unk3); //0x0055ea10
		/*nema::Aspect*/ public: unsigned long /*__thiscall*/ UpdateBlender(float unk1); //0x00547b80
		DefineMethod(AnimationCallback, 0x54a310, void, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(ClearInstanceAttrFlags, 0x42877f, void, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(ForceDeformation, 0x560c60, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(HideSubMesh, 0x546bf0, void, Params(int unk1), Args(int unk1));
		DefineMethod(PopTexture, 0x54fab0, void, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(PushTexture, 0x55b0a0, void, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(ReloadBlenderSkrits, 0x547ba0, void, Params(), Args());
		DefineMethod(RequestDeformation, 0x42873d, void, Params(), Args());
		DefineMethod(ResetBlender, 0x560cb0, void, Params(), Args());
		DefineMethod(RotateBoneX, 0x547570, void, Params(const char* unk1, float unk2, bool unk3), Args(const char* unk1, float unk2, bool unk3));
		DefineMethod(RotateBoneX, 0x42861d, void, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
		DefineMethod(RotateBoneY, 0x5475f0, void, Params(const char* unk1, float unk2, bool unk3), Args(const char* unk1, float unk2, bool unk3));
		DefineMethod(RotateBoneY, 0x428635, void, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
		DefineMethod(RotateBoneZ, 0x547670, void, Params(const char* unk1, float unk2, bool unk3), Args(const char* unk1, float unk2, bool unk3));
		DefineMethod(RotateBoneZ, 0x42864d, void, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
		DefineMethod(RotateIndexedBoneX, 0x547870, void, Params(int unk1, float unk2, bool unk3), Args(int unk1, float unk2, bool unk3));
		DefineMethod(RotateIndexedBoneX, 0x4286ad, void, Params(int unk1, float unk2), Args(int unk1, float unk2));
		DefineMethod(RotateIndexedBoneY, 0x5478e0, void, Params(int unk1, float unk2, bool unk3), Args(int unk1, float unk2, bool unk3));
		DefineMethod(RotateIndexedBoneY, 0x4286c5, void, Params(int unk1, float unk2), Args(int unk1, float unk2));
		DefineMethod(RotateIndexedBoneZ, 0x547950, void, Params(int unk1, float unk2, bool unk3), Args(int unk1, float unk2, bool unk3));
		DefineMethod(RotateIndexedBoneZ, 0x4286dd, void, Params(int unk1, float unk2), Args(int unk1, float unk2));
		DefineMethod(SetDiffuseColor, 0x428751, void, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(SetFreezeMeshFlag, 0x560370, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(SetHideMeshFlag, 0x54fda0, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(SetInstanceAttrFlags, 0x42876b, void, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(SetLinkOffsetPosition, 0x4285d5, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
		DefineMethod(SetLinkOffsetRotation, 0x4285f0, void, Params(const Quat& unk1), Args(const Quat& unk1));
		DefineMethod(SetLockMeshFlag, 0x5604d0, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(SetMeshPuffDistance, 0x560610, void, Params(float unk1), Args(float unk1));
		DefineMethod(SetRenderTracersFlag, 0x546bc0, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(SetStandardBoneAnimationSendEvents, 0x4287eb, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(SetTextureFromTextureName, 0x555580, void, Params(unsigned long unk1, const char* unk2), Args(unsigned long unk1, const char* unk2));
		DefineMethod(SetupStandardBoneAnimation, 0x55e230, void, Params(bool unk1, int unk2, bool unk3, bool unk4, bool unk5), Args(bool unk1, int unk2, bool unk3, bool unk4, bool unk5));
		DefineMethod(SetUsingCombatStance, 0x4287c5, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(ShowSubMesh, 0x546c20, void, Params(int unk1), Args(int unk1));
		DefineMethod(TranslateBoneX, 0x5476f0, void, Params(const char* unk1, float unk2, bool unk3), Args(const char* unk1, float unk2, bool unk3));
		DefineMethod(TranslateBoneX, 0x428665, void, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
		DefineMethod(TranslateBoneY, 0x547770, void, Params(const char* unk1, float unk2, bool unk3), Args(const char* unk1, float unk2, bool unk3));
		DefineMethod(TranslateBoneY, 0x42867d, void, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
		DefineMethod(TranslateBoneZ, 0x5477f0, void, Params(const char* unk1, float unk2, bool unk3), Args(const char* unk1, float unk2, bool unk3));
		DefineMethod(TranslateBoneZ, 0x428695, void, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
		DefineMethod(TranslateIndexedBoneX, 0x5479c0, void, Params(int unk1, float unk2, bool unk3), Args(int unk1, float unk2, bool unk3));
		DefineMethod(TranslateIndexedBoneX, 0x4286f5, void, Params(int unk1, float unk2), Args(int unk1, float unk2));
		DefineMethod(TranslateIndexedBoneY, 0x547a30, void, Params(int unk1, float unk2, bool unk3), Args(int unk1, float unk2, bool unk3));
		DefineMethod(TranslateIndexedBoneY, 0x42870d, void, Params(int unk1, float unk2), Args(int unk1, float unk2));
		DefineMethod(TranslateIndexedBoneZ, 0x547aa0, void, Params(int unk1, float unk2, bool unk3), Args(int unk1, float unk2, bool unk3));
		DefineMethod(TranslateIndexedBoneZ, 0x428725, void, Params(int unk1, float unk2), Args(int unk1, float unk2));
	};

	class BlendGroup {
	public:
		DefineMethod(AddToGroup, 0x564db0, bool, Params(Blender* unk1, unsigned long unk2, unsigned long unk3, unsigned long unk4, float unk5, bool unk6), Args(Blender* unk1, unsigned long unk2, unsigned long unk3, unsigned long unk4, float unk5, bool unk6));
	};

	class FrameKeys {
	public:
		DefineStaticMethod(FUBI_DoesHandleMgrExist, 0x442f40, bool, Params(), Args());
		DefineStaticMethod(FUBI_HandleIsValid, 0x443d03, bool, Params(ResHandle<FrameKeys, ResHandleFields16> unk1), Args(ResHandle<FrameKeys, ResHandleFields16> unk1));
		DefineStaticMethod(FUBI_HandleGet, 0x443d16, FrameKeys*, Params(ResHandle<FrameKeys, ResHandleFields16> unk1), Args(ResHandle<FrameKeys, ResHandleFields16> unk1));
		/*nema::FrameKeys*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleAddRef(ResHandle<FrameKeys, ResHandleFields16> unk1); //0x00443cf0
		/*nema::FrameKeys*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleRelease(ResHandle<FrameKeys, ResHandleFields16> unk1); //0x0044374f
		DefineConstMethod(GetLoopAtEnd, 0x4420fd, bool, Params(), Args());
		DefineMethod(Update, 0x56e970, bool, Params(Aspect* unk1, float unk2), Args(Aspect* unk1, float unk2));
		/*nema::FrameKeys*/ public: const char* /*__thiscall*/ GetDebugName() const; //0x0044374b
		/*nema::FrameKeys*/ public: const gpbstring<char>& /*__thiscall*/ GetDebugNameString() const; //0x004420f1
		DefineConstMethod(GetBlendWeight, 0x4420f9, float, Params(), Args());
		DefineConstMethod(GetDuration, 0x442103, float, Params(), Args());
		DefineConstMethod(GetNormalizedTime, 0x4420f5, float, Params(), Args());
	};

	class PRSKeys {
	public:
		DefineStaticMethod(FUBI_DoesHandleMgrExist, 0x442f34, bool, Params(), Args());
		DefineStaticMethod(FUBI_HandleIsValid, 0x443cca, bool, Params(ResHandle<PRSKeys, ResHandleFields16> unk1), Args(ResHandle<PRSKeys, ResHandleFields16> unk1));
		DefineStaticMethod(FUBI_HandleGet, 0x443cdd, PRSKeys*, Params(ResHandle<PRSKeys, ResHandleFields16> unk1), Args(ResHandle<PRSKeys, ResHandleFields16> unk1));
		/*nema::PRSKeys*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleAddRef(ResHandle<PRSKeys, ResHandleFields16> unk1); //0x00443cb7
		/*nema::PRSKeys*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleRelease(ResHandle<PRSKeys, ResHandleFields16> unk1); //0x00443738
		DefineConstMethod(GetLoopAtEnd, 0x44200f, bool, Params(), Args());
		DefineMethod(UpdateAbsolute, 0x5717c0, bool, Params(float unk1, float unk2), Args(float unk1, float unk2));
		/*nema::PRSKeys*/ public: const char* /*__thiscall*/ GetDebugName() const; //0x00442e78
		/*nema::PRSKeys*/ public: const gpbstring<char>& /*__thiscall*/ GetDebugNameString() const; //0x00441fc0
		/*nema::PRSKeys*/ public: const vector_3& /*__thiscall*/ GetVelocity() const; //0x004420af
		DefineConstMethod(GetCurrentNormalizedTime, 0x44205d, float, Params(), Args());
		DefineConstMethod(GetCurrPositionX, 0x442ea8, float, Params(int unk1), Args(int unk1));
		DefineConstMethod(GetCurrPositionY, 0x442ebc, float, Params(int unk1), Args(int unk1));
		DefineConstMethod(GetCurrPositionZ, 0x442ed0, float, Params(int unk1), Args(int unk1));
		DefineConstMethod(GetCurrRotationW, 0x442ee4, float, Params(int unk1), Args(int unk1));
		DefineConstMethod(GetCurrRotationX, 0x442ef8, float, Params(int unk1), Args(int unk1));
		DefineConstMethod(GetCurrRotationY, 0x442f0c, float, Params(int unk1), Args(int unk1));
		DefineConstMethod(GetCurrRotationZ, 0x442f20, float, Params(int unk1), Args(int unk1));
		DefineConstMethod(GetDuration, 0x4420a9, float, Params(), Args());
		DefineConstMethod(GetScalarVelocity, 0x4420c7, float, Params(), Args());
		DefineConstMethod(GetVelocityX, 0x4420b5, float, Params(), Args());
		DefineConstMethod(GetVelocityY, 0x4420bb, float, Params(), Args());
		DefineConstMethod(GetVelocityZ, 0x4420c1, float, Params(), Args());
		DefineConstMethod(GetNumTracks, 0x442e9e, int, Params(), Args());
	};
} typedef Nema;

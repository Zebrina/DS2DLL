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
		/*nema::ActiveBoneChore*/ public: float /*__thiscall*/ BaseAnimDurationForStance(unsigned long unk1) const; //0x005750f0
		/*nema::ActiveBoneChore*/ public: float /*__thiscall*/ SubAnimDurationForStance(unsigned long unk1, unsigned long unk2) const; //0x00574dd0
		/*nema::ActiveBoneChore*/ public: int /*__thiscall*/ NumSubAnimsForStance(unsigned long unk1) const; //0x00574440
	};

	class ActiveVertexChore {
	public:
		/*nema::ActiveVertexChore*/ public: float /*__thiscall*/ BaseAnimDurationForStance(unsigned long unk1) const; //0x005752c0
		/*nema::ActiveVertexChore*/ public: float /*__thiscall*/ SubAnimDurationForStance(unsigned long unk1, unsigned long unk2) const; //0x00574e70
		/*nema::ActiveVertexChore*/ public: int /*__thiscall*/ NumSubAnimsForStance(unsigned long unk1) const; //0x00574470
	};

	class Blender {
	public:
		/*nema::Blender*/ public: bool /*__thiscall*/ CreateDynamicAnimation(eAnimChore unk1, eAnimStance unk2, float unk3); //0x0056db50
		/*nema::Blender*/ public: bool /*__thiscall*/ GetLoopAtEnd(eAnimChore unk1, eAnimStance unk2, unsigned long unk3); //0x0056c1a0
		/*nema::Blender*/ public: bool /*__thiscall*/ GetLoopAtEnd(unsigned long unk1); //0x0044228d
		/*nema::Blender*/ public: bool /*__thiscall*/ GetSubAnimsAreLoaded(eAnimChore unk1, eAnimStance unk2) const; //0x0056b3d0
		/*nema::Blender*/ public: bool /*__thiscall*/ InitializeTimeWarpWithDynamicAnimation(eAnimChore unk1, eAnimStance unk2); //0x0056dd70
		/*nema::Blender*/ public: bool /*__thiscall*/ IsIdle(); //0x004421cc
		/*nema::Blender*/ public: bool /*__thiscall*/ UpdateTimeWarp(); //0x0056a3c0
		/*nema::Blender*/ public: gpbstring<char> /*__thiscall*/ GetActiveAnimNames(); //0x0056d7c0
		/*nema::Blender*/ public: const gpbstring<char>& /*__thiscall*/ GetAnimName(eAnimChore unk1, eAnimStance unk2, unsigned long unk3); //0x0056c1d0
		/*nema::Blender*/ public: const gpbstring<char>& /*__thiscall*/ GetBlendedPRSDebugName(unsigned long unk1); //0x0056b780
		/*nema::Blender*/ public: float /*__thiscall*/ DurationOfCurrentTimeWarp() const; //0x0056a3d0
		/*nema::Blender*/ public: float /*__thiscall*/ GetBaseDuration() const; //0x0044223c
		/*nema::Blender*/ public: float /*__thiscall*/ GetBaseDuration(eAnimChore unk1, eAnimStance unk2) const; //0x0056b5a0
		/*nema::Blender*/ public: float /*__thiscall*/ GetBlendGroupAnimWeight(unsigned long unk1, unsigned long unk2); //0x004421c0
		/*nema::Blender*/ public: float /*__thiscall*/ GetBlendGroupWeight(unsigned long unk1); //0x00442198
		/*nema::Blender*/ public: float /*__thiscall*/ GetDuration(eAnimChore unk1, eAnimStance unk2, unsigned long unk3) const; //0x0056b550
		/*nema::Blender*/ public: float /*__thiscall*/ GetDuration(unsigned long unk1) const; //0x0044221d
		/*nema::Blender*/ public: float /*__thiscall*/ GetKeyEventTime(eAnimChore unk1, eAnimStance unk2, unsigned long unk3, unsigned long unk4, bool unk5) const; //0x0056c130
		/*nema::Blender*/ public: float /*__thiscall*/ GetKeyEventTime(unsigned long unk1, unsigned long unk2, bool unk3) const; //0x00442268
		/*nema::Blender*/ public: float /*__thiscall*/ GetScalarVelocity(eAnimChore unk1, eAnimStance unk2, unsigned long unk3) const; //0x0056b510
		/*nema::Blender*/ public: float /*__thiscall*/ GetScalarVelocity(unsigned long unk1) const; //0x004421fe
		/*nema::Blender*/ public: float /*__thiscall*/ TimeOfCurrentTimeWarp(); //0x0056cf60
		/*nema::Blender*/ public: int /*__thiscall*/ GetMinDurationAnim() const; //0x00442252
		/*nema::Blender*/ public: int /*__thiscall*/ GetMinDurationAnim(eAnimChore unk1, eAnimStance unk2) const; //0x0056b5e0
		/*nema::Blender*/ public: int /*__thiscall*/ GetNumSubAnims() const; //0x004421d0
		/*nema::Blender*/ public: int /*__thiscall*/ GetNumSubAnims(eAnimChore unk1, eAnimStance unk2) const; //0x0056b430
		/*nema::Blender*/ public: int /*__thiscall*/ GetSubAnimIndex(eAnimChore unk1, unsigned long unk2) const; //0x0056b480
		/*nema::Blender*/ public: int /*__thiscall*/ GetSubAnimIndex(unsigned long unk1) const; //0x004421e6
		/*nema::Blender*/ public: unsigned long /*__thiscall*/ GetNumberOfEvents(eAnimEvent unk1) const; //0x0056a3f0
		/*nema::Blender*/ public: unsigned long /*__thiscall*/ GetRecentEvents() const; //0x0056a3e0
		/*nema::Blender*/ public: unsigned long /*__thiscall*/ NumActiveBoneAnims() const; //0x00442f4c
		/*nema::Blender*/ public: unsigned long /*__thiscall*/ NumActiveVertexAnims() const; //0x00442f56
		/*nema::Blender*/ public: unsigned long /*__thiscall*/ OpenBlendGroup(); //0x00442121
		/*nema::Blender*/ public: void /*__thiscall*/ AddAnimToBlendGroup(unsigned long unk1, float unk2, bool unk3); //0x0056b7b0
		/*nema::Blender*/ public: void /*__thiscall*/ AddAnimToBlendGroup(unsigned long unk1, float unk2); //0x00442166
		/*nema::Blender*/ public: void /*__thiscall*/ CloseBlendGroup(); //0x0044212d
		/*nema::Blender*/ public: void /*__thiscall*/ CloseBlendGroup(bool unk1); //0x00442139
		/*nema::Blender*/ public: void /*__thiscall*/ CloseBlendGroupWithTransition(float unk1, bool unk2); //0x0044214c
		/*nema::Blender*/ public: void /*__thiscall*/ ResetTimeWarp(); //0x00445c61
		/*nema::Blender*/ public: void /*__thiscall*/ SetBlendGroupAnimWeight(unsigned long unk1, unsigned long unk2, float unk3); //0x004421a4
		/*nema::Blender*/ public: void /*__thiscall*/ SetBlendGroupWeight(unsigned long unk1, float unk2); //0x0044217e
	};

	class Aspect {
	public:
		/*nema::Aspect*/ private: /*static*/ bool /*__cdecl*/ FUBI_DoesHandleMgrExist(); //0x0054bdb0
		/*nema::Aspect*/ private: /*static*/ bool /*__cdecl*/ FUBI_HandleIsValid(ResHandle<Aspect, ResHandleFields<24> > unk1); //0x0054eb60
		/*nema::Aspect*/ private: /*static*/ Aspect* /*__cdecl*/ FUBI_HandleGet(ResHandle<Aspect, ResHandleFields<24> > unk1); //0x0054ced0
		/*nema::Aspect*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleAddRef(ResHandle<Aspect, ResHandleFields<24> > unk1); //0x0054eb40
		/*nema::Aspect*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleRelease(ResHandle<Aspect, ResHandleFields<24> > unk1); //0x0055cfc0
		/*nema::Aspect*/ public: bool /*__thiscall*/ AttachDeformableChild(ResHandle<Aspect, ResHandleFields<24> > unk1, const Quat& unk2, const vector_3& unk3); //0x0055ba90
		/*nema::Aspect*/ public: bool /*__thiscall*/ AttachDeformableChild(ResHandle<Aspect, ResHandleFields<24> > unk1); //0x004285b5
		/*nema::Aspect*/ public: bool /*__thiscall*/ AttachReverseLinkedChild(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3, const Quat& unk4, const vector_3& unk5); //0x0055b730
		/*nema::Aspect*/ public: bool /*__thiscall*/ AttachReverseLinkedChild(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3); //0x00428596
		/*nema::Aspect*/ public: bool /*__thiscall*/ AttachRigidLinkedChild(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3, const Quat& unk4, const vector_3& unk5); //0x00428558
		/*nema::Aspect*/ public: bool /*__thiscall*/ AttachRigidLinkedChild(ResHandle<Aspect, ResHandleFields<24> > unk1, const char* unk2, const char* unk3); //0x00428575
		/*nema::Aspect*/ public: bool /*__thiscall*/ BlenderIsIdle(); //0x0054a340
		/*nema::Aspect*/ public: bool /*__thiscall*/ DetachAllChildren(); //0x0055bd10
		/*nema::Aspect*/ public: bool /*__thiscall*/ DetachChild(ResHandle<Aspect, ResHandleFields<24> > unk1); //0x0055c000
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetBoneOrientation(const char* unk1, vector_3& unk2, Quat& unk3) const; //0x0054a6c0
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetChoreWasRepeated(); //0x0042889b
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetFreezeMeshFlag(); //0x0042879e
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetHideMeshFlag(); //0x00428795
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetIndexedBoneOrientation(int unk1, vector_3& unk2, Quat& unk3) const; //0x0054aa90
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetIndexedBonePosition(int unk1, vector_3& unk2) const; //0x0054ae80
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetIndexedCornerPosNorm(unsigned long unk1, unsigned long unk2, vector_3& unk3, vector_3& unk4) const; //0x005473d0
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetLockMeshFlag(); //0x004287b9
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetPrimaryBoneOrientation(vector_3& unk1, Quat& unk2) const; //0x0054acb0
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetRenderTracersFlag(); //0x004287a8
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetStandardBoneAnimationSendEvents(); //0x00428805
		/*nema::Aspect*/ public: bool /*__thiscall*/ GetUsingCombatStance() const; //0x004287df
		/*nema::Aspect*/ public: bool /*__thiscall*/ HasBlender() const; //0x00428818
		/*nema::Aspect*/ public: Blender* /*__thiscall*/ GetBlender(); //0x00428824
		/*nema::Aspect*/ public: Blender* /*__thiscall*/ GetOrCreateBlender(); //0x00546c50
		/*nema::Aspect*/ public: ResHandle<Aspect, ResHandleFields<24> > /*__thiscall*/ GetChild(unsigned long unk1); //0x0054ce40
		/*nema::Aspect*/ public: ResHandle<Aspect, ResHandleFields<24> > /*__thiscall*/ GetChildByDebugName(const gpbstring<char>& unk1); //0x00550b60
		/*nema::Aspect*/ public: ResHandle<Aspect, ResHandleFields<24> > /*__thiscall*/ GetParent(); //0x00550b00
		/*nema::Aspect*/ public: const char* /*__thiscall*/ GetDebugName() const; //0x0042b23f
		/*nema::Aspect*/ public: const gpbstring<char>& /*__thiscall*/ GetDebugNameString() const; //0x0042854a
		/*nema::Aspect*/ public: const Goid_* /*__thiscall*/ GetGoid() const; //0x0042854e
		/*nema::Aspect*/ public: const Quat& /*__thiscall*/ GetLinkOffsetRotation() const; //0x004285ec
		/*nema::Aspect*/ public: const vector_3& /*__thiscall*/ GetLinkOffsetPosition() const; //0x004285ce
		/*nema::Aspect*/ public: eAnimChore /*__thiscall*/ GetCurrentChore() const; //0x00428855
		/*nema::Aspect*/ public: eAnimChore /*__thiscall*/ GetNextChore() const; //0x00428878
		/*nema::Aspect*/ public: eAnimChore /*__thiscall*/ GetPreviousChore() const; //0x0042882b
		/*nema::Aspect*/ public: eAnimStance /*__thiscall*/ GetChoreStance(); //0x00428811
		/*nema::Aspect*/ public: eAnimStance /*__thiscall*/ GetCurrentStance() const; //0x0042885c
		/*nema::Aspect*/ public: eAnimStance /*__thiscall*/ GetNextStance() const; //0x0042887f
		/*nema::Aspect*/ public: eAnimStance /*__thiscall*/ GetPreviousStance() const; //0x00428832
		/*nema::Aspect*/ public: float /*__thiscall*/ GetCurrentAnimSpeed() const; //0x00428871
		/*nema::Aspect*/ public: float /*__thiscall*/ GetCurrentVelocity() const; //0x004288be
		/*nema::Aspect*/ public: float /*__thiscall*/ GetMeshPuffDistance(); //0x004287b2
		/*nema::Aspect*/ public: float /*__thiscall*/ GetNextAnimSpeed() const; //0x00428894
		/*nema::Aspect*/ public: float /*__thiscall*/ GetPreviousAnimSpeed() const; //0x00428847
		/*nema::Aspect*/ public: int /*__thiscall*/ GetBoneIndex(const gpbstring<char>& unk1) const; //0x0054e820
		/*nema::Aspect*/ public: int /*__thiscall*/ GetCurrentFlags() const; //0x0042886a
		/*nema::Aspect*/ public: int /*__thiscall*/ GetCurrentSubAnim() const; //0x00428863
		/*nema::Aspect*/ public: int /*__thiscall*/ GetNextFlags() const; //0x0042888d
		/*nema::Aspect*/ public: int /*__thiscall*/ GetNextSubAnim() const; //0x00428886
		/*nema::Aspect*/ public: int /*__thiscall*/ GetNumberOfChildren(); //0x00429e48
		/*nema::Aspect*/ public: int /*__thiscall*/ GetNumCorners(unsigned long unk1); //0x004285fc
		/*nema::Aspect*/ public: int /*__thiscall*/ GetPreviousFlags() const; //0x00428840
		/*nema::Aspect*/ public: int /*__thiscall*/ GetPreviousSubAnim() const; //0x00428839
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
		/*nema::Aspect*/ public: void /*__thiscall*/ AnimationCallback(unsigned long unk1); //0x0054a310
		/*nema::Aspect*/ public: void /*__thiscall*/ ClearInstanceAttrFlags(unsigned long unk1); //0x0042877f
		/*nema::Aspect*/ public: void /*__thiscall*/ ForceDeformation(bool unk1); //0x00560c60
		/*nema::Aspect*/ public: void /*__thiscall*/ HideSubMesh(int unk1); //0x00546bf0
		/*nema::Aspect*/ public: void /*__thiscall*/ PopTexture(unsigned long unk1); //0x0054fab0
		/*nema::Aspect*/ public: void /*__thiscall*/ PushTexture(unsigned long unk1); //0x0055b0a0
		/*nema::Aspect*/ public: void /*__thiscall*/ ReloadBlenderSkrits(); //0x00547ba0
		/*nema::Aspect*/ public: void /*__thiscall*/ RequestDeformation(); //0x0042873d
		/*nema::Aspect*/ public: void /*__thiscall*/ ResetBlender(); //0x00560cb0
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateBoneX(const char* unk1, float unk2, bool unk3); //0x00547570
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateBoneX(const char* unk1, float unk2); //0x0042861d
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateBoneY(const char* unk1, float unk2, bool unk3); //0x005475f0
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateBoneY(const char* unk1, float unk2); //0x00428635
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateBoneZ(const char* unk1, float unk2, bool unk3); //0x00547670
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateBoneZ(const char* unk1, float unk2); //0x0042864d
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateIndexedBoneX(int unk1, float unk2, bool unk3); //0x00547870
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateIndexedBoneX(int unk1, float unk2); //0x004286ad
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateIndexedBoneY(int unk1, float unk2, bool unk3); //0x005478e0
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateIndexedBoneY(int unk1, float unk2); //0x004286c5
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateIndexedBoneZ(int unk1, float unk2, bool unk3); //0x00547950
		/*nema::Aspect*/ public: void /*__thiscall*/ RotateIndexedBoneZ(int unk1, float unk2); //0x004286dd
		/*nema::Aspect*/ public: void /*__thiscall*/ SetDiffuseColor(unsigned long unk1); //0x00428751
		/*nema::Aspect*/ public: void /*__thiscall*/ SetFreezeMeshFlag(bool unk1); //0x00560370
		/*nema::Aspect*/ public: void /*__thiscall*/ SetHideMeshFlag(bool unk1); //0x0054fda0
		/*nema::Aspect*/ public: void /*__thiscall*/ SetInstanceAttrFlags(unsigned long unk1); //0x0042876b
		/*nema::Aspect*/ public: void /*__thiscall*/ SetLinkOffsetPosition(const vector_3& unk1); //0x004285d5
		/*nema::Aspect*/ public: void /*__thiscall*/ SetLinkOffsetRotation(const Quat& unk1); //0x004285f0
		/*nema::Aspect*/ public: void /*__thiscall*/ SetLockMeshFlag(bool unk1); //0x005604d0
		/*nema::Aspect*/ public: void /*__thiscall*/ SetMeshPuffDistance(float unk1); //0x00560610
		/*nema::Aspect*/ public: void /*__thiscall*/ SetRenderTracersFlag(bool unk1); //0x00546bc0
		/*nema::Aspect*/ public: void /*__thiscall*/ SetStandardBoneAnimationSendEvents(bool unk1); //0x004287eb
		/*nema::Aspect*/ public: void /*__thiscall*/ SetTextureFromTextureName(unsigned long unk1, const char* unk2); //0x00555580
		/*nema::Aspect*/ public: void /*__thiscall*/ SetupStandardBoneAnimation(bool unk1, int unk2, bool unk3, bool unk4, bool unk5); //0x0055e230
		/*nema::Aspect*/ public: void /*__thiscall*/ SetUsingCombatStance(bool unk1); //0x004287c5
		/*nema::Aspect*/ public: void /*__thiscall*/ ShowSubMesh(int unk1); //0x00546c20
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateBoneX(const char* unk1, float unk2, bool unk3); //0x005476f0
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateBoneX(const char* unk1, float unk2); //0x00428665
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateBoneY(const char* unk1, float unk2, bool unk3); //0x00547770
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateBoneY(const char* unk1, float unk2); //0x0042867d
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateBoneZ(const char* unk1, float unk2, bool unk3); //0x005477f0
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateBoneZ(const char* unk1, float unk2); //0x00428695
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateIndexedBoneX(int unk1, float unk2, bool unk3); //0x005479c0
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateIndexedBoneX(int unk1, float unk2); //0x004286f5
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateIndexedBoneY(int unk1, float unk2, bool unk3); //0x00547a30
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateIndexedBoneY(int unk1, float unk2); //0x0042870d
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateIndexedBoneZ(int unk1, float unk2, bool unk3); //0x00547aa0
		/*nema::Aspect*/ public: void /*__thiscall*/ TranslateIndexedBoneZ(int unk1, float unk2); //0x00428725
	};

	class BlendGroup {
	public:
		/*nema::BlendGroup*/ public: bool /*__thiscall*/ AddToGroup(Blender* unk1, unsigned long unk2, unsigned long unk3, unsigned long unk4, float unk5, bool unk6); //0x00564db0
	};

	class FrameKeys {
	public:
		/*nema::FrameKeys*/ private: /*static*/ bool /*__cdecl*/ FUBI_DoesHandleMgrExist(); //0x00442f40
		/*nema::FrameKeys*/ private: /*static*/ bool /*__cdecl*/ FUBI_HandleIsValid(ResHandle<FrameKeys, ResHandleFields16> unk1); //0x00443d03
		/*nema::FrameKeys*/ private: /*static*/ FrameKeys* /*__cdecl*/ FUBI_HandleGet(ResHandle<FrameKeys, ResHandleFields16> unk1); //0x00443d16
		/*nema::FrameKeys*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleAddRef(ResHandle<FrameKeys, ResHandleFields16> unk1); //0x00443cf0
		/*nema::FrameKeys*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleRelease(ResHandle<FrameKeys, ResHandleFields16> unk1); //0x0044374f
		/*nema::FrameKeys*/ public: bool /*__thiscall*/ GetLoopAtEnd() const; //0x004420fd
		/*nema::FrameKeys*/ public: bool /*__thiscall*/ Update(Aspect* unk1, float unk2); //0x0056e970
		/*nema::FrameKeys*/ public: const char* /*__thiscall*/ GetDebugName() const; //0x0044374b
		/*nema::FrameKeys*/ public: const gpbstring<char>& /*__thiscall*/ GetDebugNameString() const; //0x004420f1
		/*nema::FrameKeys*/ public: float /*__thiscall*/ GetBlendWeight() const; //0x004420f9
		/*nema::FrameKeys*/ public: float /*__thiscall*/ GetDuration() const; //0x00442103
		/*nema::FrameKeys*/ public: float /*__thiscall*/ GetNormalizedTime() const; //0x004420f5
	};

	class PRSKeys {
	public:
		/*nema::PRSKeys*/ private: /*static*/ bool /*__cdecl*/ FUBI_DoesHandleMgrExist(); //0x00442f34
		/*nema::PRSKeys*/ private: /*static*/ bool /*__cdecl*/ FUBI_HandleIsValid(ResHandle<PRSKeys, ResHandleFields16> unk1); //0x00443cca
		/*nema::PRSKeys*/ private: /*static*/ PRSKeys* /*__cdecl*/ FUBI_HandleGet(ResHandle<PRSKeys, ResHandleFields16> unk1); //0x00443cdd
		/*nema::PRSKeys*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleAddRef(ResHandle<PRSKeys, ResHandleFields16> unk1); //0x00443cb7
		/*nema::PRSKeys*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_HandleRelease(ResHandle<PRSKeys, ResHandleFields16> unk1); //0x00443738
		/*nema::PRSKeys*/ public: bool /*__thiscall*/ GetLoopAtEnd() const; //0x0044200f
		/*nema::PRSKeys*/ public: bool /*__thiscall*/ UpdateAbsolute(float unk1, float unk2); //0x005717c0
		/*nema::PRSKeys*/ public: const char* /*__thiscall*/ GetDebugName() const; //0x00442e78
		/*nema::PRSKeys*/ public: const gpbstring<char>& /*__thiscall*/ GetDebugNameString() const; //0x00441fc0
		/*nema::PRSKeys*/ public: const vector_3& /*__thiscall*/ GetVelocity() const; //0x004420af
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetCurrentNormalizedTime() const; //0x0044205d
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetCurrPositionX(int unk1) const; //0x00442ea8
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetCurrPositionY(int unk1) const; //0x00442ebc
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetCurrPositionZ(int unk1) const; //0x00442ed0
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetCurrRotationW(int unk1) const; //0x00442ee4
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetCurrRotationX(int unk1) const; //0x00442ef8
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetCurrRotationY(int unk1) const; //0x00442f0c
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetCurrRotationZ(int unk1) const; //0x00442f20
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetDuration() const; //0x004420a9
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetScalarVelocity() const; //0x004420c7
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetVelocityX() const; //0x004420b5
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetVelocityY() const; //0x004420bb
		/*nema::PRSKeys*/ public: float /*__thiscall*/ GetVelocityZ() const; //0x004420c1
		/*nema::PRSKeys*/ public: int /*__thiscall*/ GetNumTracks() const; //0x00442e9e
	};
} typedef Nema;

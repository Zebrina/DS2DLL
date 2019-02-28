#pragma once

#include "Enums.h"
#include "ResHandle.h"
#include "ResHandleFields.h"



class nema {
public:
	enum eBoneFreeze {

	};

	class ActiveBoneChore  {
	public:
		DefineConstMethod(BaseAnimDurationForStance, 0x5750f0, float, Params(unsigned long unk1), Args(unk1));
		DefineConstMethod(SubAnimDurationForStance, 0x574dd0, float, Params(unsigned long unk1, unsigned long unk2), Args(unk1, unk2));
		DefineConstMethod(NumSubAnimsForStance, 0x574440, int, Params(unsigned long unk1), Args(unk1));
	};

	class ActiveVertexChore {
	public:
		DefineConstMethod(BaseAnimDurationForStance, 0x5752c0, float, Params(unsigned long unk1), Args(unk1));
		DefineConstMethod(SubAnimDurationForStance, 0x574e70, float, Params(unsigned long unk1, unsigned long unk2), Args(unk1, unk2));
		DefineConstMethod(NumSubAnimsForStance, 0x574470, int, Params(unsigned long unk1), Args(unk1));
	};

	class Blender {
	public:
		DefineMethod(CreateDynamicAnimation, 0x56db50, bool, Params(eAnimChore unk1, eAnimStance unk2, float unk3), Args(unk1, unk2, unk3));
		DefineMethod(GetLoopAtEnd, 0x56c1a0, bool, Params(eAnimChore unk1, eAnimStance unk2, unsigned long unk3), Args(unk1, unk2, unk3));
		DefineMethod(GetLoopAtEnd, 0x44228d, bool, Params(unsigned long unk1), Args(unk1));
		DefineConstMethod(GetSubAnimsAreLoaded, 0x56b3d0, bool, Params(eAnimChore unk1, eAnimStance unk2), Args(unk1, unk2));
		DefineMethod(InitializeTimeWarpWithDynamicAnimation, 0x56dd70, bool, Params(eAnimChore unk1, eAnimStance unk2), Args(unk1, unk2));
		DefineMethod(IsIdle, 0x4421cc, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(UpdateTimeWarp, 0x56a3c0, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetActiveAnimNames, 0x56d7c0, gpbstring<char>, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetAnimName, 0x56c1d0, const gpbstring<char>&, Params(eAnimChore unk1, eAnimStance unk2, unsigned long unk3), Args(unk1, unk2, unk3));
		DefineConstMethod(GetBlendedPRSDebugName, 0x56b780, const gpbstring<char>&, Params(unsigned long unk1), Args(unk1));
		DefineConstMethod(DurationOfCurrentTimeWarp, 0x56a3d0, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetBaseDuration, 0x44223c, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetBaseDuration, 0x56b5a0, float, Params(eAnimChore unk1, eAnimStance unk2), Args(unk1, unk2));
		DefineMethod(GetBlendGroupAnimWeight, 0x4421c0, float, Params(unsigned long unk1, unsigned long unk2), Args(unk1, unk2));
		DefineMethod(GetBlendGroupWeight, 0x442198, float, Params(unsigned long unk1), Args(unk1));
		DefineConstMethod(GetDuration, 0x56b550, float, Params(eAnimChore unk1, eAnimStance unk2, unsigned long unk3), Args(unk1, unk2, unk3));
		DefineConstMethod(GetDuration, 0x44221d, float, Params(unsigned long unk1), Args(unk1));
		DefineConstMethod(GetKeyEventTime, 0x56c130, float, Params(eAnimChore unk1, eAnimStance unk2, unsigned long unk3, unsigned long unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
		DefineConstMethod(GetKeyEventTime, 0x442268, float, Params(unsigned long unk1, unsigned long unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineConstMethod(GetScalarVelocity, 0x56b510, float, Params(eAnimChore unk1, eAnimStance unk2, unsigned long unk3), Args(unk1, unk2, unk3));
		DefineConstMethod(GetScalarVelocity, 0x4421fe, float, Params(unsigned long unk1), Args(unk1));
		DefineMethod(TimeOfCurrentTimeWarp, 0x56cf60, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetMinDurationAnim, 0x442252, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetMinDurationAnim, 0x56b5e0, int, Params(eAnimChore unk1, eAnimStance unk2), Args(unk1, unk2));
		DefineConstMethod(GetNumSubAnims, 0x4421d0, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNumSubAnims, 0x56b430, int, Params(eAnimChore unk1, eAnimStance unk2), Args(unk1, unk2));
		DefineConstMethod(GetSubAnimIndex, 0x56b480, int, Params(eAnimChore unk1, unsigned long unk2), Args(unk1, unk2));
		DefineConstMethod(GetSubAnimIndex, 0x4421e6, int, Params(unsigned long unk1), Args(unk1));
		DefineConstMethod(GetNumberOfEvents, 0x56a3f0, unsigned long, Params(eAnimEvent unk1), Args(unk1));
		DefineConstMethod(GetRecentEvents, 0x56a3e0, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(NumActiveBoneAnims, 0x442f4c, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(NumActiveVertexAnims, 0x442f56, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(OpenBlendGroup, 0x442121, unsigned long, NO_PARAMS, NO_ARGS);
		DefineMethod(AddAnimToBlendGroup, 0x56b7b0, void, Params(unsigned long unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(AddAnimToBlendGroup, 0x442166, void, Params(unsigned long unk1, float unk2), Args(unk1, unk2));
		DefineMethod(CloseBlendGroup, 0x44212d, void, NO_PARAMS, NO_ARGS);
		DefineMethod(CloseBlendGroup, 0x442139, void, Params(bool unk1), Args(unk1));
		DefineMethod(CloseBlendGroupWithTransition, 0x44214c, void, Params(float unk1, bool unk2), Args(unk1, unk2));
		DefineMethod(ResetTimeWarp, 0x445c61, void, NO_PARAMS, NO_ARGS);
		DefineMethod(SetBlendGroupAnimWeight, 0x4421a4, void, Params(unsigned long unk1, unsigned long unk2, float unk3), Args(unk1, unk2, unk3));
		DefineMethod(SetBlendGroupWeight, 0x44217e, void, Params(unsigned long unk1, float unk2), Args(unk1, unk2));
	};

	class Aspect {
	public:
		typedef ResHandle<Aspect, ResHandleFields<24>> ResHandle;

		DefineStaticMethod(FUBI_DoesHandleMgrExist, 0x54bdb0, bool, NO_PARAMS, NO_ARGS);
		DefineStaticMethod(FUBI_HandleIsValid, 0x54eb60, bool, Params(ResHandle unk1), Args(unk1));
		DefineStaticMethod(FUBI_HandleGet, 0x54ced0, Aspect*, Params(ResHandle unk1), Args(unk1));
		DefineStaticMethod(FUBI_HandleAddRef, 0x54eb40, unsigned int, Params(ResHandle unk1), Args(unk1));
		DefineStaticMethod(FUBI_HandleRelease, 0x55cfc0, unsigned int, Params(ResHandle unk1), Args(unk1));
		DefineMethod(AttachDeformableChild, 0x55ba90, bool, Params(ResHandle unk1, const Quat& unk2, const vector_3& unk3), Args(unk1, unk2, unk3));
		DefineMethod(AttachDeformableChild, 0x4285b5, bool, Params(ResHandle unk1), Args(unk1));
		DefineMethod(AttachReverseLinkedChild, 0x55b730, bool, Params(ResHandle unk1, const char* unk2, const char* unk3, const Quat& unk4, const vector_3& unk5), Args(unk1, unk2, unk3, unk4, unk5));
		DefineMethod(AttachReverseLinkedChild, 0x428596, bool, Params(ResHandle unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
		DefineMethod(AttachRigidLinkedChild, 0x428558, bool, Params(ResHandle unk1, const char* unk2, const char* unk3, const Quat& unk4, const vector_3& unk5), Args(unk1, unk2, unk3, unk4, unk5));
		DefineMethod(AttachRigidLinkedChild, 0x428575, bool, Params(ResHandle unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
		DefineMethod(BlenderIsIdle, 0x54a340, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(DetachAllChildren, 0x55bd10, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(DetachChild, 0x55c000, bool, Params(ResHandle unk1), Args(unk1));
		DefineConstMethod(GetBoneOrientation, 0x54a6c0, bool, Params(const char* unk1, vector_3& unk2, Quat& unk3), Args(unk1, unk2, unk3));
		DefineMethod(GetChoreWasRepeated, 0x42889b, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(GetFreezeMeshFlag, 0x42879e, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(GetHideMeshFlag, 0x428795, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetIndexedBoneOrientation, 0x54aa90, bool, Params(int unk1, vector_3& unk2, Quat& unk3), Args(unk1, unk2, unk3));
		DefineConstMethod(GetIndexedBonePosition, 0x54ae80, bool, Params(int unk1, vector_3& unk2), Args(unk1, unk2));
		DefineConstMethod(GetIndexedCornerPosNorm, 0x5473d0, bool, Params(unsigned long unk1, unsigned long unk2, vector_3& unk3, vector_3& unk4), Args(unk1, unk2, unk3, unk4));
		DefineMethod(GetLockMeshFlag, 0x4287b9, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetPrimaryBoneOrientation, 0x54acb0, bool, Params(vector_3& unk1, Quat& unk2), Args(unk1, unk2));
		DefineMethod(GetRenderTracersFlag, 0x4287a8, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(GetStandardBoneAnimationSendEvents, 0x428805, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetUsingCombatStance, 0x4287df, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(HasBlender, 0x428818, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(GetBlender, 0x428824, Blender*, NO_PARAMS, NO_ARGS);
		DefineMethod(GetOrCreateBlender, 0x546c50, Blender*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetChild, 0x54ce40, ResHandle, Params(unsigned long unk1), Args(unk1));
		DefineConstMethod(GetChildByDebugName, 0x550b60, ResHandle, Params(const gpbstring<char>& unk1), Args(unk1));
		DefineConstMethod(GetParent, 0x550b00, ResHandle, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetDebugName, 0x42b23f, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetDebugNameString, 0x42854a, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetGoid, 0x42854e, const Goid_*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetLinkOffsetRotation, 0x4285ec, const Quat&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetLinkOffsetPosition, 0x4285ce, const vector_3&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCurrentChore, 0x428855, eAnimChore, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNextChore, 0x428878, eAnimChore, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetPreviousChore, 0x42882b, eAnimChore, NO_PARAMS, NO_ARGS);
		DefineMethod(GetChoreStance, 0x428811, eAnimStance, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCurrentStance, 0x42885c, eAnimStance, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNextStance, 0x42887f, eAnimStance, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetPreviousStance, 0x428832, eAnimStance, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCurrentAnimSpeed, 0x428871, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCurrentVelocity, 0x4288be, float, NO_PARAMS, NO_ARGS);
		DefineMethod(GetMeshPuffDistance, 0x4287b2, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNextAnimSpeed, 0x428894, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetPreviousAnimSpeed, 0x428847, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetBoneIndex, 0x54e820, int, Params(const gpbstring<char>& unk1), Args(unk1));
		DefineConstMethod(GetCurrentFlags, 0x42886a, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCurrentSubAnim, 0x428863, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNextFlags, 0x42888d, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNextSubAnim, 0x428886, int, NO_PARAMS, NO_ARGS);
		DefineMethod(GetNumberOfChildren, 0x429e48, int, NO_PARAMS, NO_ARGS);
		DefineMethod(GetNumCorners, 0x4285fc, int, Params(unsigned long unk1), Args(unk1));
		DefineConstMethod(GetPreviousFlags, 0x428840, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetPreviousSubAnim, 0x428839, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetBoneFrozenState, 0x547b10, unsigned long, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetCurrentReqBlock, 0x42884e, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetDiffuseColor, 0x42874a, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetHandleValue, 0x42ccc4, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetIndexedBoneFrozenState, 0x547b50, unsigned long, Params(unsigned long unk1), Args(unk1));
		DefineConstMethod(GetInstanceAttrFlags, 0x428767, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNumBones, 0x428617, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNumSubTextures, 0x428552, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetRecentBlenderEvents, 0x546c90, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetSharedAttrFlags, 0x428761, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(SetBoneFrozenState, 0x55e900, unsigned long, Params(const char* unk1, nema::eBoneFreeze unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineConstMethod(SetIndexedBoneFrozenState, 0x55ea10, unsigned long, Params(unsigned long unk1, nema::eBoneFreeze unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineConstMethod(UpdateBlender, 0x547b80, unsigned long, Params(float unk1), Args(unk1));
		DefineMethod(AnimationCallback, 0x54a310, void, Params(unsigned long unk1), Args(unk1));
		DefineMethod(ClearInstanceAttrFlags, 0x42877f, void, Params(unsigned long unk1), Args(unk1));
		DefineMethod(ForceDeformation, 0x560c60, void, Params(bool unk1), Args(unk1));
		DefineMethod(HideSubMesh, 0x546bf0, void, Params(int unk1), Args(unk1));
		DefineMethod(PopTexture, 0x54fab0, void, Params(unsigned long unk1), Args(unk1));
		DefineMethod(PushTexture, 0x55b0a0, void, Params(unsigned long unk1), Args(unk1));
		DefineMethod(ReloadBlenderSkrits, 0x547ba0, void, NO_PARAMS, NO_ARGS);
		DefineMethod(RequestDeformation, 0x42873d, void, NO_PARAMS, NO_ARGS);
		DefineMethod(ResetBlender, 0x560cb0, void, NO_PARAMS, NO_ARGS);
		DefineMethod(RotateBoneX, 0x547570, void, Params(const char* unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(RotateBoneX, 0x42861d, void, Params(const char* unk1, float unk2), Args(unk1, unk2));
		DefineMethod(RotateBoneY, 0x5475f0, void, Params(const char* unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(RotateBoneY, 0x428635, void, Params(const char* unk1, float unk2), Args(unk1, unk2));
		DefineMethod(RotateBoneZ, 0x547670, void, Params(const char* unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(RotateBoneZ, 0x42864d, void, Params(const char* unk1, float unk2), Args(unk1, unk2));
		DefineMethod(RotateIndexedBoneX, 0x547870, void, Params(int unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(RotateIndexedBoneX, 0x4286ad, void, Params(int unk1, float unk2), Args(unk1, unk2));
		DefineMethod(RotateIndexedBoneY, 0x5478e0, void, Params(int unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(RotateIndexedBoneY, 0x4286c5, void, Params(int unk1, float unk2), Args(unk1, unk2));
		DefineMethod(RotateIndexedBoneZ, 0x547950, void, Params(int unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(RotateIndexedBoneZ, 0x4286dd, void, Params(int unk1, float unk2), Args(unk1, unk2));
		DefineMethod(SetDiffuseColor, 0x428751, void, Params(unsigned long unk1), Args(unk1));
		DefineMethod(SetFreezeMeshFlag, 0x560370, void, Params(bool unk1), Args(unk1));
		DefineMethod(SetHideMeshFlag, 0x54fda0, void, Params(bool unk1), Args(unk1));
		DefineMethod(SetInstanceAttrFlags, 0x42876b, void, Params(unsigned long unk1), Args(unk1));
		DefineMethod(SetLinkOffsetPosition, 0x4285d5, void, Params(const vector_3& unk1), Args(unk1));
		DefineMethod(SetLinkOffsetRotation, 0x4285f0, void, Params(const Quat& unk1), Args(unk1));
		DefineMethod(SetLockMeshFlag, 0x5604d0, void, Params(bool unk1), Args(unk1));
		DefineMethod(SetMeshPuffDistance, 0x560610, void, Params(float unk1), Args(unk1));
		DefineMethod(SetRenderTracersFlag, 0x546bc0, void, Params(bool unk1), Args(unk1));
		DefineMethod(SetStandardBoneAnimationSendEvents, 0x4287eb, void, Params(bool unk1), Args(unk1));
		DefineMethod(SetTextureFromTextureName, 0x555580, void, Params(unsigned long unk1, const char* unk2), Args(unk1, unk2));
		DefineMethod(SetupStandardBoneAnimation, 0x55e230, void, Params(bool unk1, int unk2, bool unk3, bool unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
		DefineMethod(SetUsingCombatStance, 0x4287c5, void, Params(bool unk1), Args(unk1));
		DefineMethod(ShowSubMesh, 0x546c20, void, Params(int unk1), Args(unk1));
		DefineMethod(TranslateBoneX, 0x5476f0, void, Params(const char* unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(TranslateBoneX, 0x428665, void, Params(const char* unk1, float unk2), Args(unk1, unk2));
		DefineMethod(TranslateBoneY, 0x547770, void, Params(const char* unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(TranslateBoneY, 0x42867d, void, Params(const char* unk1, float unk2), Args(unk1, unk2));
		DefineMethod(TranslateBoneZ, 0x5477f0, void, Params(const char* unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(TranslateBoneZ, 0x428695, void, Params(const char* unk1, float unk2), Args(unk1, unk2));
		DefineMethod(TranslateIndexedBoneX, 0x5479c0, void, Params(int unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(TranslateIndexedBoneX, 0x4286f5, void, Params(int unk1, float unk2), Args(unk1, unk2));
		DefineMethod(TranslateIndexedBoneY, 0x547a30, void, Params(int unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(TranslateIndexedBoneY, 0x42870d, void, Params(int unk1, float unk2), Args(unk1, unk2));
		DefineMethod(TranslateIndexedBoneZ, 0x547aa0, void, Params(int unk1, float unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineMethod(TranslateIndexedBoneZ, 0x428725, void, Params(int unk1, float unk2), Args(unk1, unk2));

		// 0x90
		bool lockMeshFlag;
		// 0x91
		bool inCombatStance;
	};

	class BlendGroup {
	public:
		DefineMethod(AddToGroup, 0x564db0, bool, Params(Blender* unk1, unsigned long unk2, unsigned long unk3, unsigned long unk4, float unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	};

	class FrameKeys {
	public:
		typedef ResHandle<FrameKeys, ResHandleFields<16>> ResHandle;

		DefineStaticMethod(FUBI_DoesHandleMgrExist, 0x442f40, bool, NO_PARAMS, NO_ARGS);
		DefineStaticMethod(FUBI_HandleIsValid, 0x443d03, bool, Params(ResHandle unk1), Args(unk1));
		DefineStaticMethod(FUBI_HandleGet, 0x443d16, FrameKeys*, Params(ResHandle unk1), Args(unk1));
		DefineStaticMethod(FUBI_HandleAddRef, 0x443cf0, unsigned int, Params(ResHandle unk1), Args(unk1));
		DefineStaticMethod(FUBI_HandleRelease, 0x044374f, unsigned int, Params(ResHandle unk1), Args(unk1));
		DefineConstMethod(GetLoopAtEnd, 0x4420fd, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(Update, 0x56e970, bool, Params(Aspect* unk1, float unk2), Args(unk1, unk2));
		DefineConstMethod(GetDebugName, 0x44374b, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetDebugNameString, 0x4420f1, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetBlendWeight, 0x4420f9, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetDuration, 0x442103, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNormalizedTime, 0x4420f5, float, NO_PARAMS, NO_ARGS);
	};

	class PRSKeys {
	public:
		typedef ResHandle<PRSKeys, ResHandleFields<16>> ResHandle;

		DefineStaticMethod(FUBI_DoesHandleMgrExist, 0x442f34, bool, NO_PARAMS, NO_ARGS);
		DefineStaticMethod(FUBI_HandleIsValid, 0x443cca, bool, Params(ResHandle unk1), Args(unk1));
		DefineStaticMethod(FUBI_HandleGet, 0x443cdd, PRSKeys*, Params(ResHandle unk1), Args(unk1));
		DefineStaticMethod(FUBI_HandleAddRef, 0x443cb7, unsigned int, Params(ResHandle unk1), Args(unk1));
		DefineStaticMethod(FUBI_HandleRelease, 0x443738, unsigned int, Params(ResHandle unk1), Args(unk1));
		DefineConstMethod(GetLoopAtEnd, 0x44200f, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(UpdateAbsolute, 0x5717c0, bool, Params(float unk1, float unk2), Args(unk1, unk2));
		DefineConstMethod(GetDebugName, 0x442e78, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetDebugNameString, 0x441fc0, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetVelocity, 0x4420af, const vector_3&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCurrentNormalizedTime, 0x44205d, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCurrPositionX, 0x442ea8, float, Params(int unk1), Args(unk1));
		DefineConstMethod(GetCurrPositionY, 0x442ebc, float, Params(int unk1), Args(unk1));
		DefineConstMethod(GetCurrPositionZ, 0x442ed0, float, Params(int unk1), Args(unk1));
		DefineConstMethod(GetCurrRotationW, 0x442ee4, float, Params(int unk1), Args(unk1));
		DefineConstMethod(GetCurrRotationX, 0x442ef8, float, Params(int unk1), Args(unk1));
		DefineConstMethod(GetCurrRotationY, 0x442f0c, float, Params(int unk1), Args(unk1));
		DefineConstMethod(GetCurrRotationZ, 0x442f20, float, Params(int unk1), Args(unk1));
		DefineConstMethod(GetDuration, 0x4420a9, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetScalarVelocity, 0x4420c7, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetVelocityX, 0x4420b5, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetVelocityY, 0x4420bb, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetVelocityZ, 0x4420c1, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetNumTracks, 0x442e9e, int, NO_PARAMS, NO_ARGS);
	};
} typedef Nema;

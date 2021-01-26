#pragma once

#include "Enums.h"
#include "ResHandle.h"
#include "ResHandleFields.h"

typedef class nema Nema;

class nema {
public:
	enum eBoneFreeze {

	};

	class ActiveBoneChore  {
	public:
		$ConstMethod(0x005750f0, BaseAnimDurationForStance, float, uint unk1);
		$ConstMethod(0x00574dd0, SubAnimDurationForStance, float, uint unk1, uint unk2);
		$ConstMethod(0x00574440, NumSubAnimsForStance, int, uint unk1);
	};

	class ActiveVertexChore {
	public:
		$ConstMethod(0x005752c0, BaseAnimDurationForStance, float, uint unk1);
		$ConstMethod(0x00574e70, SubAnimDurationForStance, float, uint unk1, uint unk2);
		$ConstMethod(0x00574470, NumSubAnimsForStance, int, uint unk1);
	};

	class Blender {
	public:
		$Method(0x0056db50, CreateDynamicAnimation, bool, eAnimChore chore, eAnimStance unk2, float unk3);
		$Method(0x0056c1a0, GetLoopAtEnd, bool, eAnimChore chore, eAnimStance unk2, uint unk3);
		$Method(0x0044228d, GetLoopAtEnd, bool, uint unk1);
		$ConstMethod(0x0056b3d0, GetSubAnimsAreLoaded, bool, eAnimChore chore, eAnimStance unk2);
		$Method(0x0056dd70, InitializeTimeWarpWithDynamicAnimation, bool, eAnimChore chore, eAnimStance unk2);
		$Method(0x004421cc, IsIdle, bool);
		$Method(0x0056a3c0, UpdateTimeWarp, bool);
		$ConstMethod(0x0056d7c0, GetActiveAnimNames, GPBString);
		$ConstMethod(0x0056c1d0, GetAnimName, const GPBString&, eAnimChore chore, eAnimStance unk2, uint unk3);
		$ConstMethod(0x0056b780, GetBlendedPRSDebugName, const GPBString&, uint unk1);
		$ConstMethod(0x0056a3d0, DurationOfCurrentTimeWarp, float);
		$ConstMethod(0x0044223c, GetBaseDuration, float);
		$ConstMethod(0x0056b5a0, GetBaseDuration, float, eAnimChore chore, eAnimStance unk2);
		$Method(0x004421c0, GetBlendGroupAnimWeight, float, uint unk1, uint unk2);
		$Method(0x00442198, GetBlendGroupWeight, float, uint unk1);
		$ConstMethod(0x0056b550, GetDuration, float, eAnimChore chore, eAnimStance unk2, uint unk3);
		$ConstMethod(0x0044221d, GetDuration, float, uint unk1);
		$ConstMethod(0x0056c130, GetKeyEventTime, float, eAnimChore chore, eAnimStance unk2, uint unk3, uint unk4, bool unk5);
		$ConstMethod(0x00442268, GetKeyEventTime, float, uint unk1, uint unk2, bool unk3);
		$ConstMethod(0x0056b510, GetScalarVelocity, float, eAnimChore chore, eAnimStance unk2, uint unk3);
		$ConstMethod(0x004421fe, GetScalarVelocity, float, uint unk1);
		$Method(0x0056cf60, TimeOfCurrentTimeWarp, float);
		$ConstMethod(0x00442252, GetMinDurationAnim, int);
		$ConstMethod(0x0056b5e0, GetMinDurationAnim, int, eAnimChore chore, eAnimStance unk2);
		$ConstMethod(0x004421d0, GetNumSubAnims, int);
		$ConstMethod(0x0056b430, GetNumSubAnims, int, eAnimChore chore, eAnimStance unk2);
		$ConstMethod(0x0056b480, GetSubAnimIndex, int, eAnimChore chore, uint unk2);
		$ConstMethod(0x004421e6, GetSubAnimIndex, int, uint unk1);
		$ConstMethod(0x0056a3f0, GetNumberOfEvents, uint, eAnimEvent unk1);
		$ConstMethod(0x0056a3e0, GetRecentEvents, uint);
		$ConstMethod(0x00442f4c, NumActiveBoneAnims, uint);
		$ConstMethod(0x00442f56, NumActiveVertexAnims, uint);
		$ConstMethod(0x00442121, OpenBlendGroup, uint);
		$Method(0x0056b7b0, AddAnimToBlendGroup, void, uint unk1, float unk2, bool unk3);
		$Method(0x00442166, AddAnimToBlendGroup, void, uint unk1, float unk2);
		$Method(0x0044212d, CloseBlendGroup, void);
		$Method(0x00442139, CloseBlendGroup, void, bool unk1);
		$Method(0x0044214c, CloseBlendGroupWithTransition, void, float unk1, bool unk2);
		$Method(0x00445c61, ResetTimeWarp, void);
		$Method(0x004421a4, SetBlendGroupAnimWeight, void, uint unk1, uint unk2, float unk3);
		$Method(0x0044217e, SetBlendGroupWeight, void, uint unk1, float unk2);
	};

	class Aspect {
	public:
		typedef ResHandle<Aspect, ResHandleFields<24>> ResHandle;

		$StaticMethod(0x0054bdb0, FUBI_DoesHandleMgrExist, bool);
		$StaticMethod(0x0054eb60, FUBI_HandleIsValid, bool, ResHandle handle);
		$StaticMethod(0x0054ced0, FUBI_HandleGet, Aspect*, ResHandle handle);
		$StaticMethod(0x0054eb40, FUBI_HandleAddRef, uint, ResHandle handle);
		$StaticMethod(0x0055cfc0, FUBI_HandleRelease, uint, ResHandle handle);
		$Method(0x004285b5, AttachDeformableChild, bool, ResHandle handle);
        $Method(0x0055ba90, AttachDeformableChild, bool, ResHandle handle, const Quat& unk2, const Vector3& unk3);
		$Method(0x00428596, AttachReverseLinkedChild, bool, ResHandle handle, const char* unk2, const char* unk3);
        $Method(0x0055b730, AttachReverseLinkedChild, bool, ResHandle handle, const char* unk2, const char* unk3, const Quat& unk4, const Vector3& unk5);
		$Method(0x00428575, AttachRigidLinkedChild, bool, ResHandle handle, const char* unk2, const char* unk3);
        $Method(0x00428558, AttachRigidLinkedChild, bool, ResHandle handle, const char* unk2, const char* unk3, const Quat& unk4, const Vector3& unk5);
		$Method(0x0054a340, BlenderIsIdle, bool);
        $Method(0x0055c000, DetachChild, bool, ResHandle handle);
		$Method(0x0055bd10, DetachAllChildren, bool);
		$ConstMethod(0x0054a6c0, GetBoneOrientation, bool, const char* boneName, Vector3& unk2, Quat& unk3);
		$Method(0x0042889b, GetChoreWasRepeated, bool);
		$Method(0x0042879e, GetFreezeMeshFlag, bool);
		$Method(0x00428795, GetHideMeshFlag, bool);
		$ConstMethod(0x0054aa90, GetIndexedBoneOrientation, bool, int unk1, Vector3& unk2, Quat& unk3);
		$ConstMethod(0x0054ae80, GetIndexedBonePosition, bool, int unk1, Vector3& unk2);
		$ConstMethod(0x005473d0, GetIndexedCornerPosNorm, bool, uint unk1, uint unk2, Vector3& unk3, Vector3& unk4);
		$Method(0x004287b9, GetLockMeshFlag, bool);
		$ConstMethod(0x0054acb0, GetPrimaryBoneOrientation, bool, Vector3& unk1, Quat& unk2);
		$Method(0x004287a8, GetRenderTracersFlag, bool);
		$Method(0x00428805, GetStandardBoneAnimationSendEvents, bool);
		$ConstMethod(0x004287df, GetUsingCombatStance, bool);
		$ConstMethod(0x00428818, HasBlender, bool);
		$Method(0x00428824, GetBlender, Blender*);
		$Method(0x00546c50, GetOrCreateBlender, Blender*);
		$ConstMethod(0x0054ce40, GetChild, ResHandle, uint unk1);
		$ConstMethod(0x00550b60, GetChildByDebugName, ResHandle, const GPBString& unk1);
		$ConstMethod(0x00550b00, GetParent, ResHandle);
		$ConstMethod(0x0042b23f, GetDebugName, const char*);
		$ConstMethod(0x0042854a, GetDebugNameString, const GPBString&);
		$ConstMethod(0x0042854e, GetGoid, const Goid*);
		$ConstMethod(0x004285ec, GetLinkOffsetRotation, const Quat&);
		$ConstMethod(0x004285ce, GetLinkOffsetPosition, const Vector3&);
		$ConstMethod(0x00428855, GetCurrentChore, eAnimChore);
		$ConstMethod(0x00428878, GetNextChore, eAnimChore);
		$ConstMethod(0x0042882b, GetPreviousChore, eAnimChore);
		$Method(0x00428811, GetChoreStance, eAnimStance);
		$ConstMethod(0x0042885c, GetCurrentStance, eAnimStance);
		$ConstMethod(0x0042887f, GetNextStance, eAnimStance);
		$ConstMethod(0x00428832, GetPreviousStance, eAnimStance);
		$ConstMethod(0x00428871, GetCurrentAnimSpeed, float);
		$ConstMethod(0x004288be, GetCurrentVelocity, float);
		$Method(0x004287b2, GetMeshPuffDistance, float);
		$ConstMethod(0x00428894, GetNextAnimSpeed, float);
		$ConstMethod(0x00428847, GetPreviousAnimSpeed, float);
		$ConstMethod(0x0054e820, GetBoneIndex, int, const GPBString& boneName);
		$ConstMethod(0x0042886a, GetCurrentFlags, int);
		$ConstMethod(0x00428863, GetCurrentSubAnim, int);
		$ConstMethod(0x0042888d, GetNextFlags, int);
		$ConstMethod(0x00428886, GetNextSubAnim, int);
		$Method(0x00429e48, GetNumberOfChildren, int);
		$Method(0x004285fc, GetNumCorners, int, uint unk1);
		$ConstMethod(0x00428840, GetPreviousFlags, int);
		$ConstMethod(0x00428839, GetPreviousSubAnim, int);
		$ConstMethod(0x00547b10, GetBoneFrozenState, uint, const char* unk1);
		$ConstMethod(0x0042884e, GetCurrentReqBlock, uint);
		$ConstMethod(0x0042874a, GetDiffuseColor, hexcolorcode);
		$ConstMethod(0x0042ccc4, GetHandleValue, uint);
		$ConstMethod(0x00547b50, GetIndexedBoneFrozenState, uint, uint unk1);
		$ConstMethod(0x00428767, GetInstanceAttrFlags, uint);
		$ConstMethod(0x00428617, GetNumBones, uint);
		$ConstMethod(0x00428552, GetNumSubTextures, uint);
		$ConstMethod(0x00546c90, GetRecentBlenderEvents, uint);
		$ConstMethod(0x00428761, GetSharedAttrFlags, uint);
		$ConstMethod(0x0055e900, SetBoneFrozenState, uint, const char* unk1, eBoneFreeze unk2, bool unk3);
		$ConstMethod(0x0055ea10, SetIndexedBoneFrozenState, uint, uint unk1, eBoneFreeze unk2, bool unk3);
		$ConstMethod(0x00547b80, UpdateBlender, uint, float unk1);
		$Method(0x0054a310, AnimationCallback, void, uint unk1);
		$Method(0x0042877f, ClearInstanceAttrFlags, void, uint unk1);
		$Method(0x00560c60, ForceDeformation, void, bool unk1);
		$Method(0x00546bf0, HideSubMesh, void, int unk1);
		$Method(0x0054fab0, PopTexture, void, uint unk1);
		$Method(0x0055b0a0, PushTexture, void, uint unk1);
		$Method(0x00547ba0, ReloadBlenderSkrits, void);
		$Method(0x0042873d, RequestDeformation, void);
		$Method(0x00560cb0, ResetBlender, void);
        $Method(0x005476f0, TranslateBoneX, void, const char* boneName, float value, bool unk3 = false);
        $Method(0x00547770, TranslateBoneY, void, const char* boneName, float value, bool unk3 = false);
        $Method(0x005477f0, TranslateBoneZ, void, const char* boneName, float value, bool unk3 = false);
        $Method(0x005479c0, TranslateIndexedBoneX, void, int boneIndex, float value, bool unk3 = false);
        $Method(0x00547a30, TranslateIndexedBoneY, void, int boneIndex, float value, bool unk3 = false);
        $Method(0x00547aa0, TranslateIndexedBoneZ, void, int boneIndex, float value, bool unk3 = false);
		$Method(0x00547570, RotateBoneX, void, const char* boneName, float value, bool unk3 = false);
		$Method(0x005475f0, RotateBoneY, void, const char* boneName, float value, bool unk3 = false);
		$Method(0x00547670, RotateBoneZ, void, const char* boneName, float value, bool unk3 = false);
		$Method(0x00547870, RotateIndexedBoneX, void, int boneIndex, float value, bool unk3 = false);
		$Method(0x005478e0, RotateIndexedBoneY, void, int boneIndex, float value, bool unk3 = false);
		$Method(0x00547950, RotateIndexedBoneZ, void, int boneIndex, float value, bool unk3 = false);
		$Method(0x00428751, SetDiffuseColor, void, hexcolorcode color);
		$Method(0x00560370, SetFreezeMeshFlag, void, bool unk1);
		$Method(0x0054fda0, SetHideMeshFlag, void, bool unk1);
		$Method(0x0042876b, SetInstanceAttrFlags, void, uint unk1);
		$Method(0x004285d5, SetLinkOffsetPosition, void, const Vector3& unk1);
		$Method(0x004285f0, SetLinkOffsetRotation, void, const Quat& unk1);
		$Method(0x005604d0, SetLockMeshFlag, void, bool unk1);
		$Method(0x00560610, SetMeshPuffDistance, void, float unk1);
		$Method(0x00546bc0, SetRenderTracersFlag, void, bool unk1);
		$Method(0x004287eb, SetStandardBoneAnimationSendEvents, void, bool unk1);
		$Method(0x00555580, SetTextureFromTextureName, void, uint unk1, const char* unk2);
		$Method(0x0055e230, SetupStandardBoneAnimation, void, bool unk1, int unk2, bool unk3, bool unk4, bool unk5);
		$Method(0x004287c5, SetUsingCombatStance, void, bool unk1);
		$Method(0x00546c20, ShowSubMesh, void, int unk1);

        // 0x000
        $Padding(0x000, 0x090);
		// 0x090
		bool bLockMeshFlag;
		bool bInCombatStance;
        // 0x094
        $Padding(0x094, 0x0bc);
        // 0x0bc
        hexcolorcode diffuseColor;
        // 0x0c0
        $Padding(0x0c0, 0x110);
		// 0x110
		Blender* blender;
	};

	class BlendGroup {
	public:
		$Method(0x00564db0, AddToGroup, bool, Blender* unk1, uint unk2, uint unk3, uint unk4, float unk5, bool unk6);
	};

	class FrameKeys {
	public:
		typedef ResHandle<FrameKeys, ResHandleFields<16>> ResHandle;

		$StaticMethod(0x00442f40, FUBI_DoesHandleMgrExist, bool);
		$StaticMethod(0x00443d03, FUBI_HandleIsValid, bool, ResHandle handle);
		$StaticMethod(0x00443d16, FUBI_HandleGet, FrameKeys*, ResHandle handle);
		$StaticMethod(0x00443cf0, FUBI_HandleAddRef, uint, ResHandle handle);
		$StaticMethod(0x044374f, FUBI_HandleRelease, uint, ResHandle handle);
		$ConstMethod(0x004420fd, GetLoopAtEnd, bool);
		$Method(0x0056e970, Update, bool, Aspect* unk1, float unk2);
		$ConstMethod(0x0044374b, GetDebugName, const char*);
		$ConstMethod(0x004420f1, GetDebugNameString, const GPBString&);
		$ConstMethod(0x004420f9, GetBlendWeight, float);
		$ConstMethod(0x00442103, GetDuration, float);
		$ConstMethod(0x004420f5, GetNormalizedTime, float);
	};

	class PRSKeys {
	public:
		typedef ResHandle<PRSKeys, ResHandleFields<16>> ResHandle;

		$StaticMethod(0x00442f34, FUBI_DoesHandleMgrExist, bool);
		$StaticMethod(0x00443cca, FUBI_HandleIsValid, bool, ResHandle handle);
		$StaticMethod(0x00443cdd, FUBI_HandleGet, PRSKeys*, ResHandle handle);
		$StaticMethod(0x00443cb7, FUBI_HandleAddRef, uint, ResHandle handle);
		$StaticMethod(0x00443738, FUBI_HandleRelease, uint, ResHandle handle);
		$ConstMethod(0x0044200f, GetLoopAtEnd, bool);
		$Method(0x005717c0, UpdateAbsolute, bool, float unk1, float unk2);
		$ConstMethod(0x00442e78, GetDebugName, const char*);
		$ConstMethod(0x00441fc0, GetDebugNameString, const GPBString&);
		$ConstMethod(0x004420af, GetVelocity, const Vector3&);
		$ConstMethod(0x0044205d, GetCurrentNormalizedTime, float);
		$ConstMethod(0x00442ea8, GetCurrPositionX, float, int unk1);
		$ConstMethod(0x00442ebc, GetCurrPositionY, float, int unk1);
		$ConstMethod(0x00442ed0, GetCurrPositionZ, float, int unk1);
		$ConstMethod(0x00442ee4, GetCurrRotationW, float, int unk1);
		$ConstMethod(0x00442ef8, GetCurrRotationX, float, int unk1);
		$ConstMethod(0x00442f0c, GetCurrRotationY, float, int unk1);
		$ConstMethod(0x00442f20, GetCurrRotationZ, float, int unk1);
		$ConstMethod(0x004420a9, GetDuration, float);
		$ConstMethod(0x004420c7, GetScalarVelocity, float);
		$ConstMethod(0x004420b5, GetVelocityX, float);
		$ConstMethod(0x004420bb, GetVelocityY, float);
		$ConstMethod(0x004420c1, GetVelocityZ, float);
		$ConstMethod(0x00442e9e, GetNumTracks, int);
	};
};

typedef class nema::Blender NemaBlender;
typedef class nema::Aspect NemaAspect;

#pragma once

#include "ClassMacros.h"

class siege {
public:
	enum eLogicalNodeFlags {

	};

	class Console {
	public:
		DefineConstMethod(GetBottomUp, 0x428afc, bool, Params(), Args());
		DefineConstMethod(GetRenderFilled, 0x428b1c, bool, Params(), Args());
		DefineConstMethod(GetRenderOutline, 0x428b0b, bool, Params(), Args());
		/*siege::Console*/ public: unsigned long /*__thiscall*/ GetFillColor() const; //0x00428b3e
		/*siege::Console*/ public: unsigned long /*__thiscall*/ GetFootFillColor() const; //0x00428b4f
		/*siege::Console*/ public: unsigned long /*__thiscall*/ GetOutlineColor() const; //0x00428b2d
		DefineMethod(SetBottomUp, 0x428aff, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(SetFillColor, 0x428b42, void, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(SetFootFillColor, 0x428b53, void, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(SetOutlineColor, 0x428b31, void, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(SetPosition, 0x428ad4, void, Params(float unk1, float unk2), Args(float unk1, float unk2));
		DefineMethod(SetRenderFilled, 0x428b20, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(SetRenderOutline, 0x428b0f, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(SetSize, 0x428ac1, void, Params(float unk1, float unk2), Args(float unk1, float unk2));
	};

	class database_guid {
	public:

	} typedef DatabaseGuid;

	class SiegeCamera {
	public:
		/*siege::SiegeCamera*/ public: const matrix_3x3& /*__thiscall*/ GetMatrixOrientation(); //0x00409265
		/*siege::SiegeCamera*/ public: const Quat& /*__thiscall*/ GetQuatOrientation(); //0x0040926c
		/*siege::SiegeCamera*/ public: const SiegePos& /*__thiscall*/ GetCameraSiegePos() const; //0x00409242
		/*siege::SiegeCamera*/ public: const SiegePos& /*__thiscall*/ GetTargetSiegePos() const; //0x00409250
		/*siege::SiegeCamera*/ public: const vector_3& /*__thiscall*/ GetCameraPosition() const; //0x0040923b
		/*siege::SiegeCamera*/ public: const vector_3& /*__thiscall*/ GetTargetPosition() const; //0x00409249
		/*siege::SiegeCamera*/ public: const vector_3& /*__thiscall*/ GetUpVector() const; //0x00409257
		/*siege::SiegeCamera*/ public: const vector_3& /*__thiscall*/ GetVectorOrientation(); //0x0040925e
		DefineMethod(GetFieldOfView, 0x4091f8, float, Params(), Args());
		DefineMethod(GetMaxAzimuth, 0x4091ff, float, Params(), Args());
		DefineMethod(GetMaxDistance, 0x40922d, float, Params(), Args());
		DefineMethod(GetMinAzimuth, 0x409206, float, Params(), Args());
		DefineMethod(GetMinDistance, 0x409234, float, Params(), Args());
		DefineMethod(GetViewportNormalizedHeight, 0x4091f1, float, Params(), Args());
		DefineMethod(GetViewportNormalizedWidth, 0x4091ea, float, Params(), Args());
		/*siege::SiegeCamera*/ public: unsigned int /*__thiscall*/ GetViewportHeight(); //0x006e4bc0
		/*siege::SiegeCamera*/ public: unsigned int /*__thiscall*/ GetViewportWidth(); //0x006e4b90
	};

	class SiegeEngine {
	public:
		DefineSingleton(SiegeEngine, 0x503562);

		/*siege::SiegeEngine*/ private: /*static*/ SiegeEngine* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00503562
		DefineMethod(IsPositionInLogicalMeshBounds, 0x6bd900, bool, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
		/*siege::SiegeEngine*/ public: const SiegeCamera& /*__thiscall*/ GetCamera() const; //0x0050268c
	};

	class SiegeEffectsMgr {
	public:
		DefineSingleton(SiegeEffectsMgr, 0x50354c);

		/*siege::SiegeEffectsMgr*/ private: /*static*/ SiegeEffectsMgr* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0050354c
	};
} typedef Siege;

DefineTemplateStaticMethod(FuBi::Traits<siege::database_guid>, FromString, 0x6d0d10, bool, Params(const char* unk1, siege::database_guid& unk2), Args(const char* unk1, siege::database_guid& unk2));
DefineTemplateStaticMethod(FuBi::Traits<siege::database_guid>, ToString, 0x6d19a0, void, Params(gpbstring<char>& unk1, const siege::database_guid& unk2, FuBi::eXfer unk3), Args(gpbstring<char>& unk1, const siege::database_guid& unk2, FuBi::eXfer unk3));
DefineTemplateConstMethod(FuBi::Traits<siege::database_guid>, IsNodeInAnyFrustum, 0x6d0f50, bool, Params(), Args());
DefineTemplateConstMethod(FuBi::Traits<siege::database_guid>, IsValid, 0x40aca8, bool, Params(), Args());
/*FuBi::Traits<siege::database_guid>*/ unsigned int /*__thiscall*/ GetValue() const; //0x0040a1b3
DefineTemplateMethod(FuBi::Traits<siege::database_guid>, SetValue, 0x40a1b8, void, Params(unsigned int unk1), Args(unsigned int unk1));

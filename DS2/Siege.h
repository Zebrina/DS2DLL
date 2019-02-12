#pragma once

#include "ClassMacros.h"

class siege {
public:
	enum eLogicalNodeFlags {

	};

	class Console {
	public:
		/*siege::Console*/ public: bool /*__thiscall*/ GetBottomUp() const; //0x00428afc
		/*siege::Console*/ public: bool /*__thiscall*/ GetRenderFilled() const; //0x00428b1c
		/*siege::Console*/ public: bool /*__thiscall*/ GetRenderOutline() const; //0x00428b0b
		/*siege::Console*/ public: unsigned long /*__thiscall*/ GetFillColor() const; //0x00428b3e
		/*siege::Console*/ public: unsigned long /*__thiscall*/ GetFootFillColor() const; //0x00428b4f
		/*siege::Console*/ public: unsigned long /*__thiscall*/ GetOutlineColor() const; //0x00428b2d
		/*siege::Console*/ public: void /*__thiscall*/ SetBottomUp(bool unk1); //0x00428aff
		/*siege::Console*/ public: void /*__thiscall*/ SetFillColor(unsigned long unk1); //0x00428b42
		/*siege::Console*/ public: void /*__thiscall*/ SetFootFillColor(unsigned long unk1); //0x00428b53
		/*siege::Console*/ public: void /*__thiscall*/ SetOutlineColor(unsigned long unk1); //0x00428b31
		/*siege::Console*/ public: void /*__thiscall*/ SetPosition(float unk1, float unk2); //0x00428ad4
		/*siege::Console*/ public: void /*__thiscall*/ SetRenderFilled(bool unk1); //0x00428b20
		/*siege::Console*/ public: void /*__thiscall*/ SetRenderOutline(bool unk1); //0x00428b0f
		/*siege::Console*/ public: void /*__thiscall*/ SetSize(float unk1, float unk2); //0x00428ac1
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
		/*siege::SiegeCamera*/ public: float /*__thiscall*/ GetFieldOfView(); //0x004091f8
		/*siege::SiegeCamera*/ public: float /*__thiscall*/ GetMaxAzimuth(); //0x004091ff
		/*siege::SiegeCamera*/ public: float /*__thiscall*/ GetMaxDistance(); //0x0040922d
		/*siege::SiegeCamera*/ public: float /*__thiscall*/ GetMinAzimuth(); //0x00409206
		/*siege::SiegeCamera*/ public: float /*__thiscall*/ GetMinDistance(); //0x00409234
		/*siege::SiegeCamera*/ public: float /*__thiscall*/ GetViewportNormalizedHeight(); //0x004091f1
		/*siege::SiegeCamera*/ public: float /*__thiscall*/ GetViewportNormalizedWidth(); //0x004091ea
		/*siege::SiegeCamera*/ public: unsigned int /*__thiscall*/ GetViewportHeight(); //0x006e4bc0
		/*siege::SiegeCamera*/ public: unsigned int /*__thiscall*/ GetViewportWidth(); //0x006e4b90
	};

	class SiegeEngine {
	public:
		DefineSingleton(SiegeEngine, 0x503562);

		/*siege::SiegeEngine*/ private: /*static*/ SiegeEngine* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00503562
		/*siege::SiegeEngine*/ public: bool /*__thiscall*/ IsPositionInLogicalMeshBounds(const SiegePos& unk1); //0x006bd900
		/*siege::SiegeEngine*/ public: const SiegeCamera& /*__thiscall*/ GetCamera() const; //0x0050268c
	};

	class SiegeEffectsMgr {
	public:
		DefineSingleton(SiegeEffectsMgr, 0x50354c);

		/*siege::SiegeEffectsMgr*/ private: /*static*/ SiegeEffectsMgr* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0050354c
	};
} typedef Siege;

/*FuBi::Traits<siege::database_guid>*/ /*static*/ bool /*__cdecl*/ FromString(const char* unk1, siege::database_guid& unk2); //0x006d0d10
/*FuBi::Traits<siege::database_guid>*/ /*static*/ void /*__cdecl*/ ToString(gpbstring<char>& unk1, const siege::database_guid& unk2, FuBi::eXfer unk3); //0x006d19a0
/*FuBi::Traits<siege::database_guid>*/ bool /*__thiscall*/ IsNodeInAnyFrustum() const; //0x006d0f50
/*FuBi::Traits<siege::database_guid>*/ bool /*__thiscall*/ IsValid() const; //0x0040aca8
/*FuBi::Traits<siege::database_guid>*/ unsigned int /*__thiscall*/ GetValue() const; //0x0040a1b3
/*FuBi::Traits<siege::database_guid>*/ void /*__thiscall*/ SetValue(unsigned int unk1); //0x0040a1b8

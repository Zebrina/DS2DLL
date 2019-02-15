#pragma once

#include "FuBi.h"

#include "ClassMacros.h"

struct matrix_3x3;
struct Quat;
struct SiegePos;
struct vector_3;

class siege {
public:
	enum eLogicalNodeFlags {

	};

	class Console {
	public:
		DefineConstMethod(GetBottomUp, 0x428afc, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetRenderFilled, 0x428b1c, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetRenderOutline, 0x428b0b, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetFillColor, 0x428b3e, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetFootFillColor, 0x428b4f, unsigned long, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetOutlineColor, 0x428b2d, unsigned long, NO_PARAMS, NO_ARGS);
		DefineMethod(SetBottomUp, 0x428aff, void, Params(bool unk1), Args(unk1));
		DefineMethod(SetFillColor, 0x428b42, void, Params(unsigned long unk1), Args(unk1));
		DefineMethod(SetFootFillColor, 0x428b53, void, Params(unsigned long unk1), Args(unk1));
		DefineMethod(SetOutlineColor, 0x428b31, void, Params(unsigned long unk1), Args(unk1));
		DefineMethod(SetPosition, 0x428ad4, void, Params(float unk1, float unk2), Args(unk1, unk2));
		DefineMethod(SetRenderFilled, 0x428b20, void, Params(bool unk1), Args(unk1));
		DefineMethod(SetRenderOutline, 0x428b0f, void, Params(bool unk1), Args(unk1));
		DefineMethod(SetSize, 0x428ac1, void, Params(float unk1, float unk2), Args(unk1, unk2));
	};

	class database_guid {
	public:

	} typedef DatabaseGuid;

	class SiegeCamera {
	public:
		DefineConstMethod(GetMatrixOrientation, 0x409265, const matrix_3x3&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetQuatOrientation, 0x40926c, const Quat&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCameraSiegePos, 0x409242, const SiegePos&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetTargetSiegePos, 0x409250, const SiegePos&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCameraPosition, 0x40923b, const vector_3&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetTargetPosition, 0x409249, const vector_3&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetUpVector, 0x409257, const vector_3&, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetVectorOrientation, 0x40925e, const vector_3&, NO_PARAMS, NO_ARGS);
		DefineMethod(GetFieldOfView, 0x4091f8, float, NO_PARAMS, NO_ARGS);
		DefineMethod(GetMaxAzimuth, 0x4091ff, float, NO_PARAMS, NO_ARGS);
		DefineMethod(GetMaxDistance, 0x40922d, float, NO_PARAMS, NO_ARGS);
		DefineMethod(GetMinAzimuth, 0x409206, float, NO_PARAMS, NO_ARGS);
		DefineMethod(GetMinDistance, 0x409234, float, NO_PARAMS, NO_ARGS);
		DefineMethod(GetViewportNormalizedHeight, 0x4091f1, float, NO_PARAMS, NO_ARGS);
		DefineMethod(GetViewportNormalizedWidth, 0x4091ea, float, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetViewportHeight, 0x6e4bc0, unsigned int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetViewportWidth, 0x6e4b90, unsigned int, NO_PARAMS, NO_ARGS);
	};

	class SiegeEngine {
	public:
		DefineSingleton(SiegeEngine, 0x503562);

		DefineMethod(IsPositionInLogicalMeshBounds, 0x6bd900, bool, Params(const SiegePos& unk1), Args(unk1));
		DefineConstMethod(GetCamera, 0x50268c, const SiegeCamera&, NO_PARAMS, NO_ARGS);
	};

	class SiegeEffectsMgr {
	public:
		DefineSingleton(SiegeEffectsMgr, 0x50354c);
	};
} typedef Siege;

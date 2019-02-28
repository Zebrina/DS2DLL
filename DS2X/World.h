#pragma once



class World {
public:
	DefineSingleton(World, 0x40a5ff);

	DefineConstMethod(IsMultiPlayer, 0x839765, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsSinglePlayer, 0x83974b, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(RCDialogueCallback, 0x83a0b4, FuBi::Cookie__*, Params(unsigned long unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(DrawDebugArc, 0x838bd2, void, Params(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(DrawDebugBoxStack, 0x838bd5, void, Params(const SiegePos& unk1, float unk2, unsigned long unk3, float unk4, const matrix_3x3& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(DrawDebugCircle, 0x838ba5, void, Params(const SiegePos& unk1, float unk2, unsigned long unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(DrawDebugCylinderSides, 0x838bab, void, Params(const SiegePos& unk1, const vector_3& unk2, float unk3, float unk4, float unk5, unsigned long unk6, const gpbstring<char>& unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineMethod(DrawDebugDashedLine, 0x838b93, void, Params(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(DrawDebugDirectedCircle, 0x838ba8, void, Params(const SiegePos& unk1, const vector_3& unk2, float unk3, float unk4, unsigned long unk5, const gpbstring<char>& unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(DrawDebugDirectedLine, 0x838b9c, void, Params(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(DrawDebugLine, 0x838b99, void, Params(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(DrawDebugLine, 0x838b96, void, Params(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(DrawDebugLinkedTerrainPoints, 0x838b90, void, Params(const SiegePos& unk1, const SiegePos& unk2, unsigned long unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(DrawDebugOrientedWedge, 0x838bb7, void, Params(const SiegePos& unk1, const Quat& unk2, float unk3, float unk4, float unk5, unsigned long unk6, bool unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineMethod(DrawDebugPoint, 0x838bc6, void, Params(const SiegePos& unk1, float unk2, unsigned long unk3, const gpbstring<char>& unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(DrawDebugPoint, 0x838bc3, void, Params(const SiegePos& unk1, float unk2, unsigned long unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(DrawDebugPoint, 0x838bcf, void, Params(const SiegePos& unk1, float unk2, unsigned long unk3, float unk4, const gpbstring<char>& unk5, unsigned long unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(DrawDebugPulsePolygon, 0x838ba2, void, Params(const SiegePos& unk1, float unk2, float unk3, float unk4, unsigned int unk5, unsigned long unk6, const gpbstring<char>& unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineMethod(DrawDebugScreenLabel, 0x409367, void, Params(const SiegePos& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(DrawDebugScreenLabelColor, 0x838bc9, void, Params(const SiegePos& unk1, const gpbstring<char>& unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(DrawDebugSphere, 0x838bba, void, Params(const SiegePos& unk1, float unk2, unsigned long unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(DrawDebugSphereConeSection, 0x838bc0, void, Params(const SiegePos& unk1, const vector_3& unk2, float unk3, float unk4, unsigned long unk5, const gpbstring<char>& unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(DrawDebugSphereOffsetAngle, 0x838bbd, void, Params(const SiegePos& unk1, float unk2, float unk3, unsigned long unk4, const gpbstring<char>& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(DrawDebugTriangle, 0x838b9f, void, Params(const SiegePos& unk1, float unk2, unsigned long unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(DrawDebugWedge, 0x838bb1, void, Params(const SiegePos& unk1, float unk2, const SiegePos& unk3, float unk4, unsigned long unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(DrawDebugWedge, 0x838bae, void, Params(const SiegePos& unk1, float unk2, const vector_3& unk3, float unk4, unsigned long unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(DrawDebugWedge, 0x838bb4, void, Params(const SiegePos& unk1, float unk2, float unk3, float unk4, unsigned long unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(DrawDebugWorldLabelScroll, 0x838bcc, void, Params(const SiegePos& unk1, const gpbstring<char>& unk2, unsigned long unk3, float unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RestoreWorldViewport, 0x83a083, void, Params(float unk1), Args(unk1));
	DefineMethod(SetWorldViewport, 0x839f6f, void, Params(float unk1, float unk2, float unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetWorldViewportFov, 0x83a053, void, Params(float unk1, float unk2), Args(unk1, unk2));
};

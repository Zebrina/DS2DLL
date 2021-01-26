#pragma once

typedef struct DecalId_ DecalId;

struct DecalId_ {
	$StaticMethod(0x0040839f, GetInvalidDecalId, const DecalId*);

	$ConstMethod(0x0040838c, IsValid, bool);
	$ConstMethod(0x007d6cef, GetActive, bool);
	$Method(0x00408397, SetActive, void);
	$Method(0x007d6d1d, SetActive, void, bool flag);
	$ConstMethod(0x007d6d04, GetAlpha, unsigned char);
	$Method(0x007d6d38, SetAlpha, void, unsigned char alpha);

	// 0x00
	$Padding(0x00, 0x04);
};

$Function(0x0040837c, MakeInt, uint, const DecalId* decalId);
$Function(0x00408384, MakeDecalId, const DecalId*, uint value);
$Function(0x007d7991, StartDecalFx, bool, const DecalId* decalId, const char* unk2);
$Function(0x007d7912, StartDecalFx, bool, const DecalId* decalId, const char* unk2, const char* unk3);

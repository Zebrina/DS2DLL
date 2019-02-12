#pragma once

struct SiegePos {

};

/*FuBi::Traits<SiegePos>*/ /*static*/ bool /*__cdecl*/ FromString(const char* unk1, SiegePos& unk2); //0x006d0d30
/*FuBi::Traits<SiegePos>*/ /*static*/ void /*__cdecl*/ ToString(gpbstring<char>& unk1, const SiegePos& unk2, FuBi::eXfer unk3); //0x006d13c0
/*FuBi::Traits<SiegePos>*/ siege::database_guid& /*__thiscall*/ GetNode(); //0x0040827f
/*FuBi::Traits<SiegePos>*/ const siege::database_guid& /*__thiscall*/ GetNode() const; //0x0040827b
/*FuBi::Traits<SiegePos>*/ const vector_3& /*__thiscall*/ GetPos() const; //0x00408275
/*FuBi::Traits<SiegePos>*/ vector_3& /*__thiscall*/ GetPos(); //0x00408278
/*FuBi::Traits<SiegePos>*/ void /*__thiscall*/ SetNode(const siege::database_guid& unk1); //0x00408296
/*FuBi::Traits<SiegePos>*/ void /*__thiscall*/ SetPos(const vector_3& unk1); //0x00408283

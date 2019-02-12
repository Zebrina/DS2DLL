#pragma once

struct SiegeRot {

};

/*FuBi::Traits<SiegeRot>*/ /*static*/ bool /*__cdecl*/ FromString(const char* unk1, SiegeRot& unk2); //0x006d0d90
/*FuBi::Traits<SiegeRot>*/ /*static*/ void /*__cdecl*/ ToString(gpbstring<char>& unk1, const SiegeRot& unk2, FuBi::eXfer unk3); //0x006d1430
/*FuBi::Traits<SiegeRot>*/ siege::database_guid& /*__thiscall*/ GetNode(); //0x004082e1
/*FuBi::Traits<SiegeRot>*/ const siege::database_guid& /*__thiscall*/ GetNode() const; //0x004082dd
/*FuBi::Traits<SiegeRot>*/ const Quat& /*__thiscall*/ GetRot() const; //0x004082d7
/*FuBi::Traits<SiegeRot>*/ Quat & /*__thiscall*/ GetRot(); //0x004082da
/*FuBi::Traits<SiegeRot>*/ void /*__thiscall*/ SetNode(const siege::database_guid& unk1); //0x004082e5
/*FuBi::Traits<SiegeRot>*/ void /*__thiscall*/ SetRot(const Quat& unk1); //0x0040a1c1

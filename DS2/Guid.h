#pragma once

struct _GUID {

};

DefineTemplateStaticMethod(FuBi::Traits<_GUID>, FromString, 0x9d5396, bool, Params(const char* unk1, _GUID& unk2), Args(const char* unk1, _GUID& unk2));
DefineTemplateStaticMethod(FuBi::Traits<_GUID>, ToString, 0x9d5384, void, Params(gpbstring<char>& unk1, const _GUID& unk2, FuBi::eXfer unk3), Args(gpbstring<char>& unk1, const _GUID& unk2, FuBi::eXfer unk3));

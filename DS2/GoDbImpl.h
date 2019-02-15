#pragma once

#include "ClassMacros.h"

class GoDbImpl {
public:
	DefineSingleton(GoDbImpl, 0x80d8ea);

	//*GoDbImpl*/ `public: FuBi::Cookie__* /*__thiscall*/ RCCloneGoPacker(const_mem_ptr unk1)'::`5'::`local /*static*/ guard'{5}'; //0xd1a518
	//*GoDbImpl*/ `public: FuBi::Cookie__* /*__thiscall*/ RCCreateGoPacker(const_mem_ptr unk1)'::`5'::`local /*static*/ guard'{5}'; //0xd1a4f8
	//*GoDbImpl*/ `public: void /*__thiscall*/ RCMarkForDeletionPacker(const_mem_ptr unk1)'::`5'::`local /*static*/ guard'{5}'; //0xd1a4c0
	//*GoDbImpl*/ `public: void /*__thiscall*/ RCMarkForMondoDeletionPacker(const_mem_ptr unk1)'::`5'::`local /*static*/ guard'{5}'; //0xd1a4c8
	//*GoDbImpl*/ const FuBi::FunctionSpec* const `public: FuBi::Cookie__* /*__thiscall*/ RCCloneGoPacker(const_mem_ptr unk1)'::`5'::s_FunctionSpec; //0xd1a514
	//*GoDbImpl*/ const FuBi::FunctionSpec* const `public: FuBi::Cookie__* /*__thiscall*/ RCCreateGoPacker(const_mem_ptr unk1)'::`5'::s_FunctionSpec; //0xd1a4f4
	//*GoDbImpl*/ const FuBi::FunctionSpec* const `public: void /*__thiscall*/ RCMarkForDeletionPacker(const_mem_ptr unk1)'::`5'::s_FunctionSpec; //0xd1a4bc
	//*GoDbImpl*/ const FuBi::FunctionSpec* const `public: void /*__thiscall*/ RCMarkForMondoDeletionPacker(const_mem_ptr unk1)'::`5'::s_FunctionSpec; //0xd1a4c4
	DefineMethod(RCCloneGoPacker, 0x822f42, FuBi::Cookie__*, Params(const_mem_ptr unk1), Args(unk1));
	DefineMethod(RCCreateGoPacker, 0x820c90, FuBi::Cookie__*, Params(const_mem_ptr unk1), Args(unk1));
	DefineMethod(RCMarkForDeletionPacker, 0x81debc, void, Params(const_mem_ptr unk1), Args(unk1));
	DefineMethod(RCMarkForMondoDeletionPacker, 0x81dfd7, void, Params(const_mem_ptr unk1), Args(unk1));
};

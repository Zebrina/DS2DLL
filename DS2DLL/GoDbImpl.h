#pragma once

#include "FuBi.h"
#include "Memory.h"

class GoDbImpl {
public:
	$Singleton(GoDbImpl, 0x0080d8ea);

	//*GoDbImpl*/ `public: FuBiCookie* /*__thiscall*/ RCCloneGoPacker(const_mem_ptr unk1)'::`5'::`local /*static*/ guard'{5}'; //0x00d1a518
	//*GoDbImpl*/ `public: FuBiCookie* /*__thiscall*/ RCCreateGoPacker(const_mem_ptr unk1)'::`5'::`local /*static*/ guard'{5}'; //0x00d1a4f8
	//*GoDbImpl*/ `public: void /*__thiscall*/ RCMarkForDeletionPacker(const_mem_ptr unk1)'::`5'::`local /*static*/ guard'{5}'; //0x00d1a4c0
	//*GoDbImpl*/ `public: void /*__thiscall*/ RCMarkForMondoDeletionPacker(const_mem_ptr unk1)'::`5'::`local /*static*/ guard'{5}'; //0x00d1a4c8
	//*GoDbImpl*/ const FuBi::FunctionSpec* const `public: FuBiCookie* /*__thiscall*/ RCCloneGoPacker(const_mem_ptr unk1)'::`5'::s_FunctionSpec; //0x00d1a514
	//*GoDbImpl*/ const FuBi::FunctionSpec* const `public: FuBiCookie* /*__thiscall*/ RCCreateGoPacker(const_mem_ptr unk1)'::`5'::s_FunctionSpec; //0x00d1a4f4
	//*GoDbImpl*/ const FuBi::FunctionSpec* const `public: void /*__thiscall*/ RCMarkForDeletionPacker(const_mem_ptr unk1)'::`5'::s_FunctionSpec; //0x00d1a4bc
	//*GoDbImpl*/ const FuBi::FunctionSpec* const `public: void /*__thiscall*/ RCMarkForMondoDeletionPacker(const_mem_ptr unk1)'::`5'::s_FunctionSpec; //0x00d1a4c4
	$Method(0x00822f42, RCCloneGoPacker, FuBiCookie*, const_mem_ptr unk1);
	$Method(0x00820c90, RCCreateGoPacker, FuBiCookie*, const_mem_ptr unk1);
	$Method(0x0081debc, RCMarkForDeletionPacker, void, const_mem_ptr unk1);
	$Method(0x0081dfd7, RCMarkForMondoDeletionPacker, void, const_mem_ptr unk1);
};

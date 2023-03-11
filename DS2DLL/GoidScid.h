#pragma once

#include "Enums.h"
#include "GPFastVector.h"

// Game Object
class Go;
// Static Content ID
struct Scid_;

// Game Object ID
struct Goid_ {
	inline static Goid_* Invalid = (Goid_*)0x00d19890;
    inline static Goid_* None = (Goid_*)0x00d19894;
    inline static Goid_* Any = (Goid_*)0x00d19898;

	Goid_() = default;
	explicit Goid_(uint handle) :
		handle(handle) {
	}
	explicit Goid_(int handle) :
		ihandle(handle) {
	}
	Goid_(const Goid_&) = default;
	~Goid_() = default;

	Goid_& operator=(const Goid_&) = default;

	operator int() const {
		return ihandle;
	}

	$ConstMethod(0x00502ccb, IsValid, bool);
	$ConstMethod(0x00502cd6, IsValidMp, bool);
	$ConstMethod(0x00502cde, GetGo, Go*);
	$ConstMethod(0x00502ce6, GetScid, const Scid_*);

	inline eGoClass GetClass() const {
		return goClass;
	}

	inline bool IsGlobal() const {
		return (handle != Invalid->handle) && (GetClass() == GO_CLASS_GLOBAL);
	}
	inline bool IsLocal() const {
		return goClass == GO_CLASS_LOCAL;
	}
	inline bool IsCloneSource() const {
		return goClass == GO_CLASS_SRC;
	}
	inline bool IsConstant() const {
		return goClass == GO_CLASS_CONSTANT;
	}

	inline uint GetMajorIndex() const {
		return majorIndex;
	}
	inline uint GetMinorIndex() const {
		return IsGlobal() ? minorIndex : 0;
	}

	inline uint GetMagic() {
		switch (GetClass()) {
		case GO_CLASS_GLOBAL:
			return globalMagic & 0x3f;
		case GO_CLASS_LOCAL:
			return localMagic & 0x3fff;
		default:
			return 0;
		}
	}

	inline uint GetConstant() {
		return IsConstant() ? constant & 0x3fffffff : 0;
	}

private:
	union {
		uint handle;
		struct {
			uint majorIndex : 16;
			uint minorIndex : 8;
			uint globalMagic : 6;
			uint : 2;
		};
		struct {
			uint : 16;
			uint localMagic : 14;
			uint : 2;
		};
		struct {
			uint constant : 30;
			uint : 2;
		};
		struct {
			uint : 30;
			eGoClass goClass : 2;
		};
		int ihandle;
	};
};

STATIC_ASSERT(sizeof(Goid_) == sizeof(uint));

$Function(0x00502cb9, GoidClassToString, const char*, const Goid_* goid);
$Function(0x007eea43, GoidToDebugString, const char*, const Goid_* goid);

// Collection of Game Object IDs
struct GoidColl : public GPFastVector<Goid_> {
	//$ConstMethod(0x005035e7, Empty, bool);
	//$ConstMethod(0x005035de, Size, int);
	//$ConstMethod(0x007ed660, Has, bool, const Goid_* goid);
	//$ConstMethod(0x005035f2, Get, const Goid_*, int index);
	//$ConstMethod(0x00503613, Front, const Goid_*);
	//$ConstMethod(0x00503618, Back, const Goid_*);
	$Method(0x00503c6b, Add, void, const Goid_* goid);
	$Method(0x00503601, Set, void, int index, const Goid_* goid);
	$Method(0x007ed636, Remove, bool, const Goid_* goid);
	$Method(0x0050361f, PopBack, void);
	$Method(0x007ed682, Clean, void);
	$Method(0x005038f9, Clear, void);
};

// Static Content ID
struct Scid_ {
	inline static Scid_* Invalid = (Scid_*)0x00d1989c;
    inline static Scid_* Spawned = (Scid_*)0x00d198a0;

	Scid_() = default;
	explicit Scid_(uint handle) :
		handle(handle) {
	}
	explicit Scid_(int handle) :
		ihandle(handle) {
	}
	Scid_(const Scid_&) = default;
	~Scid_() = default;

	Scid_& operator=(const Scid_&) = default;

	operator int() const {
		return ihandle;
	}

	$StaticMethod(0x00502d26, GetInvalidScid, const Scid_*);
	$StaticMethod(0x00502d2c, GetSpawnedScid, const Scid_*);

	$ConstMethod(0x00502d00, IsValid, bool);
	$ConstMethod(0x00502d0b, IsInstance, bool);
	$ConstMethod(0x00502d1e, GetGo, Go*);
	$ConstMethod(0x00502d16, GetGoid, const Goid_*);

	// 0x00
	union {
		uint handle;
		int ihandle;
	};
};

STATIC_ASSERT(sizeof(Scid_) == sizeof(uint));

$Function(0x0041326b, MakeInt, uint, const Scid_* scid);
$Function(0x00435b20, MakeScid, const Scid_*, uint value);

// Game Object ID
typedef Goid_ Goid;
// Static Content ID
typedef Scid_ Scid;

#pragma once

#include "Enums.h"
#include "GPString.h"
#include "GPMath.h"
#include "GoidScid.h"
#include "SiegePos.h"

struct CameraEulerPosition;
struct CameraMatrixPosition;
struct CameraPosition;
struct CameraQuatPosition;
struct CameraVectorToCameraPosition;
struct CameraVectorToTargetPosition;

//     ______                                      ___                        __ 
//    / ____/____ _ ____ ___   ___   _____ ____ _ /   |  ____ _ ___   ____   / /_
//   / /    / __ `// __ `__ \ / _ \ / ___// __ `// /| | / __ `// _ \ / __ \ / __/
//  / /___ / /_/ // / / / / //  __// /   / /_/ // ___ |/ /_/ //  __// / / // /_  
//  \____/ \__,_//_/ /_/ /_/ \___//_/    \__,_//_/  |_|\__, / \___//_/ /_/ \__/  
//                                                    /____/   
class CameraAgent {
public:
	$Singleton(CameraAgent, 0x0040a5ab);

	$ConstMethod(0x00409273, GetInterpolationMode, eCameraInterp);
	$Method(0x0092c5b8, ClearCameraPositionCache, void);
	$Method(0x0092bfc7, ClearOrders, void);
	$Method(0x0092c5c0, ClearPosition, void);
	$Method(0x0092d67a, FinishOrders, void);
	$Method(0x0092bf95, RemoveCameraPosition, void, const GPBString& unk1);
	$Method(0x0092c05f, SetInterpolationMode, void, eCameraInterp unk1);
	$Method(0x009297b5, SubmitCameraOffset, void, const SiegePos& unk1);
	$Method(0x009290d4, SubmitCameraOffset, void, const Vector3& unk1);
	$Method(0x0092d241, SubmitCameraPosition, void, const GPBString& unk1, const CameraEulerPosition& unk2);
	$Method(0x0092d34b, SubmitCameraPosition, void, const GPBString& unk1, const CameraMatrixPosition& unk2);
	$Method(0x0092d1b4, SubmitCameraPosition, void, const GPBString& unk1, const CameraPosition& unk2);
	$Method(0x0092d404, SubmitCameraPosition, void, const GPBString& unk1, const CameraQuatPosition& unk2);
	$Method(0x0092d579, SubmitCameraPosition, void, const GPBString& unk1, const CameraVectorToCameraPosition& unk2);
	$Method(0x0092d4cb, SubmitCameraPosition, void, const GPBString& unk1, const CameraVectorToTargetPosition& unk2);
	$Method(0x0092d627, SubmitOrder, void, const GPBString& unk1, eCameraOrder unk2, float unk3, bool unk4, const Scid* unk5, eCameraInterp unk6);

	// 0x000
	$Padding(0x000, 0x0b0);
	// 0x0b0
	eCameraInterp interpolationMode;
    // 0x0b4
    $Padding(0x0b4, 0x1e8);
};

STATIC_ASSERT(sizeof(CameraAgent) == 0x1e8);

//     ______                                      ______        __             ____                _  __   _             
//    / ____/____ _ ____ ___   ___   _____ ____ _ / ____/__  __ / /___   _____ / __ \ ____   _____ (_)/ /_ (_)____   ____ 
//   / /    / __ `// __ `__ \ / _ \ / ___// __ `// __/  / / / // // _ \ / ___// /_/ // __ \ / ___// // __// // __ \ / __ \
//  / /___ / /_/ // / / / / //  __// /   / /_/ // /___ / /_/ // //  __// /   / ____// /_/ /(__  )/ // /_ / // /_/ // / / /
//  \____/ \__,_//_/ /_/ /_/ \___//_/    \__,_//_____/ \__,_//_/ \___//_/   /_/     \____//____//_/ \__//_/ \____//_/ /_/ 
//
struct CameraEulerPosition {

};

//     ______                                      __  ___        __         _        ____                _  __   _             
//    / ____/____ _ ____ ___   ___   _____ ____ _ /  |/  /____ _ / /_ _____ (_)_  __ / __ \ ____   _____ (_)/ /_ (_)____   ____ 
//   / /    / __ `// __ `__ \ / _ \ / ___// __ `// /|_/ // __ `// __// ___// /| |/_// /_/ // __ \ / ___// // __// // __ \ / __ \
//  / /___ / /_/ // / / / / //  __// /   / /_/ // /  / // /_/ // /_ / /   / /_>  < / ____// /_/ /(__  )/ // /_ / // /_/ // / / /
//  \____/ \__,_//_/ /_/ /_/ \___//_/    \__,_//_/  /_/ \__,_/ \__//_/   /_//_/|_|/_/     \____//____//_/ \__//_/ \____//_/ /_/ 
//                                                                                                                              
struct CameraMatrixPosition {

};

//     ______                                      ____                _  __   _             
//    / ____/____ _ ____ ___   ___   _____ ____ _ / __ \ ____   _____ (_)/ /_ (_)____   ____ 
//   / /    / __ `// __ `__ \ / _ \ / ___// __ `// /_/ // __ \ / ___// // __// // __ \ / __ \
//  / /___ / /_/ // / / / / //  __// /   / /_/ // ____// /_/ /(__  )/ // /_ / // /_/ // / / /
//  \____/ \__,_//_/ /_/ /_/ \___//_/    \__,_//_/     \____//____//_/ \__//_/ \____//_/ /_/ 
//                                                                                           
struct CameraPosition {
	CameraPosition() = default;
	CameraPosition(const CameraPosition&) = default;
	~CameraPosition() = default;

	CameraPosition& operator=(const CameraPosition&) = default;

    $Method(0x00929660, SetPosition, void, const SiegePos& position, const Quat& orientation, float unk3);

    // 0x00
    $Padding(0x00, 0x60);
};

// Size confirmed.
STATIC_ASSERT(sizeof(CameraPosition) == 0x60);

//     ______                                      ____                 __   ____                _  __   _             
//    / ____/____ _ ____ ___   ___   _____ ____ _ / __ \ __  __ ____ _ / /_ / __ \ ____   _____ (_)/ /_ (_)____   ____ 
//   / /    / __ `// __ `__ \ / _ \ / ___// __ `// / / // / / // __ `// __// /_/ // __ \ / ___// // __// // __ \ / __ \
//  / /___ / /_/ // / / / / //  __// /   / /_/ // /_/ // /_/ // /_/ // /_ / ____// /_/ /(__  )/ // /_ / // /_/ // / / /
//  \____/ \__,_//_/ /_/ /_/ \___//_/    \__,_/ \___\_\\__,_/ \__,_/ \__//_/     \____//____//_/ \__//_/ \____//_/ /_/ 
//                                                                                                                     
struct CameraQuatPosition {
	CameraQuatPosition() = default;
	CameraQuatPosition(const CameraQuatPosition&) = default;
	~CameraQuatPosition() = default;

	CameraQuatPosition& operator=(const CameraQuatPosition&) = default;

	$Method(0x00928f68, SetPosition, void, const SiegePos& position, const Quat& orientation);

    // 0x00
    $Padding(0x00, 0x38);
};

// Size confirmed.
STATIC_ASSERT(sizeof(CameraQuatPosition) == 0x38);

//     ______                                     _    __             __               ______        ______                                      ____                _  __   _             
//    / ____/____ _ ____ ___   ___   _____ ____ _| |  / /___   _____ / /_ ____   _____/_  __/____   / ____/____ _ ____ ___   ___   _____ ____ _ / __ \ ____   _____ (_)/ /_ (_)____   ____ 
//   / /    / __ `// __ `__ \ / _ \ / ___// __ `/| | / // _ \ / ___// __// __ \ / ___/ / /  / __ \ / /    / __ `// __ `__ \ / _ \ / ___// __ `// /_/ // __ \ / ___// // __// // __ \ / __ \
//  / /___ / /_/ // / / / / //  __// /   / /_/ / | |/ //  __// /__ / /_ / /_/ // /    / /  / /_/ // /___ / /_/ // / / / / //  __// /   / /_/ // ____// /_/ /(__  )/ // /_ / // /_/ // / / /
//  \____/ \__,_//_/ /_/ /_/ \___//_/    \__,_/  |___/ \___/ \___/ \__/ \____//_/    /_/   \____/ \____/ \__,_//_/ /_/ /_/ \___//_/    \__,_//_/     \____//____//_/ \__//_/ \____//_/ /_/ 
//                                                                                                                                                                                         
struct CameraVectorToCameraPosition {

};

//     ______                                     _    __             __               ______      ______                           __   ____                _  __   _             
//    / ____/____ _ ____ ___   ___   _____ ____ _| |  / /___   _____ / /_ ____   _____/_  __/____ /_  __/____ _ _____ ____ _ ___   / /_ / __ \ ____   _____ (_)/ /_ (_)____   ____ 
//   / /    / __ `// __ `__ \ / _ \ / ___// __ `/| | / // _ \ / ___// __// __ \ / ___/ / /  / __ \ / /  / __ `// ___// __ `// _ \ / __// /_/ // __ \ / ___// // __// // __ \ / __ \
//  / /___ / /_/ // / / / / //  __// /   / /_/ / | |/ //  __// /__ / /_ / /_/ // /    / /  / /_/ // /  / /_/ // /   / /_/ //  __// /_ / ____// /_/ /(__  )/ // /_ / // /_/ // / / /
//  \____/ \__,_//_/ /_/ /_/ \___//_/    \__,_/  |___/ \___/ \___/ \__/ \____//_/    /_/   \____//_/   \__,_//_/    \__, / \___/ \__//_/     \____//____//_/ \__//_/ \____//_/ /_/ 
//                                                                                                                 /____/                                                          
struct CameraVectorToTargetPosition {

};

$Function(0x00928fa5, GetCurrentCameraPosition, void, CameraPosition& position);
$Function(0x009290b9, GetCurrentCameraQuat, void, Quat& quat);
$Function(0x00929042, GetCurrentCameraQuatPosition, void, CameraQuatPosition& quatPosition);
$Function(0x00929013, GetCurrentCameraSiegePosition, void, SiegePos& position);

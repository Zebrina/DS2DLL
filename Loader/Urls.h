#pragma once

#include "Common/SafeWrite.h"

#include <cstdint>
#include <cstring>

#define URL_AVAILABLE_GAMESPY_COM "%s.available.gamespy.com"
#define URL_AVAILABLE_GAMESPY_COM_PTR 0x5a6b2f + 1
#define URL_MS_GAMESPY_COM "%s.ms%d.gamespy.com"
#define URL_MS_GAMESPY_COM_PTR 0x5a88a6 + 1
#define URL_NATNEG1_GAMESPY_COM "natneg1.gamespy.com"
#define URL_NATNEG1_GAMESPY_COM_PTR 0x5aee4b + 1
#define URL_NATNEG2_GAMESPY_COM "natneg2.gamespy.com"
#define URL_NATNEG2_GAMESPY_COM_PTR 0x5aee6b + 1
#define URL_MASTER_GAMESPY_COM "%s.master.gamespy.com"
#define URL_MASTER_GAMESPY_COM_PTR 0x5b23f0 + 1
#define URL_PEERCHAT_GAMESPY_COM "peerchat.gamespy.com"
#define URL_PEERCHAT_GAMESPY_COM_PTR 0x5c0cdf + 1
#define URL_GAMESTATS_GAMESPY_COM "gamestats.gamespy.com"
#define URL_GAMESTATS_GAMESPY_COM_PTR 0x5af891 + 1
#define URL_GPCM_GAMESPY_COM "gpcm.gamespy.com"
#define URL_GPCM_GAMESPY_COM_PTR 0x5d6977 + 1
#define URL_GPSP_GAMESPY_COM "gpsp.gamespy.com"
#define URL_GPSP_GAMESPY_COM_PTR 0x5d8436 + 1

template <int Size>
class UrlStringBuffer {
public:
	bool HookUrl(uintptr_t ptr, const char* newUrl) {
		const char* oldUrl = *((const char**)ptr);
		if (strcmp(newUrl, oldUrl) == 0) {
			return false;
		}

		size_t newUrlLen = strlen(newUrl);
		if (newUrlLen == 0) {
			return false;
		}
		size_t oldUrlLen = strlen(oldUrl);

		if (newUrlLen <= oldUrlLen) {
			SafeWriteBuf((uintptr_t)oldUrl, (void*)newUrl, newUrlLen);
			SafeWrite8((uintptr_t)(oldUrl + newUrlLen), 0x0);
		} else if (Size - offset > newUrlLen) {
			strcpy_s(buffer + offset, Size - offset, newUrl);
			SafeWrite32(ptr, (uint32_t)(buffer + offset));
			offset += newUrlLen + 1;
		} else {
			return false;
		}
		return true;
	}

private:
	int offset = 0;
	char buffer[Size];
};

#include "LoaderUtil.h"

const wchar_t* AppResultToString(AppResult result) {
	switch (result) {
	case RES_OK:
		return L"No errors.";
	case RES_ERR_EXE_NOT_FOUND:
		return L"Dungeon Siege II executable not found.";
	case RES_ERR_EXE_INVALID_CRC:
	case RES_ERR_DLL_NOT_FOUND:
		return L"DS2DLL.dll not found.";
	case RES_ERR_DLL_INVALID_CRC:
	case RES_ERR_CREATE_PROCESS_FAILED:
		return L"CreateProcessA failed.";
	case RES_ERR_GET_EXIT_CODE_PROCESS_FAILED:
		return L"GetExitCodeProcess failed.";
	case RES_ERR_RESUME_THREAD_FAILED:
		return L"ResumeThread failed.";
	case RES_ERR_VIRTUAL_ALLOC_FAILED:
		return L"VirtualAllocEx failed.";
	case RES_ERR_VIRTUAL_FREE_FAILED:
		return L"VirtualFree failed.";
	case RES_ERR_WRITE_PROCESS_MEMORY_FAILED:
		return L"WriteProcessMemory failed.";
	case RES_ERR_KERNEL32:
		return L"KERNEL32.DLL not loaded?";
	case RES_ERR_CREATE_REMOTE_THREAD_FAILED:
		return L"CreateRemoteThread failed.";
	case RES_ERR_REMOTE_THREAD_ABANDONED:
		return L"Remote thread abandoned.";
	case RES_ERR_REMOTE_THREAD_TIMED_OUT:
		return L"Remote timed out.";
	default:
		return L"No clue... sorry!";
	}
}

AppResult AllocAndWriteProcessMemory(HANDLE hProcess, LPVOID address, SIZE_T size, LPCVOID buffer, LPVOID* memoryPtrOut) {
	AppResult result = RES_OK;
	LPVOID memoryPtr = VirtualAllocEx(hProcess, address, size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	if (memoryPtrOut) {
		*memoryPtrOut = memoryPtr;
	}
	if (memoryPtr == NULL) {
		result = RES_ERR_VIRTUAL_ALLOC_FAILED;
		DEBUG_ONLY(PrintLine("VirtualAlloc failed."));
	} else if (!WriteProcessMemory(hProcess, memoryPtr, buffer, size, NULL)) {
		result = RES_ERR_WRITE_PROCESS_MEMORY_FAILED;
		DEBUG_ONLY(PrintLine("WriteProcessMemory failed."));
	} else {
		DEBUG_ONLY(PrintLine("Allocated process memory at 0x%.8x.", memoryPtr));
	}
	return result;
}

int FreeProcessMemory(HANDLE hProcess, LPVOID address) {
	return VirtualFreeEx(hProcess, address, 0, MEM_RELEASE) ? RES_OK : RES_ERR_VIRTUAL_FREE_FAILED;
}

AppResult LoadRemoteDll(HANDLE hProcess, const char* remoteLibraryName, DWORD timeout) {
	AppResult result = RES_OK;
	LPVOID loadLibraryParam;
	result = AllocAndWriteProcessMemory(hProcess, NULL, strlen(remoteLibraryName) + 1, remoteLibraryName, &loadLibraryParam);
	if (result == RES_OK) {
		FARPROC loadLibraryAddress = GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");
		if (loadLibraryAddress) {
			HANDLE thread = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)loadLibraryAddress, loadLibraryParam, 0, NULL);
			if (thread) {
				switch (WaitForSingleObject(thread, timeout)) {
				case WAIT_OBJECT_0:
					break;
				case WAIT_ABANDONED:
					result = RES_ERR_REMOTE_THREAD_ABANDONED;
					break;
				case WAIT_TIMEOUT:
					result = RES_ERR_REMOTE_THREAD_TIMED_OUT;
					break;
				default:
					result = RES_ERR_UNKNOWN;
				}
				CloseHandle(thread);
			} else {
				result = RES_ERR_CREATE_REMOTE_THREAD_FAILED;
			}
		} else {
			result = RES_ERR_KERNEL32;
		}
		if (result == RES_OK) {
			FreeProcessMemory(hProcess, loadLibraryParam);
		}
	}
	return result;
}

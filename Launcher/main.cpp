#include "stdafx.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, char *, int) {
start:
	auto processInfo = GetProcessInfoByName(L"mirrorsedge.exe");
	if (!processInfo.th32ProcessID) {
		auto thread = CreateThread(nullptr, 0, [](void *) -> unsigned long {
			MessageBox(0, L"Waiting for Mirror's Edge to start. Click OK to stop.", L"Waiting...", MB_OK);
			exit(0);
			return 0;
		}, nullptr, 0, nullptr);

		do {
			Sleep(200);
			processInfo = GetProcessInfoByName(L"mirrorsedge.exe");
		} while (!processInfo.th32ProcessID);

		TerminateThread(thread, 0);
	}

	auto status = 0;
	auto process = OpenProcess(PROCESS_ALL_ACCESS, false, processInfo.th32ProcessID);
	if (process) {
		if (HasModule(process, L"mmultiplayer.dll")) {
			CloseHandle(process);
			return 0;
		}

		while (!HasModule(process, L"openal32.dll")) {
			CloseHandle(process);
			Sleep(200);
			goto start;
		}

		auto path = GetDllPath();
		if (URLDownloadToFile(nullptr, L"https://github.com/btbd/mmultiplayer/raw/master/Client/binary/Client.dll", path.c_str(), 0, nullptr) != S_OK && !PathFileExists(path.c_str())) {
			MessageBox(0, L"Failed to download the latest version", L"Failure", 0);
			status = 1;
		}

		auto argSize = (path.size() + 1) * sizeof(wchar_t);

		auto arg = VirtualAllocEx(process, nullptr, argSize, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
		if (arg) {
			if (WriteProcessMemory(process, arg, path.c_str(), argSize, nullptr)) {
				auto thread = CreateRemoteThread(process, nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(GetProcAddress(GetModuleHandle(L"kernel32.dll"), "LoadLibraryW")), arg, 0, nullptr);
				if (thread) {
					WaitForSingleObject(thread, INFINITE);
					CloseHandle(thread);
				} else {
					MessageBox(0, L"Failed to create remote thread", L"Failure", 0);
					status = 1;
				}
			} else {
				MessageBox(0, L"Failed to write process memory", L"Failure", 0);
				status = 1;
			}

			VirtualFreeEx(process, arg, 0, MEM_RELEASE);
		} else {
			MessageBox(0, L"Failed to allocate virtual memory", L"Failure", 0);
			status = 1;
		}

		CloseHandle(process);
	} else {
		MessageBox(0, L"Failed to open a handle to Mirror's Edge", L"Failure", 0);
		status = 1;
	}

	return status;
}

bool HasModule(HANDLE process, const wchar_t *module) {
	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, GetProcessId(process));
	if (snapshot == INVALID_HANDLE_VALUE) {
		return false;
	}

	MODULEENTRY32 entry;
	entry.dwSize = sizeof(entry);
	if (Module32First(snapshot, &entry)) {
		do {
			if (_wcsicmp(entry.szModule, module) == 0) {
				CloseHandle(snapshot);
				return true;
			}
		} while (Module32Next(snapshot, &entry));
	}

	CloseHandle(snapshot);
	return false;
}

std::wstring GetDllPath() {
	wchar_t buffer[0x200] = { 0 };
	if (!GetTempPath(sizeof(buffer) / sizeof(buffer[0]), buffer)) {
		MessageBox(0, L"Failed to get temp path", L"Failure", 0);
		exit(1);
	}

	return std::wstring(buffer) + L"mmultiplayer.dll";
}

PROCESSENTRY32 GetProcessInfoByName(const wchar_t *name) {
	auto snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (snapshot == INVALID_HANDLE_VALUE) {
		return { 0 };
	}

	PROCESSENTRY32 entry;
	entry.dwSize = sizeof(entry);
	if (Process32First(snapshot, &entry)) {
		do {
			if (_wcsicmp(entry.szExeFile, name) == 0) {
				CloseHandle(snapshot);
				return entry;
			}
		} while (Process32Next(snapshot, &entry));
	}

	CloseHandle(snapshot);
	return { 0 };
}

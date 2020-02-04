#include "stdafx.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, char *, int) {
	wchar_t buffer[0x200] = { 0 };
	if (!GetTempPath(sizeof(buffer) / sizeof(buffer[0]), buffer)) {
		MessageBox(0, L"Failed to get temp path", L"Failure", 0);
		return 1;
	}

	auto path = std::wstring(buffer) + L"mmultiplayer.dll";
	if (URLDownloadToFile(nullptr, L"https://github.com/btbd/mmultiplayer/raw/remake/Client/binary/Client.dll", path.c_str(), 0, nullptr) != S_OK && !PathFileExists(path.c_str())) {
		MessageBox(0, L"Failed to download the latest version", L"Failure", 0);
		return 1;
	}

	PROCESSENTRY32 processInfo = GetProcessInfoByName(L"mirrorsedge.exe");
	if (!processInfo.th32ProcessID) {
		std::thread([]() {
			MessageBox(0, L"Waiting for Mirror's Edge to start. Click OK to stop.", L"Waiting...", MB_OK);
			exit(0);
		}).detach();

		do {
			Sleep(200);
			processInfo = GetProcessInfoByName(L"mirrorsedge.exe");
		} while (!processInfo.th32ProcessID);
	}

	auto process = OpenProcess(PROCESS_ALL_ACCESS, false, processInfo.th32ProcessID);
	if (process) {
		auto argSize = (path.size() + 1) * sizeof(wchar_t);
		auto arg = VirtualAllocEx(process, nullptr, argSize, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
		if (arg) {
			WriteProcessMemory(process, arg, path.c_str(), argSize, nullptr);
			auto thread = CreateRemoteThread(process, nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(GetProcAddress(GetModuleHandle(L"kernel32.dll"), "LoadLibraryW")), arg, 0, nullptr);
			WaitForSingleObject(thread, INFINITE);
			CloseHandle(thread);
			VirtualFreeEx(process, arg, 0, 0);
		}
	}

	return 0;
}

PROCESSENTRY32 GetProcessInfoByName(const wchar_t *name) {
	auto snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (snapshot == INVALID_HANDLE_VALUE) {
		return { 0 };
	}

	PROCESSENTRY32 entry = { 0 };
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
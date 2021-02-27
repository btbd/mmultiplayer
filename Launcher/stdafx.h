#pragma once

#include <Windows.h>
#include <shlwapi.h>
#include <stdio.h>
#include <tlhelp32.h>

#pragma comment(lib, "shlwapi.lib")
#pragma comment(lib, "urlmon.lib")

#include <string>
#include <thread>

bool LoadClient(HANDLE process);
HANDLE CreateDialogThread();
bool HasModule(HANDLE process, const wchar_t *module);
bool GetDllPath(std::wstring &path);
PROCESSENTRY32 GetProcessInfoByName(const wchar_t *name);
bool AdjustCurrentPrivilege(const wchar_t *privilege);
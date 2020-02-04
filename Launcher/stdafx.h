#pragma once

#include <stdio.h>
#include <Windows.h>
#include <shlwapi.h>
#include <tlhelp32.h>

#pragma comment(lib, "shlwapi.lib")
#pragma comment(lib, "urlmon.lib")

#include <string>
#include <thread>

bool HasModule(HANDLE process, const wchar_t *module);
std::wstring GetDllPath();
PROCESSENTRY32 GetProcessInfoByName(const wchar_t *name);
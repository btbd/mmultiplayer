#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define LENGTH(a) (sizeof(a) / sizeof(a[0]))

#include <stdio.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <windows.h>
#include <psapi.h>
#include <d3d9.h>
#include <d3dx9.h>

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "d3d9.lib")

#include <vector>
#include <mutex>
#include <shared_mutex>
#include <fstream>
#include <locale>
#include <codecvt>

#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "imgui/imgui_impl_dx9.h"
#include "imgui/imgui_impl_win32.h"
#include "json.h"

#include "sdk.h"
#include "hook.h"
#include "pattern.h"
#include "settings.h"
#include "engine.h"
#include "menu.h"
#include "addon.h"

#include "addons/dolly.h"
#include "addons/client.h"
#include "addons/trainer.h"
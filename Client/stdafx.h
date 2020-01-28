#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <psapi.h>
#include <d3d9.h>
#include <d3dx9.h>

#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

#include <vector>
#include <mutex>
#include <fstream>

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
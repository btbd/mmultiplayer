#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <d3d9.h>
#include <d3dx9.h>

#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

#define EXPORT __declspec(dllexport)
#define BONES_SIZE 0xD80

void WriteText(LPDIRECT3DDEVICE9 device, int pt, UINT weight, DWORD align, char *font, DWORD color, int x, int y, char *text, int length);
bool WorldToScreen(LPDIRECT3DDEVICE9 pDevice, float position[3], float out[3]);
DWORD GetPlayerBase();
bool IsGameWindow(HWND);

typedef struct {
	DWORD base; // Actor's base
	char *bones; // Actor's bones to overwrite with

	DWORD level; // Current player's level
	DWORD ping; // Player's last ping to timeout disconnected players
} PLAYER;

#define PI 3.141592653589793
#define PLAYER_HEIGHT ((float)185)
#define PLAYER_RADIUS ((float)40)

extern "C" {
	#include "memory.h"

	EXPORT void EXPORT_GetPlayersBase(DWORD *out);
	EXPORT void EXPORT_GetLevelBase(DWORD *out);
}
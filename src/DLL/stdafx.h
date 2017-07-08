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

typedef struct {
	float x, y, z, rhw;
	DWORD color;
} D3D_VERTEX;

void WriteText(LPDIRECT3DDEVICE9 device, int pt, UINT weight, DWORD align, char *font, DWORD color, int x, int y, char *text, int length);
void DrawRect(LPDIRECT3DDEVICE9 pDevice, float x, float y, float width, float height, D3DCOLOR color, bool init_render_state);
bool WorldToScreen(LPDIRECT3DDEVICE9 pDevice, float position[3], float out[3]);
DWORD GetPlayerBase();
bool IsGameWindow(HWND);

#define CHAT_DELAY 400

typedef struct {
	char *message;
	DWORD message_length;
	DWORD frame;
} CHAT_MESSAGE;

typedef struct {
	DWORD base; // Actor's base
	char *bones; // Actor's bones to overwrite with

	DWORD level; // Current player's level
	DWORD ping; // Player's last ping to timeout disconnected players
	char *name; // Player's name
} PLAYER;

typedef struct {
	char username[33];
	bool collision, nametags, chat;
} SETTINGS;

#define PI 3.141592653589793
#define PLAYER_HEIGHT ((float)185)
#define PLAYER_RADIUS ((float)40)

extern "C" {
	#include "memory.h"

	EXPORT void EXPORT_GetPlayersBase(DWORD *out);
	EXPORT void EXPORT_GetLevelBase(DWORD *out);
	EXPORT void EXPORT_SetHostPID(DWORD *in);
	EXPORT void EXPORT_SetSendChatMessage(DWORD *in);
	EXPORT void EXPORT_AddChatMessage(char *msg);
}
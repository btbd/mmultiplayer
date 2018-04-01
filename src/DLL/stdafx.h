#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <d3d9.h>
#include <d3dx9.h>

#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

#pragma comment(lib, "Winmm.lib")

#define EXPORT __declspec(dllexport)
#define BONES_SIZE 0xD80
#define SIGN(a) (a < 0 ? -1 : 1)

extern "C" {
	#include "memory.h"

	EXPORT void EXPORT_UpdateSettings();
	EXPORT void EXPORT_GetPlayersBase(DWORD *out);
	EXPORT void EXPORT_GetLevelBase(DWORD *out);
	EXPORT void EXPORT_SetHostPID(DWORD *in);
	EXPORT void EXPORT_SetSendChatMessage(DWORD *in);
	EXPORT void EXPORT_SetSendServer(DWORD *in);
	EXPORT void EXPORT_AddChatMessage(char *msg);
	EXPORT void EXPORT_ExecuteCommand(char *command);
}

typedef struct {
	float x, y, z, rhw;
	DWORD color;
} D3D_VERTEX;

#define CHAT_DELAY 800

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
	DWORD room;
	char character;
	bool collision, nametags, chat, spectator;
	unsigned char keybind;
} SETTINGS;

typedef struct {
	char bones[BONES_SIZE];
	float position[4];
	short rotation;
} FRAME;

typedef struct {
	char lower_body[0x940];
	char upper_body[0x940];
	float position[3];
	long long rotation;
} DEMO_FRAME;

typedef struct {
	int frame;
	float position[5];
} MARKER;

enum {
	RECORDING_STOPPED = 0,
	RECORDING_RECORDING,
	RECORDING_PAUSED,
	RECORDING_PLAYING
};

typedef struct {
	char username[33];
	char state;
	DWORD level, frame;
	ARRAY frames;
} RECORDING; 

enum {
	CHARACTER_FAITH = 0,
	CHARACTER_KATE,
	CHARACTER_CELESTE,
	CHARACTER_ASSAULT_CELESTE,
	CHARACTER_JACKNIFE,
	CHARACTER_MILLER,
	CHARACTER_KREEG,
	CHARACTER_COP_PURSUIT,
	CHARACTER_GHOST,
	CHARACTER_COUNT
};

static char CHARACTER_NAMES[][0xFF] = {
	"Faith",
	"Kate",
	"Celeste",
	"Assassin",
	"Jacknife",
	"Miller",
	"Kreeg",
	"Cop Pursuit",
	"Ghost"
};

#define ACTORS_PER_CHARACTER 8
#define PING_TIMEOUT 100
#define PI 3.141592653589793
#define PLAYER_HEIGHT ((float)185)
#define PLAYER_RADIUS ((float)40)

void WriteText(LPDIRECT3DDEVICE9 device, int pt, UINT weight, DWORD align, char *font, DWORD color, int x, int y, char *text, int length);
void DrawRect(LPDIRECT3DDEVICE9 pDevice, float x, float y, float width, float height, D3DCOLOR color, bool init_render_state);
bool WorldToScreen(LPDIRECT3DDEVICE9 pDevice, float position[3], float out[3]);
DWORD GetPlayerBase();
DWORD GetCameraBase();
void ExecuteCommand(wchar_t *command);
bool IsGameWindow(HWND);
void PrintMatrix(float m[4][4]);
DWORD Hash(char *str);
int GetInputWidth(LPD3DXFONT lpFont, char *str, int length);
MARKER Marker(int frame);
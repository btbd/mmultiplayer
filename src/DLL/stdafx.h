#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <windows.h>

#define EXPORT __declspec(dllexport)
#define BONES_SIZE 0xD80

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
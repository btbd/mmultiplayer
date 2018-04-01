#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
#include <Psapi.h>
#include <math.h>
#include <sys/stat.h>
#include "resource.h"
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "winmm.lib")
#include "memory.h"

#include <string>
#include <regex>

#define BONES_SIZE 0xD80
static DWORD BONE_OFFSETS[] = { 0x14, 0x20, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x38, 0x40, 0x44, 0x48, 0x4C, 0x50, 0x54, 0x58, 0x60, 0x64, 0x68, 0x6C, 0x70, 0x74, 0x78, 0x80, 0x84, 0x88, 0x8C, 0x90, 0x94, 0x98, 0xA0, 0xA4, 0xA8, 0xAC, 0xC0, 0xC4, 0xC8, 0xCC, 0xD0, 0xD4, 0xD8, 0x1E4, 0x204, 0x208, 0x20C, 0x210, 0x214, 0x224, 0x228, 0x230, 0x238, 0x244, 0x260, 0x268, 0x26C, 0x280, 0x284, 0x288, 0x28C, 0x290, 0x2A0, 0x2A8, 0x2AC, 0x2B0, 0x2BC, 0x2D0, 0x2D4, 0x2D8, 0x2E0, 0x2E4, 0x2F0, 0x2F4, 0x2F8, 0x3E0, 0x3E4, 0x3E8, 0x3EC, 0x3F0, 0x3F4, 0x3F8, 0x400, 0x404, 0x408, 0x40C, 0x410, 0x414, 0x418, 0x440, 0x444, 0x448, 0x44C, 0x450, 0x454, 0x458, 0x460, 0x464, 0x468, 0x46C, 0x470, 0x474, 0x478, 0x4E0, 0x4E4, 0x4E8, 0x4EC, 0x4F0, 0x4F4, 0x4F8, 0x550, 0x554, 0x558, 0x5A0, 0x5A4, 0x5A8, 0x5AC, 0x5C0, 0x5C4, 0x5C8, 0x5CC, 0x5E0, 0x5E4, 0x5E8, 0x5EC, 0x600, 0x604, 0x608, 0x60C, 0x644, 0x648, 0x660, 0x664, 0x668, 0x66C, 0x684, 0x688, 0x68C, 0x6A4, 0x6A8, 0x6AC, 0x6C4, 0x6C8, 0x6E0, 0x6E4, 0x6E8, 0x6EC, 0x704, 0x708, 0x70C, 0x724, 0x728, 0x72C, 0x744, 0x748, 0x74C, 0x760, 0x764, 0x768, 0x76C, 0x784, 0x788, 0x78C, 0x7A4, 0x7A8, 0x7AC, 0x7C4, 0x7C8, 0x7E0, 0x7E4, 0x7E8, 0x7EC, 0x804, 0x808, 0x80C, 0x824, 0x828, 0x82C, 0x840, 0x844, 0x848, 0x84C, 0x860, 0x864, 0x868, 0x86C, 0x888, 0x88C, 0x8A0, 0x8AC, 0x8C0, 0x8C4, 0x8C8, 0x8CC, 0x8E0, 0x8E4, 0x8E8, 0x8EC, 0x900, 0x904, 0x908, 0x90C, 0x920, 0x924, 0x928, 0x92C, 0x940, 0x944, 0x948, 0x94C, 0x960, 0x964, 0x968, 0x96C, 0x970, 0x974, 0x978, 0x980, 0x984, 0x988, 0x98C, 0x9A0, 0x9A4, 0x9A8, 0x9AC, 0x9C8, 0x9CC, 0x9E8, 0x9EC, 0xA00, 0xA04, 0xA08, 0xA20, 0xA24, 0xA28, 0xA2C, 0xA48, 0xA4C, 0xA68, 0xA6C, 0xA80, 0xA84, 0xA88, 0xAA0, 0xAA4, 0xAA8, 0xAAC, 0xAC8, 0xACC, 0xAE8, 0xAEC, 0xB00, 0xB04, 0xB08, 0xB0C, 0xB20, 0xB24, 0xB28, 0xB2C, 0xB48, 0xB4C, 0xB68, 0xB6C, 0xB80, 0xB84, 0xB88, 0xB8C, 0xBA0, 0xBA4, 0xBA8, 0xBAC, 0xBC8, 0xBCC, 0xBE0, 0xBE4, 0xBE8, 0xBEC, 0xBF0, 0xBF4, 0xBF8, 0xC00, 0xC04, 0xC08, 0xC0C, 0xC20, 0xC24, 0xC28, 0xC2C, 0xC40, 0xC44, 0xC48, 0xC4C, 0xC60, 0xC64, 0xC68, 0xC6C, 0xC70, 0xC74, 0xC78, 0xC80, 0xC84, 0xC88, 0xC8C, 0xC90, 0xC94, 0xC98, 0xCA0, 0xCAC, 0xCC0, 0xCC4, 0xCC8, 0xCCC, 0xCE0, 0xCE4, 0xCE8, 0xCEC, 0xD00, 0xD04, 0xD08, 0xD0C, 0xD14, 0xD20, 0xD24, 0xD28, 0xD2C, 0xD34, 0xD40, 0xD4C, 0xD60, 0xD64, 0xD68, 0xD6C };
#define BONE_OFFSET_COUNT (sizeof(BONE_OFFSETS) / sizeof(DWORD))

typedef struct {
	DWORD base; // Actor's base
	char *bones; // Actor's bones to overwrite with

	DWORD level; // Current player's level
	DWORD ping; // Ping to timeout players who disconnect
	char *name; // Player's name
} PLAYER;

typedef struct {
	char index; // Player's index in the list of players
	char bones[BONE_OFFSET_COUNT * 2]; // Player's bones
	float position[4]; // Player's position (x, y, z)
	short rotation; // Player's rotation (0-65535)

	DWORD level; // Player's current level
	char name[33]; // Player's name
} PACKET;

typedef struct {
	char username[33];
	DWORD room;
	char character;
	bool collision, nametags, chat, spectator;
	unsigned char keybind;
} SETTINGS;

#define PI 3.141592653589793
#define PLAYER_HEIGHT ((float)185)
#define PLAYER_RADIUS ((float)40)
#define GetGameWindow() FindWindowExA(0, 0, "LaunchUnrealUWindowsClient", 0)

#define SERVER_PORT 2783
#define CLIENT_PORT 3659
#define VERSION "1.0.4"

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

#define ACTORS_PER_CHARACTER 8

void ServerListener();
void Listener();
void Sender();
void ProcessListener();
void ParseMessage(char *buffer);
void Send(char *ip, char *buffer, int size);
HANDLE CallFunction(char *name, void *arg);
DWORD GetPlayerBase();
bool IsGameWindow(HWND hWnd);
void SendServer(char *str);
void WindowThread();
void SaveSettings(SETTINGS *settings, bool startup);
bool CopyMaps(DWORD pid);
void LeaveRoom();
bool TestUDP();
DWORD GetFileSize(char *path);
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);

typedef struct {
	char name[0xFF];
	unsigned char code;
} KEY;

static KEY KEYS[] = {
	{ "LMB", 0X01 },
	{ "RMB", 0X02 },
	{ "CANCEL", 0X03 },
	{ "MMB", 0X04 },
	{ "X1MB", 0X05 },
	{ "X2MB", 0X06 },
	{ "UNDEFINED", 0X07 },
	{ "BACKSPACE", 0X08 },
	{ "TAB", 0X09 },
	{ "CLEAR", 0X0C },
	{ "RETURN", 0X0D },
	{ "ENTER", 0X0D },
	{ "SHIFT", 0X10 },
	{ "CONTROL", 0X11 },
	{ "CTRL", 0X11 },
	{ "ALT", 0X12 },
	{ "PAUSE", 0X13 },
	{ "CAPITAL", 0X14 },
	{ "CAPSLOCK", 0X14 },
	{ "KANA", 0X15 },
	{ "JUNJA", 0X17 },
	{ "FINAL", 0X18 },
	{ "HANJA", 0X19 },
	{ "ESCAPE", 0X1B },
	{ "ESC", 0X1B },
	{ "CONVERT", 0X1C },
	{ "NONCONVERT", 0X1D },
	{ "ACCEPT", 0X1E },
	{ "MODECHANGE", 0X1F },
	{ "SPACEBAR", 0X20 },
	{ "PAGEUP", 0X21 },
	{ "PAGEDOWN", 0X22 },
	{ "END", 0X23 },
	{ "HOME", 0X24 },
	{ "LEFT", 0X25 },
	{ "LEFTARROW", 0X25 },
	{ "UP", 0X26 },
	{ "UPARROW", 0X26 },
	{ "RIGHT", 0X27 },
	{ "RIGHTARROW", 0X27 },
	{ "DOWN", 0X28 },
	{ "DOWNARROW", 0X28 },
	{ "SELECT", 0X29 },
	{ "PRINT", 0X2A },
	{ "EXECUTE", 0X2B },
	{ "PRTSCR", 0X2C },
	{ "INSERT", 0X2D },
	{ "DELETE", 0X2E },
	{ "HELP", 0X2F },
	{ "0", 0X30 },
	{ "1", 0X31 },
	{ "2", 0X32 },
	{ "3", 0X33 },
	{ "4", 0X34 },
	{ "5", 0X35 },
	{ "6", 0X36 },
	{ "7", 0X37 },
	{ "8", 0X38 },
	{ "9", 0X39 },
	{ "A", 0X41 },
	{ "B", 0X42 },
	{ "C", 0X43 },
	{ "D", 0X44 },
	{ "E", 0X45 },
	{ "F", 0X46 },
	{ "G", 0X47 },
	{ "H", 0X48 },
	{ "I", 0X49 },
	{ "J", 0X4A },
	{ "K", 0X4B },
	{ "L", 0X4C },
	{ "M", 0X4D },
	{ "N", 0X4E },
	{ "O", 0X4F },
	{ "P", 0X50 },
	{ "Q", 0X51 },
	{ "R", 0X52 },
	{ "S", 0X53 },
	{ "T", 0X54 },
	{ "U", 0X55 },
	{ "V", 0X56 },
	{ "W", 0X57 },
	{ "X", 0X58 },
	{ "Y", 0X59 },
	{ "Z", 0X5A },
	{ "LWIN", 0X5B },
	{ "RWIN", 0X5C },
	{ "APPS", 0X5D },
	{ "SLEEP", 0X5F },
	{ "NUMPAD0", 0X60 },
	{ "NUMPAD1", 0X61 },
	{ "NUMPAD2", 0X62 },
	{ "NUMPAD3", 0X63 },
	{ "NUMPAD4", 0X64 },
	{ "NUMPAD5", 0X65 },
	{ "NUMPAD6", 0X66 },
	{ "NUMPAD7", 0X67 },
	{ "NUMPAD8", 0X68 },
	{ "NUMPAD9", 0X69 },
	{ "MULTIPLY", 0X6A },
	{ "ADD", 0X6B },
	{ "SEPARATOR", 0X6C },
	{ "SUBTRACT", 0X6D },
	{ "DECIMAL", 0X6E },
	{ "DIVIDE", 0X6F },
	{ "F1", 0X70 },
	{ "F2", 0X71 },
	{ "F3", 0X72 },
	{ "F4", 0X73 },
	{ "F5", 0X74 },
	{ "F6", 0X75 },
	{ "F7", 0X76 },
	{ "F8", 0X77 },
	{ "F9", 0X78 },
	{ "F10", 0X79 },
	{ "F11", 0X7A },
	{ "F12", 0X7B },
	{ "F13", 0X7C },
	{ "F14", 0X7D },
	{ "F15", 0X7E },
	{ "F16", 0X7F },
	{ "F17", 0X80 },
	{ "F18", 0X81 },
	{ "F19", 0X82 },
	{ "F20", 0X83 },
	{ "F21", 0X84 },
	{ "F22", 0X85 },
	{ "F23", 0X86 },
	{ "F24", 0X87 },
	{ "NUMLOCK", 0X90 },
	{ "SCROLL", 0X91 },
	{ "LSHIFT", 0XA0 },
	{ "RSHIFT", 0XA1 },
	{ "LCONTROL", 0XA2 },
	{ "RCONTROL", 0XA3 },
	{ "LMENU", 0XA4 },
	{ "RMENU", 0XA5 },
	{ "+", 0XBB },
	{ "PLUS", 0XBB },
	{ ",", 0XBC },
	{ "COMMA", 0XBC },
	{ "-", 0XBD },
	{ "MINUS", 0XBD },
	{ ".", 0XBE },
	{ "PERIOD", 0XBE }
};
#include "stdafx.h"

#define PLAYER_PAWN_BONE_COUNT (108)

typedef void (*RenderSceneCallback)(IDirect3DDevice9 *device);
typedef bool (*ProcessEventCallback)(Classes::UObject *, Classes::UFunction *, void *, void *);
typedef void (*LevelLoadCallback)(const wchar_t *levelName);
typedef void (*DeathCallback)();
typedef void (*ActorTickCallback)(Classes::AActor *actor);
typedef void (*BonesTickCallback)(Classes::TArray<Classes::FBoneAtom> *atoms);
typedef void (*TickCallback)(float delta);
typedef void (*InputCallback)(int message, int keycode);

namespace Engine {
	static const char *Characters[] = { "Faith", "Kate", "Celeste", "Assault Celeste", "Jacknife", "Miller", "Kreeg", "Pursuit Cop", "Ghost" };
	enum class Character {
		Faith, Kate, Celeste, AssaultCeleste, Jacknife, Miller, Kreeg, PursuitCop, Ghost, Max
	};

	Classes::UTdGameEngine *GetEngine(bool update = false);
	Classes::UTdGameViewportClient *GetViewportClient(bool update = false);
	Classes::UTdConsole *GetConsole(bool update = false);
	void ExecuteCommand(Classes::FString command);
	Classes::AWorldInfo *GetWorld(bool update = false);
	Classes::ATdPlayerController *GetPlayerController(bool update = false);
	Classes::ATdPlayerPawn *GetPlayerPawn(bool update = false);
	void SpawnCharacter(Character character, Classes::ATdPlayerPawn *&spawned);
	void Despawn(Classes::AActor *actor);
	void TransformBones(Character character, Classes::TArray<Classes::FBoneAtom> *dest, Classes::FBoneAtom *src);

	bool WorldToScreen(IDirect3DDevice9 *device, Classes::FVector &inOutLocation);
	void OnRenderScene(RenderSceneCallback callback);
	void OnProcessEvent(ProcessEventCallback callback);
	void OnPreLevelLoad(LevelLoadCallback callback);
	void OnPostLevelLoad(LevelLoadCallback callback);
	void OnPreDeath(DeathCallback callback);
	void OnPostDeath(DeathCallback callback);
	void OnActorTick(ActorTickCallback callback);
	void OnBonesTick(BonesTickCallback callback);
	void OnTick(TickCallback callback);

	// Adds a standard input callback. Will not trigger if the menu is blocking input.
	void OnInput(InputCallback callback);
	
	// Adds a super input callback. A super input callback will trigger even if the menu is blocking input.
	void OnSuperInput(InputCallback callback);
	
	void BlockInput(bool block);
	bool Initialize();
}

LRESULT CALLBACK WndProcHook(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

static const char *VK_TO_KEY[] = {
	"", // 0
	"LeftMouseButton", // 1
	"RightMouseButton", // 2
	"Cance", // 3
	"MiddleMouseButton", // 4
	"ThumbMouseButton", // 5
	"ThumbMouseButton2", // 6
	"", // 7
	"BackSpace", // 8
	"TAB", // 9
	"", // a
	"", // b
	"Clear", // c
	"Enter", // d
	"", // e
	"", // f
	"", // 10
	"", // 11
	"", // 12
	"Pause", // 13
	"CAPSLOCK", // 14
	"", // 15
	"", // 16
	"", // 17
	"", // 18
	"", // 19
	"", // 1a
	"Escape", // 1b
	"", // 1c
	"", // 1d
	"", // 1e
	"", // 1f
	"SpaceBar", // 20
	"PageUp", // 21
	"PageDown", // 22
	"End", // 23
	"Home", // 24
	"Left", // 25
	"Up", // 26
	"Right", // 27
	"Down", // 28
	"Select", // 29
	"Print", // 2a
	"Execute", // 2b
	"", // 2c
	"Insert", // 2d
	"Delete", // 2e
	"Help", // 2f
	"ZERO", // 30
	"ONE", // 31
	"TWO", // 32
	"THREE", // 33
	"FOUR", // 34
	"FIVE", // 35
	"SIX", // 36
	"SEVEN", // 37
	"EIGHT", // 38
	"NINE", // 39
	"", // 3a
	"", // 3b
	"", // 3c
	"", // 3d
	"", // 3e
	"", // 3f
	"", // 40
	"A", // 41
	"B", // 42
	"C", // 43
	"D", // 44
	"E", // 45
	"F", // 46
	"G", // 47
	"H", // 48
	"I", // 49
	"J", // 4a
	"K", // 4b
	"", // 4c
	"M", // 4d
	"N", // 4e
	"O", // 4f
	"P", // 50
	"Q", // 51
	"R", // 52
	"S", // 53
	"T", // 54
	"U", // 55
	"V", // 56
	"W", // 57
	"X", // 58
	"Y", // 59
	"Z", // 5a
	"", // 5b
	"", // 5c
	"", // 5d
	"", // 5e
	"", // 5f
	"NumPadZero", // 60
	"NumPadOne", // 61
	"NumPadTwo", // 62
	"NumPadThree", // 63
	"NumPadFour", // 64
	"NumPadFive", // 65
	"NumPadSix", // 66
	"NumPadSeven", // 67
	"NumPadEight", // 68
	"NumPadNine", // 69
	"Multiply", // 6a
	"Add", // 6b
	"", // 6c
	"Subtract", // 6d
	"Decima", // 6e
	"Divide", // 6f
	"F1", // 70
	"F2", // 71
	"F3", // 72
	"F4", // 73
	"F5", // 74
	"F6", // 75
	"F7", // 76
	"F8", // 77
	"F9", // 78
	"F10", // 79
	"F11", // 7a
	"F12", // 7b
	"F13", // 7c
	"F14", // 7d
	"F15", // 7e
	"F16", // 7f
	"F17", // 80
	"F18", // 81
	"F19", // 82
	"F20", // 83
	"F21", // 84
	"F22", // 85
	"F23", // 86
	"F24", // 87
	"", // 88
	"", // 89
	"", // 8a
	"", // 8b
	"", // 8c
	"", // 8d
	"", // 8e
	"", // 8f
	"NumLock", // 90
	"ScrollLock", // 91
	"", // 92
	"", // 93
	"", // 94
	"", // 95
	"", // 96
	"", // 97
	"", // 98
	"", // 99
	"", // 9a
	"", // 9b
	"", // 9c
	"", // 9d
	"", // 9e
	"", // 9f
	"LeftShift", // a0
	"RightShift", // a1
	"LeftContro", // a2
	"RightContro", // a3
	"LeftAlt", // a4
	"RightAlt", // a5
	"", // a6
	"", // a7
	"", // a8
	"", // a9
	"", // aa
	"", // ab
	"", // ac
	"", // ad
	"", // ae
	"", // af
	"", // b0
	"", // b1
	"", // b2
	"", // b3
	"", // b4
	"", // b5
	"", // b6
	"", // b7
	"", // b8
	"", // b9
	"", // ba
	"", // bb
	"", // bc
	"", // bd
	"", // be
	"", // bf
	"", // c0
	"", // c1
	"", // c2
	"", // c3
	"", // c4
	"", // c5
	"", // c6
	"", // c7
	"", // c8
	"", // c9
	"", // ca
	"", // cb
	"", // cc
	"", // cd
	"", // ce
	"", // cf
	"", // d0
	"", // d1
	"", // d2
	"", // d3
	"", // d4
	"", // d5
	"", // d6
	"", // d7
	"", // d8
	"", // d9
	"", // da
	"LeftBracket", // db
	"Backslash", // dc
	"RightBracket", // dd
	"Quote", // de
	"", // df
	"", // e0
	"", // e1
	"", // e2
	"", // e3
	"", // e4
	"", // e5
	"", // e6
	"", // e7
	"", // e8
	"", // e9
	"", // ea
	"", // eb
	"", // ec
	"", // ed
	"", // ee
	"", // ef
	"", // f0
	"", // f1
	"", // f2
	"", // f3
	"", // f4
	"", // f5
	"", // f6
	"", // f7
	"", // f8
	"", // f9
	"", // fa
	"", // fb
	"", // fc
	"", // fd
	"", // fe
};

enum {
	D3D9_EXPORT_QUERYINTERFACE = 0,
	D3D9_EXPORT_ADDREF,
	D3D9_EXPORT_RELEASE,
	D3D9_EXPORT_TESTCOOPERATIVELEVEL,
	D3D9_EXPORT_GETAVAILABLETEXTUREMEM,
	D3D9_EXPORT_EVICTMANAGEDRESOURCES,
	D3D9_EXPORT_GETDIRECTD,
	D3D9_EXPORT_GETDEVICECAPS,
	D3D9_EXPORT_GETDISPLAYMODE,
	D3D9_EXPORT_GETCREATIONPARAMETERS,
	D3D9_EXPORT_SETCURSORPROPERTIES,
	D3D9_EXPORT_SETCURSORPOSITION,
	D3D9_EXPORT_SHOWCURSOR,
	D3D9_EXPORT_CREATEADDITIONALSWAPCHAIN,
	D3D9_EXPORT_GETSWAPCHAIN,
	D3D9_EXPORT_GETNUMBEROFSWAPCHAINS,
	D3D9_EXPORT_RESET,
	D3D9_EXPORT_PRESENT,
	D3D9_EXPORT_GETBACKBUFFER,
	D3D9_EXPORT_GETRASTERSTATUS,
	D3D9_EXPORT_SETDIALOGBOXMODE,
	D3D9_EXPORT_SETGAMMARAMP,
	D3D9_EXPORT_GETGAMMARAMP,
	D3D9_EXPORT_CREATETEXTURE,
	D3D9_EXPORT_CREATEVOLUMETEXTURE,
	D3D9_EXPORT_CREATECUBETEXTURE,
	D3D9_EXPORT_CREATEVERTEXBUFFER,
	D3D9_EXPORT_CREATEINDEXBUFFER,
	D3D9_EXPORT_CREATERENDERTARGET,
	D3D9_EXPORT_CREATEDEPTHSTENCILSURFACE,
	D3D9_EXPORT_UPDATESURFACE,
	D3D9_EXPORT_UPDATETEXTURE,
	D3D9_EXPORT_GETRENDERTARGETDATA,
	D3D9_EXPORT_GETFRONTBUFFERDATA,
	D3D9_EXPORT_STRETCHRECT,
	D3D9_EXPORT_COLORFILL,
	D3D9_EXPORT_CREATEOFFSCREENPLAINSURFACE,
	D3D9_EXPORT_SETRENDERTARGET,
	D3D9_EXPORT_GETRENDERTARGET,
	D3D9_EXPORT_SETDEPTHSTENCILSURFACE,
	D3D9_EXPORT_GETDEPTHSTENCILSURFACE,
	D3D9_EXPORT_BEGINSCENE,
	D3D9_EXPORT_ENDSCENE,
	D3D9_EXPORT_CLEAR,
	D3D9_EXPORT_SETTRANSFORM,
	D3D9_EXPORT_GETTRANSFORM,
	D3D9_EXPORT_MULTIPLYTRANSFORM,
	D3D9_EXPORT_SETVIEWPORT,
	D3D9_EXPORT_GETVIEWPORT,
	D3D9_EXPORT_SETMATERIAL,
	D3D9_EXPORT_GETMATERIAL,
	D3D9_EXPORT_SETLIGHT,
	D3D9_EXPORT_GETLIGHT,
	D3D9_EXPORT_LIGHTENABLE,
	D3D9_EXPORT_GETLIGHTENABLE,
	D3D9_EXPORT_SETCLIPPLANE,
	D3D9_EXPORT_GETCLIPPLANE,
	D3D9_EXPORT_SETRENDERSTATE,
	D3D9_EXPORT_GETRENDERSTATE,
	D3D9_EXPORT_CREATESTATEBLOCK,
	D3D9_EXPORT_BEGINSTATEBLOCK,
	D3D9_EXPORT_ENDSTATEBLOCK,
	D3D9_EXPORT_SETCLIPSTATUS,
	D3D9_EXPORT_GETCLIPSTATUS,
	D3D9_EXPORT_GETTEXTURE,
	D3D9_EXPORT_SETTEXTURE,
	D3D9_EXPORT_GETTEXTURESTAGESTATE,
	D3D9_EXPORT_SETTEXTURESTAGESTATE,
	D3D9_EXPORT_GETSAMPLERSTATE,
	D3D9_EXPORT_SETSAMPLERSTATE,
	D3D9_EXPORT_VALIDATEDEVICE,
	D3D9_EXPORT_SETPALETTEENTRIES,
	D3D9_EXPORT_GETPALETTEENTRIES,
	D3D9_EXPORT_SETCURRENTTEXTUREPALETTE,
	D3D9_EXPORT_GETCURRENTTEXTUREPALETTE,
	D3D9_EXPORT_SETSCISSORRECT,
	D3D9_EXPORT_GETSCISSORRECT,
	D3D9_EXPORT_SETSOFTWAREVERTEXPROCESSING,
	D3D9_EXPORT_GETSOFTWAREVERTEXPROCESSING,
	D3D9_EXPORT_SETNPATCHMODE,
	D3D9_EXPORT_GETNPATCHMODE,
	D3D9_EXPORT_DRAWPRIMITIVE,
	D3D9_EXPORT_DRAWINDEXEDPRIMITIVE,
	D3D9_EXPORT_DRAWPRIMITIVEUP,
	D3D9_EXPORT_DRAWINDEXEDPRIMITIVEUP,
	D3D9_EXPORT_PROCESSVERTICES,
	D3D9_EXPORT_CREATEVERTEXDECLARATION,
	D3D9_EXPORT_SETVERTEXDECLARATION,
	D3D9_EXPORT_GETVERTEXDECLARATION,
	D3D9_EXPORT_SETFVF,
	D3D9_EXPORT_GETFVF,
	D3D9_EXPORT_CREATEVERTEXSHADER,
	D3D9_EXPORT_SETVERTEXSHADER,
	D3D9_EXPORT_GETVERTEXSHADER,
	D3D9_EXPORT_SETVERTEXSHADERCONSTANTF,
	D3D9_EXPORT_GETVERTEXSHADERCONSTANTF,
	D3D9_EXPORT_SETVERTEXSHADERCONSTANTI,
	D3D9_EXPORT_GETVERTEXSHADERCONSTANTI,
	D3D9_EXPORT_SETVERTEXSHADERCONSTANTB,
	D3D9_EXPORT_GETVERTEXSHADERCONSTANTB,
	D3D9_EXPORT_SETSTREAMSOURCE,
	D3D9_EXPORT_GETSTREAMSOURCE,
	D3D9_EXPORT_SETSTREAMSOURCEFREQ,
	D3D9_EXPORT_GETSTREAMSOURCEFREQ,
	D3D9_EXPORT_SETINDICES,
	D3D9_EXPORT_GETINDICES,
	D3D9_EXPORT_CREATEPIXELSHADER,
	D3D9_EXPORT_SETPIXELSHADER,
	D3D9_EXPORT_GETPIXELSHADER,
	D3D9_EXPORT_SETPIXELSHADERCONSTANTF,
	D3D9_EXPORT_GETPIXELSHADERCONSTANTF,
	D3D9_EXPORT_SETPIXELSHADERCONSTANTI,
	D3D9_EXPORT_GETPIXELSHADERCONSTANTI,
	D3D9_EXPORT_SETPIXELSHADERCONSTANTB,
	D3D9_EXPORT_GETPIXELSHADERCONSTANTB,
	D3D9_EXPORT_DRAWRECTPATCH,
	D3D9_EXPORT_DRAWTRIPATCH,
	D3D9_EXPORT_DELETEPATCH,
	D3D9_EXPORT_CREATEQUERY
};
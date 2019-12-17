#include "stdafx.h"

typedef void (*RenderSceneCallback)(IDirect3DDevice9 *);
typedef bool (*ProcessEventCallback)(Classes::UObject *, class Classes::UFunction *, void *, void *);
typedef void (*ActorTickCallback)(Classes::AActor *);
typedef void (*BonesTickCallback)(Classes::TArray<class Classes::USkeletalMeshSocket *> *);
typedef void (*InputCallback)(int, int);

namespace Engine {
	Classes::UTdGameEngine *GetEngine();
	Classes::UTdGameViewportClient *GetViewportClient();
	Classes::UTdConsole *GetConsole();
	void ExecuteCommand(Classes::FString command);
	Classes::AWorldInfo *GetWorld();
	Classes::ATdPlayerController *GetPlayerController();
	Classes::ATdPlayerPawn *GetPlayerPawn();

	bool WorldToScreen(IDirect3DDevice9 *device, Classes::FVector *inOutLocation);
	void OnRenderScene(RenderSceneCallback callback);
	void OnProcessEvent(ProcessEventCallback callback);
	void OnActorTick(ActorTickCallback callback);
	void OnBonesTick(BonesTickCallback callback);
	void OnInput(InputCallback callback);
	void OnSuperInput(InputCallback callback);
	void BlockInput(bool block);
	bool Initialize();
}

LRESULT CALLBACK WndProcHook(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

static const wchar_t *VK_TO_KEY[] = {
	L"", // 0
	L"LeftMouseButton", // 1
	L"RightMouseButton", // 2
	L"Cancel", // 3
	L"MiddleMouseButton", // 4
	L"ThumbMouseButton", // 5
	L"ThumbMouseButton2", // 6
	L"", // 7
	L"BackSpace", // 8
	L"TAB", // 9
	L"", // a
	L"", // b
	L"Clear", // c
	L"Enter", // d
	L"", // e
	L"", // f
	L"", // 10
	L"", // 11
	L"", // 12
	L"Pause", // 13
	L"CAPSLOCK", // 14
	L"", // 15
	L"", // 16
	L"", // 17
	L"", // 18
	L"", // 19
	L"", // 1a
	L"Escape", // 1b
	L"", // 1c
	L"", // 1d
	L"", // 1e
	L"", // 1f
	L"SpaceBar", // 20
	L"PageUp", // 21
	L"PageDown", // 22
	L"End", // 23
	L"Home", // 24
	L"Left", // 25
	L"Up", // 26
	L"Right", // 27
	L"Down", // 28
	L"Select", // 29
	L"Print", // 2a
	L"Execute", // 2b
	L"", // 2c
	L"Insert", // 2d
	L"Delete", // 2e
	L"Help", // 2f
	L"ZERO", // 30
	L"ONE", // 31
	L"TWO", // 32
	L"THREE", // 33
	L"FOUR", // 34
	L"FIVE", // 35
	L"SIX", // 36
	L"SEVEN", // 37
	L"EIGHT", // 38
	L"NINE", // 39
	L"", // 3a
	L"", // 3b
	L"", // 3c
	L"", // 3d
	L"", // 3e
	L"", // 3f
	L"", // 40
	L"A", // 41
	L"B", // 42
	L"C", // 43
	L"D", // 44
	L"E", // 45
	L"F", // 46
	L"G", // 47
	L"H", // 48
	L"I", // 49
	L"J", // 4a
	L"K", // 4b
	L"L", // 4c
	L"M", // 4d
	L"N", // 4e
	L"O", // 4f
	L"P", // 50
	L"Q", // 51
	L"R", // 52
	L"S", // 53
	L"T", // 54
	L"U", // 55
	L"V", // 56
	L"W", // 57
	L"X", // 58
	L"Y", // 59
	L"Z", // 5a
	L"", // 5b
	L"", // 5c
	L"", // 5d
	L"", // 5e
	L"", // 5f
	L"NumPadZero", // 60
	L"NumPadOne", // 61
	L"NumPadTwo", // 62
	L"NumPadThree", // 63
	L"NumPadFour", // 64
	L"NumPadFive", // 65
	L"NumPadSix", // 66
	L"NumPadSeven", // 67
	L"NumPadEight", // 68
	L"NumPadNine", // 69
	L"Multiply", // 6a
	L"Add", // 6b
	L"", // 6c
	L"Subtract", // 6d
	L"Decimal", // 6e
	L"Divide", // 6f
	L"F1", // 70
	L"F2", // 71
	L"F3", // 72
	L"F4", // 73
	L"F5", // 74
	L"F6", // 75
	L"F7", // 76
	L"F8", // 77
	L"F9", // 78
	L"F10", // 79
	L"F11", // 7a
	L"F12", // 7b
	L"F13", // 7c
	L"F14", // 7d
	L"F15", // 7e
	L"F16", // 7f
	L"F17", // 80
	L"F18", // 81
	L"F19", // 82
	L"F20", // 83
	L"F21", // 84
	L"F22", // 85
	L"F23", // 86
	L"F24", // 87
	L"", // 88
	L"", // 89
	L"", // 8a
	L"", // 8b
	L"", // 8c
	L"", // 8d
	L"", // 8e
	L"", // 8f
	L"NumLock", // 90
	L"ScrollLock", // 91
	L"", // 92
	L"", // 93
	L"", // 94
	L"", // 95
	L"", // 96
	L"", // 97
	L"", // 98
	L"", // 99
	L"", // 9a
	L"", // 9b
	L"", // 9c
	L"", // 9d
	L"", // 9e
	L"", // 9f
	L"LeftShift", // a0
	L"RightShift", // a1
	L"LeftControl", // a2
	L"RightControl", // a3
	L"LeftAlt", // a4
	L"RightAlt", // a5
	L"", // a6
	L"", // a7
	L"", // a8
	L"", // a9
	L"", // aa
	L"", // ab
	L"", // ac
	L"", // ad
	L"", // ae
	L"", // af
	L"", // b0
	L"", // b1
	L"", // b2
	L"", // b3
	L"", // b4
	L"", // b5
	L"", // b6
	L"", // b7
	L"", // b8
	L"", // b9
	L"", // ba
	L"", // bb
	L"", // bc
	L"", // bd
	L"", // be
	L"", // bf
	L"", // c0
	L"", // c1
	L"", // c2
	L"", // c3
	L"", // c4
	L"", // c5
	L"", // c6
	L"", // c7
	L"", // c8
	L"", // c9
	L"", // ca
	L"", // cb
	L"", // cc
	L"", // cd
	L"", // ce
	L"", // cf
	L"", // d0
	L"", // d1
	L"", // d2
	L"", // d3
	L"", // d4
	L"", // d5
	L"", // d6
	L"", // d7
	L"", // d8
	L"", // d9
	L"", // da
	L"LeftBracket", // db
	L"Backslash", // dc
	L"RightBracket", // dd
	L"Quote", // de
	L"", // df
	L"", // e0
	L"", // e1
	L"", // e2
	L"", // e3
	L"", // e4
	L"", // e5
	L"", // e6
	L"", // e7
	L"", // e8
	L"", // e9
	L"", // ea
	L"", // eb
	L"", // ec
	L"", // ed
	L"", // ee
	L"", // ef
	L"", // f0
	L"", // f1
	L"", // f2
	L"", // f3
	L"", // f4
	L"", // f5
	L"", // f6
	L"", // f7
	L"", // f8
	L"", // f9
	L"", // fa
	L"", // fb
	L"", // fc
	L"", // fd
	L"", // fe
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
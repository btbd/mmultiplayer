#pragma once

#include <d3d9.h>
#include <d3dx9.h>

#pragma comment(lib, "d3d9.lib")

#include "sdk.h"

#define PLAYER_PAWN_BONE_COUNT (108)

typedef void (*RenderSceneCallback)(IDirect3DDevice9 *device);
typedef bool (*ProcessEventCallback)(Classes::UObject *, Classes::UFunction *,
                                     void *, void *);
typedef void (*LevelLoadCallback)(const wchar_t *levelName);
typedef void (*DeathCallback)();
typedef void (*ActorTickCallback)(Classes::AActor *actor);
typedef void (*BonesTickCallback)(Classes::TArray<Classes::FBoneAtom> *atoms);
typedef void (*TickCallback)(float delta);
typedef void (*InputCallback)(unsigned int &message, int keycode);

namespace Engine {

static const char *Characters[] = {"Faith",           "Kate",        "Celeste",
                                   "Assault Celeste", "Jacknife",    "Miller",
                                   "Kreeg",           "Pursuit Cop", "Ghost"};

enum class Character {
    Faith,
    Kate,
    Celeste,
    AssaultCeleste,
    Jacknife,
    Miller,
    Kreeg,
    PursuitCop,
    Ghost,
    Max
};

Classes::UTdGameEngine *GetEngine(bool update = false);
Classes::UTdGameViewportClient *GetViewportClient(bool update = false);
Classes::UTdConsole *GetConsole(bool update = false);
void ExecuteCommand(const wchar_t *command);
Classes::AWorldInfo *GetWorld(const bool update = false);
Classes::ATdPlayerController *GetPlayerController(bool update = false);
Classes::ATdPlayerPawn *GetPlayerPawn(bool update = false);
void SpawnCharacter(Character character,
                    Classes::ASkeletalMeshActorSpawnable *&spawned);
void Despawn(Classes::ASkeletalMeshActorSpawnable *actor);
void TransformBones(Character character,
                    Classes::TArray<Classes::FBoneAtom> *dest,
                    Classes::FBoneAtom *src);

bool IsKeyDown(int);
bool WorldToScreen(IDirect3DDevice9 *device, Classes::FVector &inOutLocation);
HWND GetWindow();
void OnRenderScene(RenderSceneCallback callback);
void OnProcessEvent(ProcessEventCallback callback);
void OnPreLevelLoad(LevelLoadCallback callback);
void OnPostLevelLoad(LevelLoadCallback callback);
void OnPreDeath(DeathCallback callback);
void OnPostDeath(DeathCallback callback);
void OnActorTick(ActorTickCallback callback);
void OnBonesTick(BonesTickCallback callback);
void OnTick(TickCallback callback);

// Adds a standard input callback. Will not trigger if the menu is blocking
// input.
void OnInput(InputCallback callback);

// Adds a super input callback. A super input callback will trigger even if the
// menu is blocking input.
void OnSuperInput(InputCallback callback);

void BlockInput(bool block);
bool Initialize();

} // namespace Engine

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
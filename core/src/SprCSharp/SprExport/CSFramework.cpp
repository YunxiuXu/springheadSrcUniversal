#include <Springhead.h>
#include <Windows.h>
#include <sstream>
#include <SprFramework.h>
#include <Framework/SprFWApp.h>
#include <Physics/SprPHJointMotor.h>
#include <Framework/SprFWEditor.h>
#include <Framework/SprFWOpObj.h>
#include <Framework/FWScene.h>
#include <../src/SprCSharp/SprExport/CSUtility.h>
using namespace Spr;
using namespace std;
extern "C" {
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWAppBase() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWAppBase(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWAppBase(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWAppBase*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWAppBase_Init(HANDLE _this) {
	try { ((FWAppBase*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWAppBase_UserFunc(HANDLE _this) {
	try { ((FWAppBase*) _this)->UserFunc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWAppBase_TimerFunc(HANDLE _this, int id) {
	try { ((FWAppBase*) _this)->TimerFunc(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWAppBase_GetSdk(HANDLE _this) {
	FWSdkIf* _ptr = (FWSdkIf*) NULL;
	try { _ptr = (FWSdkIf*) ((FWAppBase*) _this)->GetSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWAppBase_CreateSdk(HANDLE _this) {
	try { ((FWAppBase*) _this)->CreateSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWAppBase_GetTimer(HANDLE _this, int i) {
	UTTimerIf* _ptr = (UTTimerIf*) NULL;
	try { _ptr = (UTTimerIf*) ((FWAppBase*) _this)->GetTimer(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_FWAppBase_NTimers(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWAppBase*) _this)->NTimers(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWApp() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWApp(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWApp(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWApp*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_Init(HANDLE _this) {
	try { ((FWApp*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_Init_1(HANDLE _this, int argc) {
	try { ((FWApp*) _this)->Init(argc); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_InitInNewThread(HANDLE _this) {
	try { ((FWApp*) _this)->InitInNewThread(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_EndThread(HANDLE _this) {
	try { ((FWApp*) _this)->EndThread(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_Display(HANDLE _this) {
	try { ((FWApp*) _this)->Display(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_DisableIdleFunc(HANDLE _this) {
	try { ((FWApp*) _this)->DisableIdleFunc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_EnableIdleFunc(HANDLE _this, char on) {
	bool arg01_ = (on == 0) ? false : true;
	try { ((FWApp*) _this)->EnableIdleFunc((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_EnableIdleFunc_1(HANDLE _this) {
	try { ((FWApp*) _this)->EnableIdleFunc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_StartMainLoop(HANDLE _this) {
	try { ((FWApp*) _this)->StartMainLoop(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_EndMainLoop(HANDLE _this) {
	try { ((FWApp*) _this)->EndMainLoop(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_IdleFunc(HANDLE _this) {
	try { ((FWApp*) _this)->IdleFunc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_TimerFunc(HANDLE _this, int id) {
	try { ((FWApp*) _this)->TimerFunc(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_Reshape(HANDLE _this, int w, int h) {
	try { ((FWApp*) _this)->Reshape(w, h); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_Keyboard(HANDLE _this, int key, int x, int y) {
	try { ((FWApp*) _this)->Keyboard(key, x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_MouseButton(HANDLE _this, int button, int state, int x, int y) {
	try { ((FWApp*) _this)->MouseButton(button, state, x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_MouseMove(HANDLE _this, int x, int y) {
	try { ((FWApp*) _this)->MouseMove(x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_Joystick(HANDLE _this, unsigned int buttonMask, int x, int y, int z) {
	try { ((FWApp*) _this)->Joystick(buttonMask, x, y, z); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_AtExit(HANDLE _this) {
	try { ((FWApp*) _this)->AtExit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWApp_OnMouse(HANDLE _this, int button, int state, int x, int y) {
	bool _val = (bool) NULL;
	try { _val = ((FWApp*) _this)->OnMouse(button, state, x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_FWApp_OnMouseMove(HANDLE _this, int button, int x, int y, int zdelta) {
	bool _val = (bool) NULL;
	try { _val = ((FWApp*) _this)->OnMouseMove(button, x, y, zdelta); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_FWApp_OnDoubleClick(HANDLE _this, int button, int x, int y) {
	bool _val = (bool) NULL;
	try { _val = ((FWApp*) _this)->OnDoubleClick(button, x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_FWApp_OnKey(HANDLE _this, int state, int key, int x, int y) {
	bool _val = (bool) NULL;
	try { _val = ((FWApp*) _this)->OnKey(state, key, x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_OnControlUpdate(HANDLE _this, HANDLE ctrl) {
	try { ((FWApp*) _this)->OnControlUpdate((FWControlIf*) ctrl); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWApp_GetApp() {
	FWApp* _ptr = (FWApp*) NULL;
	try { _ptr = (FWApp*) FWApp::GetApp(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWApp_CreateWin(HANDLE _this, HANDLE desc, HANDLE parent) {
	FWWinIf* _ptr = (FWWinIf*) NULL;
	try { _ptr = (FWWinIf*) ((FWApp*) _this)->CreateWin((const FWWinDesc&) *((FWWinDesc*) desc), (FWWinIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWApp_CreateWin_1(HANDLE _this, HANDLE desc) {
	FWWinIf* _ptr = (FWWinIf*) NULL;
	try { _ptr = (FWWinIf*) ((FWApp*) _this)->CreateWin((const FWWinDesc&) *((FWWinDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWApp_CreateWin_2(HANDLE _this) {
	FWWinIf* _ptr = (FWWinIf*) NULL;
	try { _ptr = (FWWinIf*) ((FWApp*) _this)->CreateWin(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_FWApp_NWin(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWApp*) _this)->NWin(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWApp_GetWinFromId(HANDLE _this, int wid) {
	FWWinIf* _ptr = (FWWinIf*) NULL;
	try { _ptr = (FWWinIf*) ((FWApp*) _this)->GetWinFromId(wid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWApp_GetWin(HANDLE _this, int index) {
	FWWinIf* _ptr = (FWWinIf*) NULL;
	try { _ptr = (FWWinIf*) ((FWApp*) _this)->GetWin(index); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWApp_GetCurrentWin(HANDLE _this) {
	FWWinIf* _ptr = (FWWinIf*) NULL;
	try { _ptr = (FWWinIf*) ((FWApp*) _this)->GetCurrentWin(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_DestroyWin(HANDLE _this, HANDLE win) {
	try { ((FWApp*) _this)->DestroyWin((FWWinIf*) win); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_SetCurrentWin(HANDLE _this, HANDLE win) {
	try { ((FWApp*) _this)->SetCurrentWin((FWWinIf*) win); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_PostRedisplay(HANDLE _this) {
	try { ((FWApp*) _this)->PostRedisplay(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWApp_GetModifier(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWApp*) _this)->GetModifier(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_SetGRHandler(HANDLE _this, int type) {
	try { ((FWApp*) _this)->SetGRHandler(type); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWApp_GRInit(HANDLE _this) {
	GRDeviceIf* _ptr = (GRDeviceIf*) NULL;
	try { _ptr = (GRDeviceIf*) ((FWApp*) _this)->GRInit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWApp_GRInit_1(HANDLE _this, int argc, HANDLE argv) {
	GRDeviceIf* _ptr = (GRDeviceIf*) NULL;
	try { _ptr = (GRDeviceIf*) ((FWApp*) _this)->GRInit(argc, &(((char**) argv)[0])); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWApp_GRInit_2(HANDLE _this, int argc) {
	GRDeviceIf* _ptr = (GRDeviceIf*) NULL;
	try { _ptr = (GRDeviceIf*) ((FWApp*) _this)->GRInit(argc); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_GetDisplayLock(HANDLE _this) {
	try { ((FWApp*) _this)->GetDisplayLock(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_ReleaseDisplayLock(HANDLE _this) {
	try { ((FWApp*) _this)->ReleaseDisplayLock(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_InitWindow(HANDLE _this) {
	try { ((FWApp*) _this)->InitWindow(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_Clear(HANDLE _this) {
	try { ((FWApp*) _this)->Clear(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWApp_Reset(HANDLE _this) {
	try { ((FWApp*) _this)->Reset(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWHapticApp() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWHapticApp(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWHapticApp(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWHapticApp*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWHapticApp_TimerFunc(HANDLE _this, int id) {
	try { ((FWHapticApp*) _this)->TimerFunc(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWHapticApp_CreateTimers(HANDLE _this) {
	try { ((FWHapticApp*) _this)->CreateTimers(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWHapticApp_StartTimers(HANDLE _this) {
	try { ((FWHapticApp*) _this)->StartTimers(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWHapticApp_SetPHScene(HANDLE _this, HANDLE phScene) {
	try { ((FWHapticApp*) _this)->SetPHScene((PHSceneIf*) phScene); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWHapticApp_GetCount(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWHapticApp*) _this)->GetCount(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWEditor() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWEditor(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWEditor(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWEditor*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWEditor_SetObject(HANDLE _this, HANDLE obj, char clearHist) {
	bool arg02_ = (clearHist == 0) ? false : true;
	try { ((FWEditor*) _this)->SetObject((NamedObjectIf*) obj, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWEditor_SetObject_1(HANDLE _this, HANDLE obj) {
	try { ((FWEditor*) _this)->SetObject((NamedObjectIf*) obj); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWEditor_Update(HANDLE _this) {
	try { ((FWEditor*) _this)->Update(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWValidator() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWValidator(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWValidator(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWValidator*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWEditorOverlay() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWEditorOverlay(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWEditorOverlay(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWEditorOverlay*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWEditorOverlay_Key(HANDLE _this, int key) {
	bool _val = (bool) NULL;
	try { _val = ((FWEditorOverlay*) _this)->Key(key); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FWEditorOverlay_Draw(HANDLE _this, HANDLE render) {
	try { ((FWEditorOverlay*) _this)->Draw((GRRenderIf*) render); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWObjectDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWObjectDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWObjectDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWObjectDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWObjectDesc_get_bAbsolute(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWObjectDesc*)_this)).bAbsolute; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectDesc_set_bAbsolute(HANDLE _this, char value) {
        try { (*((FWObjectDesc*)_this)).bAbsolute = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWObjectDesc_get_syncSource(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWObjectDesc*)_this)).syncSource; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectDesc_set_syncSource(HANDLE _this, int value) {
        try { (*((FWObjectDesc*)_this)).syncSource = (Spr::FWObjectDesc::FWObjectSyncSource) value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWOpObjDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWOpObjDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWOpObjDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWOpObjDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_FWOpObjDesc_get_fwPSize(HANDLE _this) {
        float _val = 0;
        try { _val = (*((FWOpObjDesc*)_this)).fwPSize; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWOpObjDesc_set_fwPSize(HANDLE _this, float value) {
        try { (*((FWOpObjDesc*)_this)).fwPSize = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWFemMeshDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWFemMeshDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWFemMeshDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWFemMeshDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_FWFemMeshDesc_get_kogePics(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((FWFemMeshDesc*)_this)).kogePics; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshDesc_set_kogePics(HANDLE _this, unsigned int value) {
        try { (*((FWFemMeshDesc*)_this)).kogePics = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_FWFemMeshDesc_get_thermoPics(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((FWFemMeshDesc*)_this)).thermoPics; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshDesc_set_thermoPics(HANDLE _this, unsigned int value) {
        try { (*((FWFemMeshDesc*)_this)).thermoPics = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_FWFemMeshDesc_get_waterPics(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((FWFemMeshDesc*)_this)).waterPics; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshDesc_set_waterPics(HANDLE _this, unsigned int value) {
        try { (*((FWFemMeshDesc*)_this)).waterPics = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWFemMeshDesc_get_meshRoughness(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((FWFemMeshDesc*) _this)->meshRoughness;
	    const char* cstr = str.c_str();
	    int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, NULL, 0);
	    if (lenW > 0) {
	        result = ::SysAllocStringLen(0, lenW);
	        ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, result, lenW);
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshDesc_set_meshRoughness(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((FWFemMeshDesc*) _this)->meshRoughness = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshDesc_FreeString_meshRoughness(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshDesc_Init(HANDLE _this) {
	try { ((FWFemMeshDesc*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWFemMeshNewDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWFemMeshNewDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWFemMeshNewDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWFemMeshNewDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_FWFemMeshNewDesc_get_kogetex(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((FWFemMeshNewDesc*)_this)).kogetex; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshNewDesc_set_kogetex(HANDLE _this, unsigned int value) {
        try { (*((FWFemMeshNewDesc*)_this)).kogetex = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWFemMeshNewDesc_get_meshRoughness(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((FWFemMeshNewDesc*) _this)->meshRoughness;
	    const char* cstr = str.c_str();
	    int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, NULL, 0);
	    if (lenW > 0) {
	        result = ::SysAllocStringLen(0, lenW);
	        ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, result, lenW);
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshNewDesc_set_meshRoughness(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((FWFemMeshNewDesc*) _this)->meshRoughness = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshNewDesc_FreeString_meshRoughness(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWFemMeshNewDesc_get_spheric(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWFemMeshNewDesc*)_this)).spheric; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshNewDesc_set_spheric(HANDLE _this, char value) {
        try { (*((FWFemMeshNewDesc*)_this)).spheric = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_FWFemMeshNewDesc_get_texture_mode(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((FWFemMeshNewDesc*)_this)).texture_mode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshNewDesc_set_texture_mode(HANDLE _this, unsigned int value) {
        try { (*((FWFemMeshNewDesc*)_this)).texture_mode = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshNewDesc_Init(HANDLE _this) {
	try { ((FWFemMeshNewDesc*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWSceneDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWSceneDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWSceneDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWSceneDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWSdkDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWSdkDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWSdkDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWSdkDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWSkeletonSensorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWSkeletonSensorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWSkeletonSensorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWSkeletonSensorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWSkeletonSensorDesc_get_bCreatePHSkeleton(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWSkeletonSensorDesc*)_this)).bCreatePHSkeleton; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWSkeletonSensorDesc_set_bCreatePHSkeleton(HANDLE _this, char value) {
        try { (*((FWSkeletonSensorDesc*)_this)).bCreatePHSkeleton = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWSkeletonSensorDesc_get_bCreatePHSolid(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWSkeletonSensorDesc*)_this)).bCreatePHSolid; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWSkeletonSensorDesc_set_bCreatePHSolid(HANDLE _this, char value) {
        try { (*((FWSkeletonSensorDesc*)_this)).bCreatePHSolid = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWSkeletonSensorDesc_get_bCreateCDShape(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWSkeletonSensorDesc*)_this)).bCreateCDShape; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWSkeletonSensorDesc_set_bCreateCDShape(HANDLE _this, char value) {
        try { (*((FWSkeletonSensorDesc*)_this)).bCreateCDShape = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWSkeletonSensorDesc_get_bCreatePHJoint(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWSkeletonSensorDesc*)_this)).bCreatePHJoint; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWSkeletonSensorDesc_set_bCreatePHJoint(HANDLE _this, char value) {
        try { (*((FWSkeletonSensorDesc*)_this)).bCreatePHJoint = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWSkeletonSensorDesc_get_bCreatePHSpring(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWSkeletonSensorDesc*)_this)).bCreatePHSpring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWSkeletonSensorDesc_set_bCreatePHSpring(HANDLE _this, char value) {
        try { (*((FWSkeletonSensorDesc*)_this)).bCreatePHSpring = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSkeletonSensorDesc_addr_radius(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((FWSkeletonSensorDesc*)_this)->radius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWSkeletonSensorDesc_set_radius(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWSkeletonSensorDesc*)_this)->radius) != _ptr) {
                ((FWSkeletonSensorDesc*)_this)->radius = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWWinBaseDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWWinBaseDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWWinBaseDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWWinBaseDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWWinBaseDesc_get_width(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWWinBaseDesc*)_this)).width; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseDesc_set_width(HANDLE _this, int value) {
        try { (*((FWWinBaseDesc*)_this)).width = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWWinBaseDesc_get_height(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWWinBaseDesc*)_this)).height; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseDesc_set_height(HANDLE _this, int value) {
        try { (*((FWWinBaseDesc*)_this)).height = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWWinBaseDesc_get_left(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWWinBaseDesc*)_this)).left; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseDesc_set_left(HANDLE _this, int value) {
        try { (*((FWWinBaseDesc*)_this)).left = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWWinBaseDesc_get_top(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWWinBaseDesc*)_this)).top; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseDesc_set_top(HANDLE _this, int value) {
        try { (*((FWWinBaseDesc*)_this)).top = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinBaseDesc_get_title(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((FWWinBaseDesc*) _this)->title;
	    const char* cstr = str.c_str();
	    int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, NULL, 0);
	    if (lenW > 0) {
	        result = ::SysAllocStringLen(0, lenW);
	        ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, result, lenW);
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseDesc_set_title(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((FWWinBaseDesc*) _this)->title = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseDesc_FreeString_title(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWControlDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWControlDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWControlDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWControlDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWControlDesc_get_label(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((FWControlDesc*) _this)->label;
	    const char* cstr = str.c_str();
	    int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, NULL, 0);
	    if (lenW > 0) {
	        result = ::SysAllocStringLen(0, lenW);
	        ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, result, lenW);
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWControlDesc_set_label(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((FWControlDesc*) _this)->label = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWControlDesc_FreeString_label(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWControlDesc_get_align(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWControlDesc*)_this)).align; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWControlDesc_set_align(HANDLE _this, int value) {
        try { (*((FWControlDesc*)_this)).align = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWControlDesc_get_style(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWControlDesc*)_this)).style; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWControlDesc_set_style(HANDLE _this, int value) {
        try { (*((FWControlDesc*)_this)).style = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWPanelDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWPanelDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWPanelDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWPanelDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWPanelDesc_get_open(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWPanelDesc*)_this)).open; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWPanelDesc_set_open(HANDLE _this, char value) {
        try { (*((FWPanelDesc*)_this)).open = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWButtonDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWButtonDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWButtonDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWButtonDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWButtonDesc_get_style(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWButtonDesc*)_this)).style; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWButtonDesc_set_style(HANDLE _this, int value) {
        try { (*((FWButtonDesc*)_this)).style = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWButtonDesc_get_checked(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWButtonDesc*)_this)).checked; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWButtonDesc_set_checked(HANDLE _this, char value) {
        try { (*((FWButtonDesc*)_this)).checked = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWStaticTextDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWStaticTextDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWStaticTextDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWStaticTextDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWTextBoxDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWTextBoxDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWTextBoxDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWTextBoxDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWTextBoxDesc_get_text(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((FWTextBoxDesc*) _this)->text;
	    const char* cstr = str.c_str();
	    int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, NULL, 0);
	    if (lenW > 0) {
	        result = ::SysAllocStringLen(0, lenW);
	        ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, result, lenW);
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxDesc_set_text(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((FWTextBoxDesc*) _this)->text = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxDesc_FreeString_text(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWTextBoxDesc_get_intMin(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWTextBoxDesc*)_this)).intMin; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxDesc_set_intMin(HANDLE _this, int value) {
        try { (*((FWTextBoxDesc*)_this)).intMin = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWTextBoxDesc_get_intMax(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWTextBoxDesc*)_this)).intMax; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxDesc_set_intMax(HANDLE _this, int value) {
        try { (*((FWTextBoxDesc*)_this)).intMax = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_FWTextBoxDesc_get_floatMin(HANDLE _this) {
        float _val = 0;
        try { _val = (*((FWTextBoxDesc*)_this)).floatMin; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxDesc_set_floatMin(HANDLE _this, float value) {
        try { (*((FWTextBoxDesc*)_this)).floatMin = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_FWTextBoxDesc_get_floatMax(HANDLE _this) {
        float _val = 0;
        try { _val = (*((FWTextBoxDesc*)_this)).floatMax; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxDesc_set_floatMax(HANDLE _this, float value) {
        try { (*((FWTextBoxDesc*)_this)).floatMax = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWTextBoxDesc_get_spinner(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWTextBoxDesc*)_this)).spinner; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxDesc_set_spinner(HANDLE _this, char value) {
        try { (*((FWTextBoxDesc*)_this)).spinner = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWListBoxDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWListBoxDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWListBoxDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWListBoxDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWRotationControlDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWRotationControlDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWRotationControlDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWRotationControlDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWRotationControlDesc_addr_rot(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((FWRotationControlDesc*)_this)->rot; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWRotationControlDesc_set_rot(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWRotationControlDesc*)_this)->rot) != _ptr) {
                ((FWRotationControlDesc*)_this)->rot = *((Matrix3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_FWRotationControlDesc_get_damping(HANDLE _this) {
        float _val = 0;
        try { _val = (*((FWRotationControlDesc*)_this)).damping; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWRotationControlDesc_set_damping(HANDLE _this, float value) {
        try { (*((FWRotationControlDesc*)_this)).damping = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWTranslationControlDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWTranslationControlDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWTranslationControlDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWTranslationControlDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWTranslationControlDesc_addr_pos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((FWTranslationControlDesc*)_this)->pos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWTranslationControlDesc_set_pos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWTranslationControlDesc*)_this)->pos) != _ptr) {
                ((FWTranslationControlDesc*)_this)->pos = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_FWTranslationControlDesc_get_speed(HANDLE _this) {
        float _val = 0;
        try { _val = (*((FWTranslationControlDesc*)_this)).speed; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWTranslationControlDesc_set_speed(HANDLE _this, float value) {
        try { (*((FWTranslationControlDesc*)_this)).speed = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWDialogDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWDialogDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWDialogDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWDialogDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWDialogDesc_get_dock(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWDialogDesc*)_this)).dock; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWDialogDesc_set_dock(HANDLE _this, char value) {
        try { (*((FWDialogDesc*)_this)).dock = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWDialogDesc_get_dockPos(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWDialogDesc*)_this)).dockPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWDialogDesc_set_dockPos(HANDLE _this, int value) {
        try { (*((FWDialogDesc*)_this)).dockPos = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWWinDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWWinDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWWinDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWWinDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWWinDesc_get_debugMode(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWWinDesc*)_this)).debugMode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinDesc_set_debugMode(HANDLE _this, char value) {
        try { (*((FWWinDesc*)_this)).debugMode = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWWinDesc_get_fullscreen(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWWinDesc*)_this)).fullscreen; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinDesc_set_fullscreen(HANDLE _this, char value) {
        try { (*((FWWinDesc*)_this)).fullscreen = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWWinDesc_get_useKeyMouse(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWWinDesc*)_this)).useKeyMouse; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinDesc_set_useKeyMouse(HANDLE _this, char value) {
        try { (*((FWWinDesc*)_this)).useKeyMouse = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWWinDesc_get_useJoyStick(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWWinDesc*)_this)).useJoyStick; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinDesc_set_useJoyStick(HANDLE _this, char value) {
        try { (*((FWWinDesc*)_this)).useJoyStick = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWWinDesc_get_joyStickPollInterval(HANDLE _this) {
        int _val = 0;
        try { _val = (*((FWWinDesc*)_this)).joyStickPollInterval; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinDesc_set_joyStickPollInterval(HANDLE _this, int value) {
        try { (*((FWWinDesc*)_this)).joyStickPollInterval = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWWinDesc_get_useTrackball(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((FWWinDesc*)_this)).useTrackball; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinDesc_set_useTrackball(HANDLE _this, char value) {
        try { (*((FWWinDesc*)_this)).useTrackball = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWGroundConstraint() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWGroundConstraint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWGroundConstraint_10(double w, HANDLE n) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWGroundConstraint(w, *((Vec3d*) n)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWGroundConstraint(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWGroundConstraint*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWGroundConstraint_addr_cNormal(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((FWGroundConstraint*)_this)->cNormal; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWGroundConstraint_set_cNormal(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWGroundConstraint*)_this)->cNormal) != _ptr) {
                ((FWGroundConstraint*)_this)->cNormal = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWGroundConstraint_get_cSolid(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = ((FWGroundConstraint*)_this)->cSolid; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWGroundConstraint_set_cSolid(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWGroundConstraint*)_this)->cSolid) != _ptr) {
                ((FWGroundConstraint*)_this)->cSolid = ((PHSolidIf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWGroundConstraint_addr_initialPose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((FWGroundConstraint*)_this)->initialPose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWGroundConstraint_set_initialPose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWGroundConstraint*)_this)->initialPose) != _ptr) {
                ((FWGroundConstraint*)_this)->initialPose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWGroundConstraint_get_cWeight(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWGroundConstraint*)_this)).cWeight; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWGroundConstraint_set_cWeight(HANDLE _this, double value) {
        try { (*((FWGroundConstraint*)_this)).cWeight = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWGroundConstraint_addr_contactForce(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((FWGroundConstraint*)_this)->contactForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWGroundConstraint_set_contactForce(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWGroundConstraint*)_this)->contactForce) != _ptr) {
                ((FWGroundConstraint*)_this)->contactForce = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWGroundConstraint_addr_contactPoint(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((FWGroundConstraint*)_this)->contactPoint; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWGroundConstraint_set_contactPoint(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWGroundConstraint*)_this)->contactPoint) != _ptr) {
                ((FWGroundConstraint*)_this)->contactPoint = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWGroundConstraint_CalcEvalFunc(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((FWGroundConstraint*) _this)->CalcEvalFunc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWGroundConstraint_Init(HANDLE _this) {
	try { ((FWGroundConstraint*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWUngroundedConstraint() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWUngroundedConstraint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWUngroundedConstraint_9(double w, HANDLE a, HANDLE n) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWUngroundedConstraint(w, *((Vec3i*) a), *((Vec3d*) n)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWUngroundedConstraint_10(double w, HANDLE a) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWUngroundedConstraint(w, *((Vec3i*) a)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWUngroundedConstraint(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWUngroundedConstraint*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWUngroundedConstraint_addr_cAxis(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((FWUngroundedConstraint*)_this)->cAxis; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWUngroundedConstraint_set_cAxis(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWUngroundedConstraint*)_this)->cAxis) != _ptr) {
                ((FWUngroundedConstraint*)_this)->cAxis = *((Vec3i*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWUngroundedConstraint_addr_normal(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((FWUngroundedConstraint*)_this)->normal; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWUngroundedConstraint_set_normal(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWUngroundedConstraint*)_this)->normal) != _ptr) {
                ((FWUngroundedConstraint*)_this)->normal = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWUngroundedConstraint_get_cSolid(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = ((FWUngroundedConstraint*)_this)->cSolid; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWUngroundedConstraint_set_cSolid(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWUngroundedConstraint*)_this)->cSolid) != _ptr) {
                ((FWUngroundedConstraint*)_this)->cSolid = ((PHSolidIf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWUngroundedConstraint_addr_initialPose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((FWUngroundedConstraint*)_this)->initialPose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWUngroundedConstraint_set_initialPose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((FWUngroundedConstraint*)_this)->initialPose) != _ptr) {
                ((FWUngroundedConstraint*)_this)->initialPose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWUngroundedConstraint_get_cWeight(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWUngroundedConstraint*)_this)).cWeight; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWUngroundedConstraint_set_cWeight(HANDLE _this, double value) {
        try { (*((FWUngroundedConstraint*)_this)).cWeight = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWUngroundedConstraint_CalcEvalFunc(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((FWUngroundedConstraint*) _this)->CalcEvalFunc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWUngroundedConstraint_Init(HANDLE _this) {
	try { ((FWUngroundedConstraint*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_JointPos() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new JointPos(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_JointPos_4(HANDLE q) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new JointPos(*((Quaterniond*) q)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_JointPos_5(double a) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new JointPos(a); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_JointPos(HANDLE v) {
        if (v == NULL) return;
        try { delete (JointPos*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_JointPos_addr_ori(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((JointPos*)_this)->ori; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_JointPos_set_ori(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((JointPos*)_this)->ori) != _ptr) {
                ((JointPos*)_this)->ori = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_JointPos_get_angle(HANDLE _this) {
        double _val = 0;
        try { _val = (*((JointPos*)_this)).angle; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_JointPos_set_angle(HANDLE _this, double value) {
        try { (*((JointPos*)_this)).angle = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWObjectiveValues() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWObjectiveValues(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWObjectiveValues(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWObjectiveValues*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWObjectiveValues_get_errorvalue(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWObjectiveValues*)_this)).errorvalue; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectiveValues_set_errorvalue(HANDLE _this, double value) {
        try { (*((FWObjectiveValues*)_this)).errorvalue = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWObjectiveValues_get_torquevalue(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWObjectiveValues*)_this)).torquevalue; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectiveValues_set_torquevalue(HANDLE _this, double value) {
        try { (*((FWObjectiveValues*)_this)).torquevalue = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWObjectiveValues_get_stabilityvalue(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWObjectiveValues*)_this)).stabilityvalue; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectiveValues_set_stabilityvalue(HANDLE _this, double value) {
        try { (*((FWObjectiveValues*)_this)).stabilityvalue = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWObjectiveValues_get_groundvalue(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWObjectiveValues*)_this)).groundvalue; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectiveValues_set_groundvalue(HANDLE _this, double value) {
        try { (*((FWObjectiveValues*)_this)).groundvalue = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWObjectiveValues_get_ungroundedvalue(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWObjectiveValues*)_this)).ungroundedvalue; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectiveValues_set_ungroundedvalue(HANDLE _this, double value) {
        try { (*((FWObjectiveValues*)_this)).ungroundedvalue = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWObjectiveValues_get_centervalue(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWObjectiveValues*)_this)).centervalue; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectiveValues_set_centervalue(HANDLE _this, double value) {
        try { (*((FWObjectiveValues*)_this)).centervalue = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWObjectiveValues_get_initialorivalue(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWObjectiveValues*)_this)).initialorivalue; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectiveValues_set_initialorivalue(HANDLE _this, double value) {
        try { (*((FWObjectiveValues*)_this)).initialorivalue = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWOptimizerDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWOptimizerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWOptimizerDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWOptimizerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWOptimizerDesc_get_ixstart(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWOptimizerDesc*)_this)).ixstart; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerDesc_set_ixstart(HANDLE _this, double value) {
        try { (*((FWOptimizerDesc*)_this)).ixstart = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWOptimizerDesc_get_istddev(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWOptimizerDesc*)_this)).istddev; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerDesc_set_istddev(HANDLE _this, double value) {
        try { (*((FWOptimizerDesc*)_this)).istddev = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWOptimizerDesc_get_iTolFun(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWOptimizerDesc*)_this)).iTolFun; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerDesc_set_iTolFun(HANDLE _this, double value) {
        try { (*((FWOptimizerDesc*)_this)).iTolFun = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWOptimizerDesc_get_ilambda(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWOptimizerDesc*)_this)).ilambda; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerDesc_set_ilambda(HANDLE _this, double value) {
        try { (*((FWOptimizerDesc*)_this)).ilambda = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWOptimizerDesc_get_iMaxIter(HANDLE _this) {
        double _val = 0;
        try { _val = (*((FWOptimizerDesc*)_this)).iMaxIter; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerDesc_set_iMaxIter(HANDLE _this, double value) {
        try { (*((FWOptimizerDesc*)_this)).iMaxIter = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWStaticTorqueOptimizerDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWStaticTorqueOptimizerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWStaticTorqueOptimizerDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWStaticTorqueOptimizerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWObjectIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWObjectIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWObjectIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWObjectIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWObjectIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWObjectIf*) _this)) {
                (*((FWObjectIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWObjectIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWObjectIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWObjectIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWObjectIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWObjectIf_GetPHSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((FWObjectIf*) _this)->GetPHSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_SetPHSolid(HANDLE _this, HANDLE s) {
	try { ((FWObjectIf*) _this)->SetPHSolid((PHSolidIf*) s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWObjectIf_GetGRFrame(HANDLE _this) {
	GRFrameIf* _ptr = (GRFrameIf*) NULL;
	try { _ptr = (GRFrameIf*) ((FWObjectIf*) _this)->GetGRFrame(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_SetGRFrame(HANDLE _this, HANDLE f) {
	try { ((FWObjectIf*) _this)->SetGRFrame((GRFrameIf*) f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWObjectIf_GetPHJoint(HANDLE _this) {
	PHJointIf* _ptr = (PHJointIf*) NULL;
	try { _ptr = (PHJointIf*) ((FWObjectIf*) _this)->GetPHJoint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_SetPHJoint(HANDLE _this, HANDLE j) {
	try { ((FWObjectIf*) _this)->SetPHJoint((PHJointIf*) j); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWObjectIf_GetChildFrame(HANDLE _this) {
	GRFrameIf* _ptr = (GRFrameIf*) NULL;
	try { _ptr = (GRFrameIf*) ((FWObjectIf*) _this)->GetChildFrame(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_SetChildFrame(HANDLE _this, HANDLE f) {
	try { ((FWObjectIf*) _this)->SetChildFrame((GRFrameIf*) f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_SetSyncSource(HANDLE _this, int syncSrc) {
	FWObjectDesc::FWObjectSyncSource arg01_ = ((FWObjectDesc::FWObjectSyncSource) syncSrc);
	try { ((FWObjectIf*) _this)->SetSyncSource((FWObjectDesc::FWObjectSyncSource) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWObjectIf_GetSyncSource(HANDLE _this) {
	FWObjectDesc::FWObjectSyncSource _val = (FWObjectDesc::FWObjectSyncSource) NULL;
	try { _val = ((FWObjectIf*) _this)->GetSyncSource(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (int) _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_EnableAbsolute(HANDLE _this, char bAbs) {
	bool arg01_ = (bAbs == 0) ? false : true;
	try { ((FWObjectIf*) _this)->EnableAbsolute((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWObjectIf_IsAbsolute(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((FWObjectIf*) _this)->IsAbsolute(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_GenerateCDMesh(HANDLE _this, HANDLE frame, HANDLE mat) {
	try { ((FWObjectIf*) _this)->GenerateCDMesh((GRFrameIf*) frame, (const PHMaterial&) *((PHMaterial*) mat)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_GenerateCDMesh_1(HANDLE _this, HANDLE frame) {
	try { ((FWObjectIf*) _this)->GenerateCDMesh((GRFrameIf*) frame); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_GenerateCDMesh_2(HANDLE _this) {
	try { ((FWObjectIf*) _this)->GenerateCDMesh(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWObjectIf_Sync(HANDLE _this) {
	try { ((FWObjectIf*) _this)->Sync(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWOpObjIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWOpObjIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWOpObjIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWOpObjIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOpObjIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWOpObjIf*) _this)) {
                (*((FWOpObjIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWOpObjIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOpObjIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWOpObjIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOpObjIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWOpObjIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWOpObjIf_Blend(HANDLE _this) {
	try { ((FWOpObjIf*) _this)->Blend(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) size_t __cdecl Spr_FWOpObjIf_NChildObject(HANDLE _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((FWOpObjIf*) _this)->NChildObject(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOpObjIf_GetChildObject(HANDLE _this, size_t pos) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((FWOpObjIf*) _this)->GetChildObject(pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_FWOpObjIf_AddChildObject(HANDLE _this, HANDLE o) {
	bool _val = (bool) NULL;
	try { _val = ((FWOpObjIf*) _this)->AddChildObject((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FWOpObjIf_CreateOpObjWithRadius(HANDLE _this, float r) {
	try { ((FWOpObjIf*) _this)->CreateOpObjWithRadius(r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWOpObjIf_CreateOpObj(HANDLE _this) {
	try { ((FWOpObjIf*) _this)->CreateOpObj(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOpObjIf_GetOpObj(HANDLE _this) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((FWOpObjIf*) _this)->GetOpObj(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOpObjIf_GetGRMesh(HANDLE _this) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((FWOpObjIf*) _this)->GetGRMesh(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWFemMeshIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWFemMeshIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWFemMeshIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWFemMeshIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWFemMeshIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWFemMeshIf*) _this)) {
                (*((FWFemMeshIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWFemMeshIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWFemMeshIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWFemMeshIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWFemMeshIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWFemMeshIf_GetPHMesh(HANDLE _this) {
	PHFemMeshIf* _ptr = (PHFemMeshIf*) NULL;
	try { _ptr = (PHFemMeshIf*) ((FWFemMeshIf*) _this)->GetPHMesh(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshIf_DrawIHBorderXZPlane(HANDLE _this, char sw) {
	bool arg01_ = (sw == 0) ? false : true;
	try { ((FWFemMeshIf*) _this)->DrawIHBorderXZPlane((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshIf_DrawFaceEdge(HANDLE _this) {
	try { ((FWFemMeshIf*) _this)->DrawFaceEdge(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshIf_SetTexmode(HANDLE _this, unsigned int mode) {
	try { ((FWFemMeshIf*) _this)->SetTexmode(mode); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWFemMeshNewIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWFemMeshNewIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWFemMeshNewIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWFemMeshNewIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWFemMeshNewIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWFemMeshNewIf*) _this)) {
                (*((FWFemMeshNewIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshNewIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWFemMeshNewIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWFemMeshNewIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWFemMeshNewIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWFemMeshNewIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWFemMeshNewIf_GetPHFemMesh(HANDLE _this) {
	PHFemMeshNewIf* _ptr = (PHFemMeshNewIf*) NULL;
	try { _ptr = (PHFemMeshNewIf*) ((FWFemMeshNewIf*) _this)->GetPHFemMesh(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshNewIf_SetTexmode(HANDLE _this, unsigned int mode) {
	try { ((FWFemMeshNewIf*) _this)->SetTexmode(mode); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshNewIf_EnableDrawEdgeCW(HANDLE _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((FWFemMeshNewIf*) _this)->EnableDrawEdgeCW((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWFemMeshNewIf_Settexmode1Map(HANDLE _this, float temp) {
	try { ((FWFemMeshNewIf*) _this)->Settexmode1Map(temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWHapticPointerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWHapticPointerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWHapticPointerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWHapticPointerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWHapticPointerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWHapticPointerIf*) _this)) {
                (*((FWHapticPointerIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWHapticPointerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWHapticPointerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWHapticPointerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWHapticPointerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWHapticPointerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWHapticPointerIf_SetPHHapticPointer(HANDLE _this, HANDLE hpGlobal) {
	try { ((FWHapticPointerIf*) _this)->SetPHHapticPointer((PHHapticPointerIf*) hpGlobal); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWHapticPointerIf_GetPHHapticPointer(HANDLE _this) {
	PHHapticPointerIf* _ptr = (PHHapticPointerIf*) NULL;
	try { _ptr = (PHHapticPointerIf*) ((FWHapticPointerIf*) _this)->GetPHHapticPointer(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWHapticPointerIf_SetHumanInterface(HANDLE _this, HANDLE hi) {
	try { ((FWHapticPointerIf*) _this)->SetHumanInterface((HIBaseIf*) hi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWHapticPointerIf_GetHumanInterface(HANDLE _this) {
	HIBaseIf* _ptr = (HIBaseIf*) NULL;
	try { _ptr = (HIBaseIf*) ((FWHapticPointerIf*) _this)->GetHumanInterface(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWSceneIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWSceneIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWSceneIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWSceneIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWSceneIf*) _this)) {
                (*((FWSceneIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWSceneIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWSceneIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_GetSdk(HANDLE _this) {
	FWSdkIf* _ptr = (FWSdkIf*) NULL;
	try { _ptr = (FWSdkIf*) ((FWSceneIf*) _this)->GetSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_GetPHScene(HANDLE _this) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((FWSceneIf*) _this)->GetPHScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetPHScene(HANDLE _this, HANDLE s) {
	try { ((FWSceneIf*) _this)->SetPHScene((PHSceneIf*) s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_GetGRScene(HANDLE _this) {
	GRSceneIf* _ptr = (GRSceneIf*) NULL;
	try { _ptr = (GRSceneIf*) ((FWSceneIf*) _this)->GetGRScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetGRScene(HANDLE _this, HANDLE s) {
	try { ((FWSceneIf*) _this)->SetGRScene((GRSceneIf*) s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_CreateFWObject(HANDLE _this) {
	FWObjectIf* _ptr = (FWObjectIf*) NULL;
	try { _ptr = (FWObjectIf*) ((FWSceneIf*) _this)->CreateFWObject(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_FWSceneIf_NObject(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWSceneIf*) _this)->NObject(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_GetObject(HANDLE _this, int i) {
	FWObjectIf* _ptr = (FWObjectIf*) NULL;
	try { _ptr = (FWObjectIf*) ((FWSceneIf*) _this)->GetObject(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_GetObjects(HANDLE _this) {
	FWObjectIf* _ptr = (FWObjectIf*) NULL;
	try { _ptr = (FWObjectIf*) ((FWSceneIf*) _this)->GetObjects(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_Sync(HANDLE _this) {
	try { ((FWSceneIf*) _this)->Sync(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_Step(HANDLE _this) {
	try { ((FWSceneIf*) _this)->Step(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_Draw(HANDLE _this, HANDLE grRender, char debug) {
	bool arg02_ = (debug == 0) ? false : true;
	try { ((FWSceneIf*) _this)->Draw((GRRenderIf*) grRender, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_Draw_1(HANDLE _this, HANDLE grRender) {
	try { ((FWSceneIf*) _this)->Draw((GRRenderIf*) grRender); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_DrawPHScene(HANDLE _this, HANDLE render) {
	try { ((FWSceneIf*) _this)->DrawPHScene((GRRenderIf*) render); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_DrawSolid(HANDLE _this, HANDLE render, HANDLE solid, char solid_or_wire) {
	bool arg03_ = (solid_or_wire == 0) ? false : true;
	try { ((FWSceneIf*) _this)->DrawSolid((GRRenderIf*) render, (PHSolidIf*) solid, (bool) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_DrawShape(HANDLE _this, HANDLE render, HANDLE shape, char solid) {
	bool arg03_ = (solid == 0) ? false : true;
	try { ((FWSceneIf*) _this)->DrawShape((GRRenderIf*) render, (CDShapeIf*) shape, (bool) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_DrawConstraint(HANDLE _this, HANDLE render, HANDLE con) {
	try { ((FWSceneIf*) _this)->DrawConstraint((GRRenderIf*) render, (PHConstraintIf*) con); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_DrawContact(HANDLE _this, HANDLE render, HANDLE con) {
	try { ((FWSceneIf*) _this)->DrawContact((GRRenderIf*) render, (PHContactPointIf*) con); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_DrawIK(HANDLE _this, HANDLE render, HANDLE ikEngine) {
	try { ((FWSceneIf*) _this)->DrawIK((GRRenderIf*) render, (PHIKEngineIf*) ikEngine); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_DrawLimit(HANDLE _this, HANDLE render, HANDLE con) {
	try { ((FWSceneIf*) _this)->DrawLimit((GRRenderIf*) render, (PHConstraintIf*) con); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_DrawHaptic(HANDLE _this, HANDLE render, HANDLE hapticEngine) {
	try { ((FWSceneIf*) _this)->DrawHaptic((GRRenderIf*) render, (PHHapticEngineIf*) hapticEngine); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetRenderMode(HANDLE _this, char solid, char wire) {
	bool arg01_ = (solid == 0) ? false : true;
	bool arg02_ = (wire == 0) ? false : true;
	try { ((FWSceneIf*) _this)->SetRenderMode((bool) arg01_, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetRenderMode_1(HANDLE _this, char solid) {
	bool arg01_ = (solid == 0) ? false : true;
	try { ((FWSceneIf*) _this)->SetRenderMode((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetRenderMode_2(HANDLE _this) {
	try { ((FWSceneIf*) _this)->SetRenderMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRender(HANDLE _this, HANDLE obj, char enable) {
	bool arg02_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRender((ObjectIf*) obj, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRender_1(HANDLE _this, HANDLE obj) {
	try { ((FWSceneIf*) _this)->EnableRender((ObjectIf*) obj); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetSolidMaterial(HANDLE _this, int mat, HANDLE solid) {
	try { ((FWSceneIf*) _this)->SetSolidMaterial(mat, (PHSolidIf*) solid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetSolidMaterial_1(HANDLE _this, int mat) {
	try { ((FWSceneIf*) _this)->SetSolidMaterial(mat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetSolidMaterial_2(HANDLE _this, int mat, float alha, HANDLE solid) {
	try { ((FWSceneIf*) _this)->SetSolidMaterial(mat, alha, (PHSolidIf*) solid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetSolidMaterial_3(HANDLE _this, int mat, float alha) {
	try { ((FWSceneIf*) _this)->SetSolidMaterial(mat, alha); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetWireMaterial(HANDLE _this, int mat, HANDLE solid) {
	try { ((FWSceneIf*) _this)->SetWireMaterial(mat, (PHSolidIf*) solid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetWireMaterial_1(HANDLE _this, int mat) {
	try { ((FWSceneIf*) _this)->SetWireMaterial(mat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetWireMaterial_2(HANDLE _this, int mat, float alha, HANDLE solid) {
	try { ((FWSceneIf*) _this)->SetWireMaterial(mat, alha, (PHSolidIf*) solid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetWireMaterial_3(HANDLE _this, int mat, float alha) {
	try { ((FWSceneIf*) _this)->SetWireMaterial(mat, alha); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderAxis(HANDLE _this, char world, char solid, char con) {
	bool arg01_ = (world == 0) ? false : true;
	bool arg02_ = (solid == 0) ? false : true;
	bool arg03_ = (con == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderAxis((bool) arg01_, (bool) arg02_, (bool) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderAxis_1(HANDLE _this, char world, char solid) {
	bool arg01_ = (world == 0) ? false : true;
	bool arg02_ = (solid == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderAxis((bool) arg01_, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderAxis_2(HANDLE _this, char world) {
	bool arg01_ = (world == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderAxis((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderAxis_3(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderAxis(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetAxisMaterial(HANDLE _this, int matX, int matY, int matZ) {
	try { ((FWSceneIf*) _this)->SetAxisMaterial(matX, matY, matZ); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetAxisScale(HANDLE _this, float scaleWorld, float scaleSolid, float scaleCon) {
	try { ((FWSceneIf*) _this)->SetAxisScale(scaleWorld, scaleSolid, scaleCon); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetAxisStyle(HANDLE _this, int style) {
	try { ((FWSceneIf*) _this)->SetAxisStyle(style); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderForce(HANDLE _this, char solid, char constraint) {
	bool arg01_ = (solid == 0) ? false : true;
	bool arg02_ = (constraint == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderForce((bool) arg01_, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderForce_1(HANDLE _this, char solid) {
	bool arg01_ = (solid == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderForce((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderForce_2(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetForceMaterial(HANDLE _this, int matForce, int matMoment) {
	try { ((FWSceneIf*) _this)->SetForceMaterial(matForce, matMoment); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetForceScale(HANDLE _this, float scaleForce, float scaleMoment) {
	try { ((FWSceneIf*) _this)->SetForceScale(scaleForce, scaleMoment); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderPHScene(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderPHScene((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderPHScene_1(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderPHScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderGRScene(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderGRScene((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderGRScene_1(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderGRScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderContact(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderContact((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderContact_1(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderContact(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetContactMaterial(HANDLE _this, int mat) {
	try { ((FWSceneIf*) _this)->SetContactMaterial(mat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderBBox(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderBBox((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderBBox_1(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderBBox(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetLocalBBoxMaterial(HANDLE _this, int mat) {
	try { ((FWSceneIf*) _this)->SetLocalBBoxMaterial(mat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetWorldBBoxMaterial(HANDLE _this, int mat) {
	try { ((FWSceneIf*) _this)->SetWorldBBoxMaterial(mat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderGrid(HANDLE _this, char x, char y, char z) {
	bool arg01_ = (x == 0) ? false : true;
	bool arg02_ = (y == 0) ? false : true;
	bool arg03_ = (z == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderGrid((bool) arg01_, (bool) arg02_, (bool) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderGrid_1(HANDLE _this, char x, char y) {
	bool arg01_ = (x == 0) ? false : true;
	bool arg02_ = (y == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderGrid((bool) arg01_, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderGrid_2(HANDLE _this, char x) {
	bool arg01_ = (x == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderGrid((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderGrid_3(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderGrid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetGridOption(HANDLE _this, char axis, float offset, float size, int slice) {
	try { ((FWSceneIf*) _this)->SetGridOption(axis, offset, size, slice); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetGridMaterial(HANDLE _this, int matX, int matY, int matZ) {
	try { ((FWSceneIf*) _this)->SetGridMaterial(matX, matY, matZ); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderIK(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderIK((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderIK_1(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderIK(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetIKMaterial(HANDLE _this, int mat) {
	try { ((FWSceneIf*) _this)->SetIKMaterial(mat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_SetIKScale(HANDLE _this, float scale) {
	try { ((FWSceneIf*) _this)->SetIKScale(scale); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderLimit(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderLimit((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderLimit_1(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderLimit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderHaptic(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderHaptic((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderHaptic_1(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderHaptic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderFem(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderFem((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderFem_1(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderFem(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderSkeletonSensor(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderSkeletonSensor((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderSkeletonSensor_1(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderSkeletonSensor(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderOp(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((FWSceneIf*) _this)->EnableRenderOp((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_EnableRenderOp_1(HANDLE _this) {
	try { ((FWSceneIf*) _this)->EnableRenderOp(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_CreateHapticPointer(HANDLE _this) {
	FWHapticPointerIf* _ptr = (FWHapticPointerIf*) NULL;
	try { _ptr = (FWHapticPointerIf*) ((FWSceneIf*) _this)->CreateHapticPointer(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_UpdateHapticPointers(HANDLE _this) {
	try { ((FWSceneIf*) _this)->UpdateHapticPointers(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_CreateSkeletonSensor(HANDLE _this, HANDLE desc) {
	FWSkeletonSensorIf* _ptr = (FWSkeletonSensorIf*) NULL;
	try { _ptr = (FWSkeletonSensorIf*) ((FWSceneIf*) _this)->CreateSkeletonSensor((const FWSkeletonSensorDesc&) *((FWSkeletonSensorDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_CreateSkeletonSensor_1(HANDLE _this) {
	FWSkeletonSensorIf* _ptr = (FWSkeletonSensorIf*) NULL;
	try { _ptr = (FWSkeletonSensorIf*) ((FWSceneIf*) _this)->CreateSkeletonSensor(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_UpdateSkeletonSensors(HANDLE _this) {
	try { ((FWSceneIf*) _this)->UpdateSkeletonSensors(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWSceneIf_NHapticPointers(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWSceneIf*) _this)->NHapticPointers(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_GetHapticPointer(HANDLE _this, int i) {
	FWHapticPointerIf* _ptr = (FWHapticPointerIf*) NULL;
	try { _ptr = (FWHapticPointerIf*) ((FWSceneIf*) _this)->GetHapticPointer(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_CreateOpHapticHandler(HANDLE _this) {
	FWOpHapticHandlerIf* _ptr = (FWOpHapticHandlerIf*) NULL;
	try { _ptr = (FWOpHapticHandlerIf*) ((FWSceneIf*) _this)->CreateOpHapticHandler(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSceneIf_GetOpHapticHandler(HANDLE _this) {
	FWOpHapticHandlerIf* _ptr = (FWOpHapticHandlerIf*) NULL;
	try { _ptr = (FWOpHapticHandlerIf*) ((FWSceneIf*) _this)->GetOpHapticHandler(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWSceneIf_UpdateOpHapticHandler(HANDLE _this) {
	try { ((FWSceneIf*) _this)->UpdateOpHapticHandler(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWSdkIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWSdkIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWSdkIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWSdkIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWSdkIf*) _this)) {
                (*((FWSdkIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWSdkIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWSdkIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWSdkIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_CreateSdk() {
	FWSdkIf* _ptr = (FWSdkIf*) NULL;
	try { _ptr = (FWSdkIf*) FWSdkIf::CreateSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_CreateScene(HANDLE _this, HANDLE phdesc, HANDLE grdesc) {
	FWSceneIf* _ptr = (FWSceneIf*) NULL;
	try { _ptr = (FWSceneIf*) ((FWSdkIf*) _this)->CreateScene((const PHSceneDesc&) *((PHSceneDesc*) phdesc), (const GRSceneDesc&) *((GRSceneDesc*) grdesc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_CreateScene_1(HANDLE _this, HANDLE phdesc) {
	FWSceneIf* _ptr = (FWSceneIf*) NULL;
	try { _ptr = (FWSceneIf*) ((FWSdkIf*) _this)->CreateScene((const PHSceneDesc&) *((PHSceneDesc*) phdesc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_CreateScene_2(HANDLE _this) {
	FWSceneIf* _ptr = (FWSceneIf*) NULL;
	try { _ptr = (FWSceneIf*) ((FWSdkIf*) _this)->CreateScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_FWSdkIf_NScene(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWSdkIf*) _this)->NScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_GetScene(HANDLE _this, int index) {
	FWSceneIf* _ptr = (FWSceneIf*) NULL;
	try { _ptr = (FWSceneIf*) ((FWSdkIf*) _this)->GetScene(index); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_GetScene_1(HANDLE _this) {
	FWSceneIf* _ptr = (FWSceneIf*) NULL;
	try { _ptr = (FWSceneIf*) ((FWSdkIf*) _this)->GetScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWSdkIf_MergeScene(HANDLE _this, HANDLE scene0, HANDLE scene1) {
	try { ((FWSdkIf*) _this)->MergeScene((FWSceneIf*) scene0, (FWSceneIf*) scene1); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_GetPHSdk(HANDLE _this) {
	PHSdkIf* _ptr = (PHSdkIf*) NULL;
	try { _ptr = (PHSdkIf*) ((FWSdkIf*) _this)->GetPHSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_GetGRSdk(HANDLE _this) {
	GRSdkIf* _ptr = (GRSdkIf*) NULL;
	try { _ptr = (GRSdkIf*) ((FWSdkIf*) _this)->GetGRSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_GetFISdk(HANDLE _this) {
	FISdkIf* _ptr = (FISdkIf*) NULL;
	try { _ptr = (FISdkIf*) ((FWSdkIf*) _this)->GetFISdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_GetHISdk(HANDLE _this) {
	HISdkIf* _ptr = (HISdkIf*) NULL;
	try { _ptr = (HISdkIf*) ((FWSdkIf*) _this)->GetHISdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_FWSdkIf_GetDebugMode(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((FWSdkIf*) _this)->GetDebugMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FWSdkIf_SetDebugMode(HANDLE _this, char debug) {
	bool arg01_ = (debug == 0) ? false : true;
	try { ((FWSdkIf*) _this)->SetDebugMode((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSdkIf_SetDebugMode_1(HANDLE _this) {
	try { ((FWSdkIf*) _this)->SetDebugMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSdkIf_Step(HANDLE _this) {
	try { ((FWSdkIf*) _this)->Step(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSdkIf_Draw(HANDLE _this) {
	try { ((FWSdkIf*) _this)->Draw(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSdkIf_GetRender(HANDLE _this) {
	GRRenderIf* _ptr = (GRRenderIf*) NULL;
	try { _ptr = (GRRenderIf*) ((FWSdkIf*) _this)->GetRender(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWSdkIf_RegisterSdk() {
	try { FWSdkIf::RegisterSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWSkeletonSensorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWSkeletonSensorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWSkeletonSensorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWSkeletonSensorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSkeletonSensorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWSkeletonSensorIf*) _this)) {
                (*((FWSkeletonSensorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWSkeletonSensorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSkeletonSensorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWSkeletonSensorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSkeletonSensorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWSkeletonSensorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWSkeletonSensorIf_Update(HANDLE _this) {
	try { ((FWSkeletonSensorIf*) _this)->Update(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWSkeletonSensorIf_SetRadius(HANDLE _this, HANDLE r) {
	Vec2d arg01_ = *((Vec2d*) r);
	try { ((FWSkeletonSensorIf*) _this)->SetRadius((Vec2d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSkeletonSensorIf_GetSensor(HANDLE _this) {
	HISkeletonSensorIf* _ptr = (HISkeletonSensorIf*) NULL;
	try { _ptr = (HISkeletonSensorIf*) ((FWSkeletonSensorIf*) _this)->GetSensor(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_FWSkeletonSensorIf_NSkeleton(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWSkeletonSensorIf*) _this)->NSkeleton(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWSkeletonSensorIf_GetSkeleton(HANDLE _this, int i) {
	PHSkeletonIf* _ptr = (PHSkeletonIf*) NULL;
	try { _ptr = (PHSkeletonIf*) ((FWSkeletonSensorIf*) _this)->GetSkeleton(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWWinBaseIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWWinBaseIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWWinBaseIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWWinBaseIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinBaseIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWWinBaseIf*) _this)) {
                (*((FWWinBaseIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinBaseIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWWinBaseIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinBaseIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWWinBaseIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_FWWinBaseIf_GetID(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWWinBaseIf*) _this)->GetID(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinBaseIf_GetPosition(HANDLE _this) {
	Vec2i* _ptr = (Vec2i*) NULL;
	try { _ptr = new Vec2i(); (*_ptr) = ((FWWinBaseIf*) _this)->GetPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseIf_SetPosition(HANDLE _this, int left, int top) {
	try { ((FWWinBaseIf*) _this)->SetPosition(left, top); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinBaseIf_GetSize(HANDLE _this) {
	Vec2i* _ptr = (Vec2i*) NULL;
	try { _ptr = new Vec2i(); (*_ptr) = ((FWWinBaseIf*) _this)->GetSize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseIf_SetSize(HANDLE _this, int width, int height) {
	try { ((FWWinBaseIf*) _this)->SetSize(width, height); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) BSTR __cdecl Spr_FWWinBaseIf_GetTitle(HANDLE _this) {
	string _val = "";
	try { _val = ((FWWinBaseIf*) _this)->GetTitle(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	BSTR wstr = NULL;
	const char* cstr = _val.c_str();
	int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, NULL, 0);
	if (lenW > 0) {
	    wstr = ::SysAllocStringLen(0, lenW);
	    ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, wstr, lenW);
	}
	return (BSTR) wstr;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseIf_FreeString_GetTitle(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWWinBaseIf_SetTitle(HANDLE _this, BSTR title) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) title, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) title, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	try { ((FWWinBaseIf*) _this)->SetTitle((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWControlIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWControlIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWControlIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWControlIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWControlIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWControlIf*) _this)) {
                (*((FWControlIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWControlIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWControlIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWControlIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWControlIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWControlIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) BSTR __cdecl Spr_FWControlIf_GetLabel(HANDLE _this) {
	string _val = "";
	try { _val = ((FWControlIf*) _this)->GetLabel(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	BSTR wstr = NULL;
	const char* cstr = _val.c_str();
	int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, NULL, 0);
	if (lenW > 0) {
	    wstr = ::SysAllocStringLen(0, lenW);
	    ::MultiByteToWideChar(CP_ACP, 0, cstr, -1, wstr, lenW);
	}
	return (BSTR) wstr;
    }
    __declspec(dllexport) void __cdecl Spr_FWControlIf_FreeString_GetLabel(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWControlIf_SetLabel(HANDLE _this, BSTR l) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) l, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) l, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	try { ((FWControlIf*) _this)->SetLabel((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWControlIf_SetAlign(HANDLE _this, int align) {
	try { ((FWControlIf*) _this)->SetAlign(align); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWControlIf_GetStyle(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWControlIf*) _this)->GetStyle(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWControlIf_SetStyle(HANDLE _this, int style) {
	try { ((FWControlIf*) _this)->SetStyle(style); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_FWControlIf_GetInt(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWControlIf*) _this)->GetInt(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWControlIf_SetInt(HANDLE _this, int val) {
	try { ((FWControlIf*) _this)->SetInt(val); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_FWControlIf_GetFloat(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((FWControlIf*) _this)->GetFloat(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWControlIf_SetFloat(HANDLE _this, float val) {
	try { ((FWControlIf*) _this)->SetFloat(val); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWPanelIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWPanelIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWPanelIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWPanelIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWPanelIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWPanelIf*) _this)) {
                (*((FWPanelIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWPanelIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWPanelIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWPanelIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWPanelIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWPanelIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWButtonIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWButtonIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWButtonIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWButtonIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWButtonIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWButtonIf*) _this)) {
                (*((FWButtonIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWButtonIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWButtonIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWButtonIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWButtonIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWButtonIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWButtonIf_SetChecked(HANDLE _this, char on) {
	bool arg01_ = (on == 0) ? false : true;
	try { ((FWButtonIf*) _this)->SetChecked((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWButtonIf_SetChecked_1(HANDLE _this) {
	try { ((FWButtonIf*) _this)->SetChecked(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWButtonIf_IsChecked(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((FWButtonIf*) _this)->IsChecked(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWStaticTextIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWStaticTextIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWStaticTextIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWStaticTextIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTextIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWStaticTextIf*) _this)) {
                (*((FWStaticTextIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTextIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTextIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWStaticTextIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTextIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWStaticTextIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWTextBoxIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWTextBoxIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWTextBoxIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWTextBoxIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWTextBoxIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWTextBoxIf*) _this)) {
                (*((FWTextBoxIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWTextBoxIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWTextBoxIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWTextBoxIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWTextBoxIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxIf_SetIntRange(HANDLE _this, int rmin, int rmax) {
	try { ((FWTextBoxIf*) _this)->SetIntRange(rmin, rmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxIf_GetIntRange(HANDLE _this, int& rmin, int& rmax) {
	try { ((FWTextBoxIf*) _this)->GetIntRange(rmin, rmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxIf_SetFloatRange(HANDLE _this, float rmin, float rmax) {
	try { ((FWTextBoxIf*) _this)->SetFloatRange(rmin, rmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxIf_GetFloatRange(HANDLE _this, float& rmin, float& rmax) {
	try { ((FWTextBoxIf*) _this)->GetFloatRange(rmin, rmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWTextBoxIf_GetString(HANDLE _this) {
	const char* _ptr = (const char*) NULL;
	try { _ptr = ((FWTextBoxIf*) _this)->GetString(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWTextBoxIf_SetString(HANDLE _this, HANDLE str) {
	try { ((FWTextBoxIf*) _this)->SetString((char*) str); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWListBoxIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWListBoxIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWListBoxIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWListBoxIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWListBoxIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWListBoxIf*) _this)) {
                (*((FWListBoxIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWListBoxIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWListBoxIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWListBoxIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWListBoxIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWListBoxIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWListBoxIf_AddItem(HANDLE _this, BSTR label) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	try { ((FWListBoxIf*) _this)->AddItem((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWRotationControlIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWRotationControlIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWRotationControlIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWRotationControlIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWRotationControlIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWRotationControlIf*) _this)) {
                (*((FWRotationControlIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWRotationControlIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWRotationControlIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWRotationControlIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWRotationControlIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWRotationControlIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWRotationControlIf_GetRotation(HANDLE _this) {
	Matrix3f* _ptr = (Matrix3f*) NULL;
	try { _ptr = new Matrix3f(); (*_ptr) = ((FWRotationControlIf*) _this)->GetRotation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWRotationControlIf_SetRotation(HANDLE _this, HANDLE rot) {
	try { ((FWRotationControlIf*) _this)->SetRotation((const Matrix3f&) *((Matrix3f*) rot)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_FWRotationControlIf_GetDamping(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((FWRotationControlIf*) _this)->GetDamping(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWRotationControlIf_SetDamping(HANDLE _this, float d) {
	try { ((FWRotationControlIf*) _this)->SetDamping(d); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWRotationControlIf_Reset(HANDLE _this) {
	try { ((FWRotationControlIf*) _this)->Reset(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWTranslationControlIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWTranslationControlIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWTranslationControlIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWTranslationControlIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWTranslationControlIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWTranslationControlIf*) _this)) {
                (*((FWTranslationControlIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWTranslationControlIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWTranslationControlIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWTranslationControlIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWTranslationControlIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWTranslationControlIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWTranslationControlIf_GetTranslation(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((FWTranslationControlIf*) _this)->GetTranslation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWTranslationControlIf_SetTranslation(HANDLE _this, HANDLE p) {
	Vec3f arg01_ = *((Vec3f*) p);
	try { ((FWTranslationControlIf*) _this)->SetTranslation((Vec3f) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_FWTranslationControlIf_GetSpeed(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((FWTranslationControlIf*) _this)->GetSpeed(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWTranslationControlIf_SetSpeed(HANDLE _this, float sp) {
	try { ((FWTranslationControlIf*) _this)->SetSpeed(sp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWDialogIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWDialogIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWDialogIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWDialogIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWDialogIf*) _this)) {
                (*((FWDialogIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWDialogIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWDialogIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWDialogIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreatePushButton(HANDLE _this, BSTR label, HANDLE parent) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWButtonIf* _ptr = (FWButtonIf*) NULL;
	try { _ptr = (FWButtonIf*) ((FWDialogIf*) _this)->CreatePushButton((string) arg01_, (FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreatePushButton_1(HANDLE _this, BSTR label) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWButtonIf* _ptr = (FWButtonIf*) NULL;
	try { _ptr = (FWButtonIf*) ((FWDialogIf*) _this)->CreatePushButton((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateCheckButton(HANDLE _this, BSTR label, char checked, HANDLE parent) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	bool arg02_ = (checked == 0) ? false : true;
	FWButtonIf* _ptr = (FWButtonIf*) NULL;
	try { _ptr = (FWButtonIf*) ((FWDialogIf*) _this)->CreateCheckButton((string) arg01_, (bool) arg02_, (FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateCheckButton_1(HANDLE _this, BSTR label, char checked) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	bool arg02_ = (checked == 0) ? false : true;
	FWButtonIf* _ptr = (FWButtonIf*) NULL;
	try { _ptr = (FWButtonIf*) ((FWDialogIf*) _this)->CreateCheckButton((string) arg01_, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateCheckButton_2(HANDLE _this, BSTR label) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWButtonIf* _ptr = (FWButtonIf*) NULL;
	try { _ptr = (FWButtonIf*) ((FWDialogIf*) _this)->CreateCheckButton((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateRadioButton(HANDLE _this, BSTR label, HANDLE parent) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWButtonIf* _ptr = (FWButtonIf*) NULL;
	try { _ptr = (FWButtonIf*) ((FWDialogIf*) _this)->CreateRadioButton((string) arg01_, (FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateRadioButton_1(HANDLE _this, BSTR label) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWButtonIf* _ptr = (FWButtonIf*) NULL;
	try { _ptr = (FWButtonIf*) ((FWDialogIf*) _this)->CreateRadioButton((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateStaticText(HANDLE _this, BSTR text, HANDLE parent) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) text, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) text, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWStaticTextIf* _ptr = (FWStaticTextIf*) NULL;
	try { _ptr = (FWStaticTextIf*) ((FWDialogIf*) _this)->CreateStaticText((string) arg01_, (FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateStaticText_1(HANDLE _this, BSTR text) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) text, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) text, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWStaticTextIf* _ptr = (FWStaticTextIf*) NULL;
	try { _ptr = (FWStaticTextIf*) ((FWDialogIf*) _this)->CreateStaticText((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateTextBox(HANDLE _this, BSTR label, BSTR text, int style, HANDLE parent) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	string arg02_("");
	int lenMB2 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) text, -1, NULL, 0, NULL, NULL);
	if (lenMB2 > 0) {
	    LPSTR addr2 = (LPSTR) ::SysAllocStringLen(0, lenMB2);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) text, -1, addr2, lenMB2, NULL, NULL);
	    arg02_ = (string) addr2;
	}
	FWTextBoxIf* _ptr = (FWTextBoxIf*) NULL;
	try { _ptr = (FWTextBoxIf*) ((FWDialogIf*) _this)->CreateTextBox((string) arg01_, (string) arg02_, style, (FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateTextBox_1(HANDLE _this, BSTR label, BSTR text, int style) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	string arg02_("");
	int lenMB2 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) text, -1, NULL, 0, NULL, NULL);
	if (lenMB2 > 0) {
	    LPSTR addr2 = (LPSTR) ::SysAllocStringLen(0, lenMB2);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) text, -1, addr2, lenMB2, NULL, NULL);
	    arg02_ = (string) addr2;
	}
	FWTextBoxIf* _ptr = (FWTextBoxIf*) NULL;
	try { _ptr = (FWTextBoxIf*) ((FWDialogIf*) _this)->CreateTextBox((string) arg01_, (string) arg02_, style); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateTextBox_2(HANDLE _this, BSTR label, BSTR text) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	string arg02_("");
	int lenMB2 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) text, -1, NULL, 0, NULL, NULL);
	if (lenMB2 > 0) {
	    LPSTR addr2 = (LPSTR) ::SysAllocStringLen(0, lenMB2);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) text, -1, addr2, lenMB2, NULL, NULL);
	    arg02_ = (string) addr2;
	}
	FWTextBoxIf* _ptr = (FWTextBoxIf*) NULL;
	try { _ptr = (FWTextBoxIf*) ((FWDialogIf*) _this)->CreateTextBox((string) arg01_, (string) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateTextBox_3(HANDLE _this, BSTR label) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWTextBoxIf* _ptr = (FWTextBoxIf*) NULL;
	try { _ptr = (FWTextBoxIf*) ((FWDialogIf*) _this)->CreateTextBox((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreatePanel(HANDLE _this, BSTR label, int style, HANDLE parent) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWPanelIf* _ptr = (FWPanelIf*) NULL;
	try { _ptr = (FWPanelIf*) ((FWDialogIf*) _this)->CreatePanel((string) arg01_, style, (FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreatePanel_1(HANDLE _this, BSTR label, int style) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWPanelIf* _ptr = (FWPanelIf*) NULL;
	try { _ptr = (FWPanelIf*) ((FWDialogIf*) _this)->CreatePanel((string) arg01_, style); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreatePanel_2(HANDLE _this, BSTR label) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWPanelIf* _ptr = (FWPanelIf*) NULL;
	try { _ptr = (FWPanelIf*) ((FWDialogIf*) _this)->CreatePanel((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateRadioGroup(HANDLE _this, HANDLE parent) {
	FWPanelIf* _ptr = (FWPanelIf*) NULL;
	try { _ptr = (FWPanelIf*) ((FWDialogIf*) _this)->CreateRadioGroup((FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateRadioGroup_1(HANDLE _this) {
	FWPanelIf* _ptr = (FWPanelIf*) NULL;
	try { _ptr = (FWPanelIf*) ((FWDialogIf*) _this)->CreateRadioGroup(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateRotationControl(HANDLE _this, BSTR label, HANDLE parent) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWRotationControlIf* _ptr = (FWRotationControlIf*) NULL;
	try { _ptr = (FWRotationControlIf*) ((FWDialogIf*) _this)->CreateRotationControl((string) arg01_, (FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateRotationControl_1(HANDLE _this, BSTR label) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWRotationControlIf* _ptr = (FWRotationControlIf*) NULL;
	try { _ptr = (FWRotationControlIf*) ((FWDialogIf*) _this)->CreateRotationControl((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateTranslationControl(HANDLE _this, BSTR label, int style, HANDLE parent) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWTranslationControlIf* _ptr = (FWTranslationControlIf*) NULL;
	try { _ptr = (FWTranslationControlIf*) ((FWDialogIf*) _this)->CreateTranslationControl((string) arg01_, style, (FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateTranslationControl_1(HANDLE _this, BSTR label, int style) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWTranslationControlIf* _ptr = (FWTranslationControlIf*) NULL;
	try { _ptr = (FWTranslationControlIf*) ((FWDialogIf*) _this)->CreateTranslationControl((string) arg01_, style); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateTranslationControl_2(HANDLE _this, BSTR label) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWTranslationControlIf* _ptr = (FWTranslationControlIf*) NULL;
	try { _ptr = (FWTranslationControlIf*) ((FWDialogIf*) _this)->CreateTranslationControl((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateListBox(HANDLE _this, BSTR label, HANDLE parent) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWListBoxIf* _ptr = (FWListBoxIf*) NULL;
	try { _ptr = (FWListBoxIf*) ((FWDialogIf*) _this)->CreateListBox((string) arg01_, (FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWDialogIf_CreateListBox_1(HANDLE _this, BSTR label) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FWListBoxIf* _ptr = (FWListBoxIf*) NULL;
	try { _ptr = (FWListBoxIf*) ((FWDialogIf*) _this)->CreateListBox((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWDialogIf_CreateColumn(HANDLE _this, char sep, HANDLE parent) {
	bool arg01_ = (sep == 0) ? false : true;
	try { ((FWDialogIf*) _this)->CreateColumn((bool) arg01_, (FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWDialogIf_CreateColumn_1(HANDLE _this, char sep) {
	bool arg01_ = (sep == 0) ? false : true;
	try { ((FWDialogIf*) _this)->CreateColumn((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWDialogIf_CreateColumn_2(HANDLE _this) {
	try { ((FWDialogIf*) _this)->CreateColumn(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWDialogIf_CreateSeparator(HANDLE _this, HANDLE parent) {
	try { ((FWDialogIf*) _this)->CreateSeparator((FWPanelIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWDialogIf_CreateSeparator_1(HANDLE _this) {
	try { ((FWDialogIf*) _this)->CreateSeparator(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWWinIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWWinIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWWinIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWWinIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWWinIf*) _this)) {
                (*((FWWinIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWWinIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWWinIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinIf_SetFullScreen(HANDLE _this) {
	try { ((FWWinIf*) _this)->SetFullScreen(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWWinIf_GetFullScreen(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((FWWinIf*) _this)->GetFullScreen(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinIf_GetRender(HANDLE _this) {
	GRRenderIf* _ptr = (GRRenderIf*) NULL;
	try { _ptr = (GRRenderIf*) ((FWWinIf*) _this)->GetRender(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinIf_SetRender(HANDLE _this, HANDLE data) {
	try { ((FWWinIf*) _this)->SetRender((GRRenderIf*) data); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinIf_GetScene(HANDLE _this) {
	FWSceneIf* _ptr = (FWSceneIf*) NULL;
	try { _ptr = (FWSceneIf*) ((FWWinIf*) _this)->GetScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinIf_SetScene(HANDLE _this, HANDLE s) {
	try { ((FWWinIf*) _this)->SetScene((FWSceneIf*) s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinIf_GetKeyMouse(HANDLE _this) {
	DVKeyMouseIf* _ptr = (DVKeyMouseIf*) NULL;
	try { _ptr = (DVKeyMouseIf*) ((FWWinIf*) _this)->GetKeyMouse(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinIf_SetKeyMouse(HANDLE _this, HANDLE dv) {
	try { ((FWWinIf*) _this)->SetKeyMouse((DVKeyMouseIf*) dv); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinIf_GetJoyStick(HANDLE _this) {
	DVJoyStickIf* _ptr = (DVJoyStickIf*) NULL;
	try { _ptr = (DVJoyStickIf*) ((FWWinIf*) _this)->GetJoyStick(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinIf_SetJoyStick(HANDLE _this, HANDLE dv) {
	try { ((FWWinIf*) _this)->SetJoyStick((DVJoyStickIf*) dv); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinIf_GetTrackball(HANDLE _this) {
	HITrackballIf* _ptr = (HITrackballIf*) NULL;
	try { _ptr = (HITrackballIf*) ((FWWinIf*) _this)->GetTrackball(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinIf_SetTrackball(HANDLE _this, HANDLE dv) {
	try { ((FWWinIf*) _this)->SetTrackball((HITrackballIf*) dv); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWWinIf_SetDebugMode(HANDLE _this, char ph_or_gr) {
	bool arg01_ = (ph_or_gr == 0) ? false : true;
	try { ((FWWinIf*) _this)->SetDebugMode((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWWinIf_GetDebugMode(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((FWWinIf*) _this)->GetDebugMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinIf_Display(HANDLE _this) {
	try { ((FWWinIf*) _this)->Display(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinIf_CreateDialog(HANDLE _this, HANDLE desc) {
	FWDialogIf* _ptr = (FWDialogIf*) NULL;
	try { _ptr = (FWDialogIf*) ((FWWinIf*) _this)->CreateDialog((const FWDialogDesc&) *((FWDialogDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWWinIf_CreateDialog_1(HANDLE _this) {
	FWDialogIf* _ptr = (FWDialogIf*) NULL;
	try { _ptr = (FWDialogIf*) ((FWWinIf*) _this)->CreateDialog(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWWinIf_CalcViewport(HANDLE _this, int& left, int& top, int& width, int& height) {
	try { ((FWWinIf*) _this)->CalcViewport(left, top, width, height); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWOptimizerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWOptimizerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWOptimizerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWOptimizerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOptimizerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWOptimizerIf*) _this)) {
                (*((FWOptimizerIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOptimizerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWOptimizerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOptimizerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWOptimizerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerIf_CopyScene(HANDLE _this, HANDLE phSceneInput) {
	try { ((FWOptimizerIf*) _this)->CopyScene((PHSceneIf*) phSceneInput); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOptimizerIf_GetScene(HANDLE _this) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((FWOptimizerIf*) _this)->GetScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerIf_Init(HANDLE _this, int dimension) {
	try { ((FWOptimizerIf*) _this)->Init(dimension); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerIf_Start(HANDLE _this) {
	try { ((FWOptimizerIf*) _this)->Start(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerIf_Abort(HANDLE _this) {
	try { ((FWOptimizerIf*) _this)->Abort(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWOptimizerIf_IsRunning(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((FWOptimizerIf*) _this)->IsRunning(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerIf_Optimize(HANDLE _this) {
	try { ((FWOptimizerIf*) _this)->Optimize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerIf_Iterate(HANDLE _this) {
	try { ((FWOptimizerIf*) _this)->Iterate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWOptimizerIf_ApplyPop(HANDLE _this, HANDLE phScene, HANDLE x, int n) {
	double _val = (double) NULL;
	try { _val = ((FWOptimizerIf*) _this)->ApplyPop((PHSceneIf*) phScene, (const double*) x, n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_FWOptimizerIf_Objective(HANDLE _this, HANDLE x, int n) {
	double _val = (double) NULL;
	try { _val = ((FWOptimizerIf*) _this)->Objective((const double*) x, n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_FWOptimizerIf_NResults(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWOptimizerIf*) _this)->NResults(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_FWOptimizerIf_GetResult(HANDLE _this, int i) {
	double _val = (double) NULL;
	try { _val = ((FWOptimizerIf*) _this)->GetResult(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOptimizerIf_GetResults(HANDLE _this) {
	double* _ptr = (double*) NULL;
	try { _ptr = ((FWOptimizerIf*) _this)->GetResults(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOptimizerIf_GetProvisionalResults(HANDLE _this) {
	double* _ptr = (double*) NULL;
	try { _ptr = ((FWOptimizerIf*) _this)->GetProvisionalResults(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWOptimizerIf_SetESParameters(HANDLE _this, double xs, double st, double tf, double la, double mi) {
	try { ((FWOptimizerIf*) _this)->SetESParameters(xs, st, tf, la, mi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWStaticTorqueOptimizerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWStaticTorqueOptimizerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWStaticTorqueOptimizerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWStaticTorqueOptimizerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTorqueOptimizerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWStaticTorqueOptimizerIf*) _this)) {
                (*((FWStaticTorqueOptimizerIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTorqueOptimizerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWStaticTorqueOptimizerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTorqueOptimizerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWStaticTorqueOptimizerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_Init(HANDLE _this) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_Iterate(HANDLE _this) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->Iterate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_ApplyResult(HANDLE _this, HANDLE phScene) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->ApplyResult((PHSceneIf*) phScene); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWStaticTorqueOptimizerIf_ApplyPop(HANDLE _this, HANDLE phScene, HANDLE x, int n) {
	double _val = (double) NULL;
	try { _val = ((FWStaticTorqueOptimizerIf*) _this)->ApplyPop((PHSceneIf*) phScene, (const double*) x, n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_FWStaticTorqueOptimizerIf_Objective(HANDLE _this, HANDLE x, int n) {
	double _val = (double) NULL;
	try { _val = ((FWStaticTorqueOptimizerIf*) _this)->Objective((const double*) x, n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_SetScene(HANDLE _this, HANDLE phSceneInput) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->SetScene((PHSceneIf*) phSceneInput); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_Optimize(HANDLE _this) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->Optimize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWStaticTorqueOptimizerIf_TestForTermination(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((FWStaticTorqueOptimizerIf*) _this)->TestForTermination(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_TakeFinalValue(HANDLE _this) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->TakeFinalValue(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_SetErrorWeight(HANDLE _this, double v) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->SetErrorWeight(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWStaticTorqueOptimizerIf_GetErrorWeight(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((FWStaticTorqueOptimizerIf*) _this)->GetErrorWeight(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_SetStabilityWeight(HANDLE _this, double v) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->SetStabilityWeight(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWStaticTorqueOptimizerIf_GetStabilityWeight(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((FWStaticTorqueOptimizerIf*) _this)->GetStabilityWeight(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_SetTorqueWeight(HANDLE _this, double v) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->SetTorqueWeight(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWStaticTorqueOptimizerIf_GetTorqueWeight(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((FWStaticTorqueOptimizerIf*) _this)->GetTorqueWeight(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_SetConstWeight(HANDLE _this, double v) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->SetConstWeight(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWStaticTorqueOptimizerIf_GetConstWeight(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((FWStaticTorqueOptimizerIf*) _this)->GetConstWeight(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_SetGravcenterWeight(HANDLE _this, double v) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->SetGravcenterWeight(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWStaticTorqueOptimizerIf_GetGravcenterWeight(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((FWStaticTorqueOptimizerIf*) _this)->GetGravcenterWeight(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_SetDifferentialWeight(HANDLE _this, double v) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->SetDifferentialWeight(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_FWStaticTorqueOptimizerIf_GetDifferentialWeight(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((FWStaticTorqueOptimizerIf*) _this)->GetDifferentialWeight(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_AddPositionConst(HANDLE _this, HANDLE f) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->AddPositionConst((FWGroundConstraint*) f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTorqueOptimizerIf_GetGroundConst(HANDLE _this, int n) {
	FWGroundConstraint* _ptr = (FWGroundConstraint*) NULL;
	try { _ptr = new FWGroundConstraint(); (*_ptr) = ((FWStaticTorqueOptimizerIf*) _this)->GetGroundConst(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_ClearGroundConst(HANDLE _this) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->ClearGroundConst(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_AddPositionConst_1(HANDLE _this, HANDLE f) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->AddPositionConst((FWUngroundedConstraint*) f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTorqueOptimizerIf_GetUngroundConst(HANDLE _this, int n) {
	FWUngroundedConstraint* _ptr = (FWUngroundedConstraint*) NULL;
	try { _ptr = new FWUngroundedConstraint(); (*_ptr) = ((FWStaticTorqueOptimizerIf*) _this)->GetUngroundConst(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_ClearUngroundedConst(HANDLE _this) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->ClearUngroundedConst(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_SetJointWeight(HANDLE _this, HANDLE jo, double w) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->SetJointWeight((PHJointIf*) jo, w); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FWStaticTorqueOptimizerIf_SetESParameters(HANDLE _this, double xs, double st, double tf, double la, double mi) {
	try { ((FWStaticTorqueOptimizerIf*) _this)->SetESParameters(xs, st, tf, la, mi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTorqueOptimizerIf_GetObjectiveValues(HANDLE _this) {
	FWObjectiveValues* _ptr = (FWObjectiveValues*) NULL;
	try { _ptr = new FWObjectiveValues(); (*_ptr) = ((FWStaticTorqueOptimizerIf*) _this)->GetObjectiveValues(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTorqueOptimizerIf_GetCenterOfGravity(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((FWStaticTorqueOptimizerIf*) _this)->GetCenterOfGravity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_FWStaticTorqueOptimizerIf_NSupportPolygonVertices(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((FWStaticTorqueOptimizerIf*) _this)->NSupportPolygonVertices(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWStaticTorqueOptimizerIf_GetSupportPolygonVerticesN(HANDLE _this, int n) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((FWStaticTorqueOptimizerIf*) _this)->GetSupportPolygonVerticesN(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FWOpHapticHandlerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FWOpHapticHandlerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FWOpHapticHandlerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FWOpHapticHandlerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOpHapticHandlerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FWOpHapticHandlerIf*) _this)) {
                (*((FWOpHapticHandlerIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, NULL, 0);
            if (lenW >= 0) {
                result = ::SysAllocStringLen(0, lenW);
                ::MultiByteToWideChar(CP_ACP, 0, cstr, lenA, result, lenW);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return result;
    }
    __declspec(dllexport) void __cdecl Spr_FWOpHapticHandlerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOpHapticHandlerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FWOpHapticHandlerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOpHapticHandlerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FWOpHapticHandlerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWOpHapticHandlerIf_SetHapticflag(HANDLE _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((FWOpHapticHandlerIf*) _this)->SetHapticflag((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_FWOpHapticHandlerIf_IsHapticEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((FWOpHapticHandlerIf*) _this)->IsHapticEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_FWOpHapticHandlerIf_doCalibration(HANDLE _this, float dt) {
	bool _val = (bool) NULL;
	try { _val = ((FWOpHapticHandlerIf*) _this)->doCalibration(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FWOpHapticHandlerIf_SetHumanInterface(HANDLE _this, HANDLE hi) {
	try { ((FWOpHapticHandlerIf*) _this)->SetHumanInterface((HIBaseIf*) hi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FWOpHapticHandlerIf_GetHumanInterface(HANDLE _this) {
	HIBaseIf* _ptr = (HIBaseIf*) NULL;
	try { _ptr = (HIBaseIf*) ((FWOpHapticHandlerIf*) _this)->GetHumanInterface(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FWOpHapticHandlerIf_SetHapticTimeInterval(HANDLE _this, float dt) {
	try { ((FWOpHapticHandlerIf*) _this)->SetHapticTimeInterval(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_FWOpHapticHandlerIf_GetHapticTimeInterval(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((FWOpHapticHandlerIf*) _this)->GetHapticTimeInterval(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
}

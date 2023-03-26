#include <Springhead.h>
#include <Windows.h>
#include <sstream>
#include <SprHumanInterface.h>
#include <Framework/SprFWApp.h>
#include <Physics/SprPHJointMotor.h>
#include <Framework/SprFWEditor.h>
#include <Framework/SprFWOpObj.h>
#include <Framework/FWScene.h>
#include <../src/SprCSharp/SprExport/CSUtility.h>
using namespace Spr;
using namespace std;
extern "C" {
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIHapticDummyDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIHapticDummyDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIHapticDummyDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIHapticDummyDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIHapticDummyDesc_addr_pose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((HIHapticDummyDesc*)_this)->pose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HIHapticDummyDesc_set_pose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((HIHapticDummyDesc*)_this)->pose) != _ptr) {
                ((HIHapticDummyDesc*)_this)->pose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVPortEnum() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVPortEnum(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVPortEnum(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVPortEnum*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DRUsb20SimpleDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DRUsb20SimpleDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DRUsb20SimpleDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (DRUsb20SimpleDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_DRUsb20SimpleDesc_get_channel(HANDLE _this) {
        int _val = 0;
        try { _val = (*((DRUsb20SimpleDesc*)_this)).channel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_DRUsb20SimpleDesc_set_channel(HANDLE _this, int value) {
        try { (*((DRUsb20SimpleDesc*)_this)).channel = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DRUsb20Sh4Desc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DRUsb20Sh4Desc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DRUsb20Sh4Desc(HANDLE v) {
        if (v == NULL) return;
        try { delete (DRUsb20Sh4Desc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DRCyUsb20Sh4Desc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DRCyUsb20Sh4Desc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DRCyUsb20Sh4Desc(HANDLE v) {
        if (v == NULL) return;
        try { delete (DRCyUsb20Sh4Desc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVJoyStickMask() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVJoyStickMask(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVJoyStickMask(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVJoyStickMask*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVJoyStickCallback() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVJoyStickCallback(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVJoyStickCallback(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVJoyStickCallback*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_DVJoyStickCallback_OnUpdate(HANDLE _this, int buttonMask, int x, int y, int z) {
	bool _val = (bool) NULL;
	try { _val = ((DVJoyStickCallback*) _this)->OnUpdate(buttonMask, x, y, z); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVButtonMask() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVButtonMask(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVButtonMask(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVButtonMask*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVButtonSt() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVButtonSt(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVButtonSt(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVButtonSt*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVKeySt() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVKeySt(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVKeySt(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVKeySt*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVKeyCode() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVKeyCode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVKeyCode(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVKeyCode*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVKeyMouseCallback() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVKeyMouseCallback(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVKeyMouseCallback(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVKeyMouseCallback*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_DVKeyMouseCallback_OnMouse(HANDLE _this, int button, int state, int x, int y) {
	bool _val = (bool) NULL;
	try { _val = ((DVKeyMouseCallback*) _this)->OnMouse(button, state, x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_DVKeyMouseCallback_OnDoubleClick(HANDLE _this, int button, int x, int y) {
	bool _val = (bool) NULL;
	try { _val = ((DVKeyMouseCallback*) _this)->OnDoubleClick(button, x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_DVKeyMouseCallback_OnMouseMove(HANDLE _this, int button, int x, int y, int zdelta) {
	bool _val = (bool) NULL;
	try { _val = ((DVKeyMouseCallback*) _this)->OnMouseMove(button, x, y, zdelta); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_DVKeyMouseCallback_OnKey(HANDLE _this, int state, int key, int x, int y) {
	bool _val = (bool) NULL;
	try { _val = ((DVKeyMouseCallback*) _this)->OnKey(state, key, x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DRKeyMouseWin32Desc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DRKeyMouseWin32Desc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DRKeyMouseWin32Desc(HANDLE v) {
        if (v == NULL) return;
        try { delete (DRKeyMouseWin32Desc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HILeapDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HILeapDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HILeapDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HILeapDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HILeapUDPDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HILeapUDPDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HILeapUDPDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HILeapUDPDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HINovintFalconDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HINovintFalconDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HINovintFalconDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HINovintFalconDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISdkDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISdkDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISdkDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISdkDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpaceNavigatorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpaceNavigatorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpaceNavigatorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpaceNavigatorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpaceNavigatorDesc_get_hWnd(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (*((HISpaceNavigatorDesc*)_this)).hWnd; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HISpaceNavigatorDesc_set_hWnd(HANDLE _this, HANDLE value) {
        try { (*((HISpaceNavigatorDesc*)_this)).hWnd = (*((void**)value)); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HISpaceNavigatorDesc_get_maxVelocity(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HISpaceNavigatorDesc*)_this)).maxVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpaceNavigatorDesc_set_maxVelocity(HANDLE _this, float value) {
        try { (*((HISpaceNavigatorDesc*)_this)).maxVelocity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HISpaceNavigatorDesc_get_maxAngularVelocity(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HISpaceNavigatorDesc*)_this)).maxAngularVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpaceNavigatorDesc_set_maxAngularVelocity(HANDLE _this, float value) {
        try { (*((HISpaceNavigatorDesc*)_this)).maxAngularVelocity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidarMotorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidarMotorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpidarMotorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpidarMotorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_HISpidarMotorDesc_get_ch(HANDLE _this) {
        int _val = 0;
        try { _val = (*((HISpidarMotorDesc*)_this)).ch; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorDesc_set_ch(HANDLE _this, int value) {
        try { (*((HISpidarMotorDesc*)_this)).ch = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HISpidarMotorDesc_get_maxForce(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HISpidarMotorDesc*)_this)).maxForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorDesc_set_maxForce(HANDLE _this, float value) {
        try { (*((HISpidarMotorDesc*)_this)).maxForce = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HISpidarMotorDesc_get_minForce(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HISpidarMotorDesc*)_this)).minForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorDesc_set_minForce(HANDLE _this, float value) {
        try { (*((HISpidarMotorDesc*)_this)).minForce = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HISpidarMotorDesc_get_voltPerNewton(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HISpidarMotorDesc*)_this)).voltPerNewton; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorDesc_set_voltPerNewton(HANDLE _this, float value) {
        try { (*((HISpidarMotorDesc*)_this)).voltPerNewton = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HISpidarMotorDesc_get_currentPerVolt(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HISpidarMotorDesc*)_this)).currentPerVolt; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorDesc_set_currentPerVolt(HANDLE _this, float value) {
        try { (*((HISpidarMotorDesc*)_this)).currentPerVolt = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HISpidarMotorDesc_get_lengthPerPulse(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HISpidarMotorDesc*)_this)).lengthPerPulse; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorDesc_set_lengthPerPulse(HANDLE _this, float value) {
        try { (*((HISpidarMotorDesc*)_this)).lengthPerPulse = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarMotorDesc_addr_pos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((HISpidarMotorDesc*)_this)->pos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorDesc_set_pos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((HISpidarMotorDesc*)_this)->pos) != _ptr) {
                ((HISpidarMotorDesc*)_this)->pos = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarMotorDesc_addr_jointPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((HISpidarMotorDesc*)_this)->jointPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorDesc_set_jointPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((HISpidarMotorDesc*)_this)->jointPos) != _ptr) {
                ((HISpidarMotorDesc*)_this)->jointPos = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidarDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidarDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpidarDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpidarDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarDesc_get_type(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((HISpidarDesc*) _this)->type;
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
    __declspec(dllexport) void __cdecl Spr_HISpidarDesc_set_type(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((HISpidarDesc*) _this)->type = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarDesc_FreeString_type(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarDesc_vector_get_motors(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<HISpidarMotorDesc>*) &((HISpidarDesc*)_this)->motors; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarDesc_vector_set_motors(HANDLE _this, HANDLE value) {
        try { ((HISpidarDesc*)_this)->motors = *((std::vector<HISpidarMotorDesc>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_HISpidarDesc_get_nButton(HANDLE _this) {
        int _val = 0;
        try { _val = (*((HISpidarDesc*)_this)).nButton; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarDesc_set_nButton(HANDLE _this, int value) {
        try { (*((HISpidarDesc*)_this)).nButton = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidar4Desc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidar4Desc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidar4Desc_2(char* type) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidar4Desc(type); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidar4Desc_3(char* type, HANDLE portNum) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidar4Desc(type, *((Vec4i*) portNum)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidar4Desc_4(int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp, float minF, float maxF) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidar4Desc(nMotor, *((Vec3f**) motorPos), *((Vec3f**) knotPos), vpn, lpp, minF, maxF); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidar4Desc_5(int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp, float minF) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidar4Desc(nMotor, *((Vec3f**) motorPos), *((Vec3f**) knotPos), vpn, lpp, minF); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidar4Desc_6(int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidar4Desc(nMotor, *((Vec3f**) motorPos), *((Vec3f**) knotPos), vpn, lpp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpidar4Desc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpidar4Desc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidar4Desc_Init(HANDLE _this, int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp, float minF, float maxF) {
	try { ((HISpidar4Desc*) _this)->Init(nMotor, (Vec3f*) motorPos, (Vec3f*) knotPos, vpn, lpp, minF, maxF); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidar4Desc_Init_1(HANDLE _this, int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp, float minF) {
	try { ((HISpidar4Desc*) _this)->Init(nMotor, (Vec3f*) motorPos, (Vec3f*) knotPos, vpn, lpp, minF); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidar4Desc_Init_2(HANDLE _this, int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp) {
	try { ((HISpidar4Desc*) _this)->Init(nMotor, (Vec3f*) motorPos, (Vec3f*) knotPos, vpn, lpp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidar4Desc_Init_3(HANDLE _this, HANDLE type) {
	try { ((HISpidar4Desc*) _this)->Init((char*) type); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidar4Desc_InitSpidarG(HANDLE _this, HANDLE type) {
	try { ((HISpidar4Desc*) _this)->InitSpidarG((char*) type); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidar4Desc_InitSpidarBig(HANDLE _this, HANDLE type) {
	try { ((HISpidar4Desc*) _this)->InitSpidarBig((char*) type); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidar4DDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidar4DDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpidar4DDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpidar4DDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidarGDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidarGDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidarGDesc_2(const char* type) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidarGDesc(type); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidarGDesc_3(int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp, float minF, float maxF) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidarGDesc(nMotor, *((Vec3f**) motorPos), *((Vec3f**) knotPos), vpn, lpp, minF, maxF); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidarGDesc_4(int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp, float minF) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidarGDesc(nMotor, *((Vec3f**) motorPos), *((Vec3f**) knotPos), vpn, lpp, minF); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidarGDesc_5(int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidarGDesc(nMotor, *((Vec3f**) motorPos), *((Vec3f**) knotPos), vpn, lpp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpidarGDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpidarGDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarGDesc_Init(HANDLE _this, int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp, float minF, float maxF) {
	try { ((HISpidarGDesc*) _this)->Init(nMotor, (Vec3f*) motorPos, (Vec3f*) knotPos, vpn, lpp, minF, maxF); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarGDesc_Init_1(HANDLE _this, int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp, float minF) {
	try { ((HISpidarGDesc*) _this)->Init(nMotor, (Vec3f*) motorPos, (Vec3f*) knotPos, vpn, lpp, minF); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarGDesc_Init_2(HANDLE _this, int nMotor, HANDLE motorPos, HANDLE knotPos, float vpn, float lpp) {
	try { ((HISpidarGDesc*) _this)->Init(nMotor, (Vec3f*) motorPos, (Vec3f*) knotPos, vpn, lpp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarGDesc_Init_3(HANDLE _this, HANDLE type) {
	try { ((HISpidarGDesc*) _this)->Init((const char*) type); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HITrackballDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HITrackballDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HITrackballDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HITrackballDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_HITrackballDesc_get_trackball(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((HITrackballDesc*)_this)).trackball; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_trackball(HANDLE _this, char value) {
        try { (*((HITrackballDesc*)_this)).trackball = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HITrackballDesc_addr_target(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((HITrackballDesc*)_this)->target; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_target(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((HITrackballDesc*)_this)->target) != _ptr) {
                ((HITrackballDesc*)_this)->target = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HITrackballDesc_get_longitude(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HITrackballDesc*)_this)).longitude; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_longitude(HANDLE _this, float value) {
        try { (*((HITrackballDesc*)_this)).longitude = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HITrackballDesc_get_latitude(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HITrackballDesc*)_this)).latitude; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_latitude(HANDLE _this, float value) {
        try { (*((HITrackballDesc*)_this)).latitude = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HITrackballDesc_addr_lonRange(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((HITrackballDesc*)_this)->lonRange; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_lonRange(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((HITrackballDesc*)_this)->lonRange) != _ptr) {
                ((HITrackballDesc*)_this)->lonRange = *((Vec2f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HITrackballDesc_addr_latRange(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((HITrackballDesc*)_this)->latRange; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_latRange(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((HITrackballDesc*)_this)->latRange) != _ptr) {
                ((HITrackballDesc*)_this)->latRange = *((Vec2f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HITrackballDesc_get_distance(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HITrackballDesc*)_this)).distance; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_distance(HANDLE _this, float value) {
        try { (*((HITrackballDesc*)_this)).distance = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HITrackballDesc_addr_distRange(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((HITrackballDesc*)_this)->distRange; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_distRange(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((HITrackballDesc*)_this)->distRange) != _ptr) {
                ((HITrackballDesc*)_this)->distRange = *((Vec2f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HITrackballDesc_get_rotGain(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HITrackballDesc*)_this)).rotGain; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_rotGain(HANDLE _this, float value) {
        try { (*((HITrackballDesc*)_this)).rotGain = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HITrackballDesc_get_zoomGain(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HITrackballDesc*)_this)).zoomGain; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_zoomGain(HANDLE _this, float value) {
        try { (*((HITrackballDesc*)_this)).zoomGain = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HITrackballDesc_get_trnGain(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HITrackballDesc*)_this)).trnGain; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_trnGain(HANDLE _this, float value) {
        try { (*((HITrackballDesc*)_this)).trnGain = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_HITrackballDesc_get_rotMask(HANDLE _this) {
        int _val = 0;
        try { _val = (*((HITrackballDesc*)_this)).rotMask; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_rotMask(HANDLE _this, int value) {
        try { (*((HITrackballDesc*)_this)).rotMask = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_HITrackballDesc_get_zoomMask(HANDLE _this) {
        int _val = 0;
        try { _val = (*((HITrackballDesc*)_this)).zoomMask; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_zoomMask(HANDLE _this, int value) {
        try { (*((HITrackballDesc*)_this)).zoomMask = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_HITrackballDesc_get_trnMask(HANDLE _this) {
        int _val = 0;
        try { _val = (*((HITrackballDesc*)_this)).trnMask; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballDesc_set_trnMask(HANDLE _this, int value) {
        try { (*((HITrackballDesc*)_this)).trnMask = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HITrackballCallback() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HITrackballCallback(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HITrackballCallback(HANDLE v) {
        if (v == NULL) return;
        try { delete (HITrackballCallback*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballCallback_OnUpdatePose(HANDLE _this, HANDLE trackball) {
	try { ((HITrackballCallback*) _this)->OnUpdatePose((HITrackballIf*) trackball); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIXbox360ControllerDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIXbox360ControllerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIXbox360ControllerDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIXbox360ControllerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HIXbox360ControllerDesc_get_maxVelocity(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HIXbox360ControllerDesc*)_this)).maxVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HIXbox360ControllerDesc_set_maxVelocity(HANDLE _this, float value) {
        try { (*((HIXbox360ControllerDesc*)_this)).maxVelocity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HIXbox360ControllerDesc_get_maxAngularVelocity(HANDLE _this) {
        float _val = 0;
        try { _val = (*((HIXbox360ControllerDesc*)_this)).maxAngularVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HIXbox360ControllerDesc_set_maxAngularVelocity(HANDLE _this, float value) {
        try { (*((HIXbox360ControllerDesc*)_this)).maxAngularVelocity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIBaseIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIBaseIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIBaseIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIBaseIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIBaseIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HIBaseIf*) _this)) {
                (*((HIBaseIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HIBaseIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIBaseIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HIBaseIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIBaseIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HIBaseIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_HIBaseIf_BeforeCalibration(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIBaseIf*) _this)->BeforeCalibration(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIBaseIf_Calibration(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIBaseIf*) _this)->Calibration(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIBaseIf_AfterCalibration(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIBaseIf*) _this)->AfterCalibration(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_HIBaseIf_AddDeviceDependency(HANDLE _this, HANDLE rd) {
	try { ((HIBaseIf*) _this)->AddDeviceDependency((HIRealDeviceIf*) rd); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HIBaseIf_ClearDeviceDependency(HANDLE _this) {
	try { ((HIBaseIf*) _this)->ClearDeviceDependency(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HIBaseIf_Update(HANDLE _this, float dt) {
	try { ((HIBaseIf*) _this)->Update(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_HIBaseIf_IsGood(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIBaseIf*) _this)->IsGood(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIBaseIf_Init(HANDLE _this, HANDLE desc) {
	bool _val = (bool) NULL;
	try { _val = ((HIBaseIf*) _this)->Init(desc); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIPoseIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIPoseIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIPoseIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIPoseIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIPoseIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HIPoseIf*) _this)) {
                (*((HIPoseIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HIPoseIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIPoseIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HIPoseIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIPoseIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HIPoseIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIPoseIf_GetPosition(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((HIPoseIf*) _this)->GetPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIPoseIf_GetOrientation(HANDLE _this) {
	Quaternionf* _ptr = (Quaternionf*) NULL;
	try { _ptr = new Quaternionf(); (*_ptr) = ((HIPoseIf*) _this)->GetOrientation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIPoseIf_GetPose(HANDLE _this) {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = ((HIPoseIf*) _this)->GetPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIPoseIf_GetAffine(HANDLE _this) {
	Affinef* _ptr = (Affinef*) NULL;
	try { _ptr = new Affinef(); (*_ptr) = ((HIPoseIf*) _this)->GetAffine(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIPoseIf_GetVelocity(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((HIPoseIf*) _this)->GetVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIPoseIf_GetAngularVelocity(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((HIPoseIf*) _this)->GetAngularVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIHapticIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIHapticIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIHapticIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIHapticIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIHapticIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HIHapticIf*) _this)) {
                (*((HIHapticIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HIHapticIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIHapticIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HIHapticIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIHapticIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HIHapticIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIHapticIf_GetTorque(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((HIHapticIf*) _this)->GetTorque(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIHapticIf_GetForce(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((HIHapticIf*) _this)->GetForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HIHapticIf_SetForce(HANDLE _this, HANDLE f, HANDLE t) {
	try { ((HIHapticIf*) _this)->SetForce((const Vec3f&) *((Vec3f*) f), (const Vec3f&) *((Vec3f*) t)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HIHapticIf_SetForce_1(HANDLE _this, HANDLE f) {
	try { ((HIHapticIf*) _this)->SetForce((const Vec3f&) *((Vec3f*) f)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIHapticDummyIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIHapticDummyIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIHapticDummyIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIHapticDummyIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIHapticDummyIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HIHapticDummyIf*) _this)) {
                (*((HIHapticDummyIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HIHapticDummyIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIHapticDummyIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HIHapticDummyIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIHapticDummyIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HIHapticDummyIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HIHapticDummyIf_SetPose(HANDLE _this, HANDLE p) {
	Posed arg01_ = *((Posed*) p);
	try { ((HIHapticDummyIf*) _this)->SetPose((Posed) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HIHapticDummyIf_SetVelocity(HANDLE _this, HANDLE v) {
	Vec3d arg01_ = *((Vec3d*) v);
	try { ((HIHapticDummyIf*) _this)->SetVelocity((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HIHapticDummyIf_SetAngularVelocity(HANDLE _this, HANDLE v) {
	Vec3d arg01_ = *((Vec3d*) v);
	try { ((HIHapticDummyIf*) _this)->SetAngularVelocity((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIDeviceIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIDeviceIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIDeviceIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIDeviceIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIDeviceIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HIDeviceIf*) _this)) {
                (*((HIDeviceIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HIDeviceIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIDeviceIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HIDeviceIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIDeviceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HIDeviceIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIRealDeviceIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIRealDeviceIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIRealDeviceIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIRealDeviceIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIRealDeviceIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HIRealDeviceIf*) _this)) {
                (*((HIRealDeviceIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HIRealDeviceIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIRealDeviceIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HIRealDeviceIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIRealDeviceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HIRealDeviceIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_HIRealDeviceIf_Init(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIRealDeviceIf*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIRealDeviceIf_Return(HANDLE _this, HANDLE dv) {
	bool _val = (bool) NULL;
	try { _val = ((HIRealDeviceIf*) _this)->Return((HIVirtualDeviceIf*) dv); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_HIRealDeviceIf_Update(HANDLE _this) {
	try { ((HIRealDeviceIf*) _this)->Update(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIVirtualDeviceIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIVirtualDeviceIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIVirtualDeviceIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIVirtualDeviceIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIVirtualDeviceIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HIVirtualDeviceIf*) _this)) {
                (*((HIVirtualDeviceIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HIVirtualDeviceIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIVirtualDeviceIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HIVirtualDeviceIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIVirtualDeviceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HIVirtualDeviceIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_HIVirtualDeviceIf_GetPortNo(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((HIVirtualDeviceIf*) _this)->GetPortNo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_HIVirtualDeviceIf_IsUsed(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIVirtualDeviceIf*) _this)->IsUsed(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIVirtualDeviceIf_GetRealDevice(HANDLE _this) {
	HIRealDeviceIf* _ptr = (HIRealDeviceIf*) NULL;
	try { _ptr = (HIRealDeviceIf*) ((HIVirtualDeviceIf*) _this)->GetRealDevice(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HIVirtualDeviceIf_Update(HANDLE _this) {
	try { ((HIVirtualDeviceIf*) _this)->Update(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVAdIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVAdIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVAdIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVAdIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVAdIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DVAdIf*) _this)) {
                (*((DVAdIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DVAdIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVAdIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DVAdIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVAdIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DVAdIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_DVAdIf_Digit(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((DVAdIf*) _this)->Digit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_DVAdIf_Voltage(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((DVAdIf*) _this)->Voltage(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVDaIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVDaIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVDaIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVDaIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVDaIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DVDaIf*) _this)) {
                (*((DVDaIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DVDaIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVDaIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DVDaIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVDaIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DVDaIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_DVDaIf_Digit(HANDLE _this, int d) {
	try { ((DVDaIf*) _this)->Digit(d); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_DVDaIf_Voltage(HANDLE _this, float volt) {
	try { ((DVDaIf*) _this)->Voltage(volt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVCounterIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVCounterIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVCounterIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVCounterIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVCounterIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DVCounterIf*) _this)) {
                (*((DVCounterIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DVCounterIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVCounterIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DVCounterIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVCounterIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DVCounterIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_DVCounterIf_Count(HANDLE _this, long count) {
	try { ((DVCounterIf*) _this)->Count(count); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) long __cdecl Spr_DVCounterIf_Count_1(HANDLE _this) {
	long _val = (long) NULL;
	try { _val = ((DVCounterIf*) _this)->Count(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVPioIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVPioIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVPioIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVPioIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVPioIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DVPioIf*) _this)) {
                (*((DVPioIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DVPioIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVPioIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DVPioIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVPioIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DVPioIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_DVPioIf_Get(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((DVPioIf*) _this)->Get(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_DVPioIf_Set(HANDLE _this, int l) {
	try { ((DVPioIf*) _this)->Set(l); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVForceIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVForceIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVForceIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVForceIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVForceIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DVForceIf*) _this)) {
                (*((DVForceIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DVForceIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVForceIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DVForceIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVForceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DVForceIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_DVForceIf_GetDOF(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((DVForceIf*) _this)->GetDOF(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_DVForceIf_GetForce(HANDLE _this, int ch) {
	float _val = (float) NULL;
	try { _val = ((DVForceIf*) _this)->GetForce(ch); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_DVForceIf_GetForce3(HANDLE _this, HANDLE f) {
	try { ((DVForceIf*) _this)->GetForce3((Vec3f&) *((Vec3f*) f)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_DVForceIf_GetForce6(HANDLE _this, HANDLE f, HANDLE t) {
	try { ((DVForceIf*) _this)->GetForce6((Vec3f&) *((Vec3f*) f), (Vec3f&) *((Vec3f*) t)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DRUsb20SimpleIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DRUsb20SimpleIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DRUsb20SimpleIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (DRUsb20SimpleIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRUsb20SimpleIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DRUsb20SimpleIf*) _this)) {
                (*((DRUsb20SimpleIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DRUsb20SimpleIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRUsb20SimpleIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DRUsb20SimpleIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRUsb20SimpleIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DRUsb20SimpleIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DRUsb20Sh4If() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DRUsb20Sh4If(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DRUsb20Sh4If(HANDLE v) {
        if (v == NULL) return;
        try { delete (DRUsb20Sh4If*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRUsb20Sh4If_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DRUsb20Sh4If*) _this)) {
                (*((DRUsb20Sh4If*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DRUsb20Sh4If_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRUsb20Sh4If_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DRUsb20Sh4If*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRUsb20Sh4If_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DRUsb20Sh4If::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DRCyUsb20Sh4If() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DRCyUsb20Sh4If(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DRCyUsb20Sh4If(HANDLE v) {
        if (v == NULL) return;
        try { delete (DRCyUsb20Sh4If*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRCyUsb20Sh4If_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DRCyUsb20Sh4If*) _this)) {
                (*((DRCyUsb20Sh4If*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DRCyUsb20Sh4If_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRCyUsb20Sh4If_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DRCyUsb20Sh4If*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRCyUsb20Sh4If_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DRCyUsb20Sh4If::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVJoyStickIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVJoyStickIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVJoyStickIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVJoyStickIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVJoyStickIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DVJoyStickIf*) _this)) {
                (*((DVJoyStickIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DVJoyStickIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVJoyStickIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DVJoyStickIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVJoyStickIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DVJoyStickIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_DVJoyStickIf_AddCallback(HANDLE _this, HANDLE cb) {
	try { ((DVJoyStickIf*) _this)->AddCallback((DVJoyStickCallback*) cb); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_DVJoyStickIf_RemoveCallback(HANDLE _this, HANDLE cb) {
	try { ((DVJoyStickIf*) _this)->RemoveCallback((DVJoyStickCallback*) cb); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_DVJoyStickIf_SetPollInterval(HANDLE _this, int ms) {
	try { ((DVJoyStickIf*) _this)->SetPollInterval(ms); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_DVJoyStickIf_GetPollInterval(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((DVJoyStickIf*) _this)->GetPollInterval(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DVKeyMouseIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DVKeyMouseIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DVKeyMouseIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (DVKeyMouseIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVKeyMouseIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DVKeyMouseIf*) _this)) {
                (*((DVKeyMouseIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DVKeyMouseIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVKeyMouseIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DVKeyMouseIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DVKeyMouseIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DVKeyMouseIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_DVKeyMouseIf_AddCallback(HANDLE _this, HANDLE cb) {
	try { ((DVKeyMouseIf*) _this)->AddCallback((DVKeyMouseCallback*) cb); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_DVKeyMouseIf_RemoveCallback(HANDLE _this, HANDLE cb) {
	try { ((DVKeyMouseIf*) _this)->RemoveCallback((DVKeyMouseCallback*) cb); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_DVKeyMouseIf_GetKeyState(HANDLE _this, int key) {
	int _val = (int) NULL;
	try { _val = ((DVKeyMouseIf*) _this)->GetKeyState(key); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_DVKeyMouseIf_GetMousePosition(HANDLE _this, int& x, int& y, int& time, int count) {
	try { ((DVKeyMouseIf*) _this)->GetMousePosition(x, y, time, count); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_DVKeyMouseIf_GetMousePosition_1(HANDLE _this, int& x, int& y, int& time) {
	try { ((DVKeyMouseIf*) _this)->GetMousePosition(x, y, time); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_DRKeyMouseWin32If() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new DRKeyMouseWin32If(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_DRKeyMouseWin32If(HANDLE v) {
        if (v == NULL) return;
        try { delete (DRKeyMouseWin32If*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRKeyMouseWin32If_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((DRKeyMouseWin32If*) _this)) {
                (*((DRKeyMouseWin32If*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_DRKeyMouseWin32If_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRKeyMouseWin32If_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((DRKeyMouseWin32If*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_DRKeyMouseWin32If_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) DRKeyMouseWin32If::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_DRKeyMouseWin32If_PreviewMessage(HANDLE _this, HANDLE m) {
	bool _val = (bool) NULL;
	try { _val = ((DRKeyMouseWin32If*) _this)->PreviewMessage(m); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIBoneIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIBoneIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIBoneIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIBoneIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIBoneIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HIBoneIf*) _this)) {
                (*((HIBoneIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HIBoneIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIBoneIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HIBoneIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIBoneIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HIBoneIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIBoneIf_GetParent(HANDLE _this) {
	HIBoneIf* _ptr = (HIBoneIf*) NULL;
	try { _ptr = (HIBoneIf*) ((HIBoneIf*) _this)->GetParent(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIBoneIf_GetPosition(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((HIBoneIf*) _this)->GetPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIBoneIf_GetDirection(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((HIBoneIf*) _this)->GetDirection(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_HIBoneIf_GetLength(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((HIBoneIf*) _this)->GetLength(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISkeletonIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISkeletonIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISkeletonIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISkeletonIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISkeletonIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HISkeletonIf*) _this)) {
                (*((HISkeletonIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HISkeletonIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISkeletonIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HISkeletonIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISkeletonIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HISkeletonIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISkeletonIf_GetPose(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((HISkeletonIf*) _this)->GetPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_HISkeletonIf_NBones(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((HISkeletonIf*) _this)->NBones(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISkeletonIf_GetBone(HANDLE _this, int i) {
	HIBoneIf* _ptr = (HIBoneIf*) NULL;
	try { _ptr = (HIBoneIf*) ((HISkeletonIf*) _this)->GetBone(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISkeletonIf_GetRoot(HANDLE _this) {
	HIBoneIf* _ptr = (HIBoneIf*) NULL;
	try { _ptr = (HIBoneIf*) ((HISkeletonIf*) _this)->GetRoot(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_HISkeletonIf_GetGrabStrength(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((HISkeletonIf*) _this)->GetGrabStrength(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_HISkeletonIf_IsTracked(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HISkeletonIf*) _this)->IsTracked(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISkeletonSensorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISkeletonSensorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISkeletonSensorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISkeletonSensorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISkeletonSensorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HISkeletonSensorIf*) _this)) {
                (*((HISkeletonSensorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HISkeletonSensorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISkeletonSensorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HISkeletonSensorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISkeletonSensorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HISkeletonSensorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_HISkeletonSensorIf_NSkeletons(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((HISkeletonSensorIf*) _this)->NSkeletons(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISkeletonSensorIf_GetSkeleton(HANDLE _this, int i) {
	HISkeletonIf* _ptr = (HISkeletonIf*) NULL;
	try { _ptr = (HISkeletonIf*) ((HISkeletonSensorIf*) _this)->GetSkeleton(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HISkeletonSensorIf_SetScale(HANDLE _this, double s) {
	try { ((HISkeletonSensorIf*) _this)->SetScale(s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISkeletonSensorIf_SetCenter(HANDLE _this, HANDLE c) {
	Vec3d arg01_ = *((Vec3d*) c);
	try { ((HISkeletonSensorIf*) _this)->SetCenter((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISkeletonSensorIf_SetRotation(HANDLE _this, HANDLE q) {
	Quaterniond arg01_ = *((Quaterniond*) q);
	try { ((HISkeletonSensorIf*) _this)->SetRotation((Quaterniond) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HILeapIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HILeapIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HILeapIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HILeapIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HILeapIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HILeapIf*) _this)) {
                (*((HILeapIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HILeapIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HILeapIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HILeapIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HILeapIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HILeapIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HILeapUDPIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HILeapUDPIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HILeapUDPIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HILeapUDPIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HILeapUDPIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HILeapUDPIf*) _this)) {
                (*((HILeapUDPIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HILeapUDPIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HILeapUDPIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HILeapUDPIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HILeapUDPIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HILeapUDPIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_HILeapUDPIf_calibrate(HANDLE _this, int formerLeapID) {
	bool _val = (bool) NULL;
	try { _val = ((HILeapUDPIf*) _this)->calibrate(formerLeapID); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HINovintFalconIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HINovintFalconIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HINovintFalconIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HINovintFalconIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HINovintFalconIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HINovintFalconIf*) _this)) {
                (*((HINovintFalconIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HINovintFalconIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HINovintFalconIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HINovintFalconIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HINovintFalconIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HINovintFalconIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISdkIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISdkIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISdkIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISdkIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISdkIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HISdkIf*) _this)) {
                (*((HISdkIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HISdkIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISdkIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HISdkIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISdkIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HISdkIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_HISdkIf_ReturnVirtualDevice(HANDLE _this, HANDLE dev) {
	bool _val = (bool) NULL;
	try { _val = ((HISdkIf*) _this)->ReturnVirtualDevice((HIVirtualDeviceIf*) dev); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISdkIf_AddRealDevice(HANDLE _this, HANDLE keyInfo, HANDLE desc) {
	HIRealDeviceIf* _ptr = (HIRealDeviceIf*) NULL;
	try { _ptr = (HIRealDeviceIf*) ((HISdkIf*) _this)->AddRealDevice((const IfInfo*) keyInfo, desc); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISdkIf_AddRealDevice_1(HANDLE _this, HANDLE keyInfo) {
	HIRealDeviceIf* _ptr = (HIRealDeviceIf*) NULL;
	try { _ptr = (HIRealDeviceIf*) ((HISdkIf*) _this)->AddRealDevice((const IfInfo*) keyInfo); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISdkIf_CreateHumanInterface(HANDLE _this, HANDLE info) {
	HIBaseIf* _ptr = (HIBaseIf*) NULL;
	try { _ptr = (HIBaseIf*) ((HISdkIf*) _this)->CreateHumanInterface((const IfInfo*) info); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISdkIf_CreateHumanInterface_1(HANDLE _this, HANDLE name) {
	HIBaseIf* _ptr = (HIBaseIf*) NULL;
	try { _ptr = (HIBaseIf*) ((HISdkIf*) _this)->CreateHumanInterface((const char*) name); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISdkIf_CreateSdk() {
	HISdkIf* _ptr = (HISdkIf*) NULL;
	try { _ptr = (HISdkIf*) HISdkIf::CreateSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HISdkIf_RegisterSdk() {
	try { HISdkIf::RegisterSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpaceNavigatorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpaceNavigatorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpaceNavigatorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpaceNavigatorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpaceNavigatorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HISpaceNavigatorIf*) _this)) {
                (*((HISpaceNavigatorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HISpaceNavigatorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpaceNavigatorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HISpaceNavigatorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpaceNavigatorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HISpaceNavigatorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_HISpaceNavigatorIf_SetPose(HANDLE _this, HANDLE pose) {
	Posef arg01_ = *((Posef*) pose);
	bool _val = (bool) NULL;
	try { _val = ((HISpaceNavigatorIf*) _this)->SetPose((Posef) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_HISpaceNavigatorIf_SetMaxVelocity(HANDLE _this, float mV) {
	try { ((HISpaceNavigatorIf*) _this)->SetMaxVelocity(mV); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpaceNavigatorIf_SetMaxAngularVelocity(HANDLE _this, float mAV) {
	try { ((HISpaceNavigatorIf*) _this)->SetMaxAngularVelocity(mAV); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_HISpaceNavigatorIf_PreviewMessage(HANDLE _this, HANDLE m) {
	bool _val = (bool) NULL;
	try { _val = ((HISpaceNavigatorIf*) _this)->PreviewMessage(m); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_HISpaceNavigatorIf_SetViewMatrix(HANDLE _this, HANDLE view) {
	Affinef arg01_ = *((Affinef*) view);
	try { ((HISpaceNavigatorIf*) _this)->SetViewMatrix((Affinef) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpaceNavigatorIf_SetPersMatrix(HANDLE _this, HANDLE pers) {
	Affinef arg01_ = *((Affinef*) pers);
	try { ((HISpaceNavigatorIf*) _this)->SetPersMatrix((Affinef) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidarMotorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidarMotorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpidarMotorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpidarMotorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarMotorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HISpidarMotorIf*) _this)) {
                (*((HISpidarMotorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarMotorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HISpidarMotorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HISpidarMotorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorIf_SetForce(HANDLE _this, float f) {
	try { ((HISpidarMotorIf*) _this)->SetForce(f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HISpidarMotorIf_GetForce(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((HISpidarMotorIf*) _this)->GetForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorIf_SetLimitMinForce(HANDLE _this, float f) {
	try { ((HISpidarMotorIf*) _this)->SetLimitMinForce(f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorIf_SetLimitMaxForce(HANDLE _this, float f) {
	try { ((HISpidarMotorIf*) _this)->SetLimitMaxForce(f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarMotorIf_GetLimitForce(HANDLE _this) {
	Vec2f* _ptr = (Vec2f*) NULL;
	try { _ptr = new Vec2f(); (*_ptr) = ((HISpidarMotorIf*) _this)->GetLimitForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_HISpidarMotorIf_GetCurrent(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((HISpidarMotorIf*) _this)->GetCurrent(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorIf_SetLength(HANDLE _this, float l) {
	try { ((HISpidarMotorIf*) _this)->SetLength(l); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HISpidarMotorIf_GetLength(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((HISpidarMotorIf*) _this)->GetLength(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_HISpidarMotorIf_GetVelocity(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((HISpidarMotorIf*) _this)->GetVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorIf_GetCalibrationData(HANDLE _this, float dt) {
	try { ((HISpidarMotorIf*) _this)->GetCalibrationData(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorIf_Calibrate(HANDLE _this, char bUpdate) {
	bool arg01_ = (bUpdate == 0) ? false : true;
	try { ((HISpidarMotorIf*) _this)->Calibrate((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarMotorIf_GetVdd(HANDLE _this) {
	try { ((HISpidarMotorIf*) _this)->GetVdd(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_HISpidarMotorIf_GetCount(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((HISpidarMotorIf*) _this)->GetCount(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidarIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidarIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpidarIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpidarIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HISpidarIf*) _this)) {
                (*((HISpidarIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HISpidarIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HISpidarIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HISpidarIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarIf_GetSpidarType(HANDLE _this) {
	const char* _ptr = (const char*) NULL;
	try { _ptr = ((HISpidarIf*) _this)->GetSpidarType(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarIf_SetLimitMinForce(HANDLE _this, float f) {
	try { ((HISpidarIf*) _this)->SetLimitMinForce(f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarIf_SetLimitMaxForce(HANDLE _this, float f) {
	try { ((HISpidarIf*) _this)->SetLimitMaxForce(f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarIf_GetMotor(HANDLE _this, size_t i) {
	HISpidarMotorIf* _ptr = (HISpidarMotorIf*) NULL;
	try { _ptr = (HISpidarMotorIf*) ((HISpidarIf*) _this)->GetMotor(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) size_t __cdecl Spr_HISpidarIf_NMotor(HANDLE _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((HISpidarIf*) _this)->NMotor(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidar4If() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidar4If(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpidar4If(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpidar4If*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidar4If_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HISpidar4If*) _this)) {
                (*((HISpidar4If*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HISpidar4If_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidar4If_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HISpidar4If*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidar4If_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HISpidar4If::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidar4If_GetMotor(HANDLE _this, size_t i) {
	HISpidarMotorIf* _ptr = (HISpidarMotorIf*) NULL;
	try { _ptr = (HISpidarMotorIf*) ((HISpidar4If*) _this)->GetMotor(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) size_t __cdecl Spr_HISpidar4If_NMotor(HANDLE _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((HISpidar4If*) _this)->NMotor(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidar4DIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidar4DIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpidar4DIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpidar4DIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidar4DIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HISpidar4DIf*) _this)) {
                (*((HISpidar4DIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HISpidar4DIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidar4DIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HISpidar4DIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidar4DIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HISpidar4DIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HISpidarGIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HISpidarGIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HISpidarGIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HISpidarGIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarGIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HISpidarGIf*) _this)) {
                (*((HISpidarGIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HISpidarGIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarGIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HISpidarGIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarGIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HISpidarGIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarGIf_GetTorque(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((HISpidarGIf*) _this)->GetTorque(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarGIf_GetForce(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((HISpidarGIf*) _this)->GetForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarGIf_SetForce(HANDLE _this, HANDLE f, HANDLE t) {
	try { ((HISpidarGIf*) _this)->SetForce((const Vec3f&) *((Vec3f*) f), (const Vec3f&) *((Vec3f*) t)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HISpidarGIf_GetMotor(HANDLE _this, size_t i) {
	HISpidarMotorIf* _ptr = (HISpidarMotorIf*) NULL;
	try { _ptr = (HISpidarMotorIf*) ((HISpidarGIf*) _this)->GetMotor(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) size_t __cdecl Spr_HISpidarGIf_NMotor(HANDLE _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((HISpidarGIf*) _this)->NMotor(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_HISpidarGIf_GetButton(HANDLE _this, size_t i) {
	int _val = (int) NULL;
	try { _val = ((HISpidarGIf*) _this)->GetButton(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) size_t __cdecl Spr_HISpidarGIf_NButton(HANDLE _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((HISpidarGIf*) _this)->NButton(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarGIf_SetWeight(HANDLE _this, float s, float t, float r) {
	try { ((HISpidarGIf*) _this)->SetWeight(s, t, r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarGIf_SetWeight_1(HANDLE _this, float s, float t) {
	try { ((HISpidarGIf*) _this)->SetWeight(s, t); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarGIf_SetWeight_2(HANDLE _this, float s) {
	try { ((HISpidarGIf*) _this)->SetWeight(s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HISpidarGIf_SetWeight_3(HANDLE _this) {
	try { ((HISpidarGIf*) _this)->SetWeight(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HITrackballIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HITrackballIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HITrackballIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HITrackballIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HITrackballIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HITrackballIf*) _this)) {
                (*((HITrackballIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HITrackballIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HITrackballIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HITrackballIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HITrackballIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetMode(HANDLE _this, char mode) {
	bool arg01_ = (mode == 0) ? false : true;
	try { ((HITrackballIf*) _this)->SetMode((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_HITrackballIf_GetMode(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HITrackballIf*) _this)->GetMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetTarget(HANDLE _this, HANDLE t) {
	Vec3f arg01_ = *((Vec3f*) t);
	try { ((HITrackballIf*) _this)->SetTarget((Vec3f) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HITrackballIf_GetTarget(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((HITrackballIf*) _this)->GetTarget(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetAngle(HANDLE _this, float lon, float lat) {
	try { ((HITrackballIf*) _this)->SetAngle(lon, lat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_GetAngle(HANDLE _this, float& lon, float& lat) {
	try { ((HITrackballIf*) _this)->GetAngle(lon, lat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetDistance(HANDLE _this, float dist) {
	try { ((HITrackballIf*) _this)->SetDistance(dist); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HITrackballIf_GetDistance(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((HITrackballIf*) _this)->GetDistance(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetLongitudeRange(HANDLE _this, float rmin, float rmax) {
	try { ((HITrackballIf*) _this)->SetLongitudeRange(rmin, rmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_GetLongitudeRange(HANDLE _this, float& rmin, float& rmax) {
	try { ((HITrackballIf*) _this)->GetLongitudeRange(rmin, rmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetLatitudeRange(HANDLE _this, float rmin, float rmax) {
	try { ((HITrackballIf*) _this)->SetLatitudeRange(rmin, rmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_GetLatitudeRange(HANDLE _this, float& rmin, float& rmax) {
	try { ((HITrackballIf*) _this)->GetLatitudeRange(rmin, rmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetDistanceRange(HANDLE _this, float rmin, float rmax) {
	try { ((HITrackballIf*) _this)->SetDistanceRange(rmin, rmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_GetDistanceRange(HANDLE _this, float& rmin, float& rmax) {
	try { ((HITrackballIf*) _this)->GetDistanceRange(rmin, rmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetRotGain(HANDLE _this, float g) {
	try { ((HITrackballIf*) _this)->SetRotGain(g); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HITrackballIf_GetRotGain(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((HITrackballIf*) _this)->GetRotGain(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetZoomGain(HANDLE _this, float g) {
	try { ((HITrackballIf*) _this)->SetZoomGain(g); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HITrackballIf_GetZoomGain(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((HITrackballIf*) _this)->GetZoomGain(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetTrnGain(HANDLE _this, float g) {
	try { ((HITrackballIf*) _this)->SetTrnGain(g); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_HITrackballIf_GetTrnGain(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((HITrackballIf*) _this)->GetTrnGain(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_Fit(HANDLE _this, HANDLE cam, float radius) {
	try { ((HITrackballIf*) _this)->Fit((const GRCameraDesc&) *((GRCameraDesc*) cam), radius); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetPosition(HANDLE _this, HANDLE pos) {
	Vec3f arg01_ = *((Vec3f*) pos);
	try { ((HITrackballIf*) _this)->SetPosition((Vec3f) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetOrientation(HANDLE _this, HANDLE ori) {
	Quaternionf arg01_ = *((Quaternionf*) ori);
	try { ((HITrackballIf*) _this)->SetOrientation((Quaternionf) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_Enable(HANDLE _this, char on) {
	bool arg01_ = (on == 0) ? false : true;
	try { ((HITrackballIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_Enable_1(HANDLE _this) {
	try { ((HITrackballIf*) _this)->Enable(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetRotMask(HANDLE _this, int mask) {
	try { ((HITrackballIf*) _this)->SetRotMask(mask); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetZoomMask(HANDLE _this, int mask) {
	try { ((HITrackballIf*) _this)->SetZoomMask(mask); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetTrnMask(HANDLE _this, int mask) {
	try { ((HITrackballIf*) _this)->SetTrnMask(mask); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HITrackballIf_GetKeyMouse(HANDLE _this) {
	DVKeyMouseIf* _ptr = (DVKeyMouseIf*) NULL;
	try { _ptr = (DVKeyMouseIf*) ((HITrackballIf*) _this)->GetKeyMouse(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetKeyMouse(HANDLE _this, HANDLE dv) {
	try { ((HITrackballIf*) _this)->SetKeyMouse((DVKeyMouseIf*) dv); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_SetCallback(HANDLE _this, HANDLE callback) {
	try { ((HITrackballIf*) _this)->SetCallback((HITrackballCallback*) callback); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HITrackballIf_UpdateView(HANDLE _this) {
	try { ((HITrackballIf*) _this)->UpdateView(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_HIXbox360ControllerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new HIXbox360ControllerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_HIXbox360ControllerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (HIXbox360ControllerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIXbox360ControllerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((HIXbox360ControllerIf*) _this)) {
                (*((HIXbox360ControllerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_HIXbox360ControllerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIXbox360ControllerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((HIXbox360ControllerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_HIXbox360ControllerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) HIXbox360ControllerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_Init(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_HIXbox360ControllerIf_SetMaxVelocity(HANDLE _this, float v) {
	try { ((HIXbox360ControllerIf*) _this)->SetMaxVelocity(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HIXbox360ControllerIf_SetMaxAngularVelocity(HANDLE _this, float v) {
	try { ((HIXbox360ControllerIf*) _this)->SetMaxAngularVelocity(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_HIXbox360ControllerIf_SetVibration(HANDLE _this, HANDLE lr) {
	Vec2f arg01_ = *((Vec2f*) lr);
	try { ((HIXbox360ControllerIf*) _this)->SetVibration((Vec2f) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_UP(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->UP(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_DOWN(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->DOWN(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_LEFT(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->LEFT(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_RIGHT(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->RIGHT(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_START(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->START(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_BACK(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->BACK(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_LTHUMB(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->LTHUMB(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_RTHUMB(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->RTHUMB(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_LSHOULDER(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->LSHOULDER(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_RSHOULDER(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->RSHOULDER(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_A(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->A(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_B(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->B(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_X(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->X(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_HIXbox360ControllerIf_Y(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((HIXbox360ControllerIf*) _this)->Y(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
}

#include <Springhead.h>
#include <Windows.h>
#include <sstream>
#include <SprCreature.h>
#include <Framework/SprFWApp.h>
#include <Physics/SprPHJointMotor.h>
#include <Framework/SprFWEditor.h>
#include <Framework/SprFWOpObj.h>
#include <Framework/FWScene.h>
#include <../src/SprCSharp/SprExport/CSUtility.h>
using namespace Spr;
using namespace std;
extern "C" {
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRBodyDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRBodyDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRBodyDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRBodyDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRBoneDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRBoneDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRBoneDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRBoneDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneDesc_get_label(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((CRBoneDesc*) _this)->label;
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
    __declspec(dllexport) void __cdecl Spr_CRBoneDesc_set_label(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((CRBoneDesc*) _this)->label = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRBoneDesc_FreeString_label(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CREngineDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CREngineDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CREngineDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CREngineDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRControllerDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRControllerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRControllerDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRControllerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRGazeControllerDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRGazeControllerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRGazeControllerDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRGazeControllerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGazeControllerDesc_addr_front(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRGazeControllerDesc*)_this)->front; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRGazeControllerDesc_set_front(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRGazeControllerDesc*)_this)->front) != _ptr) {
                ((CRGazeControllerDesc*)_this)->front = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGazeControllerDesc_addr_up(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRGazeControllerDesc*)_this)->up; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRGazeControllerDesc_set_up(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRGazeControllerDesc*)_this)->up) != _ptr) {
                ((CRGazeControllerDesc*)_this)->up = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRGrabControllerDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRGrabControllerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRGrabControllerDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRGrabControllerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRCreatureDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRCreatureDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRCreatureDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRCreatureDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRReachControllerState() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRReachControllerState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRReachControllerState(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRReachControllerState*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CRReachControllerState_get_time(HANDLE _this) {
        float _val = 0;
        try { _val = (*((CRReachControllerState*)_this)).time; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_time(HANDLE _this, float value) {
        try { (*((CRReachControllerState*)_this)).time = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CRReachControllerState_get_reachTime(HANDLE _this) {
        float _val = 0;
        try { _val = (*((CRReachControllerState*)_this)).reachTime; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_reachTime(HANDLE _this, float value) {
        try { (*((CRReachControllerState*)_this)).reachTime = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CRReachControllerState_get_viaTime(HANDLE _this) {
        float _val = 0;
        try { _val = (*((CRReachControllerState*)_this)).viaTime; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_viaTime(HANDLE _this, float value) {
        try { (*((CRReachControllerState*)_this)).viaTime = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CRReachControllerState_get_oricontTimeRatio(HANDLE _this) {
        float _val = 0;
        try { _val = (*((CRReachControllerState*)_this)).oricontTimeRatio; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_oricontTimeRatio(HANDLE _this, float value) {
        try { (*((CRReachControllerState*)_this)).oricontTimeRatio = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_initPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->initPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_initPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->initPos) != _ptr) {
                ((CRReachControllerState*)_this)->initPos = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_initVel(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->initVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_initVel(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->initVel) != _ptr) {
                ((CRReachControllerState*)_this)->initVel = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_initAVel(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->initAVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_initAVel(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->initAVel) != _ptr) {
                ((CRReachControllerState*)_this)->initAVel = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_initOri(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->initOri; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_initOri(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->initOri) != _ptr) {
                ((CRReachControllerState*)_this)->initOri = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_viaPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->viaPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_viaPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->viaPos) != _ptr) {
                ((CRReachControllerState*)_this)->viaPos = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_viaOri(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->viaOri; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_viaOri(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->viaOri) != _ptr) {
                ((CRReachControllerState*)_this)->viaOri = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_targPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->targPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_targPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->targPos) != _ptr) {
                ((CRReachControllerState*)_this)->targPos = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_targVel(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->targVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_targVel(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->targVel) != _ptr) {
                ((CRReachControllerState*)_this)->targVel = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_targAVel(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->targAVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_targAVel(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->targAVel) != _ptr) {
                ((CRReachControllerState*)_this)->targAVel = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_targOri(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->targOri; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_targOri(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->targOri) != _ptr) {
                ((CRReachControllerState*)_this)->targOri = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_currPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->currPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_currPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->currPos) != _ptr) {
                ((CRReachControllerState*)_this)->currPos = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_currVel(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->currVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_currVel(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->currVel) != _ptr) {
                ((CRReachControllerState*)_this)->currVel = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_currAVel(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->currAVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_currAVel(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->currAVel) != _ptr) {
                ((CRReachControllerState*)_this)->currAVel = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_currOri(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->currOri; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_currOri(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->currOri) != _ptr) {
                ((CRReachControllerState*)_this)->currOri = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_finalPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->finalPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_finalPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->finalPos) != _ptr) {
                ((CRReachControllerState*)_this)->finalPos = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_finalVel(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->finalVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_finalVel(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->finalVel) != _ptr) {
                ((CRReachControllerState*)_this)->finalVel = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_finalAVel(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->finalAVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_finalAVel(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->finalAVel) != _ptr) {
                ((CRReachControllerState*)_this)->finalAVel = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerState_addr_finalOri(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRReachControllerState*)_this)->finalOri; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerState_set_finalOri(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRReachControllerState*)_this)->finalOri) != _ptr) {
                ((CRReachControllerState*)_this)->finalOri = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRReachControllerDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRReachControllerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRReachControllerDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRReachControllerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_CRReachControllerDesc_get_margin(HANDLE _this) {
        double _val = 0;
        try { _val = (*((CRReachControllerDesc*)_this)).margin; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerDesc_set_margin(HANDLE _this, double value) {
        try { (*((CRReachControllerDesc*)_this)).margin = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_CRReachControllerDesc_get_innerMargin(HANDLE _this) {
        double _val = 0;
        try { _val = (*((CRReachControllerDesc*)_this)).innerMargin; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerDesc_set_innerMargin(HANDLE _this, double value) {
        try { (*((CRReachControllerDesc*)_this)).innerMargin = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_CRReachControllerDesc_get_averageSpeed(HANDLE _this) {
        double _val = 0;
        try { _val = (*((CRReachControllerDesc*)_this)).averageSpeed; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerDesc_set_averageSpeed(HANDLE _this, double value) {
        try { (*((CRReachControllerDesc*)_this)).averageSpeed = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_CRReachControllerDesc_get_waitVel(HANDLE _this) {
        double _val = 0;
        try { _val = (*((CRReachControllerDesc*)_this)).waitVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerDesc_set_waitVel(HANDLE _this, double value) {
        try { (*((CRReachControllerDesc*)_this)).waitVel = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_CRReachControllerDesc_get_restartVel(HANDLE _this) {
        double _val = 0;
        try { _val = (*((CRReachControllerDesc*)_this)).restartVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerDesc_set_restartVel(HANDLE _this, double value) {
        try { (*((CRReachControllerDesc*)_this)).restartVel = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRSdkDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRSdkDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRSdkDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRSdkDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRContactInfo() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRContactInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRContactInfo(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRContactInfo*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_CRContactInfo_get_dimension(HANDLE _this) {
        double _val = 0;
        try { _val = (*((CRContactInfo*)_this)).dimension; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRContactInfo_set_dimension(HANDLE _this, double value) {
        try { (*((CRContactInfo*)_this)).dimension = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRContactInfo_addr_normal(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRContactInfo*)_this)->normal; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRContactInfo_set_normal(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRContactInfo*)_this)->normal) != _ptr) {
                ((CRContactInfo*)_this)->normal = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_CRContactInfo_get_pressure(HANDLE _this) {
        double _val = 0;
        try { _val = (*((CRContactInfo*)_this)).pressure; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRContactInfo_set_pressure(HANDLE _this, double value) {
        try { (*((CRContactInfo*)_this)).pressure = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRContactInfo_addr_pos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRContactInfo*)_this)->pos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRContactInfo_set_pos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRContactInfo*)_this)->pos) != _ptr) {
                ((CRContactInfo*)_this)->pos = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRContactInfo_get_soMe(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = ((CRContactInfo*)_this)->soMe; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRContactInfo_set_soMe(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRContactInfo*)_this)->soMe) != _ptr) {
                ((CRContactInfo*)_this)->soMe = ((PHSolidIf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRContactInfo_get_soOther(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = ((CRContactInfo*)_this)->soOther; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRContactInfo_set_soOther(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRContactInfo*)_this)->soOther) != _ptr) {
                ((CRContactInfo*)_this)->soOther = ((PHSolidIf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRContactInfo_addr_force(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRContactInfo*)_this)->force; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRContactInfo_set_force(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRContactInfo*)_this)->force) != _ptr) {
                ((CRContactInfo*)_this)->force = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRTouchSensorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRTouchSensorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRTouchSensorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRTouchSensorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRVisualInfo() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRVisualInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRVisualInfo(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRVisualInfo*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualInfo_addr_posWorld(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRVisualInfo*)_this)->posWorld; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualInfo_set_posWorld(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRVisualInfo*)_this)->posWorld) != _ptr) {
                ((CRVisualInfo*)_this)->posWorld = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualInfo_addr_posLocal(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRVisualInfo*)_this)->posLocal; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualInfo_set_posLocal(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRVisualInfo*)_this)->posLocal) != _ptr) {
                ((CRVisualInfo*)_this)->posLocal = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualInfo_addr_velWorld(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRVisualInfo*)_this)->velWorld; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualInfo_set_velWorld(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRVisualInfo*)_this)->velWorld) != _ptr) {
                ((CRVisualInfo*)_this)->velWorld = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualInfo_addr_velLocal(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRVisualInfo*)_this)->velLocal; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualInfo_set_velLocal(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRVisualInfo*)_this)->velLocal) != _ptr) {
                ((CRVisualInfo*)_this)->velLocal = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_CRVisualInfo_get_angle(HANDLE _this) {
        double _val = 0;
        try { _val = (*((CRVisualInfo*)_this)).angle; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualInfo_set_angle(HANDLE _this, double value) {
        try { (*((CRVisualInfo*)_this)).angle = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualInfo_get_solid(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = ((CRVisualInfo*)_this)->solid; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualInfo_set_solid(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRVisualInfo*)_this)->solid) != _ptr) {
                ((CRVisualInfo*)_this)->solid = ((PHSolidIf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualInfo_get_solidSensor(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = ((CRVisualInfo*)_this)->solidSensor; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualInfo_set_solidSensor(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRVisualInfo*)_this)->solidSensor) != _ptr) {
                ((CRVisualInfo*)_this)->solidSensor = ((PHSolidIf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualInfo_addr_sensorPose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRVisualInfo*)_this)->sensorPose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualInfo_set_sensorPose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRVisualInfo*)_this)->sensorPose) != _ptr) {
                ((CRVisualInfo*)_this)->sensorPose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_CRVisualInfo_get_bMyBody(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((CRVisualInfo*)_this)).bMyBody; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualInfo_set_bMyBody(HANDLE _this, char value) {
        try { (*((CRVisualInfo*)_this)).bMyBody = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_CRVisualInfo_get_bCenter(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((CRVisualInfo*)_this)).bCenter; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualInfo_set_bCenter(HANDLE _this, char value) {
        try { (*((CRVisualInfo*)_this)).bCenter = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRVisualSensorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRVisualSensorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRVisualSensorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRVisualSensorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorDesc_addr_range(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRVisualSensorDesc*)_this)->range; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualSensorDesc_set_range(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRVisualSensorDesc*)_this)->range) != _ptr) {
                ((CRVisualSensorDesc*)_this)->range = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorDesc_addr_centerRange(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRVisualSensorDesc*)_this)->centerRange; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualSensorDesc_set_centerRange(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRVisualSensorDesc*)_this)->centerRange) != _ptr) {
                ((CRVisualSensorDesc*)_this)->centerRange = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorDesc_addr_pose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CRVisualSensorDesc*)_this)->pose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualSensorDesc_set_pose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CRVisualSensorDesc*)_this)->pose) != _ptr) {
                ((CRVisualSensorDesc*)_this)->pose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CRVisualSensorDesc_get_limitDistance(HANDLE _this) {
        float _val = 0;
        try { _val = (*((CRVisualSensorDesc*)_this)).limitDistance; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualSensorDesc_set_limitDistance(HANDLE _this, float value) {
        try { (*((CRVisualSensorDesc*)_this)).limitDistance = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRBodyIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRBodyIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRBodyIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRBodyIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBodyIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CRBodyIf*) _this)) {
                (*((CRBodyIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CRBodyIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBodyIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CRBodyIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBodyIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CRBodyIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBodyIf_FindByIKActuator(HANDLE _this, HANDLE actuator) {
	CRBoneIf* _ptr = (CRBoneIf*) NULL;
	try { _ptr = (CRBoneIf*) ((CRBodyIf*) _this)->FindByIKActuator((PHIKActuatorIf*) actuator); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBodyIf_FindByLabel(HANDLE _this, BSTR label) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) label, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	CRBoneIf* _ptr = (CRBoneIf*) NULL;
	try { _ptr = (CRBoneIf*) ((CRBodyIf*) _this)->FindByLabel((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CRBodyIf_NBones(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CRBodyIf*) _this)->NBones(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBodyIf_GetBone(HANDLE _this, int i) {
	CRBoneIf* _ptr = (CRBoneIf*) NULL;
	try { _ptr = (CRBoneIf*) ((CRBodyIf*) _this)->GetBone(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBodyIf_GetCenterOfMass(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((CRBodyIf*) _this)->GetCenterOfMass(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_CRBodyIf_GetSumOfMass(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((CRBodyIf*) _this)->GetSumOfMass(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRBodyIf_Step(HANDLE _this) {
	try { ((CRBodyIf*) _this)->Step(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRBoneIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRBoneIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRBoneIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRBoneIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CRBoneIf*) _this)) {
                (*((CRBoneIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CRBoneIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CRBoneIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CRBoneIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneIf_GetLabel(HANDLE _this) {
	const char* _ptr = (const char*) NULL;
	try { _ptr = ((CRBoneIf*) _this)->GetLabel(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRBoneIf_SetLabel(HANDLE _this, HANDLE str) {
	try { ((CRBoneIf*) _this)->SetLabel((const char*) str); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneIf_GetPHSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((CRBoneIf*) _this)->GetPHSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRBoneIf_SetPHSolid(HANDLE _this, HANDLE so) {
	try { ((CRBoneIf*) _this)->SetPHSolid((PHSolidIf*) so); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneIf_GetIKEndEffector(HANDLE _this) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((CRBoneIf*) _this)->GetIKEndEffector(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRBoneIf_SetIKEndEffector(HANDLE _this, HANDLE ikEE) {
	try { ((CRBoneIf*) _this)->SetIKEndEffector((PHIKEndEffectorIf*) ikEE); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneIf_GetPHJoint(HANDLE _this) {
	PHJointIf* _ptr = (PHJointIf*) NULL;
	try { _ptr = (PHJointIf*) ((CRBoneIf*) _this)->GetPHJoint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRBoneIf_SetPHJoint(HANDLE _this, HANDLE jo) {
	try { ((CRBoneIf*) _this)->SetPHJoint((PHJointIf*) jo); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneIf_GetIKActuator(HANDLE _this) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((CRBoneIf*) _this)->GetIKActuator(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRBoneIf_SetIKActuator(HANDLE _this, HANDLE ikAct) {
	try { ((CRBoneIf*) _this)->SetIKActuator((PHIKActuatorIf*) ikAct); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRBoneIf_SetParentBone(HANDLE _this, HANDLE parent) {
	try { ((CRBoneIf*) _this)->SetParentBone((CRBoneIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneIf_GetParentBone(HANDLE _this) {
	CRBoneIf* _ptr = (CRBoneIf*) NULL;
	try { _ptr = (CRBoneIf*) ((CRBoneIf*) _this)->GetParentBone(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CRBoneIf_NChildBones(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CRBoneIf*) _this)->NChildBones(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRBoneIf_GetChildBone(HANDLE _this, int number) {
	CRBoneIf* _ptr = (CRBoneIf*) NULL;
	try { _ptr = (CRBoneIf*) ((CRBoneIf*) _this)->GetChildBone(number); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRBoneIf_AddChildBone(HANDLE _this, HANDLE child) {
	try { ((CRBoneIf*) _this)->AddChildBone((CRBoneIf*) child); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRBoneIf_ReadInitialSpringDamperFromJoint(HANDLE _this) {
	try { ((CRBoneIf*) _this)->ReadInitialSpringDamperFromJoint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CREngineIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CREngineIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CREngineIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CREngineIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CREngineIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CREngineIf*) _this)) {
                (*((CREngineIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CREngineIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CREngineIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CREngineIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CREngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CREngineIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CREngineIf_GetPriority(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CREngineIf*) _this)->GetPriority(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CREngineIf_Init(HANDLE _this) {
	try { ((CREngineIf*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CREngineIf_Step(HANDLE _this) {
	try { ((CREngineIf*) _this)->Step(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CREngineIf_Enable(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((CREngineIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_CREngineIf_IsEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((CREngineIf*) _this)->IsEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRControllerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRControllerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRControllerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRControllerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRControllerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CRControllerIf*) _this)) {
                (*((CRControllerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CRControllerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRControllerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CRControllerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRControllerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CRControllerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRControllerIf_Reset(HANDLE _this) {
	try { ((CRControllerIf*) _this)->Reset(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_CRControllerIf_GetStatus(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CRControllerIf*) _this)->GetStatus(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRGazeControllerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRGazeControllerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRGazeControllerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRGazeControllerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGazeControllerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CRGazeControllerIf*) _this)) {
                (*((CRGazeControllerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CRGazeControllerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGazeControllerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CRGazeControllerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGazeControllerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CRGazeControllerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRGazeControllerIf_SetTargetPosition(HANDLE _this, HANDLE pos) {
	Vec3d arg01_ = *((Vec3d*) pos);
	try { ((CRGazeControllerIf*) _this)->SetTargetPosition((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGazeControllerIf_GetTargetPosition(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((CRGazeControllerIf*) _this)->GetTargetPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRGazeControllerIf_SetHeadBone(HANDLE _this, HANDLE head) {
	try { ((CRGazeControllerIf*) _this)->SetHeadBone((CRBoneIf*) head); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRGrabControllerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRGrabControllerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRGrabControllerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRGrabControllerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGrabControllerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CRGrabControllerIf*) _this)) {
                (*((CRGrabControllerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CRGrabControllerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGrabControllerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CRGrabControllerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGrabControllerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CRGrabControllerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRGrabControllerIf_SetTargetSolid(HANDLE _this, HANDLE targetSolid) {
	try { ((CRGrabControllerIf*) _this)->SetTargetSolid((PHSolidIf*) targetSolid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGrabControllerIf_GetGrabbingSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((CRGrabControllerIf*) _this)->GetGrabbingSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRGrabControllerIf_GetSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((CRGrabControllerIf*) _this)->GetSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRGrabControllerIf_SetSolid(HANDLE _this, HANDLE so) {
	try { ((CRGrabControllerIf*) _this)->SetSolid((CRBoneIf*) so); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRCreatureIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRCreatureIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRCreatureIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRCreatureIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRCreatureIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CRCreatureIf*) _this)) {
                (*((CRCreatureIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CRCreatureIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRCreatureIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CRCreatureIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRCreatureIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CRCreatureIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRCreatureIf_Step(HANDLE _this) {
	try { ((CRCreatureIf*) _this)->Step(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRCreatureIf_CreateBody(HANDLE _this, HANDLE ii, HANDLE desc) {
	CRBodyIf* _ptr = (CRBodyIf*) NULL;
	try { _ptr = (CRBodyIf*) ((CRCreatureIf*) _this)->CreateBody((const IfInfo*) ii, (const CRBodyDesc&) *((CRBodyDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRCreatureIf_GetBody(HANDLE _this, int i) {
	CRBodyIf* _ptr = (CRBodyIf*) NULL;
	try { _ptr = (CRBodyIf*) ((CRCreatureIf*) _this)->GetBody(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CRCreatureIf_NBodies(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CRCreatureIf*) _this)->NBodies(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRCreatureIf_CreateEngine(HANDLE _this, HANDLE ii, HANDLE desc) {
	CREngineIf* _ptr = (CREngineIf*) NULL;
	try { _ptr = (CREngineIf*) ((CRCreatureIf*) _this)->CreateEngine((const IfInfo*) ii, (const CREngineDesc&) *((CREngineDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRCreatureIf_GetEngine(HANDLE _this, int i) {
	CREngineIf* _ptr = (CREngineIf*) NULL;
	try { _ptr = (CREngineIf*) ((CRCreatureIf*) _this)->GetEngine(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CRCreatureIf_NEngines(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CRCreatureIf*) _this)->NEngines(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRCreatureIf_GetPHScene(HANDLE _this) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((CRCreatureIf*) _this)->GetPHScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRReachControllerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRReachControllerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRReachControllerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRReachControllerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CRReachControllerIf*) _this)) {
                (*((CRReachControllerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CRReachControllerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CRReachControllerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetIKEndEffector(HANDLE _this, HANDLE ikEff, int n) {
	try { ((CRReachControllerIf*) _this)->SetIKEndEffector((PHIKEndEffectorIf*) ikEff, n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetIKEndEffector_1(HANDLE _this, HANDLE ikEff) {
	try { ((CRReachControllerIf*) _this)->SetIKEndEffector((PHIKEndEffectorIf*) ikEff); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerIf_GetIKEndEffector(HANDLE _this, int n) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((CRReachControllerIf*) _this)->GetIKEndEffector(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerIf_GetIKEndEffector_1(HANDLE _this) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((CRReachControllerIf*) _this)->GetIKEndEffector(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetFinalPos(HANDLE _this, HANDLE pos) {
	Vec3d arg01_ = *((Vec3d*) pos);
	try { ((CRReachControllerIf*) _this)->SetFinalPos((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetFinalVel(HANDLE _this, HANDLE vel) {
	Vec3d arg01_ = *((Vec3d*) vel);
	try { ((CRReachControllerIf*) _this)->SetFinalVel((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetViaTime(HANDLE _this, float time) {
	try { ((CRReachControllerIf*) _this)->SetViaTime(time); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetViaPos(HANDLE _this, HANDLE pos) {
	Vec3d arg01_ = *((Vec3d*) pos);
	try { ((CRReachControllerIf*) _this)->SetViaPos((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_EnableLookatMode(HANDLE _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((CRReachControllerIf*) _this)->EnableLookatMode((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_CRReachControllerIf_IsLookatMode(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((CRReachControllerIf*) _this)->IsLookatMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetNumUseHands(HANDLE _this, int n) {
	try { ((CRReachControllerIf*) _this)->SetNumUseHands(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_CRReachControllerIf_GetNumUseHands(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CRReachControllerIf*) _this)->GetNumUseHands(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetBaseJoint(HANDLE _this, int n, HANDLE jo) {
	try { ((CRReachControllerIf*) _this)->SetBaseJoint(n, (PHJointIf*) jo); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetAverageSpeed(HANDLE _this, double speed) {
	try { ((CRReachControllerIf*) _this)->SetAverageSpeed(speed); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_CRReachControllerIf_GetAverageSpeed(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((CRReachControllerIf*) _this)->GetAverageSpeed(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetMargin(HANDLE _this, double margin) {
	try { ((CRReachControllerIf*) _this)->SetMargin(margin); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetInnerMargin(HANDLE _this, double margin) {
	try { ((CRReachControllerIf*) _this)->SetInnerMargin(margin); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetWaitVel(HANDLE _this, double vel) {
	try { ((CRReachControllerIf*) _this)->SetWaitVel(vel); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetRestartVel(HANDLE _this, double vel) {
	try { ((CRReachControllerIf*) _this)->SetRestartVel(vel); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRReachControllerIf_GetTrajectory(HANDLE _this, float s) {
	Vec6d* _ptr = (Vec6d*) NULL;
	try { _ptr = new Vec6d(); (*_ptr) = ((CRReachControllerIf*) _this)->GetTrajectory(s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_CRReachControllerIf_GetReachTime(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CRReachControllerIf*) _this)->GetReachTime(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_CRReachControllerIf_GetTime(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CRReachControllerIf*) _this)->GetTime(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_Draw(HANDLE _this) {
	try { ((CRReachControllerIf*) _this)->Draw(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRReachControllerIf_SetOriControlCompleteTimeRatio(HANDLE _this, float oriTime) {
	try { ((CRReachControllerIf*) _this)->SetOriControlCompleteTimeRatio(oriTime); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRSdkIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRSdkIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRSdkIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRSdkIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRSdkIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CRSdkIf*) _this)) {
                (*((CRSdkIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CRSdkIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRSdkIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CRSdkIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRSdkIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CRSdkIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRSdkIf_CreateSdk() {
	CRSdkIf* _ptr = (CRSdkIf*) NULL;
	try { _ptr = (CRSdkIf*) CRSdkIf::CreateSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRSdkIf_GetSdk() {
	CRSdkIf* _ptr = (CRSdkIf*) NULL;
	try { _ptr = (CRSdkIf*) CRSdkIf::GetSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRSdkIf_CreateCreature(HANDLE _this, HANDLE ii, HANDLE desc) {
	CRCreatureIf* _ptr = (CRCreatureIf*) NULL;
	try { _ptr = (CRCreatureIf*) ((CRSdkIf*) _this)->CreateCreature((const IfInfo*) ii, (const CRCreatureDesc&) *((CRCreatureDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CRSdkIf_NCreatures(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CRSdkIf*) _this)->NCreatures(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRSdkIf_GetCreature(HANDLE _this, int index) {
	CRCreatureIf* _ptr = (CRCreatureIf*) NULL;
	try { _ptr = (CRCreatureIf*) ((CRSdkIf*) _this)->GetCreature(index); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRSdkIf_Step(HANDLE _this) {
	try { ((CRSdkIf*) _this)->Step(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRSdkIf_RegisterSdk() {
	try { CRSdkIf::RegisterSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRTouchSensorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRTouchSensorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRTouchSensorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRTouchSensorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRTouchSensorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CRTouchSensorIf*) _this)) {
                (*((CRTouchSensorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CRTouchSensorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRTouchSensorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CRTouchSensorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRTouchSensorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CRTouchSensorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CRTouchSensorIf_NContacts(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CRTouchSensorIf*) _this)->NContacts(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRTouchSensorIf_GetContact(HANDLE _this, int n) {
	CRContactInfo* _ptr = (CRContactInfo*) NULL;
	try { _ptr = new CRContactInfo(); (*_ptr) = ((CRTouchSensorIf*) _this)->GetContact(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRTouchSensorIf_Update(HANDLE _this) {
	try { ((CRTouchSensorIf*) _this)->Update(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CRVisualSensorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CRVisualSensorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CRVisualSensorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CRVisualSensorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CRVisualSensorIf*) _this)) {
                (*((CRVisualSensorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CRVisualSensorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CRVisualSensorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CRVisualSensorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CRVisualSensorIf_NVisibles(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CRVisualSensorIf*) _this)->NVisibles(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorIf_GetVisible(HANDLE _this, int n) {
	CRVisualInfo* _ptr = (CRVisualInfo*) NULL;
	try { _ptr = new CRVisualInfo(); (*_ptr) = ((CRVisualSensorIf*) _this)->GetVisible(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualSensorIf_Update(HANDLE _this) {
	try { ((CRVisualSensorIf*) _this)->Update(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualSensorIf_SetRange(HANDLE _this, HANDLE range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((CRVisualSensorIf*) _this)->SetRange((Vec2d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualSensorIf_SetCenterRange(HANDLE _this, HANDLE range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((CRVisualSensorIf*) _this)->SetCenterRange((Vec2d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualSensorIf_SetPose(HANDLE _this, HANDLE pose) {
	Posed arg01_ = *((Posed*) pose);
	try { ((CRVisualSensorIf*) _this)->SetPose((Posed) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CRVisualSensorIf_SetSolid(HANDLE _this, HANDLE solid) {
	try { ((CRVisualSensorIf*) _this)->SetSolid((PHSolidIf*) solid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorIf_GetRange(HANDLE _this) {
	Vec2d* _ptr = (Vec2d*) NULL;
	try { _ptr = new Vec2d(); (*_ptr) = ((CRVisualSensorIf*) _this)->GetRange(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorIf_GetCenterRange(HANDLE _this) {
	Vec2d* _ptr = (Vec2d*) NULL;
	try { _ptr = new Vec2d(); (*_ptr) = ((CRVisualSensorIf*) _this)->GetCenterRange(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorIf_GetPose(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((CRVisualSensorIf*) _this)->GetPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CRVisualSensorIf_GetSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((CRVisualSensorIf*) _this)->GetSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
}

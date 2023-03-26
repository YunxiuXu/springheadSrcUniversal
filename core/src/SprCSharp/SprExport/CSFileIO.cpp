#include <Springhead.h>
#include <Windows.h>
#include <sstream>
#include <SprFileIO.h>
#include <Framework/SprFWApp.h>
#include <Physics/SprPHJointMotor.h>
#include <Framework/SprFWEditor.h>
#include <Framework/SprFWOpObj.h>
#include <Framework/FWScene.h>
#include <../src/SprCSharp/SprExport/CSUtility.h>
using namespace Spr;
using namespace std;
extern "C" {
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileSprDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileSprDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileSprDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileSprDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileXDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileXDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileXDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileXDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileVRMLDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileVRMLDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileVRMLDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileVRMLDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileCOLLADADesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileCOLLADADesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileCOLLADADesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileCOLLADADesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileBinaryDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileBinaryDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileBinaryDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileBinaryDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_ImportDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new ImportDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_ImportDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (ImportDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_ImportDesc_get_path(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((ImportDesc*) _this)->path;
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
    __declspec(dllexport) void __cdecl Spr_ImportDesc_set_path(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((ImportDesc*) _this)->path = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_ImportDesc_FreeString_path(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FIFileIf*) _this)) {
                (*((FIFileIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_FIFileIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FIFileIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FIFileIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileIf_Load(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileIf*) _this)->Load((ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileIf_Save(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileIf*) _this)->Save((const ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FIFileIf_SetImport(HANDLE _this, HANDLE import) {
	try { ((FIFileIf*) _this)->SetImport((ImportIf*) import); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileIf_GetImport(HANDLE _this) {
	ImportIf* _ptr = (ImportIf*) NULL;
	try { _ptr = (ImportIf*) ((FIFileIf*) _this)->GetImport(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FIFileIf_SetDSTR(HANDLE _this, char f) {
	bool arg01_ = (f == 0) ? false : true;
	try { ((FIFileIf*) _this)->SetDSTR((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileSprIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileSprIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileSprIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileSprIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileSprIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FIFileSprIf*) _this)) {
                (*((FIFileSprIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_FIFileSprIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileSprIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FIFileSprIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileSprIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FIFileSprIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileSprIf_Load(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileSprIf*) _this)->Load((ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileSprIf_Save(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileSprIf*) _this)->Save((const ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileXIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileXIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileXIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileXIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileXIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FIFileXIf*) _this)) {
                (*((FIFileXIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_FIFileXIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileXIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FIFileXIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileXIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FIFileXIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileXIf_Load(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileXIf*) _this)->Load((ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileXIf_Save(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileXIf*) _this)->Save((const ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileVRMLIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileVRMLIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileVRMLIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileVRMLIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileVRMLIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FIFileVRMLIf*) _this)) {
                (*((FIFileVRMLIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_FIFileVRMLIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileVRMLIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FIFileVRMLIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileVRMLIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FIFileVRMLIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileVRMLIf_Load(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileVRMLIf*) _this)->Load((ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileVRMLIf_Save(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileVRMLIf*) _this)->Save((const ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileCOLLADAIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileCOLLADAIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileCOLLADAIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileCOLLADAIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileCOLLADAIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FIFileCOLLADAIf*) _this)) {
                (*((FIFileCOLLADAIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_FIFileCOLLADAIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileCOLLADAIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FIFileCOLLADAIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileCOLLADAIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FIFileCOLLADAIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileCOLLADAIf_Load(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileCOLLADAIf*) _this)->Load((ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileCOLLADAIf_Save(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileCOLLADAIf*) _this)->Save((const ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIFileBinaryIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIFileBinaryIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIFileBinaryIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIFileBinaryIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileBinaryIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FIFileBinaryIf*) _this)) {
                (*((FIFileBinaryIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_FIFileBinaryIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileBinaryIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FIFileBinaryIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIFileBinaryIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FIFileBinaryIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileBinaryIf_Load(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileBinaryIf*) _this)->Load((ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_FIFileBinaryIf_Save(HANDLE _this, HANDLE objs, HANDLE fn) {
	bool _val = (bool) NULL;
	try { _val = ((FIFileBinaryIf*) _this)->Save((const ObjectIfs&) *((ObjectIfs*) objs), (const char*) fn); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_ImportIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new ImportIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_ImportIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (ImportIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_ImportIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((ImportIf*) _this)) {
                (*((ImportIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_ImportIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_ImportIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((ImportIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_ImportIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ImportIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_ImportIf_SetLoadOnly(HANDLE _this, char on) {
	bool arg01_ = (on == 0) ? false : true;
	try { ((ImportIf*) _this)->SetLoadOnly((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_ImportIf_SetLoadOnly_1(HANDLE _this) {
	try { ((ImportIf*) _this)->SetLoadOnly(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FISdkIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FISdkIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FISdkIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FISdkIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FISdkIf*) _this)) {
                (*((FISdkIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_FISdkIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FISdkIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FISdkIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_CreateFileX(HANDLE _this) {
	FIFileXIf* _ptr = (FIFileXIf*) NULL;
	try { _ptr = (FIFileXIf*) ((FISdkIf*) _this)->CreateFileX(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_CreateFileSpr(HANDLE _this) {
	FIFileSprIf* _ptr = (FIFileSprIf*) NULL;
	try { _ptr = (FIFileSprIf*) ((FISdkIf*) _this)->CreateFileSpr(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_CreateFileVRML(HANDLE _this) {
	FIFileVRMLIf* _ptr = (FIFileVRMLIf*) NULL;
	try { _ptr = (FIFileVRMLIf*) ((FISdkIf*) _this)->CreateFileVRML(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_CreateFileCOLLADA(HANDLE _this) {
	FIFileCOLLADAIf* _ptr = (FIFileCOLLADAIf*) NULL;
	try { _ptr = (FIFileCOLLADAIf*) ((FISdkIf*) _this)->CreateFileCOLLADA(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_CreateFileBinary(HANDLE _this) {
	FIFileBinaryIf* _ptr = (FIFileBinaryIf*) NULL;
	try { _ptr = (FIFileBinaryIf*) ((FISdkIf*) _this)->CreateFileBinary(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_CreateFileFromExt(HANDLE _this, BSTR filename) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) filename, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) filename, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	FIFileIf* _ptr = (FIFileIf*) NULL;
	try { _ptr = (FIFileIf*) ((FISdkIf*) _this)->CreateFileFromExt((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_CreateImport(HANDLE _this) {
	ImportIf* _ptr = (ImportIf*) NULL;
	try { _ptr = (ImportIf*) ((FISdkIf*) _this)->CreateImport(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FISdkIf_CreateImport_1(HANDLE _this, HANDLE parent, BSTR path, HANDLE owner, HANDLE children) {
	string arg02_("");
	int lenMB2 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) path, -1, NULL, 0, NULL, NULL);
	if (lenMB2 > 0) {
	    LPSTR addr2 = (LPSTR) ::SysAllocStringLen(0, lenMB2);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) path, -1, addr2, lenMB2, NULL, NULL);
	    arg02_ = (string) addr2;
	}
	ImportIf* _ptr = (ImportIf*) NULL;
	try { _ptr = (ImportIf*) ((FISdkIf*) _this)->CreateImport((ImportIf*) parent, (string) arg02_, (ObjectIf*) owner, (const ObjectIfs&) *((ObjectIfs*) children)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_FISdkIf_DelChildObject(HANDLE _this, HANDLE o) {
	bool _val = (bool) NULL;
	try { _val = ((FISdkIf*) _this)->DelChildObject((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_FISdkIf_Clear(HANDLE _this) {
	try { ((FISdkIf*) _this)->Clear(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FISdkIf_RegisterSdk() {
	try { FISdkIf::RegisterSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_FIOpStateHandlerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new FIOpStateHandlerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_FIOpStateHandlerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (FIOpStateHandlerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIOpStateHandlerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((FIOpStateHandlerIf*) _this)) {
                (*((FIOpStateHandlerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_FIOpStateHandlerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIOpStateHandlerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((FIOpStateHandlerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_FIOpStateHandlerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) FIOpStateHandlerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_FIOpStateHandlerIf_saveToFile(HANDLE _this, HANDLE objif, HANDLE filename, float fileVersion) {
	try { ((FIOpStateHandlerIf*) _this)->saveToFile((ObjectIf*) objif, (char*) filename, fileVersion); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_FIOpStateHandlerIf_loadFromFile(HANDLE _this, HANDLE objif, HANDLE filename, char checkName, float fileVersion) {
	bool arg03_ = (checkName == 0) ? false : true;
	try { ((FIOpStateHandlerIf*) _this)->loadFromFile((ObjectIf*) objif, (char*) filename, (bool) arg03_, fileVersion); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
}

#include <Springhead.h>
#include <Windows.h>
#include <SprBase.h>
#include <Base/TMatrix.h>
#include <Collision/CDDetectorImp.h>
#include <FileIO/FIFileCOLLADAHandler.h>
#include <Foundation/UTSocket.h>
#include <Framework/SprFWOpObj.h>
#include <HumanInterface/HILeap.h>
#include <HumanInterface/HISpaceNavigator.h>
#include <Physics/SprPHJointMotor.h>
#include <Physics/PHConstraint.h>
#include <Physics/PHConstraintEngine.h>
#include <Physics/PHContactDetector.h>
#include <Physics/PHContactPoint.h>
#include <Physics/PHFemMeshNew.h>
#include <Physics/PHHapticEngine.h>
#include <Physics/PHJointLimit.h>
#include <vector>
#include <../src/SprCSharp/SprExport/CSUtility.h>
using namespace Spr;
using namespace std;
extern "C" {
    __declspec(dllexport) HANDLE __cdecl Spr_array_new_GRMeshFace(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new GRMeshFace[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_GRMeshFace(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (GRMeshFace*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_GRMeshFace(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            GRMeshFace* aryptr = (GRMeshFace*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_GRMeshFace(HANDLE ptr, int index, HANDLE value) {
        try {
            GRMeshFace* aryptr = (GRMeshFace*) ptr;
            aryptr[index] = *((GRMeshFace*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_new_PHOpGroupDesc(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new PHOpGroupDesc[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHOpGroupDesc(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHOpGroupDesc*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_PHOpGroupDesc(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            PHOpGroupDesc* aryptr = (PHOpGroupDesc*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHOpGroupDesc(HANDLE ptr, int index, HANDLE value) {
        try {
            PHOpGroupDesc* aryptr = (PHOpGroupDesc*) ptr;
            aryptr[index] = *((PHOpGroupDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_new_PHOpObjDesc(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new PHOpObjDesc[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHOpObjDesc(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHOpObjDesc*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_PHOpObjDesc(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            PHOpObjDesc* aryptr = (PHOpObjDesc*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHOpObjDesc(HANDLE ptr, int index, HANDLE value) {
        try {
            PHOpObjDesc* aryptr = (PHOpObjDesc*) ptr;
            aryptr[index] = *((PHOpObjDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_new_PHOpParticleDesc(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new PHOpParticleDesc[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHOpParticleDesc(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHOpParticleDesc*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_PHOpParticleDesc(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            PHOpParticleDesc* aryptr = (PHOpParticleDesc*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHOpParticleDesc(HANDLE ptr, int index, HANDLE value) {
        try {
            PHOpParticleDesc* aryptr = (PHOpParticleDesc*) ptr;
            aryptr[index] = *((PHOpParticleDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_new_PHRaycastHit(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new PHRaycastHit[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHRaycastHit(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHRaycastHit*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_PHRaycastHit(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            PHRaycastHit* aryptr = (PHRaycastHit*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHRaycastHit(HANDLE ptr, int index, HANDLE value) {
        try {
            PHRaycastHit* aryptr = (PHRaycastHit*) ptr;
            aryptr[index] = *((PHRaycastHit*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_new_Vec2f(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new Vec2f[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_Vec2f(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (Vec2f*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_Vec2f(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            Vec2f* aryptr = (Vec2f*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_Vec2f(HANDLE ptr, int index, HANDLE value) {
        try {
            Vec2f* aryptr = (Vec2f*) ptr;
            aryptr[index] = *((Vec2f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_new_Vec3f(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new Vec3f[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_Vec3f(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (Vec3f*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_Vec3f(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            Vec3f* aryptr = (Vec3f*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_Vec3f(HANDLE ptr, int index, HANDLE value) {
        try {
            Vec3f* aryptr = (Vec3f*) ptr;
            aryptr[index] = *((Vec3f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_new_Vec4f(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new Vec4f[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_Vec4f(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (Vec4f*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_Vec4f(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            Vec4f* aryptr = (Vec4f*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_Vec4f(HANDLE ptr, int index, HANDLE value) {
        try {
            Vec4f* aryptr = (Vec4f*) ptr;
            aryptr[index] = *((Vec4f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticPointerDesc_struct_get_PHHapticPointerDesc_HapticRenderMode(HANDLE ptr, int index) {
        int _val = 0;
        try {
            PHHapticPointerDesc::HapticRenderMode* aryptr = (PHHapticPointerDesc::HapticRenderMode*) ptr;
            _val = (int) aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticPointerDesc_struct_new_PHHapticPointerDesc_HapticRenderMode() {
        vector<PHHapticPointerDesc>* ptr = new vector<PHHapticPointerDesc>;
        return (HANDLE) ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerDesc_struct_set_PHHapticPointerDesc_HapticRenderMode(HANDLE ptr, int index, int value) {
        try {
            PHHapticPointerDesc::HapticRenderMode* aryptr = (PHHapticPointerDesc::HapticRenderMode*) ptr;
            aryptr[index] = (PHHapticPointerDesc::HapticRenderMode) value;
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_struct_get_PHOpHapticControllerDesc_HapticDOFType(HANDLE ptr, int index) {
        int _val = 0;
        try {
            PHOpHapticControllerDesc::HapticDOFType* aryptr = (PHOpHapticControllerDesc::HapticDOFType*) ptr;
            _val = (int) aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerDesc_struct_new_PHOpHapticControllerDesc_HapticDOFType() {
        vector<PHOpHapticControllerDesc>* ptr = new vector<PHOpHapticControllerDesc>;
        return (HANDLE) ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_struct_set_PHOpHapticControllerDesc_HapticDOFType(HANDLE ptr, int index, int value) {
        try {
            PHOpHapticControllerDesc::HapticDOFType* aryptr = (PHOpHapticControllerDesc::HapticDOFType*) ptr;
            aryptr[index] = (PHOpHapticControllerDesc::HapticDOFType) value;
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_GRAnimationKey() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<GRAnimationKey>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_GRAnimationKey(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<GRAnimationKey>* vec = (vector<GRAnimationKey>*) ptr;
        vector<GRAnimationKey>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_GRAnimationKey(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_GRAnimationKey(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            (*vecptr)[index] = *((GRAnimationKey*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_GRAnimationKey(HANDLE ptr) {
        int _val = 0;
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_GRAnimationKey(HANDLE ptr, HANDLE value) {
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            (*vecptr).push_back(*((GRAnimationKey*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_GRAnimationKey(HANDLE ptr) {
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_GRKey() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<GRKey>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_GRKey(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<GRKey>* vec = (vector<GRKey>*) ptr;
        vector<GRKey>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_GRKey(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_GRKey(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            (*vecptr)[index] = *((GRKey*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_GRKey(HANDLE ptr) {
        int _val = 0;
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_GRKey(HANDLE ptr, HANDLE value) {
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            (*vecptr).push_back(*((GRKey*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_GRKey(HANDLE ptr) {
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_GRMeshFace() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<GRMeshFace>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_GRMeshFace(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<GRMeshFace>* vec = (vector<GRMeshFace>*) ptr;
        vector<GRMeshFace>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_GRMeshFace(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<GRMeshFace>* vecptr = (vector<GRMeshFace>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_GRMeshFace(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<GRMeshFace>* vecptr = (vector<GRMeshFace>*) ptr;
            (*vecptr)[index] = *((GRMeshFace*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_GRMeshFace(HANDLE ptr) {
        int _val = 0;
        try {
            vector<GRMeshFace>* vecptr = (vector<GRMeshFace>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_GRMeshFace(HANDLE ptr, HANDLE value) {
        try {
            vector<GRMeshFace>* vecptr = (vector<GRMeshFace>*) ptr;
            (*vecptr).push_back(*((GRMeshFace*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_GRMeshFace(HANDLE ptr) {
        try {
            vector<GRMeshFace>* vecptr = (vector<GRMeshFace>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_HISpidarMotorDesc() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<HISpidarMotorDesc>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_HISpidarMotorDesc(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<HISpidarMotorDesc>* vec = (vector<HISpidarMotorDesc>*) ptr;
        vector<HISpidarMotorDesc>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_HISpidarMotorDesc(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_HISpidarMotorDesc(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            (*vecptr)[index] = *((HISpidarMotorDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_HISpidarMotorDesc(HANDLE ptr) {
        int _val = 0;
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_HISpidarMotorDesc(HANDLE ptr, HANDLE value) {
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            (*vecptr).push_back(*((HISpidarMotorDesc*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_HISpidarMotorDesc(HANDLE ptr) {
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_PHPathPoint() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<PHPathPoint>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_PHPathPoint(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<PHPathPoint>* vec = (vector<PHPathPoint>*) ptr;
        vector<PHPathPoint>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_PHPathPoint(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_PHPathPoint(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            (*vecptr)[index] = *((PHPathPoint*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_PHPathPoint(HANDLE ptr) {
        int _val = 0;
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_PHPathPoint(HANDLE ptr, HANDLE value) {
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            (*vecptr).push_back(*((PHPathPoint*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_PHPathPoint(HANDLE ptr) {
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_PHSplineLimitNode() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<PHSplineLimitNode>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_PHSplineLimitNode(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<PHSplineLimitNode>* vec = (vector<PHSplineLimitNode>*) ptr;
        vector<PHSplineLimitNode>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_PHSplineLimitNode(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_PHSplineLimitNode(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            (*vecptr)[index] = *((PHSplineLimitNode*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_PHSplineLimitNode(HANDLE ptr) {
        int _val = 0;
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_PHSplineLimitNode(HANDLE ptr, HANDLE value) {
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            (*vecptr).push_back(*((PHSplineLimitNode*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_PHSplineLimitNode(HANDLE ptr) {
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_Vec2f() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<Vec2f>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_Vec2f(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<Vec2f>* vec = (vector<Vec2f>*) ptr;
        vector<Vec2f>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_Vec2f(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_Vec2f(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            (*vecptr)[index] = *((Vec2f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_Vec2f(HANDLE ptr) {
        int _val = 0;
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_Vec2f(HANDLE ptr, HANDLE value) {
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            (*vecptr).push_back(*((Vec2f*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_Vec2f(HANDLE ptr) {
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_Vec3d() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<Vec3d>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_Vec3d(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<Vec3d>* vec = (vector<Vec3d>*) ptr;
        vector<Vec3d>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_Vec3d(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<Vec3d>* vecptr = (vector<Vec3d>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_Vec3d(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<Vec3d>* vecptr = (vector<Vec3d>*) ptr;
            (*vecptr)[index] = *((Vec3d*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_Vec3d(HANDLE ptr) {
        int _val = 0;
        try {
            vector<Vec3d>* vecptr = (vector<Vec3d>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_Vec3d(HANDLE ptr, HANDLE value) {
        try {
            vector<Vec3d>* vecptr = (vector<Vec3d>*) ptr;
            (*vecptr).push_back(*((Vec3d*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_Vec3d(HANDLE ptr) {
        try {
            vector<Vec3d>* vecptr = (vector<Vec3d>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_Vec3f() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<Vec3f>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_Vec3f(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<Vec3f>* vec = (vector<Vec3f>*) ptr;
        vector<Vec3f>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_Vec3f(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<Vec3f>* vecptr = (vector<Vec3f>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_Vec3f(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<Vec3f>* vecptr = (vector<Vec3f>*) ptr;
            (*vecptr)[index] = *((Vec3f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_Vec3f(HANDLE ptr) {
        int _val = 0;
        try {
            vector<Vec3f>* vecptr = (vector<Vec3f>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_Vec3f(HANDLE ptr, HANDLE value) {
        try {
            vector<Vec3f>* vecptr = (vector<Vec3f>*) ptr;
            (*vecptr).push_back(*((Vec3f*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_Vec3f(HANDLE ptr) {
        try {
            vector<Vec3f>* vecptr = (vector<Vec3f>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_Vec4f() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<Vec4f>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_Vec4f(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<Vec4f>* vec = (vector<Vec4f>*) ptr;
        vector<Vec4f>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_Vec4f(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<Vec4f>* vecptr = (vector<Vec4f>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_Vec4f(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<Vec4f>* vecptr = (vector<Vec4f>*) ptr;
            (*vecptr)[index] = *((Vec4f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_Vec4f(HANDLE ptr) {
        int _val = 0;
        try {
            vector<Vec4f>* vecptr = (vector<Vec4f>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_Vec4f(HANDLE ptr, HANDLE value) {
        try {
            vector<Vec4f>* vecptr = (vector<Vec4f>*) ptr;
            (*vecptr).push_back(*((Vec4f*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_Vec4f(HANDLE ptr) {
        try {
            vector<Vec4f>* vecptr = (vector<Vec4f>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
} 

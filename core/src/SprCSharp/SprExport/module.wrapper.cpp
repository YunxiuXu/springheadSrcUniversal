#include <Springhead.h>
#include <SprBase.h>
#include <Base/TMatrix.h>
#include <Collision/CDDetectorImp.h>
#include <Foundation/UTSocket.h>
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
    __declspec(dllexport) void* __cdecl Spr_array_new_GRMeshFace(int size) {
        void* _ptr = NULL;
        try { _ptr = new GRMeshFace[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_GRMeshFace(void* ptr) {
        if (ptr == NULL) return;
        try { delete[] (GRMeshFace*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_get_GRMeshFace(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            GRMeshFace* aryptr = (GRMeshFace*) ptr;
            _ptr = (void*) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_GRMeshFace(void* ptr, int index, void* value) {
        try {
            GRMeshFace* aryptr = (GRMeshFace*) ptr;
            aryptr[index] = *((GRMeshFace*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_new_PHOpGroupDesc(int size) {
        void* _ptr = NULL;
        try { _ptr = new PHOpGroupDesc[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHOpGroupDesc(void* ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHOpGroupDesc*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_get_PHOpGroupDesc(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            PHOpGroupDesc* aryptr = (PHOpGroupDesc*) ptr;
            _ptr = (void*) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHOpGroupDesc(void* ptr, int index, void* value) {
        try {
            PHOpGroupDesc* aryptr = (PHOpGroupDesc*) ptr;
            aryptr[index] = *((PHOpGroupDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_new_PHOpObjDesc(int size) {
        void* _ptr = NULL;
        try { _ptr = new PHOpObjDesc[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHOpObjDesc(void* ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHOpObjDesc*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_get_PHOpObjDesc(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            PHOpObjDesc* aryptr = (PHOpObjDesc*) ptr;
            _ptr = (void*) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHOpObjDesc(void* ptr, int index, void* value) {
        try {
            PHOpObjDesc* aryptr = (PHOpObjDesc*) ptr;
            aryptr[index] = *((PHOpObjDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_new_PHOpParticleDesc(int size) {
        void* _ptr = NULL;
        try { _ptr = new PHOpParticleDesc[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHOpParticleDesc(void* ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHOpParticleDesc*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_get_PHOpParticleDesc(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            PHOpParticleDesc* aryptr = (PHOpParticleDesc*) ptr;
            _ptr = (void*) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHOpParticleDesc(void* ptr, int index, void* value) {
        try {
            PHOpParticleDesc* aryptr = (PHOpParticleDesc*) ptr;
            aryptr[index] = *((PHOpParticleDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_new_PHRaycastHit(int size) {
        void* _ptr = NULL;
        try { _ptr = new PHRaycastHit[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHRaycastHit(void* ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHRaycastHit*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_get_PHRaycastHit(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            PHRaycastHit* aryptr = (PHRaycastHit*) ptr;
            _ptr = (void*) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHRaycastHit(void* ptr, int index, void* value) {
        try {
            PHRaycastHit* aryptr = (PHRaycastHit*) ptr;
            aryptr[index] = *((PHRaycastHit*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_new_Vec2f(int size) {
        void* _ptr = NULL;
        try { _ptr = new Vec2f[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_Vec2f(void* ptr) {
        if (ptr == NULL) return;
        try { delete[] (Vec2f*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_get_Vec2f(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            Vec2f* aryptr = (Vec2f*) ptr;
            _ptr = (void*) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_Vec2f(void* ptr, int index, void* value) {
        try {
            Vec2f* aryptr = (Vec2f*) ptr;
            aryptr[index] = *((Vec2f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_new_Vec3f(int size) {
        void* _ptr = NULL;
        try { _ptr = new Vec3f[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_Vec3f(void* ptr) {
        if (ptr == NULL) return;
        try { delete[] (Vec3f*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_get_Vec3f(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            Vec3f* aryptr = (Vec3f*) ptr;
            _ptr = (void*) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_Vec3f(void* ptr, int index, void* value) {
        try {
            Vec3f* aryptr = (Vec3f*) ptr;
            aryptr[index] = *((Vec3f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_new_Vec4f(int size) {
        void* _ptr = NULL;
        try { _ptr = new Vec4f[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_Vec4f(void* ptr) {
        if (ptr == NULL) return;
        try { delete[] (Vec4f*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_array_get_Vec4f(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            Vec4f* aryptr = (Vec4f*) ptr;
            _ptr = (void*) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_Vec4f(void* ptr, int index, void* value) {
        try {
            Vec4f* aryptr = (Vec4f*) ptr;
            aryptr[index] = *((Vec4f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticPointerDesc_struct_get_PHHapticPointerDesc_HapticRenderMode(void* ptr, int index) {
        int _val = 0;
        try {
            PHHapticPointerDesc::HapticRenderMode* aryptr = (PHHapticPointerDesc::HapticRenderMode*) ptr;
            _val = (int) aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_PHHapticPointerDesc_struct_new_PHHapticPointerDesc_HapticRenderMode() {
        vector<PHHapticPointerDesc>* ptr = new vector<PHHapticPointerDesc>;
        return (void*) ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerDesc_struct_set_PHHapticPointerDesc_HapticRenderMode(void* ptr, int index, int value) {
        try {
            PHHapticPointerDesc::HapticRenderMode* aryptr = (PHHapticPointerDesc::HapticRenderMode*) ptr;
            aryptr[index] = (PHHapticPointerDesc::HapticRenderMode) value;
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_struct_get_PHOpHapticControllerDesc_HapticDOFType(void* ptr, int index) {
        int _val = 0;
        try {
            PHOpHapticControllerDesc::HapticDOFType* aryptr = (PHOpHapticControllerDesc::HapticDOFType*) ptr;
            _val = (int) aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_PHOpHapticControllerDesc_struct_new_PHOpHapticControllerDesc_HapticDOFType() {
        vector<PHOpHapticControllerDesc>* ptr = new vector<PHOpHapticControllerDesc>;
        return (void*) ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_struct_set_PHOpHapticControllerDesc_HapticDOFType(void* ptr, int index, int value) {
        try {
            PHOpHapticControllerDesc::HapticDOFType* aryptr = (PHOpHapticControllerDesc::HapticDOFType*) ptr;
            aryptr[index] = (PHOpHapticControllerDesc::HapticDOFType) value;
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_vector_new_GRAnimationKey() {
        void* _ptr = NULL;
        try { _ptr = new vector<GRAnimationKey>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_GRAnimationKey(void* ptr) {
        if (ptr == NULL) return;
        vector<GRAnimationKey>* vec = (vector<GRAnimationKey>*) ptr;
        vector<GRAnimationKey>().swap(*vec);
    }
    __declspec(dllexport) void* __cdecl Spr_vector_get_GRAnimationKey(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            _ptr = (void*) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_GRAnimationKey(void* ptr, int index, void* value) {
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            (*vecptr)[index] = *((GRAnimationKey*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_GRAnimationKey(void* ptr) {
        int _val = 0;
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_GRAnimationKey(void* ptr, void* value) {
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            (*vecptr).push_back(*((GRAnimationKey*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_GRAnimationKey(void* ptr) {
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_vector_new_GRKey() {
        void* _ptr = NULL;
        try { _ptr = new vector<GRKey>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_GRKey(void* ptr) {
        if (ptr == NULL) return;
        vector<GRKey>* vec = (vector<GRKey>*) ptr;
        vector<GRKey>().swap(*vec);
    }
    __declspec(dllexport) void* __cdecl Spr_vector_get_GRKey(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            _ptr = (void*) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_GRKey(void* ptr, int index, void* value) {
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            (*vecptr)[index] = *((GRKey*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_GRKey(void* ptr) {
        int _val = 0;
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_GRKey(void* ptr, void* value) {
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            (*vecptr).push_back(*((GRKey*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_GRKey(void* ptr) {
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_vector_new_GRMeshFace() {
        void* _ptr = NULL;
        try { _ptr = new vector<GRMeshFace>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_GRMeshFace(void* ptr) {
        if (ptr == NULL) return;
        vector<GRMeshFace>* vec = (vector<GRMeshFace>*) ptr;
        vector<GRMeshFace>().swap(*vec);
    }
    __declspec(dllexport) void* __cdecl Spr_vector_get_GRMeshFace(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            vector<GRMeshFace>* vecptr = (vector<GRMeshFace>*) ptr;
            _ptr = (void*) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_GRMeshFace(void* ptr, int index, void* value) {
        try {
            vector<GRMeshFace>* vecptr = (vector<GRMeshFace>*) ptr;
            (*vecptr)[index] = *((GRMeshFace*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_GRMeshFace(void* ptr) {
        int _val = 0;
        try {
            vector<GRMeshFace>* vecptr = (vector<GRMeshFace>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_GRMeshFace(void* ptr, void* value) {
        try {
            vector<GRMeshFace>* vecptr = (vector<GRMeshFace>*) ptr;
            (*vecptr).push_back(*((GRMeshFace*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_GRMeshFace(void* ptr) {
        try {
            vector<GRMeshFace>* vecptr = (vector<GRMeshFace>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_vector_new_HISpidarMotorDesc() {
        void* _ptr = NULL;
        try { _ptr = new vector<HISpidarMotorDesc>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_HISpidarMotorDesc(void* ptr) {
        if (ptr == NULL) return;
        vector<HISpidarMotorDesc>* vec = (vector<HISpidarMotorDesc>*) ptr;
        vector<HISpidarMotorDesc>().swap(*vec);
    }
    __declspec(dllexport) void* __cdecl Spr_vector_get_HISpidarMotorDesc(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            _ptr = (void*) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_HISpidarMotorDesc(void* ptr, int index, void* value) {
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            (*vecptr)[index] = *((HISpidarMotorDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_HISpidarMotorDesc(void* ptr) {
        int _val = 0;
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_HISpidarMotorDesc(void* ptr, void* value) {
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            (*vecptr).push_back(*((HISpidarMotorDesc*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_HISpidarMotorDesc(void* ptr) {
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_vector_new_PHPathPoint() {
        void* _ptr = NULL;
        try { _ptr = new vector<PHPathPoint>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_PHPathPoint(void* ptr) {
        if (ptr == NULL) return;
        vector<PHPathPoint>* vec = (vector<PHPathPoint>*) ptr;
        vector<PHPathPoint>().swap(*vec);
    }
    __declspec(dllexport) void* __cdecl Spr_vector_get_PHPathPoint(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            _ptr = (void*) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_PHPathPoint(void* ptr, int index, void* value) {
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            (*vecptr)[index] = *((PHPathPoint*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_PHPathPoint(void* ptr) {
        int _val = 0;
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_PHPathPoint(void* ptr, void* value) {
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            (*vecptr).push_back(*((PHPathPoint*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_PHPathPoint(void* ptr) {
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_vector_new_PHSplineLimitNode() {
        void* _ptr = NULL;
        try { _ptr = new vector<PHSplineLimitNode>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_PHSplineLimitNode(void* ptr) {
        if (ptr == NULL) return;
        vector<PHSplineLimitNode>* vec = (vector<PHSplineLimitNode>*) ptr;
        vector<PHSplineLimitNode>().swap(*vec);
    }
    __declspec(dllexport) void* __cdecl Spr_vector_get_PHSplineLimitNode(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            _ptr = (void*) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_PHSplineLimitNode(void* ptr, int index, void* value) {
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            (*vecptr)[index] = *((PHSplineLimitNode*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_PHSplineLimitNode(void* ptr) {
        int _val = 0;
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_PHSplineLimitNode(void* ptr, void* value) {
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            (*vecptr).push_back(*((PHSplineLimitNode*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_PHSplineLimitNode(void* ptr) {
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_vector_new_Vec2f() {
        void* _ptr = NULL;
        try { _ptr = new vector<Vec2f>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_Vec2f(void* ptr) {
        if (ptr == NULL) return;
        vector<Vec2f>* vec = (vector<Vec2f>*) ptr;
        vector<Vec2f>().swap(*vec);
    }
    __declspec(dllexport) void* __cdecl Spr_vector_get_Vec2f(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            _ptr = (void*) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_Vec2f(void* ptr, int index, void* value) {
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            (*vecptr)[index] = *((Vec2f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_Vec2f(void* ptr) {
        int _val = 0;
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_Vec2f(void* ptr, void* value) {
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            (*vecptr).push_back(*((Vec2f*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_Vec2f(void* ptr) {
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_vector_new_Vec3d() {
        void* _ptr = NULL;
        try { _ptr = new vector<Vec3d>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_Vec3d(void* ptr) {
        if (ptr == NULL) return;
        vector<Vec3d>* vec = (vector<Vec3d>*) ptr;
        vector<Vec3d>().swap(*vec);
    }
    __declspec(dllexport) void* __cdecl Spr_vector_get_Vec3d(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            vector<Vec3d>* vecptr = (vector<Vec3d>*) ptr;
            _ptr = (void*) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_Vec3d(void* ptr, int index, void* value) {
        try {
            vector<Vec3d>* vecptr = (vector<Vec3d>*) ptr;
            (*vecptr)[index] = *((Vec3d*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_Vec3d(void* ptr) {
        int _val = 0;
        try {
            vector<Vec3d>* vecptr = (vector<Vec3d>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_Vec3d(void* ptr, void* value) {
        try {
            vector<Vec3d>* vecptr = (vector<Vec3d>*) ptr;
            (*vecptr).push_back(*((Vec3d*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_Vec3d(void* ptr) {
        try {
            vector<Vec3d>* vecptr = (vector<Vec3d>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_vector_new_Vec3f() {
        void* _ptr = NULL;
        try { _ptr = new vector<Vec3f>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_Vec3f(void* ptr) {
        if (ptr == NULL) return;
        vector<Vec3f>* vec = (vector<Vec3f>*) ptr;
        vector<Vec3f>().swap(*vec);
    }
    __declspec(dllexport) void* __cdecl Spr_vector_get_Vec3f(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            vector<Vec3f>* vecptr = (vector<Vec3f>*) ptr;
            _ptr = (void*) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_Vec3f(void* ptr, int index, void* value) {
        try {
            vector<Vec3f>* vecptr = (vector<Vec3f>*) ptr;
            (*vecptr)[index] = *((Vec3f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_Vec3f(void* ptr) {
        int _val = 0;
        try {
            vector<Vec3f>* vecptr = (vector<Vec3f>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_Vec3f(void* ptr, void* value) {
        try {
            vector<Vec3f>* vecptr = (vector<Vec3f>*) ptr;
            (*vecptr).push_back(*((Vec3f*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_Vec3f(void* ptr) {
        try {
            vector<Vec3f>* vecptr = (vector<Vec3f>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_vector_new_Vec4f() {
        void* _ptr = NULL;
        try { _ptr = new vector<Vec4f>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_Vec4f(void* ptr) {
        if (ptr == NULL) return;
        vector<Vec4f>* vec = (vector<Vec4f>*) ptr;
        vector<Vec4f>().swap(*vec);
    }
    __declspec(dllexport) void* __cdecl Spr_vector_get_Vec4f(void* ptr, int index) {
        void* _ptr = NULL;
        try {
            vector<Vec4f>* vecptr = (vector<Vec4f>*) ptr;
            _ptr = (void*) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_Vec4f(void* ptr, int index, void* value) {
        try {
            vector<Vec4f>* vecptr = (vector<Vec4f>*) ptr;
            (*vecptr)[index] = *((Vec4f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_Vec4f(void* ptr) {
        int _val = 0;
        try {
            vector<Vec4f>* vecptr = (vector<Vec4f>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_Vec4f(void* ptr, void* value) {
        try {
            vector<Vec4f>* vecptr = (vector<Vec4f>*) ptr;
            (*vecptr).push_back(*((Vec4f*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_Vec4f(void* ptr) {
        try {
            vector<Vec4f>* vecptr = (vector<Vec4f>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
} 

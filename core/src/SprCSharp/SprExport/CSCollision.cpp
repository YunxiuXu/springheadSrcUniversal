#include <Springhead.h>
#include <Windows.h>
#include <sstream>
#include <SprCollision.h>
#include <Framework/SprFWApp.h>
#include <Physics/SprPHJointMotor.h>
#include <Framework/SprFWEditor.h>
#include <Framework/SprFWOpObj.h>
#include <Framework/FWScene.h>
#include <../src/SprCSharp/SprExport/CSUtility.h>
using namespace Spr;
using namespace std;
extern "C" {
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHMaterial() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHMaterial(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHMaterial(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHMaterial*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_density(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).density; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_density(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).density = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_mu(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).mu; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_mu(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).mu = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_mu0(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).mu0; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_mu0(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).mu0 = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_e(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).e; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_e(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).e = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_rotationFriction(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).rotationFriction; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_rotationFriction(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).rotationFriction = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_spring(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).spring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_spring(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).spring = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_damper(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).damper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_damper(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).damper = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_reflexSpring(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).reflexSpring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_reflexSpring(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).reflexSpring = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_reflexDamper(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).reflexDamper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_reflexDamper(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).reflexDamper = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_frictionSpring(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).frictionSpring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_frictionSpring(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).frictionSpring = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_frictionDamper(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).frictionDamper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_frictionDamper(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).frictionDamper = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_vibA(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).vibA; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_vibA(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).vibA = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_vibB(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).vibB; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_vibB(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).vibB = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_vibW(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).vibW; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_vibW(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).vibW = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_vibT(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).vibT; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_vibT(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).vibT = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHMaterial_get_vibContact(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHMaterial*)_this)).vibContact; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_vibContact(HANDLE _this, char value) {
        try { (*((PHMaterial*)_this)).vibContact = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHMaterial_get_vibFric(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHMaterial*)_this)).vibFric; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_vibFric(HANDLE _this, char value) {
        try { (*((PHMaterial*)_this)).vibFric = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_timeVaryFrictionA(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).timeVaryFrictionA; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_timeVaryFrictionA(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).timeVaryFrictionA = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_timeVaryFrictionB(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).timeVaryFrictionB; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_timeVaryFrictionB(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).timeVaryFrictionB = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_timeVaryFrictionC(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).timeVaryFrictionC; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_timeVaryFrictionC(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).timeVaryFrictionC = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_frictionViscosity(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).frictionViscosity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_frictionViscosity(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).frictionViscosity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_stribeckVelocity(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).stribeckVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_stribeckVelocity(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).stribeckVelocity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHMaterial_get_stribeckmu(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHMaterial*)_this)).stribeckmu; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_stribeckmu(HANDLE _this, float value) {
        try { (*((PHMaterial*)_this)).stribeckmu = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_vector_addr_mus(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHMaterial*)_this)).mus; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_vector_set_mus(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHMaterial*)_this)).mus != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).mus;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_vector_addr_mu0s(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHMaterial*)_this)).mu0s; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_vector_set_mu0s(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHMaterial*)_this)).mu0s != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).mu0s;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_vector_addr_timeVaryFrictionAs(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHMaterial*)_this)).timeVaryFrictionAs; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_vector_set_timeVaryFrictionAs(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHMaterial*)_this)).timeVaryFrictionAs != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).timeVaryFrictionAs;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_vector_addr_timeVaryFrictionBs(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHMaterial*)_this)).timeVaryFrictionBs; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_vector_set_timeVaryFrictionBs(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHMaterial*)_this)).timeVaryFrictionBs != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).timeVaryFrictionBs;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_vector_addr_timeVaryFrictionDs(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHMaterial*)_this)).timeVaryFrictionDs; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_vector_set_timeVaryFrictionDs(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHMaterial*)_this)).timeVaryFrictionDs != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).timeVaryFrictionDs;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_vector_addr_timeVaryFrictionCs(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHMaterial*)_this)).timeVaryFrictionCs; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_vector_set_timeVaryFrictionCs(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHMaterial*)_this)).timeVaryFrictionCs != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).timeVaryFrictionCs;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_vector_addr_stribeckVelocitys(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHMaterial*)_this)).stribeckVelocitys; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_vector_set_stribeckVelocitys(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHMaterial*)_this)).stribeckVelocitys != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).stribeckVelocitys;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_vector_addr_stribeckmus(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHMaterial*)_this)).stribeckmus; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_vector_set_stribeckmus(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHMaterial*)_this)).stribeckmus != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).stribeckmus;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_vector_addr_c(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHMaterial*)_this)).c; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_vector_set_c(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHMaterial*)_this)).c != _ptr) {
                vector<double>* src = (vector<double>*) _ptr;
                vector<double>* dst = &(*((PHMaterial*)_this)).c;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_vector_addr_bristleK(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHMaterial*)_this)).bristleK; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_vector_set_bristleK(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHMaterial*)_this)).bristleK != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).bristleK;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHMaterial_get_velocityFieldMode(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHMaterial*)_this)).velocityFieldMode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_velocityFieldMode(HANDLE _this, int value) {
        try { (*((PHMaterial*)_this)).velocityFieldMode = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_addr_velocityFieldAxis(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHMaterial*)_this)->velocityFieldAxis; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_velocityFieldAxis(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHMaterial*)_this)->velocityFieldAxis) != _ptr) {
                ((PHMaterial*)_this)->velocityFieldAxis = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHMaterial_get_velocityFieldMagnitude(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHMaterial*)_this)).velocityFieldMagnitude; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHMaterial_set_velocityFieldMagnitude(HANDLE _this, double value) {
        try { (*((PHMaterial*)_this)).velocityFieldMagnitude = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMaterial_CalcVelocity(HANDLE _this, HANDLE pos, HANDLE normal) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHMaterial*) _this)->CalcVelocity((const Vec3d&) *((Vec3d*) pos), (const Vec3d&) *((Vec3d*) normal)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDShapeDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDShapeDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDShapeDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDShapeDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapeDesc_addr_material(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CDShapeDesc*)_this)->material; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeDesc_set_material(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CDShapeDesc*)_this)->material) != _ptr) {
                ((CDShapeDesc*)_this)->material = *((PHMaterial*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDConvexMeshDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDConvexMeshDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDConvexMeshDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDConvexMeshDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexMeshDesc_vector_get_vertices(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec3f>*) &((CDConvexMeshDesc*)_this)->vertices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDConvexMeshDesc_vector_set_vertices(HANDLE _this, HANDLE value) {
        try { ((CDConvexMeshDesc*)_this)->vertices = *((std::vector<Vec3f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDConvexMeshInterpolateDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDConvexMeshInterpolateDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDConvexMeshInterpolateDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDConvexMeshInterpolateDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDSphereDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDSphereDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDSphereDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDSphereDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDSphereDesc_get_radius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((CDSphereDesc*)_this)).radius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDSphereDesc_set_radius(HANDLE _this, float value) {
        try { (*((CDSphereDesc*)_this)).radius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDEllipsoidDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDEllipsoidDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDEllipsoidDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDEllipsoidDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDEllipsoidDesc_addr_radius(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CDEllipsoidDesc*)_this)->radius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDEllipsoidDesc_set_radius(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CDEllipsoidDesc*)_this)->radius) != _ptr) {
                ((CDEllipsoidDesc*)_this)->radius = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDCapsuleDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDCapsuleDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDCapsuleDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDCapsuleDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDCapsuleDesc_get_radius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((CDCapsuleDesc*)_this)).radius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDCapsuleDesc_set_radius(HANDLE _this, float value) {
        try { (*((CDCapsuleDesc*)_this)).radius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDCapsuleDesc_get_length(HANDLE _this) {
        float _val = 0;
        try { _val = (*((CDCapsuleDesc*)_this)).length; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDCapsuleDesc_set_length(HANDLE _this, float value) {
        try { (*((CDCapsuleDesc*)_this)).length = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDRoundConeDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDRoundConeDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDRoundConeDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDRoundConeDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDRoundConeDesc_addr_radius(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CDRoundConeDesc*)_this)->radius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDRoundConeDesc_set_radius(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CDRoundConeDesc*)_this)->radius) != _ptr) {
                ((CDRoundConeDesc*)_this)->radius = *((Vec2f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDRoundConeDesc_get_length(HANDLE _this) {
        float _val = 0;
        try { _val = (*((CDRoundConeDesc*)_this)).length; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDRoundConeDesc_set_length(HANDLE _this, float value) {
        try { (*((CDRoundConeDesc*)_this)).length = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDBoxDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDBoxDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDBoxDesc_2(HANDLE bs) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDBoxDesc(*((Vec3d*) bs)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDBoxDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDBoxDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDBoxDesc_addr_boxsize(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CDBoxDesc*)_this)->boxsize; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDBoxDesc_set_boxsize(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CDBoxDesc*)_this)->boxsize) != _ptr) {
                ((CDBoxDesc*)_this)->boxsize = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDShapePairState() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDShapePairState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDShapePairState(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDShapePairState*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapePairState_addr_normal(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CDShapePairState*)_this)->normal; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapePairState_set_normal(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CDShapePairState*)_this)->normal) != _ptr) {
                ((CDShapePairState*)_this)->normal = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_CDShapePairState_get_depth(HANDLE _this) {
        double _val = 0;
        try { _val = (*((CDShapePairState*)_this)).depth; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapePairState_set_depth(HANDLE _this, double value) {
        try { (*((CDShapePairState*)_this)).depth = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_CDShapePairState_get_lastContactCount(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((CDShapePairState*)_this)).lastContactCount; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapePairState_set_lastContactCount(HANDLE _this, unsigned int value) {
        try { (*((CDShapePairState*)_this)).lastContactCount = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDBounds() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDBounds(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDBounds_3(HANDLE min0, HANDLE max0) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDBounds(((const Vec3d&) min0), ((const Vec3d&) max0)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDBounds(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDBounds*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDBounds_addr_min(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CDBounds*)_this)->min; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDBounds_set_min(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CDBounds*)_this)->min) != _ptr) {
                ((CDBounds*)_this)->min = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDBounds_addr_max(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((CDBounds*)_this)->max; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDBounds_set_max(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((CDBounds*)_this)->max) != _ptr) {
                ((CDBounds*)_this)->max = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CDBounds_set(HANDLE _this, HANDLE min0, HANDLE max0) {
	try { ((CDBounds*) _this)->set((const Vec3d&) *((Vec3d*) min0), (const Vec3d&) *((Vec3d*) max0)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CDBounds_clamp(HANDLE _this, HANDLE pos) {
	try { ((CDBounds*) _this)->clamp((Vec3f&) *((Vec3f*) pos)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_CDBounds_isEmpty(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((CDBounds*) _this)->isEmpty(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_CDBounds_minimum(HANDLE _this, HANDLE self, HANDLE other) {
	try { ((CDBounds*) _this)->minimum((Vec3f&) *((Vec3f*) self), (Vec3f&) *((Vec3f*) other)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CDBounds_maximum(HANDLE _this, HANDLE self, HANDLE other) {
	try { ((CDBounds*) _this)->maximum((Vec3f&) *((Vec3f*) self), (Vec3f&) *((Vec3f*) other)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDSpatialHashTableDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDSpatialHashTableDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDSpatialHashTableDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDSpatialHashTableDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDShapeIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDShapeIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDShapeIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDShapeIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapeIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDShapeIf*) _this)) {
                (*((CDShapeIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapeIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDShapeIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDShapeIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetStaticFriction(HANDLE _this, float mu0) {
	try { ((CDShapeIf*) _this)->SetStaticFriction(mu0); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetStaticFriction(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetStaticFriction(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetDynamicFriction(HANDLE _this, float mu) {
	try { ((CDShapeIf*) _this)->SetDynamicFriction(mu); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetDynamicFriction(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetDynamicFriction(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetElasticity(HANDLE _this, float e) {
	try { ((CDShapeIf*) _this)->SetElasticity(e); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetElasticity(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetElasticity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetDensity(HANDLE _this, float d) {
	try { ((CDShapeIf*) _this)->SetDensity(d); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetDensity(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetDensity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetContactSpring(HANDLE _this, float K) {
	try { ((CDShapeIf*) _this)->SetContactSpring(K); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetContactSpring(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetContactSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetContactDamper(HANDLE _this, float D) {
	try { ((CDShapeIf*) _this)->SetContactDamper(D); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetContactDamper(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetContactDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetReflexSpring(HANDLE _this, float K) {
	try { ((CDShapeIf*) _this)->SetReflexSpring(K); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetReflexSpring(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetReflexSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetReflexDamper(HANDLE _this, float D) {
	try { ((CDShapeIf*) _this)->SetReflexDamper(D); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetReflexDamper(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetReflexDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetFrictionSpring(HANDLE _this, float K) {
	try { ((CDShapeIf*) _this)->SetFrictionSpring(K); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetFrictionSpring(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetFrictionSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetFrictionDamper(HANDLE _this, float D) {
	try { ((CDShapeIf*) _this)->SetFrictionDamper(D); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetFrictionDamper(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetFrictionDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetVibration(HANDLE _this, float vibA, float vibB, float vibW) {
	try { ((CDShapeIf*) _this)->SetVibration(vibA, vibB, vibW); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetVibA(HANDLE _this, float vibA) {
	try { ((CDShapeIf*) _this)->SetVibA(vibA); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetVibA(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetVibA(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetVibB(HANDLE _this, float vibB) {
	try { ((CDShapeIf*) _this)->SetVibB(vibB); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetVibB(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetVibB(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetVibW(HANDLE _this, float vibW) {
	try { ((CDShapeIf*) _this)->SetVibW(vibW); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetVibW(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetVibW(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetVibT(HANDLE _this, float vibT) {
	try { ((CDShapeIf*) _this)->SetVibT(vibT); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_GetVibT(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->GetVibT(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetVibContact(HANDLE _this, char vibContact) {
	bool arg01_ = (vibContact == 0) ? false : true;
	try { ((CDShapeIf*) _this)->SetVibContact((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_CDShapeIf_GetVibContact(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((CDShapeIf*) _this)->GetVibContact(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapeIf_GetMaterial(HANDLE _this) {
	PHMaterial* _ptr = (PHMaterial*) NULL;
	try { _ptr = new PHMaterial(); (*_ptr) = ((CDShapeIf*) _this)->GetMaterial(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_SetMaterial(HANDLE _this, HANDLE mat) {
	try { ((CDShapeIf*) _this)->SetMaterial((const PHMaterial&) *((PHMaterial*) mat)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDShapeIf_CalcVolume(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDShapeIf*) _this)->CalcVolume(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapeIf_CalcCenterOfMass(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((CDShapeIf*) _this)->CalcCenterOfMass(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapeIf_CalcMomentOfInertia(HANDLE _this) {
	Matrix3f* _ptr = (Matrix3f*) NULL;
	try { _ptr = new Matrix3f(); (*_ptr) = ((CDShapeIf*) _this)->CalcMomentOfInertia(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_CDShapeIf_IsInside(HANDLE _this, HANDLE p) {
	bool _val = (bool) NULL;
	try { _val = ((CDShapeIf*) _this)->IsInside((const Vec3f&) *((Vec3f*) p)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_CalcBBox(HANDLE _this, HANDLE bbmin, HANDLE bbmax, HANDLE pose) {
	try { ((CDShapeIf*) _this)->CalcBBox((Vec3f&) *((Vec3f*) bbmin), (Vec3f&) *((Vec3f*) bbmax), (const Posed&) *((Posed*) pose)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CDShapeIf_CalcBBox_1(HANDLE _this, HANDLE bbmin, HANDLE bbmax) {
	try { ((CDShapeIf*) _this)->CalcBBox((Vec3f&) *((Vec3f*) bbmin), (Vec3f&) *((Vec3f*) bbmax)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDConvexIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDConvexIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDConvexIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDConvexIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDConvexIf*) _this)) {
                (*((CDConvexIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDConvexIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDConvexIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDConvexIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_CDConvexIf_CurvatureRadius(HANDLE _this, HANDLE p) {
	Vec3d arg01_ = *((Vec3d*) p);
	double _val = (double) NULL;
	try { _val = ((CDConvexIf*) _this)->CurvatureRadius((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexIf_Normal(HANDLE _this, HANDLE p) {
	Vec3d arg01_ = *((Vec3d*) p);
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((CDConvexIf*) _this)->Normal((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDFaceIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDFaceIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDFaceIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDFaceIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDFaceIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDFaceIf*) _this)) {
                (*((CDFaceIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDFaceIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDFaceIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDFaceIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDFaceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDFaceIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CDFaceIf_NIndex(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CDFaceIf*) _this)->NIndex(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDFaceIf_GetIndices(HANDLE _this) {
	int* _ptr = (int*) NULL;
	try { _ptr = ((CDFaceIf*) _this)->GetIndices(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDQuadFaceIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDQuadFaceIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDQuadFaceIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDQuadFaceIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDQuadFaceIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDQuadFaceIf*) _this)) {
                (*((CDQuadFaceIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDQuadFaceIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDQuadFaceIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDQuadFaceIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDQuadFaceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDQuadFaceIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CDQuadFaceIf_NIndex(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CDQuadFaceIf*) _this)->NIndex(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDQuadFaceIf_GetIndices(HANDLE _this) {
	int* _ptr = (int*) NULL;
	try { _ptr = ((CDQuadFaceIf*) _this)->GetIndices(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDConvexMeshIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDConvexMeshIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDConvexMeshIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDConvexMeshIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexMeshIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDConvexMeshIf*) _this)) {
                (*((CDConvexMeshIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDConvexMeshIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexMeshIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDConvexMeshIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexMeshIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDConvexMeshIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexMeshIf_GetFace(HANDLE _this, int i) {
	CDFaceIf* _ptr = (CDFaceIf*) NULL;
	try { _ptr = (CDFaceIf*) ((CDConvexMeshIf*) _this)->GetFace(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CDConvexMeshIf_NFace(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CDConvexMeshIf*) _this)->NFace(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexMeshIf_GetVertices(HANDLE _this) {
        Vec3f* _ptr = (Vec3f*) NULL;
        try { Vec3f* _ary = (((CDConvexMeshIf*) _this)->GetVertices());
              int _size = 0;
              _ptr = new Vec3f[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_CDConvexMeshIf_NVertex(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((CDConvexMeshIf*) _this)->NVertex(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDConvexMeshInterpolateIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDConvexMeshInterpolateIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDConvexMeshInterpolateIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDConvexMeshInterpolateIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexMeshInterpolateIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDConvexMeshInterpolateIf*) _this)) {
                (*((CDConvexMeshInterpolateIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDConvexMeshInterpolateIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexMeshInterpolateIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDConvexMeshInterpolateIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDConvexMeshInterpolateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDConvexMeshInterpolateIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDSphereIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDSphereIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDSphereIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDSphereIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDSphereIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDSphereIf*) _this)) {
                (*((CDSphereIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDSphereIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDSphereIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDSphereIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDSphereIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDSphereIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_CDSphereIf_GetRadius(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDSphereIf*) _this)->GetRadius(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDSphereIf_SetRadius(HANDLE _this, float r) {
	try { ((CDSphereIf*) _this)->SetRadius(r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDEllipsoidIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDEllipsoidIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDEllipsoidIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDEllipsoidIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDEllipsoidIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDEllipsoidIf*) _this)) {
                (*((CDEllipsoidIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDEllipsoidIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDEllipsoidIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDEllipsoidIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDEllipsoidIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDEllipsoidIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDEllipsoidIf_GetRadius(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((CDEllipsoidIf*) _this)->GetRadius(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDEllipsoidIf_SetRadius(HANDLE _this, HANDLE r) {
	Vec3d arg01_ = *((Vec3d*) r);
	try { ((CDEllipsoidIf*) _this)->SetRadius((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDCapsuleIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDCapsuleIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDCapsuleIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDCapsuleIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDCapsuleIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDCapsuleIf*) _this)) {
                (*((CDCapsuleIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDCapsuleIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDCapsuleIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDCapsuleIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDCapsuleIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDCapsuleIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_CDCapsuleIf_GetRadius(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDCapsuleIf*) _this)->GetRadius(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDCapsuleIf_SetRadius(HANDLE _this, float r) {
	try { ((CDCapsuleIf*) _this)->SetRadius(r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_CDCapsuleIf_GetLength(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDCapsuleIf*) _this)->GetLength(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDCapsuleIf_SetLength(HANDLE _this, float l) {
	try { ((CDCapsuleIf*) _this)->SetLength(l); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDRoundConeIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDRoundConeIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDRoundConeIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDRoundConeIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDRoundConeIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDRoundConeIf*) _this)) {
                (*((CDRoundConeIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDRoundConeIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDRoundConeIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDRoundConeIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDRoundConeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDRoundConeIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDRoundConeIf_GetRadius(HANDLE _this) {
	Vec2f* _ptr = (Vec2f*) NULL;
	try { _ptr = new Vec2f(); (*_ptr) = ((CDRoundConeIf*) _this)->GetRadius(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_CDRoundConeIf_GetLength(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((CDRoundConeIf*) _this)->GetLength(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_CDRoundConeIf_SetRadius(HANDLE _this, HANDLE r) {
	Vec2f arg01_ = *((Vec2f*) r);
	try { ((CDRoundConeIf*) _this)->SetRadius((Vec2f) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CDRoundConeIf_SetLength(HANDLE _this, float l) {
	try { ((CDRoundConeIf*) _this)->SetLength(l); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_CDRoundConeIf_SetWidth(HANDLE _this, HANDLE r) {
	Vec2f arg01_ = *((Vec2f*) r);
	try { ((CDRoundConeIf*) _this)->SetWidth((Vec2f) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDBoxIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDBoxIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDBoxIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDBoxIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDBoxIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDBoxIf*) _this)) {
                (*((CDBoxIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDBoxIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDBoxIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDBoxIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDBoxIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDBoxIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDBoxIf_GetBoxSize(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((CDBoxIf*) _this)->GetBoxSize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDBoxIf_GetVertices(HANDLE _this) {
        Vec3f* _ptr = (Vec3f*) NULL;
        try { Vec3f* _ary = (((CDBoxIf*) _this)->GetVertices());
              int _size = 0;
              _ptr = new Vec3f[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDBoxIf_GetFace(HANDLE _this, int i) {
	CDFaceIf* _ptr = (CDFaceIf*) NULL;
	try { _ptr = (CDFaceIf*) ((CDBoxIf*) _this)->GetFace(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDBoxIf_SetBoxSize(HANDLE _this, HANDLE boxsize) {
	Vec3f arg01_ = *((Vec3f*) boxsize);
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((CDBoxIf*) _this)->SetBoxSize((Vec3f) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDShapePairIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDShapePairIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDShapePairIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDShapePairIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapePairIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDShapePairIf*) _this)) {
                (*((CDShapePairIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDShapePairIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapePairIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDShapePairIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapePairIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDShapePairIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapePairIf_GetShape(HANDLE _this, int i) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((CDShapePairIf*) _this)->GetShape(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapePairIf_GetShapePose(HANDLE _this, int i) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((CDShapePairIf*) _this)->GetShapePose(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapePairIf_GetClosestPointOnWorld(HANDLE _this, int i) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((CDShapePairIf*) _this)->GetClosestPointOnWorld(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDShapePairIf_GetNormal(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((CDShapePairIf*) _this)->GetNormal(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_CDSpatialHashTableIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new CDSpatialHashTableIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_CDSpatialHashTableIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (CDSpatialHashTableIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDSpatialHashTableIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDSpatialHashTableIf*) _this)) {
                (*((CDSpatialHashTableIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_CDSpatialHashTableIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDSpatialHashTableIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((CDSpatialHashTableIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_CDSpatialHashTableIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) CDSpatialHashTableIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_CDSpatialHashTableIf_Init(HANDLE _this, float cellSize, HANDLE bounds) {
	CDBounds arg02_ = *((CDBounds*) bounds);
	try { ((CDSpatialHashTableIf*) _this)->Init(cellSize, (CDBounds) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_CDSpatialHashTableIf_ReducedSelectPointsToAdd(HANDLE _this, HANDLE pCtr, float radius, int objInd, int pInd, int timestamp) {
	bool _val = (bool) NULL;
	try { _val = ((CDSpatialHashTableIf*) _this)->ReducedSelectPointsToAdd((Vec3f&) *((Vec3f*) pCtr), radius, objInd, pInd, timestamp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
}

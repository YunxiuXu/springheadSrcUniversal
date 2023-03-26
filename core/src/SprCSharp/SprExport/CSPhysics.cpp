#include <Springhead.h>
#include <Windows.h>
#include <sstream>
#include <SprPhysics.h>
#include <Framework/SprFWApp.h>
#include <Physics/SprPHJointMotor.h>
#include <Framework/SprFWEditor.h>
#include <Framework/SprFWOpObj.h>
#include <Framework/FWScene.h>
#include <../src/SprCSharp/SprExport/CSUtility.h>
using namespace Spr;
using namespace std;
extern "C" {
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHConstraintEngineDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHConstraintEngineDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHConstraintEngineDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHConstraintEngineDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHConstraintEngineDesc_get_method(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).method; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_method(HANDLE _this, int value) {
        try { (*((PHConstraintEngineDesc*)_this)).method = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHConstraintEngineDesc_get_numIter(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).numIter; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_numIter(HANDLE _this, int value) {
        try { (*((PHConstraintEngineDesc*)_this)).numIter = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHConstraintEngineDesc_get_numIterCorrection(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).numIterCorrection; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_numIterCorrection(HANDLE _this, int value) {
        try { (*((PHConstraintEngineDesc*)_this)).numIterCorrection = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHConstraintEngineDesc_get_numIterContactCorrection(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).numIterContactCorrection; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_numIterContactCorrection(HANDLE _this, int value) {
        try { (*((PHConstraintEngineDesc*)_this)).numIterContactCorrection = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineDesc_get_velCorrectionRate(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).velCorrectionRate; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_velCorrectionRate(HANDLE _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).velCorrectionRate = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineDesc_get_posCorrectionRate(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).posCorrectionRate; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_posCorrectionRate(HANDLE _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).posCorrectionRate = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineDesc_get_contactCorrectionRate(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).contactCorrectionRate; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_contactCorrectionRate(HANDLE _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).contactCorrectionRate = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineDesc_get_shrinkRate(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).shrinkRate; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_shrinkRate(HANDLE _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).shrinkRate = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineDesc_get_shrinkRateCorrection(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).shrinkRateCorrection; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_shrinkRateCorrection(HANDLE _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).shrinkRateCorrection = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineDesc_get_freezeThreshold(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).freezeThreshold; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_freezeThreshold(HANDLE _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).freezeThreshold = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineDesc_get_accelSOR(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).accelSOR; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_accelSOR(HANDLE _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).accelSOR = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineDesc_get_dfEps(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).dfEps; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_dfEps(HANDLE _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).dfEps = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineDesc_get_regularization(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).regularization; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_regularization(HANDLE _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).regularization = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHConstraintEngineDesc_get_bSaveConstraints(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHConstraintEngineDesc*)_this)).bSaveConstraints; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_bSaveConstraints(HANDLE _this, char value) {
        try { (*((PHConstraintEngineDesc*)_this)).bSaveConstraints = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHConstraintEngineDesc_get_bUpdateAllState(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHConstraintEngineDesc*)_this)).bUpdateAllState; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_bUpdateAllState(HANDLE _this, char value) {
        try { (*((PHConstraintEngineDesc*)_this)).bUpdateAllState = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHConstraintEngineDesc_get_bUseContactSurface(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHConstraintEngineDesc*)_this)).bUseContactSurface; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_bUseContactSurface(HANDLE _this, char value) {
        try { (*((PHConstraintEngineDesc*)_this)).bUseContactSurface = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHConstraintEngineDesc_get_bReport(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHConstraintEngineDesc*)_this)).bReport; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineDesc_set_bReport(HANDLE _this, char value) {
        try { (*((PHConstraintEngineDesc*)_this)).bReport = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKEngineDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKEngineDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKEngineDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKEngineDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) size_t __cdecl Spr_PHIKEngineDesc_get_numIter(HANDLE _this) {
        size_t _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).numIter; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineDesc_set_numIter(HANDLE _this, size_t value) {
        try { (*((PHIKEngineDesc*)_this)).numIter = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEngineDesc_get_maxVel(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).maxVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineDesc_set_maxVel(HANDLE _this, double value) {
        try { (*((PHIKEngineDesc*)_this)).maxVel = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEngineDesc_get_maxAngVel(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).maxAngVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineDesc_set_maxAngVel(HANDLE _this, double value) {
        try { (*((PHIKEngineDesc*)_this)).maxAngVel = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEngineDesc_get_maxActVel(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).maxActVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineDesc_set_maxActVel(HANDLE _this, double value) {
        try { (*((PHIKEngineDesc*)_this)).maxActVel = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEngineDesc_get_regularizeParam(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).regularizeParam; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineDesc_set_regularizeParam(HANDLE _this, double value) {
        try { (*((PHIKEngineDesc*)_this)).regularizeParam = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEngineDesc_get_regularizeParam2(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).regularizeParam2; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineDesc_set_regularizeParam2(HANDLE _this, double value) {
        try { (*((PHIKEngineDesc*)_this)).regularizeParam2 = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHIKEngineDesc_get_regularizeMode(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).regularizeMode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineDesc_set_regularizeMode(HANDLE _this, int value) {
        try { (*((PHIKEngineDesc*)_this)).regularizeMode = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHIKEngineDesc_get_iterGaussSeidel(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).iterGaussSeidel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineDesc_set_iterGaussSeidel(HANDLE _this, int value) {
        try { (*((PHIKEngineDesc*)_this)).iterGaussSeidel = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHIKEngineDesc_get_solverMode(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).solverMode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineDesc_set_solverMode(HANDLE _this, int value) {
        try { (*((PHIKEngineDesc*)_this)).solverMode = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemMeshState() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemMeshState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemMeshState(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemMeshState*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemMeshDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemMeshDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemMeshDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemMeshDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshDesc_vector_get_vertices(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec3d>*) &((PHFemMeshDesc*)_this)->vertices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshDesc_vector_set_vertices(HANDLE _this, HANDLE value) {
        try { ((PHFemMeshDesc*)_this)->vertices = *((std::vector<Vec3d>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshDesc_vector_addr_tets(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHFemMeshDesc*)_this)).tets; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshDesc_vector_set_tets(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHFemMeshDesc*)_this)).tets != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHFemMeshDesc*)_this)).tets;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshDesc_vector_addr_faces(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHFemMeshDesc*)_this)).faces; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshDesc_vector_set_faces(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHFemMeshDesc*)_this)).faces != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHFemMeshDesc*)_this)).faces;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshDesc_Init(HANDLE _this) {
	try { ((PHFemMeshDesc*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemMeshThermoDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemMeshThermoDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemMeshThermoDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemMeshThermoDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoDesc_get_rho(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).rho; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoDesc_set_rho(HANDLE _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).rho = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoDesc_get_thConduct(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).thConduct; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoDesc_set_thConduct(HANDLE _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).thConduct = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoDesc_get_thConduct_x(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).thConduct_x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoDesc_set_thConduct_x(HANDLE _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).thConduct_x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoDesc_get_thConduct_y(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).thConduct_y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoDesc_set_thConduct_y(HANDLE _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).thConduct_y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoDesc_get_thConduct_z(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).thConduct_z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoDesc_set_thConduct_z(HANDLE _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).thConduct_z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoDesc_get_heatTrans(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).heatTrans; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoDesc_set_heatTrans(HANDLE _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).heatTrans = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoDesc_get_specificHeat(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).specificHeat; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoDesc_set_specificHeat(HANDLE _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).specificHeat = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoDesc_get_radiantHeat(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).radiantHeat; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoDesc_set_radiantHeat(HANDLE _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).radiantHeat = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoDesc_get_initial_temp(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).initial_temp; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoDesc_set_initial_temp(HANDLE _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).initial_temp = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoDesc_Init(HANDLE _this) {
	try { ((PHFemMeshThermoDesc*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemMeshNewState() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemMeshNewState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemMeshNewState(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemMeshNewState*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemMeshNewDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemMeshNewDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemMeshNewDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemMeshNewDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewDesc_vector_get_vertices(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec3d>*) &((PHFemMeshNewDesc*)_this)->vertices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshNewDesc_vector_set_vertices(HANDLE _this, HANDLE value) {
        try { ((PHFemMeshNewDesc*)_this)->vertices = *((std::vector<Vec3d>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewDesc_vector_addr_tets(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHFemMeshNewDesc*)_this)).tets; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshNewDesc_vector_set_tets(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHFemMeshNewDesc*)_this)).tets != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHFemMeshNewDesc*)_this)).tets;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewDesc_vector_addr_faces(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHFemMeshNewDesc*)_this)).faces; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshNewDesc_vector_set_faces(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHFemMeshNewDesc*)_this)).faces != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHFemMeshNewDesc*)_this)).faces;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHFemMeshNewDesc_get_spheric(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHFemMeshNewDesc*)_this)).spheric; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshNewDesc_set_spheric(HANDLE _this, char value) {
        try { (*((PHFemMeshNewDesc*)_this)).spheric = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemBaseDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemBaseDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemBaseDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemBaseDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemVibrationDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemVibrationDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemVibrationDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemVibrationDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationDesc_get_young(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemVibrationDesc*)_this)).young; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationDesc_set_young(HANDLE _this, double value) {
        try { (*((PHFemVibrationDesc*)_this)).young = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationDesc_get_poisson(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemVibrationDesc*)_this)).poisson; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationDesc_set_poisson(HANDLE _this, double value) {
        try { (*((PHFemVibrationDesc*)_this)).poisson = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationDesc_get_density(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemVibrationDesc*)_this)).density; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationDesc_set_density(HANDLE _this, double value) {
        try { (*((PHFemVibrationDesc*)_this)).density = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationDesc_get_alpha(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemVibrationDesc*)_this)).alpha; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationDesc_set_alpha(HANDLE _this, double value) {
        try { (*((PHFemVibrationDesc*)_this)).alpha = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationDesc_get_beta(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemVibrationDesc*)_this)).beta; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationDesc_set_beta(HANDLE _this, double value) {
        try { (*((PHFemVibrationDesc*)_this)).beta = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemVibrationDesc_vector_addr_fixedVertices(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHFemVibrationDesc*)_this)).fixedVertices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationDesc_vector_set_fixedVertices(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHFemVibrationDesc*)_this)).fixedVertices != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHFemVibrationDesc*)_this)).fixedVertices;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemThermoDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemThermoDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemThermoDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemThermoDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoDesc_get_rho(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).rho; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoDesc_set_rho(HANDLE _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).rho = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoDesc_get_heatTrans(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).heatTrans; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoDesc_set_heatTrans(HANDLE _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).heatTrans = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoDesc_get_specificHeat(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).specificHeat; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoDesc_set_specificHeat(HANDLE _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).specificHeat = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoDesc_get_radiantHeat(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).radiantHeat; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoDesc_set_radiantHeat(HANDLE _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).radiantHeat = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoDesc_get_initial_temp(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).initial_temp; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoDesc_set_initial_temp(HANDLE _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).initial_temp = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoDesc_get_weekPow_full(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).weekPow_full; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoDesc_set_weekPow_full(HANDLE _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).weekPow_full = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoDesc_Init(HANDLE _this) {
	try { ((PHFemThermoDesc*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemPorousWOMoveDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemPorousWOMoveDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemPorousWOMoveDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemPorousWOMoveDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_wDiffAir(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).wDiffAir; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_wDiffAir(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).wDiffAir = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_K(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).K; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_K(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).K = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_kc(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).kc; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_kc(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).kc = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_kp(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).kp; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_kp(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).kp = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_alpha(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).alpha; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_alpha(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).alpha = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_gamma(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).gamma; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_gamma(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).gamma = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_rhoWater(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).rhoWater; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_rhoWater(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).rhoWater = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_rhoOil(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).rhoOil; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_rhoOil(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).rhoOil = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_rhowInit(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).rhowInit; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_rhowInit(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).rhowInit = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_rhooInit(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).rhooInit; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_rhooInit(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).rhooInit = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_evapoRate(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).evapoRate; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_evapoRate(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).evapoRate = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_denatTemp(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).denatTemp; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_denatTemp(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).denatTemp = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_boundWaterRatio(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).boundWaterRatio; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_boundWaterRatio(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).boundWaterRatio = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_equilWaterCont(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).equilWaterCont; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_equilWaterCont(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).equilWaterCont = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_limitWaterCont(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).limitWaterCont; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_limitWaterCont(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).limitWaterCont = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_boundaryThick(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).boundaryThick; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_boundaryThick(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).boundaryThick = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_initMassAll(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).initMassAll; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_initMassAll(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).initMassAll = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_initWaterRatio(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).initWaterRatio; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_initWaterRatio(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).initWaterRatio = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_initOilRatio(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).initOilRatio; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_initOilRatio(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).initOilRatio = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveDesc_get_shrinkageRatio(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).shrinkageRatio; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_shrinkageRatio(HANDLE _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).shrinkageRatio = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemPorousWOMoveDesc_addr_top(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHFemPorousWOMoveDesc*)_this)->top; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_top(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHFemPorousWOMoveDesc*)_this)->top) != _ptr) {
                ((PHFemPorousWOMoveDesc*)_this)->top = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemPorousWOMoveDesc_addr_center(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHFemPorousWOMoveDesc*)_this)->center; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_center(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHFemPorousWOMoveDesc*)_this)->center) != _ptr) {
                ((PHFemPorousWOMoveDesc*)_this)->center = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemPorousWOMoveDesc_addr_bottom(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHFemPorousWOMoveDesc*)_this)->bottom; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_set_bottom(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHFemPorousWOMoveDesc*)_this)->bottom) != _ptr) {
                ((PHFemPorousWOMoveDesc*)_this)->bottom = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveDesc_Init(HANDLE _this) {
	try { ((PHFemPorousWOMoveDesc*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFrameDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFrameDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFrameDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFrameDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFrameDesc_addr_pose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHFrameDesc*)_this)->pose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFrameDesc_set_pose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHFrameDesc*)_this)->pose) != _ptr) {
                ((PHFrameDesc*)_this)->pose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSolidState() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSolidState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSolidState(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSolidState*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidState_addr_velocity(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSolidState*)_this)->velocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidState_set_velocity(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSolidState*)_this)->velocity) != _ptr) {
                ((PHSolidState*)_this)->velocity = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidState_addr_angVelocity(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSolidState*)_this)->angVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidState_set_angVelocity(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSolidState*)_this)->angVelocity) != _ptr) {
                ((PHSolidState*)_this)->angVelocity = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidState_addr_pose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSolidState*)_this)->pose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidState_set_pose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSolidState*)_this)->pose) != _ptr) {
                ((PHSolidState*)_this)->pose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSolidDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSolidDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSolidDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSolidDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSolidDesc_get_mass(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSolidDesc*)_this)).mass; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidDesc_set_mass(HANDLE _this, double value) {
        try { (*((PHSolidDesc*)_this)).mass = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidDesc_addr_inertia(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSolidDesc*)_this)->inertia; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidDesc_set_inertia(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSolidDesc*)_this)->inertia) != _ptr) {
                ((PHSolidDesc*)_this)->inertia = *((Matrix3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidDesc_addr_center(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSolidDesc*)_this)->center; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidDesc_set_center(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSolidDesc*)_this)->center) != _ptr) {
                ((PHSolidDesc*)_this)->center = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSolidDesc_get_dynamical(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHSolidDesc*)_this)).dynamical; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidDesc_set_dynamical(HANDLE _this, char value) {
        try { (*((PHSolidDesc*)_this)).dynamical = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSolidDesc_get_stationary(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHSolidDesc*)_this)).stationary; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidDesc_set_stationary(HANDLE _this, char value) {
        try { (*((PHSolidDesc*)_this)).stationary = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidDesc_Init(HANDLE _this) {
	try { ((PHSolidDesc*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHCollisionListener() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHCollisionListener(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHCollisionListener(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHCollisionListener*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHCollisionListener_OnDetect(HANDLE _this, HANDLE sop, HANDLE shp, unsigned int ct, double dt) {
	try { ((PHCollisionListener*) _this)->OnDetect((PHSolidPairIf*) sop, (CDShapePairIf*) shp, ct, dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHCollisionListener_OnContDetect(HANDLE _this, HANDLE sop, HANDLE shp, unsigned int ct, double dt) {
	try { ((PHCollisionListener*) _this)->OnContDetect((PHSolidPairIf*) sop, (CDShapePairIf*) shp, ct, dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHapticPointerDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHapticPointerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHapticPointerDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHapticPointerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) PHHapticPointerDesc::HapticRenderMode __cdecl Spr_PHHapticPointerDesc_get_renderMode(HANDLE _this) {
        PHHapticPointerDesc::HapticRenderMode _val = (PHHapticPointerDesc::HapticRenderMode) 0;
        try { _val = (*((PHHapticPointerDesc*)_this)).renderMode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerDesc_set_renderMode(HANDLE _this, int value) {
        try { (*((PHHapticPointerDesc*)_this)).renderMode = (PHHapticPointerDesc::HapticRenderMode) value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHapticEngineDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHapticEngineDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHapticEngineDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHapticEngineDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKEndEffectorState() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKEndEffectorState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKEndEffectorState(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKEndEffectorState*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorState_addr_solidTempPose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorState*)_this)->solidTempPose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorState_set_solidTempPose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorState*)_this)->solidTempPose) != _ptr) {
                ((PHIKEndEffectorState*)_this)->solidTempPose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKEndEffectorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKEndEffectorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKEndEffectorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKEndEffectorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHIKEndEffectorDesc_get_bEnabled(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKEndEffectorDesc*)_this)).bEnabled; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_bEnabled(HANDLE _this, char value) {
        try { (*((PHIKEndEffectorDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHIKEndEffectorDesc_get_bPosition(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKEndEffectorDesc*)_this)).bPosition; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_bPosition(HANDLE _this, char value) {
        try { (*((PHIKEndEffectorDesc*)_this)).bPosition = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHIKEndEffectorDesc_get_bOrientation(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKEndEffectorDesc*)_this)).bOrientation; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_bOrientation(HANDLE _this, char value) {
        try { (*((PHIKEndEffectorDesc*)_this)).bOrientation = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHIKEndEffectorDesc_get_oriCtlMode(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHIKEndEffectorDesc*)_this)).oriCtlMode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_oriCtlMode(HANDLE _this, int value) {
        try { (*((PHIKEndEffectorDesc*)_this)).oriCtlMode = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHIKEndEffectorDesc_get_bForce(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKEndEffectorDesc*)_this)).bForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_bForce(HANDLE _this, char value) {
        try { (*((PHIKEndEffectorDesc*)_this)).bForce = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHIKEndEffectorDesc_get_bTorque(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKEndEffectorDesc*)_this)).bTorque; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_bTorque(HANDLE _this, char value) {
        try { (*((PHIKEndEffectorDesc*)_this)).bTorque = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEndEffectorDesc_get_positionPriority(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKEndEffectorDesc*)_this)).positionPriority; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_positionPriority(HANDLE _this, double value) {
        try { (*((PHIKEndEffectorDesc*)_this)).positionPriority = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEndEffectorDesc_get_orientationPriority(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKEndEffectorDesc*)_this)).orientationPriority; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_orientationPriority(HANDLE _this, double value) {
        try { (*((PHIKEndEffectorDesc*)_this)).orientationPriority = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEndEffectorDesc_get_forcePriority(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKEndEffectorDesc*)_this)).forcePriority; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_forcePriority(HANDLE _this, double value) {
        try { (*((PHIKEndEffectorDesc*)_this)).forcePriority = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEndEffectorDesc_get_torquePriority(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKEndEffectorDesc*)_this)).torquePriority; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_torquePriority(HANDLE _this, double value) {
        try { (*((PHIKEndEffectorDesc*)_this)).torquePriority = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetPosition(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetPosition; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetPosition(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetPosition) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetPosition = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetVelocity(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetVelocity(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetVelocity) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetVelocity = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetLocalPosition(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetLocalPosition; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetLocalPosition(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetLocalPosition) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetLocalPosition = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetLocalDirection(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetLocalDirection; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetLocalDirection(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetLocalDirection) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetLocalDirection = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetOrientation(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetOrientation; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetOrientation(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetOrientation) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetOrientation = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetDirection(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetDirection; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetDirection(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetDirection) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetDirection = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetLookat(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetLookat; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetLookat(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetLookat) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetLookat = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetAngVel(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetAngVel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetAngVel(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetAngVel) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetAngVel = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetForce(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetForce(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetForce) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetForce = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetForceWorkingPoint(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetForceWorkingPoint; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetForceWorkingPoint(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetForceWorkingPoint) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetForceWorkingPoint = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorDesc_addr_targetTorque(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetTorque; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorDesc_set_targetTorque(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetTorque) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetTorque = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKActuatorState() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKActuatorState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKActuatorState(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKActuatorState*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorState_addr_solidTempPose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKActuatorState*)_this)->solidTempPose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorState_set_solidTempPose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKActuatorState*)_this)->solidTempPose) != _ptr) {
                ((PHIKActuatorState*)_this)->solidTempPose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorState_addr_jointTempOri(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKActuatorState*)_this)->jointTempOri; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorState_set_jointTempOri(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKActuatorState*)_this)->jointTempOri) != _ptr) {
                ((PHIKActuatorState*)_this)->jointTempOri = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorState_addr_jointTempOriIntp(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKActuatorState*)_this)->jointTempOriIntp; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorState_set_jointTempOriIntp(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKActuatorState*)_this)->jointTempOriIntp) != _ptr) {
                ((PHIKActuatorState*)_this)->jointTempOriIntp = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKActuatorState_get_jointTempAngle(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKActuatorState*)_this)).jointTempAngle; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorState_set_jointTempAngle(HANDLE _this, double value) {
        try { (*((PHIKActuatorState*)_this)).jointTempAngle = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKActuatorState_get_jointTempAngleIntp(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKActuatorState*)_this)).jointTempAngleIntp; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorState_set_jointTempAngleIntp(HANDLE _this, double value) {
        try { (*((PHIKActuatorState*)_this)).jointTempAngleIntp = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorState_addr_solidPullbackPose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKActuatorState*)_this)->solidPullbackPose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorState_set_solidPullbackPose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKActuatorState*)_this)->solidPullbackPose) != _ptr) {
                ((PHIKActuatorState*)_this)->solidPullbackPose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorState_addr_jointTempPose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKActuatorState*)_this)->jointTempPose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorState_set_jointTempPose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKActuatorState*)_this)->jointTempPose) != _ptr) {
                ((PHIKActuatorState*)_this)->jointTempPose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKActuatorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKActuatorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKActuatorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKActuatorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHIKActuatorDesc_get_bEnabled(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKActuatorDesc*)_this)).bEnabled; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorDesc_set_bEnabled(HANDLE _this, char value) {
        try { (*((PHIKActuatorDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHIKActuatorDesc_get_bias(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHIKActuatorDesc*)_this)).bias; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorDesc_set_bias(HANDLE _this, float value) {
        try { (*((PHIKActuatorDesc*)_this)).bias = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKActuatorDesc_get_pullbackRate(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKActuatorDesc*)_this)).pullbackRate; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorDesc_set_pullbackRate(HANDLE _this, double value) {
        try { (*((PHIKActuatorDesc*)_this)).pullbackRate = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKBallActuatorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKBallActuatorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKBallActuatorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKBallActuatorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKBallActuatorDesc_addr_pullbackTarget(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKBallActuatorDesc*)_this)->pullbackTarget; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKBallActuatorDesc_set_pullbackTarget(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKBallActuatorDesc*)_this)->pullbackTarget) != _ptr) {
                ((PHIKBallActuatorDesc*)_this)->pullbackTarget = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKHingeActuatorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKHingeActuatorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKHingeActuatorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKHingeActuatorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKHingeActuatorDesc_get_pullbackTarget(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHIKHingeActuatorDesc*)_this)).pullbackTarget; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKHingeActuatorDesc_set_pullbackTarget(HANDLE _this, double value) {
        try { (*((PHIKHingeActuatorDesc*)_this)).pullbackTarget = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKSpringActuatorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKSpringActuatorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKSpringActuatorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKSpringActuatorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKSpringActuatorDesc_addr_pullbackTarget(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHIKSpringActuatorDesc*)_this)->pullbackTarget; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKSpringActuatorDesc_set_pullbackTarget(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHIKSpringActuatorDesc*)_this)->pullbackTarget) != _ptr) {
                ((PHIKSpringActuatorDesc*)_this)->pullbackTarget = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHConstraintDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHConstraintDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHConstraintDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHConstraintDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHConstraintDesc_get_bEnabled(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHConstraintDesc*)_this)).bEnabled; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintDesc_set_bEnabled(HANDLE _this, char value) {
        try { (*((PHConstraintDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintDesc_addr_poseSocket(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHConstraintDesc*)_this)->poseSocket; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintDesc_set_poseSocket(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHConstraintDesc*)_this)->poseSocket) != _ptr) {
                ((PHConstraintDesc*)_this)->poseSocket = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintDesc_addr_posePlug(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHConstraintDesc*)_this)->posePlug; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintDesc_set_posePlug(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHConstraintDesc*)_this)->posePlug) != _ptr) {
                ((PHConstraintDesc*)_this)->posePlug = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHJointDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHJointDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHJointDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHJointDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHJointDesc_get_fMax(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHJointDesc*)_this)).fMax; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHJointDesc_set_fMax(HANDLE _this, double value) {
        try { (*((PHJointDesc*)_this)).fMax = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PH1DJointDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PH1DJointDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PH1DJointDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PH1DJointDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PH1DJointDesc_get_cyclic(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PH1DJointDesc*)_this)).cyclic; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointDesc_set_cyclic(HANDLE _this, char value) {
        try { (*((PH1DJointDesc*)_this)).cyclic = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointDesc_get_spring(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).spring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointDesc_set_spring(HANDLE _this, double value) {
        try { (*((PH1DJointDesc*)_this)).spring = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointDesc_get_damper(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).damper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointDesc_set_damper(HANDLE _this, double value) {
        try { (*((PH1DJointDesc*)_this)).damper = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointDesc_get_secondDamper(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).secondDamper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointDesc_set_secondDamper(HANDLE _this, double value) {
        try { (*((PH1DJointDesc*)_this)).secondDamper = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointDesc_get_targetPosition(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).targetPosition; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointDesc_set_targetPosition(HANDLE _this, double value) {
        try { (*((PH1DJointDesc*)_this)).targetPosition = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointDesc_get_targetVelocity(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).targetVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointDesc_set_targetVelocity(HANDLE _this, double value) {
        try { (*((PH1DJointDesc*)_this)).targetVelocity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointDesc_get_offsetForce(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).offsetForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointDesc_set_offsetForce(HANDLE _this, double value) {
        try { (*((PH1DJointDesc*)_this)).offsetForce = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointDesc_get_yieldStress(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).yieldStress; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointDesc_set_yieldStress(HANDLE _this, double value) {
        try { (*((PH1DJointDesc*)_this)).yieldStress = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointDesc_get_hardnessRate(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).hardnessRate; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointDesc_set_hardnessRate(HANDLE _this, double value) {
        try { (*((PH1DJointDesc*)_this)).hardnessRate = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointDesc_get_secondMoment(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).secondMoment; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointDesc_set_secondMoment(HANDLE _this, double value) {
        try { (*((PH1DJointDesc*)_this)).secondMoment = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHingeJointDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHingeJointDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHingeJointDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHingeJointDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSliderJointDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSliderJointDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSliderJointDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSliderJointDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSliderJointDesc_get_bConstraintY(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHSliderJointDesc*)_this)).bConstraintY; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSliderJointDesc_set_bConstraintY(HANDLE _this, char value) {
        try { (*((PHSliderJointDesc*)_this)).bConstraintY = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSliderJointDesc_get_bConstraintRollX(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHSliderJointDesc*)_this)).bConstraintRollX; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSliderJointDesc_set_bConstraintRollX(HANDLE _this, char value) {
        try { (*((PHSliderJointDesc*)_this)).bConstraintRollX = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSliderJointDesc_get_bConstraintRollZ(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHSliderJointDesc*)_this)).bConstraintRollZ; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSliderJointDesc_set_bConstraintRollZ(HANDLE _this, char value) {
        try { (*((PHSliderJointDesc*)_this)).bConstraintRollZ = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPathPoint() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPathPoint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPathPoint_4(double _s, HANDLE _pose) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPathPoint(_s, *((Posed*) _pose)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPathPoint(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPathPoint*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHPathPoint_get_s(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHPathPoint*)_this)).s; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHPathPoint_set_s(HANDLE _this, double value) {
        try { (*((PHPathPoint*)_this)).s = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathPoint_addr_pose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHPathPoint*)_this)->pose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHPathPoint_set_pose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHPathPoint*)_this)->pose) != _ptr) {
                ((PHPathPoint*)_this)->pose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPathDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPathDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPathDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPathDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathDesc_vector_get_points(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<PHPathPoint>*) &((PHPathDesc*)_this)->points; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHPathDesc_vector_set_points(HANDLE _this, HANDLE value) {
        try { ((PHPathDesc*)_this)->points = *((std::vector<PHPathPoint>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHPathDesc_get_bLoop(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHPathDesc*)_this)).bLoop; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHPathDesc_set_bLoop(HANDLE _this, char value) {
        try { (*((PHPathDesc*)_this)).bLoop = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPathJointDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPathJointDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPathJointDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPathJointDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHGenericJointCallback() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHGenericJointCallback(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHGenericJointCallback(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHGenericJointCallback*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointCallback_SetParam(HANDLE _this, HANDLE jnt, BSTR name, double value) {
	string arg02_("");
	int lenMB2 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, NULL, 0, NULL, NULL);
	if (lenMB2 > 0) {
	    LPSTR addr2 = (LPSTR) ::SysAllocStringLen(0, lenMB2);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, addr2, lenMB2, NULL, NULL);
	    arg02_ = (string) addr2;
	}
	try { ((PHGenericJointCallback*) _this)->SetParam((PHGenericJointIf*) jnt, (string) arg02_, value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHGenericJointCallback_IsCyclic(HANDLE _this, HANDLE jnt) {
	bool _val = (bool) NULL;
	try { _val = ((PHGenericJointCallback*) _this)->IsCyclic((PHGenericJointIf*) jnt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointCallback_GetMovableAxes(HANDLE _this, HANDLE jnt, int& n, HANDLE indices) {
	try { ((PHGenericJointCallback*) _this)->GetMovableAxes((PHGenericJointIf*) jnt, n, (int*) indices); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointCallback_CompBias(HANDLE _this, HANDLE jnt, HANDLE dbv, HANDLE dbw, HANDLE prel, HANDLE qrel, HANDLE vrel, HANDLE wrel) {
	try { ((PHGenericJointCallback*) _this)->CompBias((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) dbv), (Vec3d&) *((Vec3d*) dbw), (const Vec3d&) *((Vec3d*) prel), (const Quaterniond&) *((Quaterniond*) qrel), (const Vec3d&) *((Vec3d*) vrel), (const Vec3d&) *((Vec3d*) wrel)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointCallback_CompError(HANDLE _this, HANDLE jnt, HANDLE Bv, HANDLE Bw, HANDLE prel, HANDLE qrel) {
	try { ((PHGenericJointCallback*) _this)->CompError((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) Bv), (Vec3d&) *((Vec3d*) Bw), (const Vec3d&) *((Vec3d*) prel), (const Quaterniond&) *((Quaterniond*) qrel)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointCallback_UpdateJointState(HANDLE _this, HANDLE jnt, double& pos, double& vel, HANDLE prel, HANDLE qrel, HANDLE vrel, HANDLE wrel) {
	try { ((PHGenericJointCallback*) _this)->UpdateJointState((PHGenericJointIf*) jnt, pos, vel, (const Vec3d&) *((Vec3d*) prel), (const Quaterniond&) *((Quaterniond*) qrel), (const Vec3d&) *((Vec3d*) vrel), (const Vec3d&) *((Vec3d*) wrel)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointCallback_CompJointJacobian(HANDLE _this, HANDLE jnt, HANDLE Jv, HANDLE Jw, double pos) {
	try { ((PHGenericJointCallback*) _this)->CompJointJacobian((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) Jv), (Vec3d&) *((Vec3d*) Jw), pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointCallback_CompJointCoriolisAccel(HANDLE _this, HANDLE jnt, HANDLE cv, HANDLE cw, double pos, double vel) {
	try { ((PHGenericJointCallback*) _this)->CompJointCoriolisAccel((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) cv), (Vec3d&) *((Vec3d*) cw), pos, vel); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointCallback_CompRelativePosition(HANDLE _this, HANDLE jnt, HANDLE prel, HANDLE qrel, double pos) {
	try { ((PHGenericJointCallback*) _this)->CompRelativePosition((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) prel), (Quaterniond&) *((Quaterniond*) qrel), pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointCallback_CompRelativeVelocity(HANDLE _this, HANDLE jnt, HANDLE vrel, HANDLE wrel, double pos, double vel) {
	try { ((PHGenericJointCallback*) _this)->CompRelativeVelocity((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) vrel), (Vec3d&) *((Vec3d*) wrel), pos, vel); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHGenericJointDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHGenericJointDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHGenericJointDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHGenericJointDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointDesc_get_spring(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHBallJointDesc*)_this)).spring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointDesc_set_spring(HANDLE _this, double value) {
        try { (*((PHBallJointDesc*)_this)).spring = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointDesc_get_damper(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHBallJointDesc*)_this)).damper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointDesc_set_damper(HANDLE _this, double value) {
        try { (*((PHBallJointDesc*)_this)).damper = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointDesc_addr_secondDamper(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointDesc*)_this)->secondDamper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointDesc_set_secondDamper(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointDesc*)_this)->secondDamper) != _ptr) {
                ((PHBallJointDesc*)_this)->secondDamper = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointDesc_addr_targetPosition(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointDesc*)_this)->targetPosition; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointDesc_set_targetPosition(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointDesc*)_this)->targetPosition) != _ptr) {
                ((PHBallJointDesc*)_this)->targetPosition = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointDesc_addr_targetVelocity(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointDesc*)_this)->targetVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointDesc_set_targetVelocity(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointDesc*)_this)->targetVelocity) != _ptr) {
                ((PHBallJointDesc*)_this)->targetVelocity = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointDesc_addr_offsetForce(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointDesc*)_this)->offsetForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointDesc_set_offsetForce(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointDesc*)_this)->offsetForce) != _ptr) {
                ((PHBallJointDesc*)_this)->offsetForce = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointDesc_get_yieldStress(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHBallJointDesc*)_this)).yieldStress; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointDesc_set_yieldStress(HANDLE _this, double value) {
        try { (*((PHBallJointDesc*)_this)).yieldStress = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointDesc_get_hardnessRate(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHBallJointDesc*)_this)).hardnessRate; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointDesc_set_hardnessRate(HANDLE _this, double value) {
        try { (*((PHBallJointDesc*)_this)).hardnessRate = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointDesc_addr_secondMoment(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointDesc*)_this)->secondMoment; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointDesc_set_secondMoment(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointDesc*)_this)->secondMoment) != _ptr) {
                ((PHBallJointDesc*)_this)->secondMoment = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFixJointDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFixJointDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFixJointDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFixJointDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSpringDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSpringDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSpringDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSpringDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringDesc_addr_targetPosition(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->targetPosition; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_targetPosition(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->targetPosition) != _ptr) {
                ((PHSpringDesc*)_this)->targetPosition = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringDesc_addr_targetOrientation(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->targetOrientation; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_targetOrientation(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->targetOrientation) != _ptr) {
                ((PHSpringDesc*)_this)->targetOrientation = *((Quaterniond*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringDesc_addr_spring(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->spring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_spring(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->spring) != _ptr) {
                ((PHSpringDesc*)_this)->spring = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringDesc_addr_damper(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->damper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_damper(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->damper) != _ptr) {
                ((PHSpringDesc*)_this)->damper = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringDesc_addr_secondDamper(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->secondDamper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_secondDamper(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->secondDamper) != _ptr) {
                ((PHSpringDesc*)_this)->secondDamper = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSpringDesc_get_springOri(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSpringDesc*)_this)).springOri; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_springOri(HANDLE _this, double value) {
        try { (*((PHSpringDesc*)_this)).springOri = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSpringDesc_get_damperOri(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSpringDesc*)_this)).damperOri; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_damperOri(HANDLE _this, double value) {
        try { (*((PHSpringDesc*)_this)).damperOri = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSpringDesc_get_secondDamperOri(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSpringDesc*)_this)).secondDamperOri; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_secondDamperOri(HANDLE _this, double value) {
        try { (*((PHSpringDesc*)_this)).secondDamperOri = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSpringDesc_get_yieldStress(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSpringDesc*)_this)).yieldStress; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_yieldStress(HANDLE _this, double value) {
        try { (*((PHSpringDesc*)_this)).yieldStress = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSpringDesc_get_hardnessRate(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSpringDesc*)_this)).hardnessRate; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_hardnessRate(HANDLE _this, double value) {
        try { (*((PHSpringDesc*)_this)).hardnessRate = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringDesc_addr_secondMoment(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->secondMoment; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_secondMoment(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->secondMoment) != _ptr) {
                ((PHSpringDesc*)_this)->secondMoment = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringDesc_addr_targetVelocity(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->targetVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_targetVelocity(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->targetVelocity) != _ptr) {
                ((PHSpringDesc*)_this)->targetVelocity = *((Vec6d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringDesc_addr_offsetForce(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->offsetForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringDesc_set_offsetForce(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->offsetForce) != _ptr) {
                ((PHSpringDesc*)_this)->offsetForce = *((Vec6d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHMateDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHMateDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHMateDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHMateDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPointToPointMateDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPointToPointMateDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPointToPointMateDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPointToPointMateDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPointToLineMateDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPointToLineMateDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPointToLineMateDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPointToLineMateDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPointToPlaneMateDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPointToPlaneMateDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPointToPlaneMateDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPointToPlaneMateDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPointToPlaneMateDesc_addr_range(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHPointToPlaneMateDesc*)_this)->range; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHPointToPlaneMateDesc_set_range(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHPointToPlaneMateDesc*)_this)->range) != _ptr) {
                ((PHPointToPlaneMateDesc*)_this)->range = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHLineToLineMateDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHLineToLineMateDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHLineToLineMateDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHLineToLineMateDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPlaneToPlaneMateDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPlaneToPlaneMateDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPlaneToPlaneMateDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPlaneToPlaneMateDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHTreeNodeDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHTreeNodeDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHTreeNodeDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHTreeNodeDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHTreeNodeDesc_get_bEnabled(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHTreeNodeDesc*)_this)).bEnabled; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHTreeNodeDesc_set_bEnabled(HANDLE _this, char value) {
        try { (*((PHTreeNodeDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHRootNodeDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHRootNodeDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHRootNodeDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHRootNodeDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHTreeNode1DDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHTreeNode1DDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHTreeNode1DDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHTreeNode1DDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHingeJointNodeDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHingeJointNodeDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHingeJointNodeDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHingeJointNodeDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSliderJointNodeDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSliderJointNodeDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSliderJointNodeDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSliderJointNodeDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPathJointNodeDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPathJointNodeDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPathJointNodeDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPathJointNodeDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHGenericJointNodeDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHGenericJointNodeDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHGenericJointNodeDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHGenericJointNodeDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointNodeDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointNodeDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointNodeDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointNodeDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFixJointNodeDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFixJointNodeDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFixJointNodeDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFixJointNodeDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHGearDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHGearDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHGearDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHGearDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHGearDesc_get_bEnabled(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHGearDesc*)_this)).bEnabled; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHGearDesc_set_bEnabled(HANDLE _this, char value) {
        try { (*((PHGearDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHGearDesc_get_ratio(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHGearDesc*)_this)).ratio; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHGearDesc_set_ratio(HANDLE _this, double value) {
        try { (*((PHGearDesc*)_this)).ratio = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHGearDesc_get_offset(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHGearDesc*)_this)).offset; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHGearDesc_set_offset(HANDLE _this, double value) {
        try { (*((PHGearDesc*)_this)).offset = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHGearDesc_get_mode(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHGearDesc*)_this)).mode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHGearDesc_set_mode(HANDLE _this, int value) {
        try { (*((PHGearDesc*)_this)).mode = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PH1DJointLimitDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PH1DJointLimitDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PH1DJointLimitDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PH1DJointLimitDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PH1DJointLimitDesc_get_bEnabled(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PH1DJointLimitDesc*)_this)).bEnabled; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointLimitDesc_set_bEnabled(HANDLE _this, char value) {
        try { (*((PH1DJointLimitDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointLimitDesc_get_spring(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointLimitDesc*)_this)).spring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointLimitDesc_set_spring(HANDLE _this, double value) {
        try { (*((PH1DJointLimitDesc*)_this)).spring = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointLimitDesc_get_damper(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PH1DJointLimitDesc*)_this)).damper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointLimitDesc_set_damper(HANDLE _this, double value) {
        try { (*((PH1DJointLimitDesc*)_this)).damper = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointLimitDesc_addr_range(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PH1DJointLimitDesc*)_this)->range; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointLimitDesc_set_range(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PH1DJointLimitDesc*)_this)->range) != _ptr) {
                ((PH1DJointLimitDesc*)_this)->range = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointLimitDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointLimitDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointLimitDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointLimitDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHBallJointLimitDesc_get_bEnabled(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHBallJointLimitDesc*)_this)).bEnabled; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointLimitDesc_set_bEnabled(HANDLE _this, char value) {
        try { (*((PHBallJointLimitDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointLimitDesc_get_spring(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHBallJointLimitDesc*)_this)).spring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointLimitDesc_set_spring(HANDLE _this, double value) {
        try { (*((PHBallJointLimitDesc*)_this)).spring = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointLimitDesc_get_damper(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHBallJointLimitDesc*)_this)).damper; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointLimitDesc_set_damper(HANDLE _this, double value) {
        try { (*((PHBallJointLimitDesc*)_this)).damper = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointLimitDesc_addr_limitDir(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointLimitDesc*)_this)->limitDir; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointLimitDesc_set_limitDir(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointLimitDesc*)_this)->limitDir) != _ptr) {
                ((PHBallJointLimitDesc*)_this)->limitDir = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointConeLimitDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointConeLimitDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointConeLimitDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointConeLimitDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointConeLimitDesc_addr_limitSwing(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointConeLimitDesc*)_this)->limitSwing; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointConeLimitDesc_set_limitSwing(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointConeLimitDesc*)_this)->limitSwing) != _ptr) {
                ((PHBallJointConeLimitDesc*)_this)->limitSwing = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointConeLimitDesc_addr_limitSwingDir(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointConeLimitDesc*)_this)->limitSwingDir; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointConeLimitDesc_set_limitSwingDir(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointConeLimitDesc*)_this)->limitSwingDir) != _ptr) {
                ((PHBallJointConeLimitDesc*)_this)->limitSwingDir = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointConeLimitDesc_addr_limitTwist(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointConeLimitDesc*)_this)->limitTwist; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointConeLimitDesc_set_limitTwist(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointConeLimitDesc*)_this)->limitTwist) != _ptr) {
                ((PHBallJointConeLimitDesc*)_this)->limitTwist = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSplineLimitNode() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSplineLimitNode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSplineLimitNode_8(double s, double sd, double ds, double dsd, double tmn, double tmx) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSplineLimitNode(s, sd, ds, dsd, tmn, tmx); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSplineLimitNode(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSplineLimitNode*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSplineLimitNode_get_swing(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).swing; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSplineLimitNode_set_swing(HANDLE _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).swing = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSplineLimitNode_get_swingDir(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).swingDir; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSplineLimitNode_set_swingDir(HANDLE _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).swingDir = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSplineLimitNode_get_dSwing(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).dSwing; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSplineLimitNode_set_dSwing(HANDLE _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).dSwing = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSplineLimitNode_get_dSwingDir(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).dSwingDir; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSplineLimitNode_set_dSwingDir(HANDLE _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).dSwingDir = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSplineLimitNode_get_twistMin(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).twistMin; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSplineLimitNode_set_twistMin(HANDLE _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).twistMin = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSplineLimitNode_get_twistMax(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).twistMax; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSplineLimitNode_set_twistMax(HANDLE _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).twistMax = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointSplineLimitDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointSplineLimitDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointSplineLimitDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointSplineLimitDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointSplineLimitDesc_vector_get_nodes(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<PHSplineLimitNode>*) &((PHBallJointSplineLimitDesc*)_this)->nodes; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointSplineLimitDesc_vector_set_nodes(HANDLE _this, HANDLE value) {
        try { ((PHBallJointSplineLimitDesc*)_this)->nodes = *((std::vector<PHSplineLimitNode>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointSplineLimitDesc_addr_poleTwist(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointSplineLimitDesc*)_this)->poleTwist; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointSplineLimitDesc_set_poleTwist(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointSplineLimitDesc*)_this)->poleTwist) != _ptr) {
                ((PHBallJointSplineLimitDesc*)_this)->poleTwist = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointIndependentLimitDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointIndependentLimitDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointIndependentLimitDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointIndependentLimitDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIndependentLimitDesc_addr_limitX(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointIndependentLimitDesc*)_this)->limitX; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIndependentLimitDesc_set_limitX(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointIndependentLimitDesc*)_this)->limitX) != _ptr) {
                ((PHBallJointIndependentLimitDesc*)_this)->limitX = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIndependentLimitDesc_addr_limitY(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointIndependentLimitDesc*)_this)->limitY; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIndependentLimitDesc_set_limitY(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointIndependentLimitDesc*)_this)->limitY) != _ptr) {
                ((PHBallJointIndependentLimitDesc*)_this)->limitY = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIndependentLimitDesc_addr_limitZ(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHBallJointIndependentLimitDesc*)_this)->limitZ; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIndependentLimitDesc_set_limitZ(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHBallJointIndependentLimitDesc*)_this)->limitZ) != _ptr) {
                ((PHBallJointIndependentLimitDesc*)_this)->limitZ = *((Vec2d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PH1DJointMotorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PH1DJointMotorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PH1DJointMotorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PH1DJointMotorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PH1DJointNonLinearMotorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PH1DJointNonLinearMotorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PH1DJointNonLinearMotorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PH1DJointNonLinearMotorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHuman1DJointResistanceDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHuman1DJointResistanceDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHuman1DJointResistanceDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHuman1DJointResistanceDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHuman1DJointResistanceDesc_addr_coefficient(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHHuman1DJointResistanceDesc*)_this)->coefficient; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHuman1DJointResistanceDesc_set_coefficient(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHHuman1DJointResistanceDesc*)_this)->coefficient) != _ptr) {
                ((PHHuman1DJointResistanceDesc*)_this)->coefficient = *((Vec4d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointMotorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointMotorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointMotorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointMotorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointNonLinearMotorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointNonLinearMotorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointNonLinearMotorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointNonLinearMotorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHumanBallJointResistanceDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHumanBallJointResistanceDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHumanBallJointResistanceDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHumanBallJointResistanceDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHumanBallJointResistanceDesc_addr_xCoefficient(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHHumanBallJointResistanceDesc*)_this)->xCoefficient; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHumanBallJointResistanceDesc_set_xCoefficient(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHHumanBallJointResistanceDesc*)_this)->xCoefficient) != _ptr) {
                ((PHHumanBallJointResistanceDesc*)_this)->xCoefficient = *((Vec4d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHumanBallJointResistanceDesc_addr_yCoefficient(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHHumanBallJointResistanceDesc*)_this)->yCoefficient; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHumanBallJointResistanceDesc_set_yCoefficient(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHHumanBallJointResistanceDesc*)_this)->yCoefficient) != _ptr) {
                ((PHHumanBallJointResistanceDesc*)_this)->yCoefficient = *((Vec4d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHumanBallJointResistanceDesc_addr_zCoefficient(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHHumanBallJointResistanceDesc*)_this)->zCoefficient; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHumanBallJointResistanceDesc_set_zCoefficient(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHHumanBallJointResistanceDesc*)_this)->zCoefficient) != _ptr) {
                ((PHHumanBallJointResistanceDesc*)_this)->zCoefficient = *((Vec4d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSpringMotorDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSpringMotorDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSpringMotorDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSpringMotorDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHInactiveSolids() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHInactiveSolids(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHInactiveSolids(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHInactiveSolids*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpObjState() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpObjState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpObjState(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpObjState*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjState_addr_velocity(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpObjState*)_this)->velocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjState_set_velocity(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpObjState*)_this)->velocity) != _ptr) {
                ((PHOpObjState*)_this)->velocity = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjState_addr_angVelocity(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpObjState*)_this)->angVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjState_set_angVelocity(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpObjState*)_this)->angVelocity) != _ptr) {
                ((PHOpObjState*)_this)->angVelocity = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjState_addr_pose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpObjState*)_this)->pose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjState_set_pose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpObjState*)_this)->pose) != _ptr) {
                ((PHOpObjState*)_this)->pose = *((Posed*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpHapticRendererDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpHapticRendererDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpHapticRendererDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpHapticRendererDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticRendererDesc_get_extForceSpring(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).extForceSpring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_extForceSpring(HANDLE _this, float value) {
        try { (*((PHOpHapticRendererDesc*)_this)).extForceSpring = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticRendererDesc_get_outForceSpring(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).outForceSpring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_outForceSpring(HANDLE _this, float value) {
        try { (*((PHOpHapticRendererDesc*)_this)).outForceSpring = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticRendererDesc_get_constraintSpring(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).constraintSpring; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_constraintSpring(HANDLE _this, float value) {
        try { (*((PHOpHapticRendererDesc*)_this)).constraintSpring = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticRendererDesc_get_timeStep(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).timeStep; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_timeStep(HANDLE _this, float value) {
        try { (*((PHOpHapticRendererDesc*)_this)).timeStep = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticRendererDesc_get_forceOnRadius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).forceOnRadius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_forceOnRadius(HANDLE _this, float value) {
        try { (*((PHOpHapticRendererDesc*)_this)).forceOnRadius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticRendererDesc_get_useConstrainForce(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).useConstrainForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_useConstrainForce(HANDLE _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).useConstrainForce = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticRendererDesc_get_useProxyfixSubitr(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).useProxyfixSubitr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_useProxyfixSubitr(HANDLE _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).useProxyfixSubitr = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticRendererDesc_get_useIncreaseMeshMove(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).useIncreaseMeshMove; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_useIncreaseMeshMove(HANDLE _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).useIncreaseMeshMove = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticRendererDesc_get_sqrtAlphaForce(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).sqrtAlphaForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_sqrtAlphaForce(HANDLE _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).sqrtAlphaForce = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticRendererDesc_get_hitWall(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).hitWall; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_hitWall(HANDLE _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).hitWall = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticRendererDesc_get_useDualTranFix(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).useDualTranFix; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_useDualTranFix(HANDLE _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).useDualTranFix = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticRendererDesc_get_rigid(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).rigid; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_rigid(HANDLE _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).rigid = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticRendererDesc_get_proxyItrtNum(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).proxyItrtNum; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_proxyItrtNum(HANDLE _this, int value) {
        try { (*((PHOpHapticRendererDesc*)_this)).proxyItrtNum = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticRendererDesc_get_proxyItrtMaxNum(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).proxyItrtMaxNum; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_proxyItrtMaxNum(HANDLE _this, int value) {
        try { (*((PHOpHapticRendererDesc*)_this)).proxyItrtMaxNum = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticRendererDesc_get_currDtType(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).currDtType; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_currDtType(HANDLE _this, int value) {
        try { (*((PHOpHapticRendererDesc*)_this)).currDtType = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticRendererDesc_get_objNum(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).objNum; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_objNum(HANDLE _this, int value) {
        try { (*((PHOpHapticRendererDesc*)_this)).objNum = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticRendererDesc_get_noCtcItrNum(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).noCtcItrNum; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_noCtcItrNum(HANDLE _this, int value) {
        try { (*((PHOpHapticRendererDesc*)_this)).noCtcItrNum = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticRendererDesc_addr_proxyFixPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpHapticRendererDesc*)_this)->proxyFixPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererDesc_set_proxyFixPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpHapticRendererDesc*)_this)->proxyFixPos) != _ptr) {
                ((PHOpHapticRendererDesc*)_this)->proxyFixPos = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpObjDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpObjDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpObjDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpObjDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHOpObjDesc_get_mass(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).mass; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_mass(HANDLE _this, double value) {
        try { (*((PHOpObjDesc*)_this)).mass = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjDesc_addr_inertia(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpObjDesc*)_this)->inertia; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_inertia(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpObjDesc*)_this)->inertia) != _ptr) {
                ((PHOpObjDesc*)_this)->inertia = *((Matrix3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjDesc_addr_center(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpObjDesc*)_this)->center; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_center(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpObjDesc*)_this)->center) != _ptr) {
                ((PHOpObjDesc*)_this)->center = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpObjDesc_get_dynamical(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpObjDesc*)_this)).dynamical; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_dynamical(HANDLE _this, char value) {
        try { (*((PHOpObjDesc*)_this)).dynamical = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjDesc_get_objTargetVts(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = ((PHOpObjDesc*)_this)->objTargetVts; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_objTargetVts(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpObjDesc*)_this)->objTargetVts) != _ptr) {
                ((PHOpObjDesc*)_this)->objTargetVts = ((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjDesc_array_addr_objTargetVtsArr(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpObjDesc*) _this)->objTargetVtsArr[0]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_array_set_objTargetVtsArr(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHOpObjDesc*)_this)).objTargetVtsArr != _ptr) {
                float* src = (float*) _ptr;
                float* dst = &((PHOpObjDesc*) _this)->objTargetVtsArr[0];
                memcpy((void*) dst, (const void*) src, sizeof(((PHOpObjDesc*) _this)->objTargetVtsArr));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpObjDesc_get_objTargetVtsNum(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objTargetVtsNum; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_objTargetVtsNum(HANDLE _this, int value) {
        try { (*((PHOpObjDesc*)_this)).objTargetVtsNum = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpObjDesc_get_assPsNum(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).assPsNum; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_assPsNum(HANDLE _this, int value) {
        try { (*((PHOpObjDesc*)_this)).assPsNum = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpObjDesc_get_assGrpNum(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).assGrpNum; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_assGrpNum(HANDLE _this, int value) {
        try { (*((PHOpObjDesc*)_this)).assGrpNum = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpObjDesc_get_objGrouplinkCount(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objGrouplinkCount; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_objGrouplinkCount(HANDLE _this, int value) {
        try { (*((PHOpObjDesc*)_this)).objGrouplinkCount = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpObjDesc_get_objId(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objId; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_objId(HANDLE _this, int value) {
        try { (*((PHOpObjDesc*)_this)).objId = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpObjDesc_get_objUseDistCstr(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpObjDesc*)_this)).objUseDistCstr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_objUseDistCstr(HANDLE _this, char value) {
        try { (*((PHOpObjDesc*)_this)).objUseDistCstr = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpObjDesc_get_objNoMeshObj(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpObjDesc*)_this)).objNoMeshObj; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_objNoMeshObj(HANDLE _this, char value) {
        try { (*((PHOpObjDesc*)_this)).objNoMeshObj = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpObjDesc_get_isRigid(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpObjDesc*)_this)).isRigid; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_isRigid(HANDLE _this, char value) {
        try { (*((PHOpObjDesc*)_this)).isRigid = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpObjDesc_get_objType(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objType; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_objType(HANDLE _this, int value) {
        try { (*((PHOpObjDesc*)_this)).objType = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpObjDesc_get_objAverRadius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objAverRadius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_objAverRadius(HANDLE _this, float value) {
        try { (*((PHOpObjDesc*)_this)).objAverRadius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpObjDesc_get_objMaxRadius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objMaxRadius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_objMaxRadius(HANDLE _this, float value) {
        try { (*((PHOpObjDesc*)_this)).objMaxRadius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpObjDesc_get_objitrTime(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objitrTime; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_objitrTime(HANDLE _this, int value) {
        try { (*((PHOpObjDesc*)_this)).objitrTime = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpObjDesc_get_updateNormals(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpObjDesc*)_this)).updateNormals; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_set_updateNormals(HANDLE _this, char value) {
        try { (*((PHOpObjDesc*)_this)).updateNormals = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjDesc_Init(HANDLE _this) {
	try { ((PHOpObjDesc*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpParticleDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpParticleDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpParticleDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpParticleDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpParticleDesc_get_pNvertex(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pNvertex; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pNvertex(HANDLE _this, int value) {
        try { (*((PHOpParticleDesc*)_this)).pNvertex = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpParticleDesc_get_pMyGroupInd(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pMyGroupInd; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pMyGroupInd(HANDLE _this, int value) {
        try { (*((PHOpParticleDesc*)_this)).pMyGroupInd = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpParticleDesc_get_pPId(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pPId; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pPId(HANDLE _this, int value) {
        try { (*((PHOpParticleDesc*)_this)).pPId = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpParticleDesc_get_pObjId(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pObjId; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pObjId(HANDLE _this, int value) {
        try { (*((PHOpParticleDesc*)_this)).pObjId = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpParticleDesc_get_pParaAlpha(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pParaAlpha; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pParaAlpha(HANDLE _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pParaAlpha = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpParticleDesc_get_hitedByMouse(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).hitedByMouse; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_hitedByMouse(HANDLE _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).hitedByMouse = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpParticleDesc_get_pSingleVMass(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pSingleVMass; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pSingleVMass(HANDLE _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pSingleVMass = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpParticleDesc_get_pTotalMass(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pTotalMass; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pTotalMass(HANDLE _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pTotalMass = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpParticleDesc_get_pRadii(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pRadii; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pRadii(HANDLE _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pRadii = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpParticleDesc_get_pDynamicRadius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pDynamicRadius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pDynamicRadius(HANDLE _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pDynamicRadius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pMainRadiusVec(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pMainRadiusVec; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pMainRadiusVec(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pMainRadiusVec) != _ptr) {
                ((PHOpParticleDesc*)_this)->pMainRadiusVec = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pSecRadiusVec(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pSecRadiusVec; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pSecRadiusVec(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pSecRadiusVec) != _ptr) {
                ((PHOpParticleDesc*)_this)->pSecRadiusVec = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pThrRadiusVec(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pThrRadiusVec; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pThrRadiusVec(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pThrRadiusVec) != _ptr) {
                ((PHOpParticleDesc*)_this)->pThrRadiusVec = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpParticleDesc_get_pMainRadius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pMainRadius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pMainRadius(HANDLE _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pMainRadius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpParticleDesc_get_pSecRadius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pSecRadius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pSecRadius(HANDLE _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pSecRadius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpParticleDesc_get_pThrRadius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pThrRadius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pThrRadius(HANDLE _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pThrRadius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pCurrCtr(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pCurrCtr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pCurrCtr(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pCurrCtr) != _ptr) {
                ((PHOpParticleDesc*)_this)->pCurrCtr = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pOrigCtr(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pOrigCtr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pOrigCtr(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pOrigCtr) != _ptr) {
                ((PHOpParticleDesc*)_this)->pOrigCtr = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pNewCtr(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pNewCtr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pNewCtr(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pNewCtr) != _ptr) {
                ((PHOpParticleDesc*)_this)->pNewCtr = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pVelocity(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pVelocity(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pVelocity) != _ptr) {
                ((PHOpParticleDesc*)_this)->pVelocity = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpParticleDesc_get_isColliedbySphash(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isColliedbySphash; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_isColliedbySphash(HANDLE _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isColliedbySphash = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpParticleDesc_get_isColliedbyColliCube(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isColliedbyColliCube; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_isColliedbyColliCube(HANDLE _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isColliedbyColliCube = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpParticleDesc_get_isFixedbyMouse(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isFixedbyMouse; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_isFixedbyMouse(HANDLE _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isFixedbyMouse = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpParticleDesc_get_isFixed(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isFixed; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_isFixed(HANDLE _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isFixed = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpParticleDesc_get_isColliedSphashSolved(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isColliedSphashSolved; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_isColliedSphashSolved(HANDLE _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isColliedSphashSolved = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpParticleDesc_get_isColliedSphashSolvedReady(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isColliedSphashSolvedReady; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_isColliedSphashSolvedReady(HANDLE _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isColliedSphashSolvedReady = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pExternalForce(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pExternalForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pExternalForce(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pExternalForce) != _ptr) {
                ((PHOpParticleDesc*)_this)->pExternalForce = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pExternalTorque(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pExternalTorque; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pExternalTorque(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pExternalTorque) != _ptr) {
                ((PHOpParticleDesc*)_this)->pExternalTorque = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pExternalDisplacement(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pExternalDisplacement; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pExternalDisplacement(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pExternalDisplacement) != _ptr) {
                ((PHOpParticleDesc*)_this)->pExternalDisplacement = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_vector_addr_pFaceInd(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((PHOpParticleDesc*)_this)).pFaceInd; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_vector_set_pFaceInd(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((PHOpParticleDesc*)_this)).pFaceInd != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHOpParticleDesc*)_this)).pFaceInd;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pMomentR(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pMomentR; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pMomentR(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pMomentR) != _ptr) {
                ((PHOpParticleDesc*)_this)->pMomentR = *((Matrix3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pSmR(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pSmR; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pSmR(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pSmR) != _ptr) {
                ((PHOpParticleDesc*)_this)->pSmR = *((Matrix3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pMomentInertia(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pMomentInertia; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pMomentInertia(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pMomentInertia) != _ptr) {
                ((PHOpParticleDesc*)_this)->pMomentInertia = *((Matrix3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pInverseOfMomentInertia(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pInverseOfMomentInertia; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pInverseOfMomentInertia(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pInverseOfMomentInertia) != _ptr) {
                ((PHOpParticleDesc*)_this)->pInverseOfMomentInertia = *((Matrix3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_ellipRotMatrix(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->ellipRotMatrix; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_ellipRotMatrix(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->ellipRotMatrix) != _ptr) {
                ((PHOpParticleDesc*)_this)->ellipRotMatrix = *((Matrix3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_ellipOrigOrint(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->ellipOrigOrint; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_ellipOrigOrint(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->ellipOrigOrint) != _ptr) {
                ((PHOpParticleDesc*)_this)->ellipOrigOrint = *((Quaternionf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pWvel(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pWvel; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pWvel(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pWvel) != _ptr) {
                ((PHOpParticleDesc*)_this)->pWvel = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pPreEllipA(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pPreEllipA; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pPreEllipA(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pPreEllipA) != _ptr) {
                ((PHOpParticleDesc*)_this)->pPreEllipA = *((Matrix3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pCurrOrint(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pCurrOrint; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pCurrOrint(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pCurrOrint) != _ptr) {
                ((PHOpParticleDesc*)_this)->pCurrOrint = *((Quaternionf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pOrigOrint(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pOrigOrint; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pOrigOrint(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pOrigOrint) != _ptr) {
                ((PHOpParticleDesc*)_this)->pOrigOrint = *((Quaternionf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleDesc_addr_pNewOrint(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pNewOrint; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpParticleDesc_set_pNewOrint(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pNewOrint) != _ptr) {
                ((PHOpParticleDesc*)_this)->pNewOrint = *((Quaternionf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpGroupDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpGroupDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpGroupDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpGroupDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpGroupDesc_get_gMyIndex(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpGroupDesc*)_this)).gMyIndex; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpGroupDesc_set_gMyIndex(HANDLE _this, int value) {
        try { (*((PHOpGroupDesc*)_this)).gMyIndex = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpGroupDesc_addr_gAgroup(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpGroupDesc*)_this)->gAgroup; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpGroupDesc_set_gAgroup(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpGroupDesc*)_this)->gAgroup) != _ptr) {
                ((PHOpGroupDesc*)_this)->gAgroup = *((Matrix3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpGroupDesc_addr_gEigen(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpGroupDesc*)_this)->gEigen; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpGroupDesc_set_gEigen(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpGroupDesc*)_this)->gEigen) != _ptr) {
                ((PHOpGroupDesc*)_this)->gEigen = *((Matrix3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpGroupDesc_get_gtotalMass(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpGroupDesc*)_this)).gtotalMass; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpGroupDesc_set_gtotalMass(HANDLE _this, float value) {
        try { (*((PHOpGroupDesc*)_this)).gtotalMass = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpGroupDesc_addr_gOrigCenter(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpGroupDesc*)_this)->gOrigCenter; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpGroupDesc_set_gOrigCenter(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpGroupDesc*)_this)->gOrigCenter) != _ptr) {
                ((PHOpGroupDesc*)_this)->gOrigCenter = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpGroupDesc_addr_gCurrCenter(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpGroupDesc*)_this)->gCurrCenter; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpGroupDesc_set_gCurrCenter(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpGroupDesc*)_this)->gCurrCenter) != _ptr) {
                ((PHOpGroupDesc*)_this)->gCurrCenter = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpGroupDesc_get_gNptcl(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpGroupDesc*)_this)).gNptcl; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpGroupDesc_set_gNptcl(HANDLE _this, int value) {
        try { (*((PHOpGroupDesc*)_this)).gNptcl = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpHapticControllerDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpHapticControllerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpHapticControllerDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpHapticControllerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticControllerDesc_get_posScale(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).posScale; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_posScale(HANDLE _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).posScale = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticControllerDesc_get_rotScale(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).rotScale; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_rotScale(HANDLE _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).rotScale = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticControllerDesc_get_forceScale(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).forceScale; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_forceScale(HANDLE _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).forceScale = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerDesc_addr_userPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->userPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_userPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->userPos) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->userPos = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerDesc_addr_userPose(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->userPose; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_userPose(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->userPose) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->userPose = *((Posef*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerDesc_addr_hcCurrPPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->hcCurrPPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_hcCurrPPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->hcCurrPPos) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->hcCurrPPos = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerDesc_addr_hcCurrUPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->hcCurrUPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_hcCurrUPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->hcCurrUPos) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->hcCurrUPos = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerDesc_addr_hcLastUPos(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->hcLastUPos; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_hcLastUPos(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->hcLastUPos) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->hcLastUPos = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerDesc_addr_hcFixsubGoal(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->hcFixsubGoal; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_hcFixsubGoal(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->hcFixsubGoal) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->hcFixsubGoal = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticControllerDesc_get_c_obstRadius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).c_obstRadius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_c_obstRadius(HANDLE _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).c_obstRadius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_get_hpObjIndex(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).hpObjIndex; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_hpObjIndex(HANDLE _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hpObjIndex = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) PHOpHapticControllerDesc::HapticDOFType __cdecl Spr_PHOpHapticControllerDesc_get_hcType(HANDLE _this) {
        PHOpHapticControllerDesc::HapticDOFType _val = (PHOpHapticControllerDesc::HapticDOFType) 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).hcType; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_hcType(HANDLE _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hcType = (PHOpHapticControllerDesc::HapticDOFType) value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticControllerDesc_get_logForce(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticControllerDesc*)_this)).logForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_logForce(HANDLE _this, char value) {
        try { (*((PHOpHapticControllerDesc*)_this)).logForce = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticControllerDesc_get_hcReady(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticControllerDesc*)_this)).hcReady; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_hcReady(HANDLE _this, char value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hcReady = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticControllerDesc_get_IsSetForceReady(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticControllerDesc*)_this)).IsSetForceReady; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_IsSetForceReady(HANDLE _this, char value) {
        try { (*((PHOpHapticControllerDesc*)_this)).IsSetForceReady = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_get_fileindex(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).fileindex; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_fileindex(HANDLE _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).fileindex = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerDesc_addr_lastHpRateF(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->lastHpRateF; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_lastHpRateF(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->lastHpRateF) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->lastHpRateF = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticControllerDesc_get_hcCollied(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticControllerDesc*)_this)).hcCollied; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_hcCollied(HANDLE _this, char value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hcCollied = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_get_constrainCount(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).constrainCount; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_constrainCount(HANDLE _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).constrainCount = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_get_constrainCountHc(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).constrainCountHc; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_constrainCountHc(HANDLE _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).constrainCountHc = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerDesc_addr_couterPlaneN(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->couterPlaneN; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_couterPlaneN(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->couterPlaneN) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->couterPlaneN = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticControllerDesc_get_hcElmDtcRadius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).hcElmDtcRadius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_hcElmDtcRadius(HANDLE _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hcElmDtcRadius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_get_collectCount(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).collectCount; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_collectCount(HANDLE _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).collectCount = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_get_collectItrtor(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).collectItrtor; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_collectItrtor(HANDLE _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).collectItrtor = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticControllerDesc_get_hcProxyOn(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticControllerDesc*)_this)).hcProxyOn; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_hcProxyOn(HANDLE _this, char value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hcProxyOn = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_get_suspObjid(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).suspObjid; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_suspObjid(HANDLE _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).suspObjid = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticControllerDesc_get_proxyRadius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).proxyRadius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_proxyRadius(HANDLE _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).proxyRadius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_get_surrCnstrs(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).surrCnstrs; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_set_surrCnstrs(HANDLE _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).surrCnstrs = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpAnimationDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpAnimationDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpAnimationDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpAnimationDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpAnimationDesc_get_timestep(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpAnimationDesc*)_this)).timestep; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpAnimationDesc_set_timestep(HANDLE _this, float value) {
        try { (*((PHOpAnimationDesc*)_this)).timestep = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpSpHashColliAgentDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpSpHashColliAgentDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpSpHashColliAgentDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpSpHashColliAgentDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpSpHashColliAgentDesc_get_useDirColli(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpSpHashColliAgentDesc*)_this)).useDirColli; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentDesc_set_useDirColli(HANDLE _this, char value) {
        try { (*((PHOpSpHashColliAgentDesc*)_this)).useDirColli = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpSpHashColliAgentDesc_get_collisionCstrStiffness(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHOpSpHashColliAgentDesc*)_this)).collisionCstrStiffness; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentDesc_set_collisionCstrStiffness(HANDLE _this, float value) {
        try { (*((PHOpSpHashColliAgentDesc*)_this)).collisionCstrStiffness = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHRaycastHit() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHRaycastHit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHRaycastHit(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHRaycastHit*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRaycastHit_get_solid(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = ((PHRaycastHit*)_this)->solid; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHRaycastHit_set_solid(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHRaycastHit*)_this)->solid) != _ptr) {
                ((PHRaycastHit*)_this)->solid = ((PHSolidIf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRaycastHit_get_shape(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = ((PHRaycastHit*)_this)->shape; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHRaycastHit_set_shape(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHRaycastHit*)_this)->shape) != _ptr) {
                ((PHRaycastHit*)_this)->shape = ((CDShapeIf*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRaycastHit_addr_point(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHRaycastHit*)_this)->point; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHRaycastHit_set_point(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHRaycastHit*)_this)->point) != _ptr) {
                ((PHRaycastHit*)_this)->point = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHRaycastHit_get_distance(HANDLE _this) {
        float _val = 0;
        try { _val = (*((PHRaycastHit*)_this)).distance; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHRaycastHit_set_distance(HANDLE _this, float value) {
        try { (*((PHRaycastHit*)_this)).distance = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHRayDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHRayDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHRayDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHRayDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRayDesc_addr_origin(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHRayDesc*)_this)->origin; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHRayDesc_set_origin(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHRayDesc*)_this)->origin) != _ptr) {
                ((PHRayDesc*)_this)->origin = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRayDesc_addr_direction(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHRayDesc*)_this)->direction; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHRayDesc_set_direction(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHRayDesc*)_this)->direction) != _ptr) {
                ((PHRayDesc*)_this)->direction = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSceneState() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSceneState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSceneState(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSceneState*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneState_get_timeStep(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneState*)_this)).timeStep; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneState_set_timeStep(HANDLE _this, double value) {
        try { (*((PHSceneState*)_this)).timeStep = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneState_get_haptictimeStep(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneState*)_this)).haptictimeStep; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneState_set_haptictimeStep(HANDLE _this, double value) {
        try { (*((PHSceneState*)_this)).haptictimeStep = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_PHSceneState_get_count(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((PHSceneState*)_this)).count; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneState_set_count(HANDLE _this, unsigned int value) {
        try { (*((PHSceneState*)_this)).count = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneState_Init(HANDLE _this) {
	try { ((PHSceneState*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSceneDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSceneDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSceneDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSceneDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneDesc_addr_gravity(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((PHSceneDesc*)_this)->gravity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_gravity(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((PHSceneDesc*)_this)->gravity) != _ptr) {
                ((PHSceneDesc*)_this)->gravity = *((Vec3d*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_airResistanceRateForVelocity(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).airResistanceRateForVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_airResistanceRateForVelocity(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).airResistanceRateForVelocity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_airResistanceRateForAngularVelocity(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).airResistanceRateForAngularVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_airResistanceRateForAngularVelocity(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).airResistanceRateForAngularVelocity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_contactTolerance(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).contactTolerance; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_contactTolerance(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).contactTolerance = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_impactThreshold(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).impactThreshold; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_impactThreshold(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).impactThreshold = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_frictionThreshold(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).frictionThreshold; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_frictionThreshold(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).frictionThreshold = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_maxDeltaPosition(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxDeltaPosition; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_maxDeltaPosition(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxDeltaPosition = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_maxDeltaOrientation(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxDeltaOrientation; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_maxDeltaOrientation(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxDeltaOrientation = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_maxVelocity(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_maxVelocity(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxVelocity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_maxAngularVelocity(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxAngularVelocity; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_maxAngularVelocity(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxAngularVelocity = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_maxForce(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxForce; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_maxForce(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxForce = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneDesc_get_maxMoment(HANDLE _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxMoment; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_maxMoment(HANDLE _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxMoment = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneDesc_get_numIteration(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).numIteration; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_numIteration(HANDLE _this, int value) {
        try { (*((PHSceneDesc*)_this)).numIteration = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneDesc_get_method(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).method; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_method(HANDLE _this, int value) {
        try { (*((PHSceneDesc*)_this)).method = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSceneDesc_get_bContactDetectionEnabled(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHSceneDesc*)_this)).bContactDetectionEnabled; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_bContactDetectionEnabled(HANDLE _this, char value) {
        try { (*((PHSceneDesc*)_this)).bContactDetectionEnabled = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSceneDesc_get_bCCDEnabled(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((PHSceneDesc*)_this)).bCCDEnabled; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_bCCDEnabled(HANDLE _this, char value) {
        try { (*((PHSceneDesc*)_this)).bCCDEnabled = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneDesc_get_broadPhaseMode(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).broadPhaseMode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_broadPhaseMode(HANDLE _this, int value) {
        try { (*((PHSceneDesc*)_this)).broadPhaseMode = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneDesc_get_blendMode(HANDLE _this) {
        int _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).blendMode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_set_blendMode(HANDLE _this, int value) {
        try { (*((PHSceneDesc*)_this)).blendMode = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneDesc_Init(HANDLE _this) {
	try { ((PHSceneDesc*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSdkDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSdkDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSdkDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSdkDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBoneDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBoneDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBoneDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBoneDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSkeletonDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSkeletonDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSkeletonDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSkeletonDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHEngineIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHEngineIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHEngineIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHEngineIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHEngineIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHEngineIf*) _this)) {
                (*((PHEngineIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHEngineIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHEngineIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHEngineIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHEngineIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHEngineIf_GetPriority(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHEngineIf*) _this)->GetPriority(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHEngineIf_Step(HANDLE _this) {
	try { ((PHEngineIf*) _this)->Step(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHEngineIf_Enable(HANDLE _this, char on) {
	bool arg01_ = (on == 0) ? false : true;
	try { ((PHEngineIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHEngineIf_Enable_1(HANDLE _this) {
	try { ((PHEngineIf*) _this)->Enable(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHEngineIf_IsEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHEngineIf*) _this)->IsEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHEngineIf_GetScene(HANDLE _this) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((PHEngineIf*) _this)->GetScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHConstraintEngineIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHConstraintEngineIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHConstraintEngineIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHConstraintEngineIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintEngineIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHConstraintEngineIf*) _this)) {
                (*((PHConstraintEngineIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintEngineIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHConstraintEngineIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHConstraintEngineIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintEngineIf_GetContactPoints(HANDLE _this) {
	PHConstraintsIf* _ptr = (PHConstraintsIf*) NULL;
	try { _ptr = (PHConstraintsIf*) ((PHConstraintEngineIf*) _this)->GetContactPoints(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_SetVelCorrectionRate(HANDLE _this, double value) {
	try { ((PHConstraintEngineIf*) _this)->SetVelCorrectionRate(value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineIf_GetVelCorrectionRate(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetVelCorrectionRate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_SetPosCorrectionRate(HANDLE _this, double value) {
	try { ((PHConstraintEngineIf*) _this)->SetPosCorrectionRate(value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineIf_GetPosCorrectionRate(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetPosCorrectionRate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_SetContactCorrectionRate(HANDLE _this, double value) {
	try { ((PHConstraintEngineIf*) _this)->SetContactCorrectionRate(value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineIf_GetContactCorrectionRate(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetContactCorrectionRate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_SetBSaveConstraints(HANDLE _this, char value) {
	bool arg01_ = (value == 0) ? false : true;
	try { ((PHConstraintEngineIf*) _this)->SetBSaveConstraints((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_SetUpdateAllSolidState(HANDLE _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHConstraintEngineIf*) _this)->SetUpdateAllSolidState((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_SetUseContactSurface(HANDLE _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHConstraintEngineIf*) _this)->SetUseContactSurface((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_SetShrinkRate(HANDLE _this, double data) {
	try { ((PHConstraintEngineIf*) _this)->SetShrinkRate(data); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineIf_GetShrinkRate(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetShrinkRate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_SetShrinkRateCorrection(HANDLE _this, double data) {
	try { ((PHConstraintEngineIf*) _this)->SetShrinkRateCorrection(data); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineIf_GetShrinkRateCorrection(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetShrinkRateCorrection(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_SetRegularization(HANDLE _this, double reg) {
	try { ((PHConstraintEngineIf*) _this)->SetRegularization(reg); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHConstraintEngineIf_GetRegularization(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetRegularization(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintEngineIf_EnableRenderContact(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHConstraintEngineIf*) _this)->EnableRenderContact((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHGravityEngineIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHGravityEngineIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHGravityEngineIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHGravityEngineIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGravityEngineIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHGravityEngineIf*) _this)) {
                (*((PHGravityEngineIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHGravityEngineIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGravityEngineIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHGravityEngineIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGravityEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHGravityEngineIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPenaltyEngineIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPenaltyEngineIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPenaltyEngineIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPenaltyEngineIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPenaltyEngineIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPenaltyEngineIf*) _this)) {
                (*((PHPenaltyEngineIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHPenaltyEngineIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPenaltyEngineIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPenaltyEngineIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPenaltyEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPenaltyEngineIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKEngineIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKEngineIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKEngineIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKEngineIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEngineIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKEngineIf*) _this)) {
                (*((PHIKEngineIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_SetMaxVelocity(HANDLE _this, double maxVel) {
	try { ((PHIKEngineIf*) _this)->SetMaxVelocity(maxVel); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEngineIf_GetMaxVelocity(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetMaxVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_SetMaxAngularVelocity(HANDLE _this, double maxAV) {
	try { ((PHIKEngineIf*) _this)->SetMaxAngularVelocity(maxAV); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEngineIf_GetMaxAngularVelocity(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetMaxAngularVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_SetMaxActuatorVelocity(HANDLE _this, double maxAV) {
	try { ((PHIKEngineIf*) _this)->SetMaxActuatorVelocity(maxAV); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEngineIf_GetMaxActuatorVelocity(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetMaxActuatorVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_SetRegularizeParam(HANDLE _this, double epsilon) {
	try { ((PHIKEngineIf*) _this)->SetRegularizeParam(epsilon); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEngineIf_GetRegularizeParam(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetRegularizeParam(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_SetIterCutOffAngVel(HANDLE _this, double epsilon) {
	try { ((PHIKEngineIf*) _this)->SetIterCutOffAngVel(epsilon); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEngineIf_GetIterCutOffAngVel(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetIterCutOffAngVel(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_SetIntpRate(HANDLE _this) {
	try { ((PHIKEngineIf*) _this)->SetIntpRate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHIKEngineIf_GetIntpRate(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetIntpRate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_ApplyExactState(HANDLE _this, char reverse) {
	bool arg01_ = (reverse == 0) ? false : true;
	try { ((PHIKEngineIf*) _this)->ApplyExactState((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_ApplyExactState_1(HANDLE _this) {
	try { ((PHIKEngineIf*) _this)->ApplyExactState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_SetNumIter(HANDLE _this, int numIter) {
	try { ((PHIKEngineIf*) _this)->SetNumIter(numIter); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHIKEngineIf_GetNumIter(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetNumIter(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEngineIf_FK(HANDLE _this) {
	try { ((PHIKEngineIf*) _this)->FK(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEngineIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKEngineIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKEngineIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemEngineIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemEngineIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemEngineIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemEngineIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemEngineIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemEngineIf*) _this)) {
                (*((PHFemEngineIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFemEngineIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemEngineIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemEngineIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemEngineIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemEngineIf_SetTimeStep(HANDLE _this, double dt) {
	try { ((PHFemEngineIf*) _this)->SetTimeStep(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemEngineIf_GetTimeStep(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemEngineIf*) _this)->GetTimeStep(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemEngineIf_SetVibrationTransfer(HANDLE _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((PHFemEngineIf*) _this)->SetVibrationTransfer((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemEngineIf_SetThermalTransfer(HANDLE _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((PHFemEngineIf*) _this)->SetThermalTransfer((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHFemEngineIf_NMeshNew(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemEngineIf*) _this)->NMeshNew(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemEngineIf_GetMeshNew(HANDLE _this, int i) {
	PHFemMeshNewIf* _ptr = (PHFemMeshNewIf*) NULL;
	try { _ptr = (PHFemMeshNewIf*) ((PHFemEngineIf*) _this)->GetMeshNew(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemEngineIf_AddMeshPair(HANDLE _this, HANDLE m0, HANDLE m1) {
	bool _val = (bool) NULL;
	try { _val = ((PHFemEngineIf*) _this)->AddMeshPair((PHFemMeshNewIf*) m0, (PHFemMeshNewIf*) m1); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemEngineIf_RemoveMeshPair(HANDLE _this, HANDLE m0, HANDLE m1) {
	bool _val = (bool) NULL;
	try { _val = ((PHFemEngineIf*) _this)->RemoveMeshPair((PHFemMeshNewIf*) m0, (PHFemMeshNewIf*) m1); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemEngineIf_ThermalTransfer(HANDLE _this) {
	try { ((PHFemEngineIf*) _this)->ThermalTransfer(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemEngineIf_setheatTransferRatio(HANDLE _this, double setheatTransferRatio) {
	try { ((PHFemEngineIf*) _this)->setheatTransferRatio(setheatTransferRatio); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemEngineIf_FEMSolidMatchRefresh(HANDLE _this) {
	try { ((PHFemEngineIf*) _this)->FEMSolidMatchRefresh(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemEngineIf_InitContacts(HANDLE _this) {
	try { ((PHFemEngineIf*) _this)->InitContacts(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemEngineIf_ClearContactVectors(HANDLE _this) {
	try { ((PHFemEngineIf*) _this)->ClearContactVectors(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHFemEngineIf_NMesh(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemEngineIf*) _this)->NMesh(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemEngineIf_GetMesh(HANDLE _this, int i) {
	PHFemMeshIf* _ptr = (PHFemMeshIf*) NULL;
	try { _ptr = (PHFemMeshIf*) ((PHFemEngineIf*) _this)->GetMesh(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpEngineIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpEngineIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpEngineIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpEngineIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpEngineIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpEngineIf*) _this)) {
                (*((PHOpEngineIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpEngineIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpEngineIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpEngineIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_SetTimeStep(HANDLE _this, double dt) {
	try { ((PHOpEngineIf*) _this)->SetTimeStep(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHOpEngineIf_GetTimeStep(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetTimeStep(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_SetGravity(HANDLE _this, char gflag) {
	bool arg01_ = (gflag == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetGravity((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_InitialHapticRenderer(HANDLE _this, int objId) {
	try { ((PHOpEngineIf*) _this)->InitialHapticRenderer(objId); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpEngineIf_GetOpObj(HANDLE _this, int i) {
        PHOpObjDesc* _ptr = (PHOpObjDesc*) NULL;
        try { PHOpObjDesc* _ary = (((PHOpEngineIf*) _this)->GetOpObj(i));
              int _size = 0;
              _ptr = new PHOpObjDesc[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_StepWithBlend(HANDLE _this) {
	try { ((PHOpEngineIf*) _this)->StepWithBlend(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpEngineIf_AddOpObj(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpEngineIf*) _this)->AddOpObj(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_SetHapticSolveEnable(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetHapticSolveEnable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpEngineIf_IsHapticSolve(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpEngineIf*) _this)->IsHapticSolve(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_SetProxyCorrectionEnable(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetProxyCorrectionEnable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpEngineIf_IsProxyCorrection(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpEngineIf*) _this)->IsProxyCorrection(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_SetUpdateNormal(HANDLE _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetUpdateNormal((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpEngineIf_IsUpdateNormal(HANDLE _this, int obji) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpEngineIf*) _this)->IsUpdateNormal(obji); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_SetUseHaptic(HANDLE _this, char hapticUsage) {
	bool arg01_ = (hapticUsage == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetUseHaptic((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpEngineIf_GetUseHaptic(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetUseHaptic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpEngineIf_GetOpObjIf(HANDLE _this, int obji) {
	PHOpObjIf* _ptr = (PHOpObjIf*) NULL;
	try { _ptr = (PHOpObjIf*) ((PHOpEngineIf*) _this)->GetOpObjIf(obji); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHOpEngineIf_GetOpObjNum(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetOpObjNum(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpEngineIf_GetOpAnimator(HANDLE _this) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((PHOpEngineIf*) _this)->GetOpAnimator(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpEngineIf_GetOpHapticController(HANDLE _this) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((PHOpEngineIf*) _this)->GetOpHapticController(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpEngineIf_GetOpHapticRenderer(HANDLE _this) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((PHOpEngineIf*) _this)->GetOpHapticRenderer(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_SetIterationCount(HANDLE _this, int count) {
	try { ((PHOpEngineIf*) _this)->SetIterationCount(count); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpEngineIf_GetIterationCount(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetIterationCount(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_SetAnimationFlag(HANDLE _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetAnimationFlag((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpEngineIf_GetAnimationFlag(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetAnimationFlag(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_SetDrawPtclR(HANDLE _this, float r) {
	try { ((PHOpEngineIf*) _this)->SetDrawPtclR(r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpEngineIf_GetDrawPtclR(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetDrawPtclR(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpEngineIf_InitialNoMeshHapticRenderer(HANDLE _this) {
	try { ((PHOpEngineIf*) _this)->InitialNoMeshHapticRenderer(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemMeshIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemMeshIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemMeshIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemMeshIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemMeshIf*) _this)) {
                (*((PHFemMeshIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFemMeshIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemMeshIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemMeshIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemMeshThermoIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemMeshThermoIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemMeshThermoIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemMeshThermoIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshThermoIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemMeshThermoIf*) _this)) {
                (*((PHFemMeshThermoIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshThermoIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemMeshThermoIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshThermoIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemMeshThermoIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemMeshThermoIf_GetSurfaceVertex(HANDLE _this, int id) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetSurfaceVertex(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemMeshThermoIf_NSurfaceVertices(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->NSurfaceVertices(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetVertexTc(HANDLE _this, int id, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->SetVertexTc(id, temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetVertexTc_1(HANDLE _this, int id, double temp, double heatTrans) {
	try { ((PHFemMeshThermoIf*) _this)->SetVertexTc(id, temp, heatTrans); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshThermoIf_GetPose(HANDLE _this, int id) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshThermoIf*) _this)->GetPose(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshThermoIf_GetSufVtxPose(HANDLE _this, unsigned int id) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshThermoIf*) _this)->GetSufVtxPose(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) unsigned long __cdecl Spr_PHFemMeshThermoIf_GetStepCount(HANDLE _this) {
	unsigned long _val = (unsigned long) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetStepCount(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) unsigned long __cdecl Spr_PHFemMeshThermoIf_GetStepCountCyc(HANDLE _this) {
	unsigned long _val = (unsigned long) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetStepCountCyc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoIf_GetVertexTemp(HANDLE _this, unsigned int id) {
	double _val = (double) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetVertexTemp(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoIf_GetSufVertexTemp(HANDLE _this, unsigned int id) {
	double _val = (double) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetSufVertexTemp(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetVertexTemp(HANDLE _this, unsigned int id, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->SetVertexTemp(id, temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetVerticesTempAll(HANDLE _this, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->SetVerticesTempAll(temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_AddvecFAll(HANDLE _this, unsigned int id, double dqdt) {
	try { ((PHFemMeshThermoIf*) _this)->AddvecFAll(id, dqdt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetvecFAll(HANDLE _this, unsigned int id, double dqdt) {
	try { ((PHFemMeshThermoIf*) _this)->SetvecFAll(id, dqdt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetRhoSpheat(HANDLE _this, double rho, double Cp) {
	try { ((PHFemMeshThermoIf*) _this)->SetRhoSpheat(rho, Cp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_PHFemMeshThermoIf_GetNFace(HANDLE _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetNFace(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshThermoIf_GetFaceEdgeVtx(HANDLE _this, unsigned int id) {
        vector<Vec3d>* _ptr = (vector<Vec3d>*) NULL;
        try { _ptr = new vector<Vec3d>;
              vector<Vec3d> _vec = (((PHFemMeshThermoIf*) _this)->GetFaceEdgeVtx(id));
              for (int n = 0; n < (int) _vec.size(); n++) {
                  _ptr->push_back(_vec[n]);
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshThermoIf_GetFaceEdgeVtx_1(HANDLE _this, unsigned int id, unsigned int vtx) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshThermoIf*) _this)->GetFaceEdgeVtx(id, vtx); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshThermoIf_GetIHbandDrawVtx(HANDLE _this) {
	Vec2d* _ptr = (Vec2d*) NULL;
	try { _ptr = new Vec2d(); (*_ptr) = ((PHFemMeshThermoIf*) _this)->GetIHbandDrawVtx(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_CalcIHdqdt_atleast(HANDLE _this, double r, double R, double dqdtAll, unsigned int num) {
	try { ((PHFemMeshThermoIf*) _this)->CalcIHdqdt_atleast(r, R, dqdtAll, num); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_UpdateIHheatband(HANDLE _this, double xS, double xE, unsigned int heatingMODE) {
	try { ((PHFemMeshThermoIf*) _this)->UpdateIHheatband(xS, xE, heatingMODE); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_UpdateIHheat(HANDLE _this, unsigned int heating) {
	try { ((PHFemMeshThermoIf*) _this)->UpdateIHheat(heating); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_UpdateVecF(HANDLE _this) {
	try { ((PHFemMeshThermoIf*) _this)->UpdateVecF(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_UpdateVecF_frypan(HANDLE _this) {
	try { ((PHFemMeshThermoIf*) _this)->UpdateVecF_frypan(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_DecrMoist(HANDLE _this) {
	try { ((PHFemMeshThermoIf*) _this)->DecrMoist(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_DecrMoist_velo(HANDLE _this, double vel) {
	try { ((PHFemMeshThermoIf*) _this)->DecrMoist_velo(vel); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_DecrMoist_vel(HANDLE _this, double dt) {
	try { ((PHFemMeshThermoIf*) _this)->DecrMoist_vel(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_InitAllVertexTemp(HANDLE _this) {
	try { ((PHFemMeshThermoIf*) _this)->InitAllVertexTemp(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetInitThermoConductionParam(HANDLE _this, double thConduct, double rho, double specificHeat, double heatTrans) {
	try { ((PHFemMeshThermoIf*) _this)->SetInitThermoConductionParam(thConduct, rho, specificHeat, heatTrans); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetParamAndReCreateMatrix(HANDLE _this, double thConduct0, double roh0, double specificHeat0) {
	try { ((PHFemMeshThermoIf*) _this)->SetParamAndReCreateMatrix(thConduct0, roh0, specificHeat0); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoIf_GetArbitraryPointTemp(HANDLE _this, HANDLE temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetArbitraryPointTemp((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoIf_GetVtxTempInTets(HANDLE _this, HANDLE temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetVtxTempInTets((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_InitVecFAlls(HANDLE _this) {
	try { ((PHFemMeshThermoIf*) _this)->InitVecFAlls(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshThermoIf_Get_thConduct(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->Get_thConduct(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemMeshThermoIf_SetConcentricHeatMap(HANDLE _this, HANDLE r, HANDLE temp, HANDLE origin) {
	Vec2d arg03_ = *((Vec2d*) origin);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->SetConcentricHeatMap(*((vector<double>*) r), *((vector<double>*) temp), (Vec2d) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetThermalEmissivityToVerticesAll(HANDLE _this, double thermalEmissivity, double thermalEmissivity_const) {
	try { ((PHFemMeshThermoIf*) _this)->SetThermalEmissivityToVerticesAll(thermalEmissivity, thermalEmissivity_const); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetOuterTemp(HANDLE _this, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->SetOuterTemp(temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetThermalRadiation(HANDLE _this, double ems, double ems_const) {
	try { ((PHFemMeshThermoIf*) _this)->SetThermalRadiation(ems, ems_const); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetGaussCalcParam(HANDLE _this, unsigned int cyc, double epsilon) {
	try { ((PHFemMeshThermoIf*) _this)->SetGaussCalcParam(cyc, epsilon); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_InitTcAll(HANDLE _this, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->InitTcAll(temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_InitToutAll(HANDLE _this, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->InitToutAll(temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetWeekPow(HANDLE _this, double weekPow_) {
	try { ((PHFemMeshThermoIf*) _this)->SetWeekPow(weekPow_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetIHParamWEEK(HANDLE _this, double inr_, double outR_, double weekPow_) {
	try { ((PHFemMeshThermoIf*) _this)->SetIHParamWEEK(inr_, outR_, weekPow_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetHeatTransRatioToAllVertex(HANDLE _this, double heatTransR_) {
	try { ((PHFemMeshThermoIf*) _this)->SetHeatTransRatioToAllVertex(heatTransR_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_AfterSetDesc(HANDLE _this) {
	try { ((PHFemMeshThermoIf*) _this)->AfterSetDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_SetStopTimespan(HANDLE _this, double timespan) {
	try { ((PHFemMeshThermoIf*) _this)->SetStopTimespan(timespan); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_UpdateMatk_RadiantHeatToAir(HANDLE _this) {
	try { ((PHFemMeshThermoIf*) _this)->UpdateMatk_RadiantHeatToAir(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_ActivateVtxbeRadiantHeat(HANDLE _this) {
	try { ((PHFemMeshThermoIf*) _this)->ActivateVtxbeRadiantHeat(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_OutputMatKall(HANDLE _this) {
	try { ((PHFemMeshThermoIf*) _this)->OutputMatKall(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshThermoIf_IfRadiantHeatTrans(HANDLE _this) {
	try { ((PHFemMeshThermoIf*) _this)->IfRadiantHeatTrans(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemMeshNewIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemMeshNewIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemMeshNewIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemMeshNewIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemMeshNewIf*) _this)) {
                (*((PHFemMeshNewIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFemMeshNewIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemMeshNewIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemMeshNewIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshNewIf_SetPHSolid(HANDLE _this, HANDLE s) {
	try { ((PHFemMeshNewIf*) _this)->SetPHSolid((PHSolidIf*) s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetPHSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHFemMeshNewIf*) _this)->GetPHSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetPHFemVibration(HANDLE _this) {
	PHFemVibrationIf* _ptr = (PHFemVibrationIf*) NULL;
	try { _ptr = (PHFemVibrationIf*) ((PHFemMeshNewIf*) _this)->GetPHFemVibration(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetPHFemThermo(HANDLE _this) {
	PHFemThermoIf* _ptr = (PHFemThermoIf*) NULL;
	try { _ptr = (PHFemThermoIf*) ((PHFemMeshNewIf*) _this)->GetPHFemThermo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetPHFemPorousWOMove(HANDLE _this) {
	PHFemPorousWOMoveIf* _ptr = (PHFemPorousWOMoveIf*) NULL;
	try { _ptr = (PHFemPorousWOMoveIf*) ((PHFemMeshNewIf*) _this)->GetPHFemPorousWOMove(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemMeshNewIf_NVertices(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->NVertices(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemMeshNewIf_NFaces(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->NFaces(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemMeshNewIf_NTets(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->NTets(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshNewIf_SetVertexUpdateFlags(HANDLE _this, char flg) {
	bool arg01_ = (flg == 0) ? false : true;
	try { ((PHFemMeshNewIf*) _this)->SetVertexUpdateFlags((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshNewIf_SetVertexUpateFlag(HANDLE _this, int vid, char flg) {
	bool arg02_ = (flg == 0) ? false : true;
	try { ((PHFemMeshNewIf*) _this)->SetVertexUpateFlag(vid, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemMeshNewIf_CompTetVolume(HANDLE _this, int tetID, char bDeform) {
	bool arg02_ = (bDeform == 0) ? false : true;
	double _val = (double) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->CompTetVolume(tetID, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemMeshNewIf_AddVertexDisplacementW(HANDLE _this, int vtxId, HANDLE disW) {
	Vec3d arg02_ = *((Vec3d*) disW);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->AddVertexDisplacementW(vtxId, (Vec3d) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemMeshNewIf_AddVertexDisplacementL(HANDLE _this, int vtxId, HANDLE disL) {
	Vec3d arg02_ = *((Vec3d*) disL);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->AddVertexDisplacementL(vtxId, (Vec3d) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemMeshNewIf_SetVertexPositionW(HANDLE _this, int vtxId, HANDLE posW) {
	Vec3d arg02_ = *((Vec3d*) posW);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->SetVertexPositionW(vtxId, (Vec3d) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemMeshNewIf_SetVertexPositionL(HANDLE _this, int vtxId, HANDLE posL) {
	Vec3d arg02_ = *((Vec3d*) posL);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->SetVertexPositionL(vtxId, (Vec3d) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemMeshNewIf_SetVertexVelocityL(HANDLE _this, int vtxId, HANDLE posL) {
	Vec3d arg02_ = *((Vec3d*) posL);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->SetVertexVelocityL(vtxId, (Vec3d) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetVertexVelocityL(HANDLE _this, int vtxId) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshNewIf*) _this)->GetVertexVelocityL(vtxId); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetVertexPositionL(HANDLE _this, int vtxId) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshNewIf*) _this)->GetVertexPositionL(vtxId); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetVertexDisplacementL(HANDLE _this, int vtxId) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshNewIf*) _this)->GetVertexDisplacementL(vtxId); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetVertexInitalPositionL(HANDLE _this, int vtxId) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshNewIf*) _this)->GetVertexInitalPositionL(vtxId); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemMeshNewIf_SetVelocity(HANDLE _this, HANDLE v) {
	Vec3d arg01_ = *((Vec3d*) v);
	try { ((PHFemMeshNewIf*) _this)->SetVelocity((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetTetVertexIds(HANDLE _this, int t) {
	int* _ptr = (int*) NULL;
	try { _ptr = ((PHFemMeshNewIf*) _this)->GetTetVertexIds(t); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetFaceVertexIds(HANDLE _this, int f) {
	int* _ptr = (int*) NULL;
	try { _ptr = ((PHFemMeshNewIf*) _this)->GetFaceVertexIds(f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemMeshNewIf_GetFaceNormal(HANDLE _this, int f) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshNewIf*) _this)->GetFaceNormal(f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemMeshNewIf_GetSurfaceVertex(HANDLE _this, int i) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->GetSurfaceVertex(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemMeshNewIf_NSurfaceVertices(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->NSurfaceVertices(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemMeshNewIf_NSurfaceFace(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->NSurfaceFace(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemMeshNewIf_CompTetShapeFunctionValue(HANDLE _this, const int& tetId, HANDLE posL, HANDLE value, char bDeform) {
	bool arg04_ = (bDeform == 0) ? false : true;
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->CompTetShapeFunctionValue(tetId, (const Vec3d&) *((Vec3d*) posL), (Vec4d&) *((Vec4d*) value), (const bool&) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemMeshNewIf_FindTetFromFace(HANDLE _this, int faceId) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->FindTetFromFace(faceId); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemBaseIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemBaseIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemBaseIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemBaseIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemBaseIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemBaseIf*) _this)) {
                (*((PHFemBaseIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFemBaseIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemBaseIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemBaseIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemBaseIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemBaseIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemBaseIf_GetPHFemMesh(HANDLE _this) {
	PHFemMeshNewIf* _ptr = (PHFemMeshNewIf*) NULL;
	try { _ptr = (PHFemMeshNewIf*) ((PHFemBaseIf*) _this)->GetPHFemMesh(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemVibrationIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemVibrationIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemVibrationIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemVibrationIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemVibrationIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemVibrationIf*) _this)) {
                (*((PHFemVibrationIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemVibrationIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemVibrationIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemVibrationIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemVibrationIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_SetTimeStep(HANDLE _this, double dt) {
	try { ((PHFemVibrationIf*) _this)->SetTimeStep(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationIf_GetTimeStep(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetTimeStep(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_SetYoungModulus(HANDLE _this, double value) {
	try { ((PHFemVibrationIf*) _this)->SetYoungModulus(value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationIf_GetYoungModulus(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetYoungModulus(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_SetPoissonsRatio(HANDLE _this, double value) {
	try { ((PHFemVibrationIf*) _this)->SetPoissonsRatio(value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationIf_GetPoissonsRatio(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetPoissonsRatio(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_SetDensity(HANDLE _this, double value) {
	try { ((PHFemVibrationIf*) _this)->SetDensity(value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationIf_GetDensity(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetDensity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_SetAlpha(HANDLE _this, double value) {
	try { ((PHFemVibrationIf*) _this)->SetAlpha(value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationIf_GetAlpha(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetAlpha(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_SetBeta(HANDLE _this, double value) {
	try { ((PHFemVibrationIf*) _this)->SetBeta(value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemVibrationIf_GetBeta(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetBeta(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_SetBoundary(HANDLE _this, int vtxIds) {
	try { ((PHFemVibrationIf*) _this)->SetBoundary(vtxIds); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_ClearBoundary(HANDLE _this) {
	try { ((PHFemVibrationIf*) _this)->ClearBoundary(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemVibrationIf_GetBoundary(HANDLE _this) {
        vector<int>* _ptr = (vector<int>*) NULL;
        try { _ptr = new vector<int>;
              vector<int> _vec = (((PHFemVibrationIf*) _this)->GetBoundary());
              for (int n = 0; n < (int) _vec.size(); n++) {
                  _ptr->push_back(_vec[n]);
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_SetAnalysisMode(HANDLE _this, int mode) {
	PHFemVibrationDesc::ANALYSIS_MODE arg01_ = ((PHFemVibrationDesc::ANALYSIS_MODE) mode);
	try { ((PHFemVibrationIf*) _this)->SetAnalysisMode((PHFemVibrationDesc::ANALYSIS_MODE) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_SetIntegrationMode(HANDLE _this, int mode) {
	PHFemVibrationDesc::INTEGRATION_MODE arg01_ = ((PHFemVibrationDesc::INTEGRATION_MODE) mode);
	try { ((PHFemVibrationIf*) _this)->SetIntegrationMode((PHFemVibrationDesc::INTEGRATION_MODE) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHFemVibrationIf_AddBoundaryCondition(HANDLE _this, int vtxId, HANDLE dof) {
	Vec3i arg02_ = *((Vec3i*) dof);
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->AddBoundaryCondition(vtxId, (Vec3i) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_DeleteBoundaryCondition(HANDLE _this) {
	try { ((PHFemVibrationIf*) _this)->DeleteBoundaryCondition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHFemVibrationIf_FindNeighborTetrahedron(HANDLE _this, HANDLE posW, int& tetId, HANDLE cpW, char bDeform) {
	Vec3d arg01_ = *((Vec3d*) posW);
	bool arg04_ = (bDeform == 0) ? false : true;
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->FindNeighborTetrahedron((Vec3d) arg01_, tetId, (Vec3d&) *((Vec3d*) cpW), (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemVibrationIf_SetDamping(HANDLE _this, int tetId, HANDLE posW, double damp_ratio) {
	Vec3d arg02_ = *((Vec3d*) posW);
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->SetDamping(tetId, (Vec3d) arg02_, damp_ratio); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemVibrationIf_AddForce(HANDLE _this, int tetId, HANDLE posW, HANDLE fW) {
	Vec3d arg02_ = *((Vec3d*) posW);
	Vec3d arg03_ = *((Vec3d*) fW);
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->AddForce(tetId, (Vec3d) arg02_, (Vec3d) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemVibrationIf_GetDisplacement(HANDLE _this, int tetId, HANDLE posW, HANDLE disp, char bDeform) {
	Vec3d arg02_ = *((Vec3d*) posW);
	bool arg04_ = (bDeform == 0) ? false : true;
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetDisplacement(tetId, (Vec3d) arg02_, (Vec3d&) *((Vec3d*) disp), (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemVibrationIf_GetVelocity(HANDLE _this, int tetId, HANDLE posW, HANDLE vel, char bDeform) {
	Vec3d arg02_ = *((Vec3d*) posW);
	bool arg04_ = (bDeform == 0) ? false : true;
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetVelocity(tetId, (Vec3d) arg02_, (Vec3d&) *((Vec3d*) vel), (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemVibrationIf_GetPosition(HANDLE _this, int tetId, HANDLE posW, HANDLE pos, char bDeform) {
	Vec3d arg02_ = *((Vec3d*) posW);
	bool arg04_ = (bDeform == 0) ? false : true;
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetPosition(tetId, (Vec3d) arg02_, (Vec3d&) *((Vec3d*) pos), (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_SetbRecomp(HANDLE _this) {
	try { ((PHFemVibrationIf*) _this)->SetbRecomp(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemVibrationIf_Init(HANDLE _this) {
	try { ((PHFemVibrationIf*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemThermoIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemThermoIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemThermoIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemThermoIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemThermoIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemThermoIf*) _this)) {
                (*((PHFemThermoIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemThermoIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemThermoIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemThermoIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemThermoIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemThermoIf_GetSurfaceVertex(HANDLE _this, int id) {
	int _val = (int) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetSurfaceVertex(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemThermoIf_NSurfaceVertices(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemThermoIf*) _this)->NSurfaceVertices(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetVertexTc(HANDLE _this, int id, double temp) {
	try { ((PHFemThermoIf*) _this)->SetVertexTc(id, temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetVertexTc_1(HANDLE _this, int id, double temp, double heatTrans) {
	try { ((PHFemThermoIf*) _this)->SetVertexTc(id, temp, heatTrans); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemThermoIf_GetPose(HANDLE _this, int id) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemThermoIf*) _this)->GetPose(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemThermoIf_GetSufVtxPose(HANDLE _this, unsigned int id) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemThermoIf*) _this)->GetSufVtxPose(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) unsigned long __cdecl Spr_PHFemThermoIf_GetStepCount(HANDLE _this) {
	unsigned long _val = (unsigned long) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetStepCount(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) unsigned long __cdecl Spr_PHFemThermoIf_GetStepCountCyc(HANDLE _this) {
	unsigned long _val = (unsigned long) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetStepCountCyc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoIf_GetVertexTemp(HANDLE _this, unsigned int id) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetVertexTemp(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoIf_GetSufVertexTemp(HANDLE _this, unsigned int id) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetSufVertexTemp(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetVertexTemp(HANDLE _this, unsigned int id, double temp) {
	try { ((PHFemThermoIf*) _this)->SetVertexTemp(id, temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetVerticesTempAll(HANDLE _this, double temp) {
	try { ((PHFemThermoIf*) _this)->SetVerticesTempAll(temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_AddvecFAll(HANDLE _this, unsigned int id, double dqdt) {
	try { ((PHFemThermoIf*) _this)->AddvecFAll(id, dqdt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetvecFAll(HANDLE _this, unsigned int id, double dqdt) {
	try { ((PHFemThermoIf*) _this)->SetvecFAll(id, dqdt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetRhoSpheat(HANDLE _this, double rho, double Cp) {
	try { ((PHFemThermoIf*) _this)->SetRhoSpheat(rho, Cp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemThermoIf_GetIHbandDrawVtx(HANDLE _this) {
	Vec2d* _ptr = (Vec2d*) NULL;
	try { _ptr = new Vec2d(); (*_ptr) = ((PHFemThermoIf*) _this)->GetIHbandDrawVtx(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_CalcIHdqdt_atleast(HANDLE _this, double r, double R, double dqdtAll, unsigned int num) {
	try { ((PHFemThermoIf*) _this)->CalcIHdqdt_atleast(r, R, dqdtAll, num); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_UpdateIHheatband(HANDLE _this, double xS, double xE, unsigned int heatingMODE) {
	try { ((PHFemThermoIf*) _this)->UpdateIHheatband(xS, xE, heatingMODE); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_UpdateIHheat(HANDLE _this, unsigned int heating) {
	try { ((PHFemThermoIf*) _this)->UpdateIHheat(heating); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_UpdateVecF(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->UpdateVecF(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_UpdateVecF_frypan(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->UpdateVecF_frypan(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_DecrMoist(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->DecrMoist(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_DecrMoist_velo(HANDLE _this, double vel) {
	try { ((PHFemThermoIf*) _this)->DecrMoist_velo(vel); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_DecrMoist_vel(HANDLE _this, double dt) {
	try { ((PHFemThermoIf*) _this)->DecrMoist_vel(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_InitAllVertexTemp(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->InitAllVertexTemp(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetInitThermoConductionParam(HANDLE _this, double thConduct, double rho, double specificHeat, double heatTrans) {
	try { ((PHFemThermoIf*) _this)->SetInitThermoConductionParam(thConduct, rho, specificHeat, heatTrans); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetParamAndReCreateMatrix(HANDLE _this, double thConduct0, double roh0, double specificHeat0) {
	try { ((PHFemThermoIf*) _this)->SetParamAndReCreateMatrix(thConduct0, roh0, specificHeat0); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoIf_GetArbitraryPointTemp(HANDLE _this, HANDLE temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetArbitraryPointTemp((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoIf_GetVtxTempInTets(HANDLE _this, HANDLE temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetVtxTempInTets((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_InitVecFAlls(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->InitVecFAlls(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoIf_Get_thConduct(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->Get_thConduct(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_PHFemThermoIf_SetConcentricHeatMap(HANDLE _this, HANDLE r, HANDLE temp, HANDLE origin) {
	Vec2d arg03_ = *((Vec2d*) origin);
	bool _val = (bool) NULL;
	try { _val = ((PHFemThermoIf*) _this)->SetConcentricHeatMap(*((vector<double>*) r), *((vector<double>*) temp), (Vec2d) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetThermalEmissivityToVerticesAll(HANDLE _this, double thermalEmissivity, double thermalEmissivity_const) {
	try { ((PHFemThermoIf*) _this)->SetThermalEmissivityToVerticesAll(thermalEmissivity, thermalEmissivity_const); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetOuterTemp(HANDLE _this, double temp) {
	try { ((PHFemThermoIf*) _this)->SetOuterTemp(temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetThermalRadiation(HANDLE _this, double ems, double ems_const) {
	try { ((PHFemThermoIf*) _this)->SetThermalRadiation(ems, ems_const); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetGaussCalcParam(HANDLE _this, unsigned int cyc, double epsilon) {
	try { ((PHFemThermoIf*) _this)->SetGaussCalcParam(cyc, epsilon); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_InitTcAll(HANDLE _this, double temp) {
	try { ((PHFemThermoIf*) _this)->InitTcAll(temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_InitToutAll(HANDLE _this, double temp) {
	try { ((PHFemThermoIf*) _this)->InitToutAll(temp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetWeekPow(HANDLE _this, double weekPow_) {
	try { ((PHFemThermoIf*) _this)->SetWeekPow(weekPow_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetIHParamWEEK(HANDLE _this, double inr_, double outR_, double weekPow_) {
	try { ((PHFemThermoIf*) _this)->SetIHParamWEEK(inr_, outR_, weekPow_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetHeatTransRatioToAllVertex(HANDLE _this, double heatTransR_) {
	try { ((PHFemThermoIf*) _this)->SetHeatTransRatioToAllVertex(heatTransR_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_AfterSetDesc(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->AfterSetDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetStopTimespan(HANDLE _this, double timespan) {
	try { ((PHFemThermoIf*) _this)->SetStopTimespan(timespan); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_UpdateMatk_RadiantHeatToAir(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->UpdateMatk_RadiantHeatToAir(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_ReCreateMatrix(HANDLE _this, double thConduct0) {
	try { ((PHFemThermoIf*) _this)->ReCreateMatrix(thConduct0); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_ActivateVtxbeRadiantHeat(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->ActivateVtxbeRadiantHeat(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_OutputMatKall(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->OutputMatKall(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_IfRadiantHeatTrans(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->IfRadiantHeatTrans(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_IfRadiantHeatTransSteak(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->IfRadiantHeatTransSteak(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHFemThermoIf_calcGvtx(HANDLE _this, BSTR fwfood, int pv, unsigned int texture_mode) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) fwfood, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) fwfood, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	float _val = (float) NULL;
	try { _val = ((PHFemThermoIf*) _this)->calcGvtx((string) arg01_, pv, texture_mode); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetTimeStep(HANDLE _this, double dt) {
	try { ((PHFemThermoIf*) _this)->SetTimeStep(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemThermoIf_GetVertexNormal(HANDLE _this, unsigned int vtxid) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemThermoIf*) _this)->GetVertexNormal(vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetVertexHeatTransRatio(HANDLE _this, unsigned int vtxid, double heattransRatio) {
	try { ((PHFemThermoIf*) _this)->SetVertexHeatTransRatio(vtxid, heattransRatio); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetVertexBeRadiantHeat(HANDLE _this, unsigned int vtxid, char flag) {
	bool arg02_ = (flag == 0) ? false : true;
	try { ((PHFemThermoIf*) _this)->SetVertexBeRadiantHeat(vtxid, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoIf_GetVertexArea(HANDLE _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetVertexArea(vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetVertexToofar(HANDLE _this, unsigned int vtxid, char tooFar) {
	bool arg02_ = (tooFar == 0) ? false : true;
	try { ((PHFemThermoIf*) _this)->SetVertexToofar(vtxid, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHFemThermoIf_GetVertexToofar(HANDLE _this, unsigned int vtxid) {
	bool _val = (bool) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetVertexToofar(vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetVertexBeCondVtxs(HANDLE _this, unsigned int vtxid, char becondVtxs) {
	bool arg02_ = (becondVtxs == 0) ? false : true;
	try { ((PHFemThermoIf*) _this)->SetVertexBeCondVtxs(vtxid, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_CreateVecFAll(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->CreateVecFAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_CalcFaceNormalAll(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->CalcFaceNormalAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_CalcVertexNormalAll(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->CalcVertexNormalAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_InitFaceNormalAll(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->InitFaceNormalAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_InitVertexNormalAll(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->InitVertexNormalAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_RevVertexNormalAll(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->RevVertexNormalAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetWeekPowFULL(HANDLE _this, double weekPow_full) {
	try { ((PHFemThermoIf*) _this)->SetWeekPowFULL(weekPow_full); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetweekPow_FULL(HANDLE _this, double setweekPow_FULL) {
	try { ((PHFemThermoIf*) _this)->SetweekPow_FULL(setweekPow_FULL); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_setIhRatio(HANDLE _this, double a) {
	try { ((PHFemThermoIf*) _this)->setIhRatio(a); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_Setems(HANDLE _this, double setems) {
	try { ((PHFemThermoIf*) _this)->Setems(setems); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_Setems_steak(HANDLE _this, double setems_steak) {
	try { ((PHFemThermoIf*) _this)->Setems_steak(setems_steak); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetthConduct(HANDLE _this, double thConduct) {
	try { ((PHFemThermoIf*) _this)->SetthConduct(thConduct); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoIf_GetWeekPowFULL(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetWeekPowFULL(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemThermoIf_GetVertexPose(HANDLE _this, unsigned int vtxid) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemThermoIf*) _this)->GetVertexPose(vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_OutTetVolumeAll(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->OutTetVolumeAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHFemThermoIf_GetTetsV(HANDLE _this, unsigned int tetid, unsigned int vtxid) {
	int _val = (int) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetTetsV(tetid, vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_VecFNegativeCheck(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->VecFNegativeCheck(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoIf_GetVecFElem(HANDLE _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetVecFElem(vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHFemThermoIf_GetTetVNums(HANDLE _this, unsigned int id, unsigned int num) {
	int _val = (int) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetTetVNums(id, num); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemThermoIf_GetInitialTemp(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetInitialTemp(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_UpdateVertexTempAll(HANDLE _this) {
	try { ((PHFemThermoIf*) _this)->UpdateVertexTempAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemThermoIf_SetThermoCameraScale(HANDLE _this, double minTemp, double maxTemp) {
	try { ((PHFemThermoIf*) _this)->SetThermoCameraScale(minTemp, maxTemp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFemPorousWOMoveIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFemPorousWOMoveIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFemPorousWOMoveIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFemPorousWOMoveIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemPorousWOMoveIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemPorousWOMoveIf*) _this)) {
                (*((PHFemPorousWOMoveIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemPorousWOMoveIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemPorousWOMoveIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFemPorousWOMoveIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemPorousWOMoveIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveIf_SetTimeStep(HANDLE _this, double dt) {
	try { ((PHFemPorousWOMoveIf*) _this)->SetTimeStep(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveIf_GetTimeStep(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetTimeStep(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveIf_UpdateVertexRhoWAll(HANDLE _this) {
	try { ((PHFemPorousWOMoveIf*) _this)->UpdateVertexRhoWAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveIf_UpdateVertexRhoOAll(HANDLE _this) {
	try { ((PHFemPorousWOMoveIf*) _this)->UpdateVertexRhoOAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveIf_SetVertexMw(HANDLE _this, unsigned int vtxid, double mw) {
	try { ((PHFemPorousWOMoveIf*) _this)->SetVertexMw(vtxid, mw); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveIf_SetVertexMo(HANDLE _this, unsigned int vtxid, double mo) {
	try { ((PHFemPorousWOMoveIf*) _this)->SetVertexMo(vtxid, mo); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveIf_GetVertexMw(HANDLE _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVertexMw(vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveIf_GetVertexMo(HANDLE _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVertexMo(vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveIf_GetVtxWaterInTets(HANDLE _this, HANDLE temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVtxWaterInTets((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveIf_GetVtxOilInTets(HANDLE _this, HANDLE temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVtxOilInTets((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveIf_GetVertexRhoW(HANDLE _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVertexRhoW(vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveIf_GetVertexRhoO(HANDLE _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVertexRhoO(vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_PHFemPorousWOMoveIf_calcGvtx(HANDLE _this, BSTR fwfood, int pv, unsigned int texture_mode) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) fwfood, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) fwfood, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	float _val = (float) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->calcGvtx((string) arg01_, pv, texture_mode); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHFemPorousWOMoveIf_setGravity(HANDLE _this, HANDLE g) {
	Vec3d arg01_ = *((Vec3d*) g);
	try { ((PHFemPorousWOMoveIf*) _this)->setGravity((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveIf_decideWetValue(HANDLE _this, unsigned int faceid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->decideWetValue(faceid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHFemPorousWOMoveIf_GetVtxSaturation(HANDLE _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVtxSaturation(vtxid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFrameIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFrameIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFrameIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFrameIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFrameIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFrameIf*) _this)) {
                (*((PHFrameIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFrameIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFrameIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFrameIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFrameIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFrameIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFrameIf_GetPose(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHFrameIf*) _this)->GetPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHFrameIf_SetPose(HANDLE _this, HANDLE p) {
	Posed arg01_ = *((Posed*) p);
	try { ((PHFrameIf*) _this)->SetPose((Posed) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFrameIf_GetShape(HANDLE _this) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((PHFrameIf*) _this)->GetShape(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBodyIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBodyIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBodyIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBodyIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBodyIf*) _this)) {
                (*((PHBodyIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHBodyIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBodyIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBodyIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_GetPose(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHBodyIf*) _this)->GetPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_GetVelocity(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBodyIf*) _this)->GetVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_GetAngularVelocity(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBodyIf*) _this)->GetAngularVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_GetCenterOfMass(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBodyIf*) _this)->GetCenterOfMass(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_GetFramePosition(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBodyIf*) _this)->GetFramePosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_GetCenterPosition(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBodyIf*) _this)->GetCenterPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PHBodyIf_IsDynamical(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBodyIf*) _this)->IsDynamical(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHBodyIf_IsFrozen(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBodyIf*) _this)->IsFrozen(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHBodyIf_AddShape(HANDLE _this, HANDLE shape) {
	try { ((PHBodyIf*) _this)->AddShape((CDShapeIf*) shape); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBodyIf_AddShapes(HANDLE _this, HANDLE shBegin, HANDLE shEnd) {
	try { ((PHBodyIf*) _this)->AddShapes((CDShapeIf**) shBegin, (CDShapeIf**) shEnd); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBodyIf_RemoveShape(HANDLE _this, int index) {
	try { ((PHBodyIf*) _this)->RemoveShape(index); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBodyIf_RemoveShapes(HANDLE _this, int idxBegin, int idxEnd) {
	try { ((PHBodyIf*) _this)->RemoveShapes(idxBegin, idxEnd); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBodyIf_RemoveShape_1(HANDLE _this, HANDLE shape) {
	try { ((PHBodyIf*) _this)->RemoveShape((CDShapeIf*) shape); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHBodyIf_NShape(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHBodyIf*) _this)->NShape(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_GetShape(HANDLE _this, int index) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((PHBodyIf*) _this)->GetShape(index); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBodyIf_GetShapePose(HANDLE _this, int index) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHBodyIf*) _this)->GetShapePose(index); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBodyIf_SetShapePose(HANDLE _this, int index, HANDLE pose) {
	try { ((PHBodyIf*) _this)->SetShapePose(index, (const Posed&) *((Posed*) pose)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBodyIf_ClearShape(HANDLE _this) {
	try { ((PHBodyIf*) _this)->ClearShape(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBodyIf_GetBBox(HANDLE _this, HANDLE bbmin, HANDLE bbmax, char world) {
	bool arg03_ = (world == 0) ? false : true;
	try { ((PHBodyIf*) _this)->GetBBox((Vec3d&) *((Vec3d*) bbmin), (Vec3d&) *((Vec3d*) bbmax), (bool) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHBodyIf_InvalidateBbox(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBodyIf*) _this)->InvalidateBbox(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSolidIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSolidIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSolidIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSolidIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSolidIf*) _this)) {
                (*((PHSolidIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSolidIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSolidIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_AddForce(HANDLE _this, HANDLE f) {
	Vec3d arg01_ = *((Vec3d*) f);
	try { ((PHSolidIf*) _this)->AddForce((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_AddTorque(HANDLE _this, HANDLE t) {
	Vec3d arg01_ = *((Vec3d*) t);
	try { ((PHSolidIf*) _this)->AddTorque((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_AddForce_1(HANDLE _this, HANDLE f, HANDLE r) {
	Vec3d arg01_ = *((Vec3d*) f);
	Vec3d arg02_ = *((Vec3d*) r);
	try { ((PHSolidIf*) _this)->AddForce((Vec3d) arg01_, (Vec3d) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSolidIf_GetMass(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSolidIf*) _this)->GetMass(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHSolidIf_GetMassInv(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSolidIf*) _this)->GetMassInv(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetMass(HANDLE _this, double m) {
	try { ((PHSolidIf*) _this)->SetMass(m); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetCenterOfMass(HANDLE _this, HANDLE center) {
	try { ((PHSolidIf*) _this)->SetCenterOfMass((const Vec3d&) *((Vec3d*) center)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_GetInertia(HANDLE _this) {
	Matrix3d* _ptr = (Matrix3d*) NULL;
	try { _ptr = new Matrix3d(); (*_ptr) = ((PHSolidIf*) _this)->GetInertia(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_GetInertiaInv(HANDLE _this) {
	Matrix3d* _ptr = (Matrix3d*) NULL;
	try { _ptr = new Matrix3d(); (*_ptr) = ((PHSolidIf*) _this)->GetInertiaInv(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetInertia(HANDLE _this, HANDLE I) {
	try { ((PHSolidIf*) _this)->SetInertia((const Matrix3d&) *((Matrix3d*) I)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_CompInertia(HANDLE _this) {
	try { ((PHSolidIf*) _this)->CompInertia(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetFramePosition(HANDLE _this, HANDLE p) {
	try { ((PHSolidIf*) _this)->SetFramePosition((const Vec3d&) *((Vec3d*) p)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetCenterPosition(HANDLE _this, HANDLE p) {
	try { ((PHSolidIf*) _this)->SetCenterPosition((const Vec3d&) *((Vec3d*) p)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_GetDeltaPosition(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidIf*) _this)->GetDeltaPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_GetDeltaPosition_1(HANDLE _this, HANDLE p) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidIf*) _this)->GetDeltaPosition((const Vec3d&) *((Vec3d*) p)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_GetOrientation(HANDLE _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHSolidIf*) _this)->GetOrientation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetOrientation(HANDLE _this, HANDLE q) {
	try { ((PHSolidIf*) _this)->SetOrientation((const Quaterniond&) *((Quaterniond*) q)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetPose(HANDLE _this, HANDLE p) {
	try { ((PHSolidIf*) _this)->SetPose((const Posed&) *((Posed*) p)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetVelocity(HANDLE _this, HANDLE v) {
	try { ((PHSolidIf*) _this)->SetVelocity((const Vec3d&) *((Vec3d*) v)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetAngularVelocity(HANDLE _this, HANDLE av) {
	try { ((PHSolidIf*) _this)->SetAngularVelocity((const Vec3d&) *((Vec3d*) av)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_GetForce(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidIf*) _this)->GetForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_GetTorque(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidIf*) _this)->GetTorque(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetGravity(HANDLE _this, char bOn) {
	bool arg01_ = (bOn == 0) ? false : true;
	try { ((PHSolidIf*) _this)->SetGravity((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetDynamical(HANDLE _this, char bOn) {
	bool arg01_ = (bOn == 0) ? false : true;
	try { ((PHSolidIf*) _this)->SetDynamical((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSolidIf_IsDynamical(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHSolidIf*) _this)->IsDynamical(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidIf_SetStationary(HANDLE _this, char bOn) {
	bool arg01_ = (bOn == 0) ? false : true;
	try { ((PHSolidIf*) _this)->SetStationary((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSolidIf_IsStationary(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHSolidIf*) _this)->IsStationary(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidIf_GetTreeNode(HANDLE _this) {
	PHTreeNodeIf* _ptr = (PHTreeNodeIf*) NULL;
	try { _ptr = (PHTreeNodeIf*) ((PHSolidIf*) _this)->GetTreeNode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHShapePairForLCPIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHShapePairForLCPIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHShapePairForLCPIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHShapePairForLCPIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForLCPIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHShapePairForLCPIf*) _this)) {
                (*((PHShapePairForLCPIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHShapePairForLCPIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForLCPIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHShapePairForLCPIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForLCPIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHShapePairForLCPIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHShapePairForLCPIf_NSectionVertexes(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHShapePairForLCPIf*) _this)->NSectionVertexes(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForLCPIf_GetSectionVertex(HANDLE _this, int i) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHShapePairForLCPIf*) _this)->GetSectionVertex(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_PHShapePairForLCPIf_GetContactDimension(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHShapePairForLCPIf*) _this)->GetContactDimension(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForLCPIf_GetNormalVector(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHShapePairForLCPIf*) _this)->GetNormalVector(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHShapePairForLCPIf_GetClosestPoints(HANDLE _this, HANDLE pa, HANDLE pb) {
	try { ((PHShapePairForLCPIf*) _this)->GetClosestPoints((Vec3d&) *((Vec3d*) pa), (Vec3d&) *((Vec3d*) pb)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForLCPIf_GetShape(HANDLE _this, int i) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((PHShapePairForLCPIf*) _this)->GetShape(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSolidPairIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSolidPairIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSolidPairIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSolidPairIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSolidPairIf*) _this)) {
                (*((PHSolidPairIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSolidPairIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSolidPairIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSolidPairIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairIf_GetSolid(HANDLE _this, int i) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHSolidPairIf*) _this)->GetSolid(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSolidPairIf_NListener(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSolidPairIf*) _this)->NListener(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairIf_GetListener(HANDLE _this, int i) {
	PHCollisionListener* _ptr = (PHCollisionListener*) NULL;
	try { _ptr = (PHCollisionListener*) ((PHSolidPairIf*) _this)->GetListener(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidPairIf_RemoveListener(HANDLE _this, int i) {
	try { ((PHSolidPairIf*) _this)->RemoveListener(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidPairIf_AddListener(HANDLE _this, HANDLE l, int pos) {
	try { ((PHSolidPairIf*) _this)->AddListener((PHCollisionListener*) l, pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidPairIf_AddListener_1(HANDLE _this, HANDLE l) {
	try { ((PHSolidPairIf*) _this)->AddListener((PHCollisionListener*) l); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSolidPairForLCPIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSolidPairForLCPIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSolidPairForLCPIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSolidPairForLCPIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForLCPIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSolidPairForLCPIf*) _this)) {
                (*((PHSolidPairForLCPIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSolidPairForLCPIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForLCPIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSolidPairForLCPIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForLCPIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSolidPairForLCPIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PHSolidPairForLCPIf_IsContactEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHSolidPairForLCPIf*) _this)->IsContactEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidPairForLCPIf_EnableContact(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHSolidPairForLCPIf*) _this)->EnableContact((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHSolidPairForLCPIf_GetContactState(HANDLE _this, int i, int j) {
	int _val = (int) NULL;
	try { _val = ((PHSolidPairForLCPIf*) _this)->GetContactState(i, j); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForLCPIf_GetCommonPoint(HANDLE _this, int i, int j) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidPairForLCPIf*) _this)->GetCommonPoint(i, j); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) unsigned int __cdecl Spr_PHSolidPairForLCPIf_GetLastContactCount(HANDLE _this, int i, int j) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((PHSolidPairForLCPIf*) _this)->GetLastContactCount(i, j); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHSolidPairForLCPIf_GetContactDepth(HANDLE _this, int i, int j) {
	double _val = (double) NULL;
	try { _val = ((PHSolidPairForLCPIf*) _this)->GetContactDepth(i, j); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForLCPIf_GetShapePair(HANDLE _this, int i, int j) {
	PHShapePairForLCPIf* _ptr = (PHShapePairForLCPIf*) NULL;
	try { _ptr = (PHShapePairForLCPIf*) ((PHSolidPairForLCPIf*) _this)->GetShapePair(i, j); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHapticPointerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHapticPointerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHapticPointerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHapticPointerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticPointerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHapticPointerIf*) _this)) {
                (*((PHHapticPointerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticPointerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHapticPointerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticPointerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHapticPointerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetHapticRenderMode(HANDLE _this, int m) {
	PHHapticPointerDesc::HapticRenderMode arg01_ = ((PHHapticPointerDesc::HapticRenderMode) m);
	try { ((PHHapticPointerIf*) _this)->SetHapticRenderMode((PHHapticPointerDesc::HapticRenderMode) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticPointerIf_GetHapticRenderMode(HANDLE _this) {
	PHHapticPointerDesc::HapticRenderMode _val = (PHHapticPointerDesc::HapticRenderMode) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetHapticRenderMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (int) _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_EnableRotation(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableRotation((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHHapticPointerIf_IsRotation(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsRotation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_EnableForce(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableForce((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHHapticPointerIf_IsForce(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_EnableFriction(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableFriction((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHHapticPointerIf_IsFriction(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsFriction(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_EnableTimeVaryFriction(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableTimeVaryFriction((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHHapticPointerIf_IsTimeVaryFriction(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsTimeVaryFriction(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_EnableVibration(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableVibration((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHHapticPointerIf_IsVibration(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsVibration(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_EnableMultiPoints(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableMultiPoints((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHHapticPointerIf_IsMultiPoints(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsMultiPoints(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_EnableMultiProxy(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableMultiProxy((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHHapticPointerIf_IsMultiProxy(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsMultiProxy(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_EnableSimulation(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableSimulation((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHHapticPointerIf_IsSimulation(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsSimulation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetFrictionSpring(HANDLE _this, float s) {
	try { ((PHHapticPointerIf*) _this)->SetFrictionSpring(s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHHapticPointerIf_GetFrictionSpring(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetFrictionSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetFrictionDamper(HANDLE _this, float s) {
	try { ((PHHapticPointerIf*) _this)->SetFrictionDamper(s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHHapticPointerIf_GetFrictionDamper(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetFrictionDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetReflexSpring(HANDLE _this, float s) {
	try { ((PHHapticPointerIf*) _this)->SetReflexSpring(s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHHapticPointerIf_GetReflexSpring(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetReflexSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetReflexDamper(HANDLE _this, float d) {
	try { ((PHHapticPointerIf*) _this)->SetReflexDamper(d); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHHapticPointerIf_GetReflexDamper(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetReflexDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetRotationReflexSpring(HANDLE _this, float s) {
	try { ((PHHapticPointerIf*) _this)->SetRotationReflexSpring(s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHHapticPointerIf_GetRotationReflexSpring(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetRotationReflexSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetRotationReflexDamper(HANDLE _this, float d) {
	try { ((PHHapticPointerIf*) _this)->SetRotationReflexDamper(d); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHHapticPointerIf_GetRotationReflexDamper(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetRotationReflexDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetLocalRange(HANDLE _this, float r) {
	try { ((PHHapticPointerIf*) _this)->SetLocalRange(r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHHapticPointerIf_GetLocalRange(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetLocalRange(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetPosScale(HANDLE _this, double scale) {
	try { ((PHHapticPointerIf*) _this)->SetPosScale(scale); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHHapticPointerIf_GetPosScale(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetPosScale(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetRotationalWeight(HANDLE _this, double w) {
	try { ((PHHapticPointerIf*) _this)->SetRotationalWeight(w); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHHapticPointerIf_GetRotationalWeight(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetRotationalWeight(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetDefaultPose(HANDLE _this, HANDLE p) {
	Posed arg01_ = *((Posed*) p);
	try { ((PHHapticPointerIf*) _this)->SetDefaultPose((Posed) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticPointerIf_GetDefaultPose(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHHapticPointerIf*) _this)->GetDefaultPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticPointerIf_NNeighborSolids(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->NNeighborSolids(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticPointerIf_GetNeighborSolidId(HANDLE _this, int i) {
	int _val = (int) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetNeighborSolidId(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticPointerIf_GetNeighborSolid(HANDLE _this, int i) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHHapticPointerIf*) _this)->GetNeighborSolid(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_PHHapticPointerIf_GetContactForce(HANDLE _this, int i) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetContactForce(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticPointerIf_GetHapticForce(HANDLE _this) {
	SpatialVector* _ptr = (SpatialVector*) NULL;
	try { _ptr = new SpatialVector(); (*_ptr) = ((PHHapticPointerIf*) _this)->GetHapticForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticPointerIf_GetProxyVelocity(HANDLE _this) {
	SpatialVector* _ptr = (SpatialVector*) NULL;
	try { _ptr = new SpatialVector(); (*_ptr) = ((PHHapticPointerIf*) _this)->GetProxyVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetProxyN(HANDLE _this, int n) {
	try { ((PHHapticPointerIf*) _this)->SetProxyN(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticPointerIf_GetProxyN(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetProxyN(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticPointerIf_GetTotalSlipState(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetTotalSlipState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticPointerIf_GetSlipState(HANDLE _this, int i) {
	int _val = (int) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetSlipState(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_SetProxyVelocity(HANDLE _this, HANDLE spv) {
	SpatialVector arg01_ = *((SpatialVector*) spv);
	try { ((PHHapticPointerIf*) _this)->SetProxyVelocity((SpatialVector) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_AddHapticForce(HANDLE _this, HANDLE f) {
	try { ((PHHapticPointerIf*) _this)->AddHapticForce((const SpatialVector&) *((SpatialVector*) f)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_ClearHapticForce(HANDLE _this) {
	try { ((PHHapticPointerIf*) _this)->ClearHapticForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerIf_UpdateHumanInterface(HANDLE _this, HANDLE pose, HANDLE vel) {
	try { ((PHHapticPointerIf*) _this)->UpdateHumanInterface((const Posed&) *((Posed*) pose), (const SpatialVector&) *((SpatialVector*) vel)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHShapePairForHapticIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHShapePairForHapticIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHShapePairForHapticIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHShapePairForHapticIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForHapticIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHShapePairForHapticIf*) _this)) {
                (*((PHShapePairForHapticIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHShapePairForHapticIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForHapticIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHShapePairForHapticIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForHapticIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHShapePairForHapticIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHShapePairForHapticIf_NIrs(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHShapePairForHapticIf*) _this)->NIrs(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHShapePairForHapticIf_NIrsNormal(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHShapePairForHapticIf*) _this)->NIrsNormal(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForHapticIf_GetIrForce(HANDLE _this, int i) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHShapePairForHapticIf*) _this)->GetIrForce(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_PHShapePairForHapticIf_GetMu(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHShapePairForHapticIf*) _this)->GetMu(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHShapePairForHapticIf_GetFrame(HANDLE _this, int i) {
	PHFrameIf* _ptr = (PHFrameIf*) NULL;
	try { _ptr = (PHFrameIf*) ((PHShapePairForHapticIf*) _this)->GetFrame(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHShapePairForHapticIf_UpdateCache(HANDLE _this) {
	try { ((PHShapePairForHapticIf*) _this)->UpdateCache(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHShapePairForHapticIf_GetMus(HANDLE _this, int id) {
	double _val = (double) NULL;
	try { _val = ((PHShapePairForHapticIf*) _this)->GetMus(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSolidPairForHapticIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSolidPairForHapticIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSolidPairForHapticIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSolidPairForHapticIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForHapticIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSolidPairForHapticIf*) _this)) {
                (*((PHSolidPairForHapticIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSolidPairForHapticIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForHapticIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSolidPairForHapticIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForHapticIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSolidPairForHapticIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForHapticIf_GetShapePair(HANDLE _this, int i, int j) {
	PHShapePairForHapticIf* _ptr = (PHShapePairForHapticIf*) NULL;
	try { _ptr = (PHShapePairForHapticIf*) ((PHSolidPairForHapticIf*) _this)->GetShapePair(i, j); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSolidPairForHapticIf_GetFrictionState(HANDLE _this) {
	PHSolidPairForHapticIf::FrictionState _val = (PHSolidPairForHapticIf::FrictionState) NULL;
	try { _val = ((PHSolidPairForHapticIf*) _this)->GetFrictionState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (int) _val;
    }
    __declspec(dllexport) unsigned int __cdecl Spr_PHSolidPairForHapticIf_GetContactCount(HANDLE _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((PHSolidPairForHapticIf*) _this)->GetContactCount(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) unsigned int __cdecl Spr_PHSolidPairForHapticIf_GetFrictionCount(HANDLE _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((PHSolidPairForHapticIf*) _this)->GetFrictionCount(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidPairForHapticIf_InitFrictionState(HANDLE _this, int n) {
	try { ((PHSolidPairForHapticIf*) _this)->InitFrictionState(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidPairForHapticIf_InitFrictionCount(HANDLE _this, int n) {
	try { ((PHSolidPairForHapticIf*) _this)->InitFrictionCount(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidPairForHapticIf_InitContactCount(HANDLE _this, int n) {
	try { ((PHSolidPairForHapticIf*) _this)->InitContactCount(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSolidPairForHapticIf_InitSlipState(HANDLE _this, int n) {
	try { ((PHSolidPairForHapticIf*) _this)->InitSlipState(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHSolidPairForHapticIf_GetSlipState(HANDLE _this, int i) {
	int _val = (int) NULL;
	try { _val = ((PHSolidPairForHapticIf*) _this)->GetSlipState(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForHapticIf_GetForce(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidPairForHapticIf*) _this)->GetForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSolidPairForHapticIf_GetTorque(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidPairForHapticIf*) _this)->GetTorque(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSolidPairForHapticIf_GetFrictionStates(HANDLE _this, int i) {
	PHSolidPairForHapticIf::FrictionState _val = (PHSolidPairForHapticIf::FrictionState) NULL;
	try { _val = ((PHSolidPairForHapticIf*) _this)->GetFrictionStates(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (int) _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHapticEngineIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHapticEngineIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHapticEngineIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHapticEngineIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticEngineIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHapticEngineIf*) _this)) {
                (*((PHHapticEngineIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHHapticEngineIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticEngineIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHapticEngineIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHapticEngineIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticEngineIf_SetHapticStepMode(HANDLE _this, int mode) {
	PHHapticEngineDesc::HapticStepMode arg01_ = ((PHHapticEngineDesc::HapticStepMode) mode);
	try { ((PHHapticEngineIf*) _this)->SetHapticStepMode((PHHapticEngineDesc::HapticStepMode) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticEngineIf_GetHapticStepMode(HANDLE _this) {
	PHHapticEngineDesc::HapticStepMode _val = (PHHapticEngineDesc::HapticStepMode) NULL;
	try { _val = ((PHHapticEngineIf*) _this)->GetHapticStepMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (int) _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticEngineIf_NSolids(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticEngineIf*) _this)->NSolids(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticEngineIf_NPointers(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticEngineIf*) _this)->NPointers(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticEngineIf_GetPointer(HANDLE _this, int i) {
	PHHapticPointerIf* _ptr = (PHHapticPointerIf*) NULL;
	try { _ptr = (PHHapticPointerIf*) ((PHHapticEngineIf*) _this)->GetPointer(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticEngineIf_GetSolidPair(HANDLE _this, int i, int j) {
	PHSolidPairForHapticIf* _ptr = (PHSolidPairForHapticIf*) NULL;
	try { _ptr = (PHSolidPairForHapticIf*) ((PHHapticEngineIf*) _this)->GetSolidPair(i, j); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticEngineIf_NSolidsInHaptic(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticEngineIf*) _this)->NSolidsInHaptic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHHapticEngineIf_NPointersInHaptic(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticEngineIf*) _this)->NPointersInHaptic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticEngineIf_GetPointerInHaptic(HANDLE _this, int i) {
	PHHapticPointerIf* _ptr = (PHHapticPointerIf*) NULL;
	try { _ptr = (PHHapticPointerIf*) ((PHHapticEngineIf*) _this)->GetPointerInHaptic(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticEngineIf_GetSolidPairInHaptic(HANDLE _this, int i, int j) {
	PHSolidPairForHapticIf* _ptr = (PHSolidPairForHapticIf*) NULL;
	try { _ptr = (PHSolidPairForHapticIf*) ((PHHapticEngineIf*) _this)->GetSolidPairInHaptic(i, j); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticEngineIf_StepPhysicsSimulation(HANDLE _this) {
	try { ((PHHapticEngineIf*) _this)->StepPhysicsSimulation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticEngineIf_ReleaseState(HANDLE _this) {
	try { ((PHHapticEngineIf*) _this)->ReleaseState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticEngineIf_Callback(HANDLE _this, HANDLE arg) {
	void* _ptr = (void*) NULL;
	try { _ptr = PHHapticEngineIf::Callback(arg); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKEndEffectorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKEndEffectorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKEndEffectorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKEndEffectorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKEndEffectorIf*) _this)) {
                (*((PHIKEndEffectorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKEndEffectorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKEndEffectorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetSolid(HANDLE _this, HANDLE solid) {
	try { ((PHIKEndEffectorIf*) _this)->SetSolid((PHSolidIf*) solid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHIKEndEffectorIf*) _this)->GetSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetParentActuator(HANDLE _this, HANDLE ika) {
	try { ((PHIKEndEffectorIf*) _this)->SetParentActuator((PHIKActuatorIf*) ika); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetParentActuator(HANDLE _this) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHIKEndEffectorIf*) _this)->GetParentActuator(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_Enable(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKEndEffectorIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHIKEndEffectorIf_IsEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->IsEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetLocalPosition(HANDLE _this, HANDLE localPosition) {
	Vec3d arg01_ = *((Vec3d*) localPosition);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetLocalPosition((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetLocalPosition(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetLocalPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetLocalDirection(HANDLE _this, HANDLE localDirection) {
	Vec3d arg01_ = *((Vec3d*) localDirection);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetLocalDirection((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetLocalDirection(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetLocalDirection(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_EnablePositionControl(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKEndEffectorIf*) _this)->EnablePositionControl((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHIKEndEffectorIf_IsPositionControlEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->IsPositionControlEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetPositionPriority(HANDLE _this, double priority) {
	try { ((PHIKEndEffectorIf*) _this)->SetPositionPriority(priority); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEndEffectorIf_GetPositionPriority(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->GetPositionPriority(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetPosition(HANDLE _this, HANDLE position) {
	Vec3d arg01_ = *((Vec3d*) position);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetPosition((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetPosition(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_EnableOrientationControl(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKEndEffectorIf*) _this)->EnableOrientationControl((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHIKEndEffectorIf_IsOrientationControlEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->IsOrientationControlEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetOrientationPriority(HANDLE _this, double priority) {
	try { ((PHIKEndEffectorIf*) _this)->SetOrientationPriority(priority); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKEndEffectorIf_GetOrientationPriority(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->GetOrientationPriority(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetOriCtlMode(HANDLE _this, int mode) {
	PHIKEndEffectorDesc::OriCtlMode arg01_ = ((PHIKEndEffectorDesc::OriCtlMode) mode);
	try { ((PHIKEndEffectorIf*) _this)->SetOriCtlMode((PHIKEndEffectorDesc::OriCtlMode) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHIKEndEffectorIf_GetOriCtlMode(HANDLE _this) {
	PHIKEndEffectorDesc::OriCtlMode _val = (PHIKEndEffectorDesc::OriCtlMode) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->GetOriCtlMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (int) _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetOrientation(HANDLE _this, HANDLE orientation) {
	Quaterniond arg01_ = *((Quaterniond*) orientation);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetOrientation((Quaterniond) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetOrientation(HANDLE _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetOrientation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetDirection(HANDLE _this, HANDLE direction) {
	Vec3d arg01_ = *((Vec3d*) direction);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetDirection((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetDirection(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetDirection(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetLookat(HANDLE _this, HANDLE lookat) {
	Vec3d arg01_ = *((Vec3d*) lookat);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetLookat((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetLookat(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetLookat(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetVelocity(HANDLE _this, HANDLE velocity) {
	Vec3d arg01_ = *((Vec3d*) velocity);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetVelocity((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetVelocity(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetAngularVelocity(HANDLE _this, HANDLE angVel) {
	Vec3d arg01_ = *((Vec3d*) angVel);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetAngularVelocity((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetAngularVelocity(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetAngularVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_EnableForceControl(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKEndEffectorIf*) _this)->EnableForceControl((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetForce(HANDLE _this, HANDLE force, HANDLE workingPoint) {
	Vec3d arg01_ = *((Vec3d*) force);
	Vec3d arg02_ = *((Vec3d*) workingPoint);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetForce((Vec3d) arg01_, (Vec3d) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetForce_1(HANDLE _this, HANDLE force) {
	Vec3d arg01_ = *((Vec3d*) force);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetForce((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetForce(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetForceWorkingPoint(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetForceWorkingPoint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_EnableTorqueControl(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKEndEffectorIf*) _this)->EnableTorqueControl((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_SetTargetTorque(HANDLE _this, HANDLE torque) {
	Vec3d arg01_ = *((Vec3d*) torque);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetTorque((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetTargetTorque(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetTorque(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKEndEffectorIf_GetSolidTempPose(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetSolidTempPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKEndEffectorIf_ApplyExactState(HANDLE _this) {
	try { ((PHIKEndEffectorIf*) _this)->ApplyExactState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKActuatorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKActuatorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKActuatorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKActuatorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKActuatorIf*) _this)) {
                (*((PHIKActuatorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKActuatorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKActuatorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorIf_PrepareSolve(HANDLE _this) {
	try { ((PHIKActuatorIf*) _this)->PrepareSolve(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorIf_ProceedSolve(HANDLE _this) {
	try { ((PHIKActuatorIf*) _this)->ProceedSolve(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorIf_Move(HANDLE _this) {
	try { ((PHIKActuatorIf*) _this)->Move(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorIf_ApplyExactState(HANDLE _this, char reverse) {
	bool arg01_ = (reverse == 0) ? false : true;
	try { ((PHIKActuatorIf*) _this)->ApplyExactState((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorIf_ApplyExactState_1(HANDLE _this) {
	try { ((PHIKActuatorIf*) _this)->ApplyExactState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorIf_SetBias(HANDLE _this, float bias) {
	try { ((PHIKActuatorIf*) _this)->SetBias(bias); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHIKActuatorIf_GetBias(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHIKActuatorIf*) _this)->GetBias(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorIf_SetPullbackRate(HANDLE _this, double pullbackRate) {
	try { ((PHIKActuatorIf*) _this)->SetPullbackRate(pullbackRate); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKActuatorIf_GetPullbackRate(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKActuatorIf*) _this)->GetPullbackRate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKActuatorIf_Enable(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKActuatorIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHIKActuatorIf_IsEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHIKActuatorIf*) _this)->IsEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) int __cdecl Spr_PHIKActuatorIf_NAncestors(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHIKActuatorIf*) _this)->NAncestors(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorIf_GetAncestor(HANDLE _this, int i) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHIKActuatorIf*) _this)->GetAncestor(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorIf_GetParent(HANDLE _this) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHIKActuatorIf*) _this)->GetParent(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHIKActuatorIf_NChildActuators(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHIKActuatorIf*) _this)->NChildActuators(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorIf_GetChildActuator(HANDLE _this, int i) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHIKActuatorIf*) _this)->GetChildActuator(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorIf_GetChildEndEffector(HANDLE _this) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((PHIKActuatorIf*) _this)->GetChildEndEffector(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorIf_GetSolidTempPose(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHIKActuatorIf*) _this)->GetSolidTempPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKActuatorIf_GetSolidPullbackPose(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHIKActuatorIf*) _this)->GetSolidPullbackPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKBallActuatorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKBallActuatorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKBallActuatorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKBallActuatorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKBallActuatorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKBallActuatorIf*) _this)) {
                (*((PHIKBallActuatorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHIKBallActuatorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKBallActuatorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKBallActuatorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKBallActuatorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKBallActuatorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKBallActuatorIf_SetJoint(HANDLE _this, HANDLE joint) {
	try { ((PHIKBallActuatorIf*) _this)->SetJoint((PHBallJointIf*) joint); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKBallActuatorIf_GetJoint(HANDLE _this) {
	PHBallJointIf* _ptr = (PHBallJointIf*) NULL;
	try { _ptr = (PHBallJointIf*) ((PHIKBallActuatorIf*) _this)->GetJoint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKBallActuatorIf_SetJointTempOri(HANDLE _this, HANDLE ori) {
	Quaterniond arg01_ = *((Quaterniond*) ori);
	try { ((PHIKBallActuatorIf*) _this)->SetJointTempOri((Quaterniond) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKBallActuatorIf_SetPullbackTarget(HANDLE _this, HANDLE ori) {
	Quaterniond arg01_ = *((Quaterniond*) ori);
	try { ((PHIKBallActuatorIf*) _this)->SetPullbackTarget((Quaterniond) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKBallActuatorIf_GetJointTempOri(HANDLE _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHIKBallActuatorIf*) _this)->GetJointTempOri(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKBallActuatorIf_GetPullbackTarget(HANDLE _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHIKBallActuatorIf*) _this)->GetPullbackTarget(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKHingeActuatorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKHingeActuatorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKHingeActuatorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKHingeActuatorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKHingeActuatorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKHingeActuatorIf*) _this)) {
                (*((PHIKHingeActuatorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHIKHingeActuatorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKHingeActuatorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKHingeActuatorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKHingeActuatorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKHingeActuatorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKHingeActuatorIf_SetJoint(HANDLE _this, HANDLE joint) {
	try { ((PHIKHingeActuatorIf*) _this)->SetJoint((PHHingeJointIf*) joint); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKHingeActuatorIf_GetJoint(HANDLE _this) {
	PHHingeJointIf* _ptr = (PHHingeJointIf*) NULL;
	try { _ptr = (PHHingeJointIf*) ((PHIKHingeActuatorIf*) _this)->GetJoint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKHingeActuatorIf_SetJointTempAngle(HANDLE _this, double angle) {
	try { ((PHIKHingeActuatorIf*) _this)->SetJointTempAngle(angle); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKHingeActuatorIf_SetPullbackTarget(HANDLE _this, double angle) {
	try { ((PHIKHingeActuatorIf*) _this)->SetPullbackTarget(angle); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHIKHingeActuatorIf_GetJointTempAngle(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKHingeActuatorIf*) _this)->GetJointTempAngle(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHIKHingeActuatorIf_GetPullbackTarget(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKHingeActuatorIf*) _this)->GetPullbackTarget(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHIKSpringActuatorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHIKSpringActuatorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHIKSpringActuatorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHIKSpringActuatorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKSpringActuatorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKSpringActuatorIf*) _this)) {
                (*((PHIKSpringActuatorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHIKSpringActuatorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKSpringActuatorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKSpringActuatorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKSpringActuatorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKSpringActuatorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKSpringActuatorIf_SetJoint(HANDLE _this, HANDLE joint) {
	try { ((PHIKSpringActuatorIf*) _this)->SetJoint((PHSpringIf*) joint); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKSpringActuatorIf_GetJoint(HANDLE _this) {
	PHSpringIf* _ptr = (PHSpringIf*) NULL;
	try { _ptr = (PHSpringIf*) ((PHIKSpringActuatorIf*) _this)->GetJoint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHIKSpringActuatorIf_SetJointTempPose(HANDLE _this, HANDLE pose) {
	Posed arg01_ = *((Posed*) pose);
	try { ((PHIKSpringActuatorIf*) _this)->SetJointTempPose((Posed) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHIKSpringActuatorIf_SetPullbackTarget(HANDLE _this, HANDLE pose) {
	Posed arg01_ = *((Posed*) pose);
	try { ((PHIKSpringActuatorIf*) _this)->SetPullbackTarget((Posed) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKSpringActuatorIf_GetJointTempPose(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHIKSpringActuatorIf*) _this)->GetJointTempPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHIKSpringActuatorIf_GetPullbackTarget(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHIKSpringActuatorIf*) _this)->GetPullbackTarget(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHConstraintIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHConstraintIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHConstraintIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHConstraintIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHConstraintIf*) _this)) {
                (*((PHConstraintIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHConstraintIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHConstraintIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHConstraintIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintIf_GetSocketSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHConstraintIf*) _this)->GetSocketSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintIf_GetPlugSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHConstraintIf*) _this)->GetPlugSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintIf_GetScene(HANDLE _this) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((PHConstraintIf*) _this)->GetScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintIf_Enable(HANDLE _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((PHConstraintIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintIf_Enable_1(HANDLE _this) {
	try { ((PHConstraintIf*) _this)->Enable(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHConstraintIf_IsEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHConstraintIf*) _this)->IsEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHConstraintIf_IsArticulated(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHConstraintIf*) _this)->IsArticulated(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintIf_GetSocketPose(HANDLE _this, HANDLE pose) {
	try { ((PHConstraintIf*) _this)->GetSocketPose((Posed&) *((Posed*) pose)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintIf_SetSocketPose(HANDLE _this, HANDLE pose) {
	try { ((PHConstraintIf*) _this)->SetSocketPose((const Posed&) *((Posed*) pose)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintIf_GetPlugPose(HANDLE _this, HANDLE pose) {
	try { ((PHConstraintIf*) _this)->GetPlugPose((Posed&) *((Posed*) pose)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintIf_SetPlugPose(HANDLE _this, HANDLE pose) {
	try { ((PHConstraintIf*) _this)->SetPlugPose((const Posed&) *((Posed*) pose)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintIf_GetRelativePose(HANDLE _this, HANDLE p) {
	try { ((PHConstraintIf*) _this)->GetRelativePose((Posed&) *((Posed*) p)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintIf_GetRelativePoseR(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHConstraintIf*) _this)->GetRelativePoseR(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintIf_GetRelativePoseQ(HANDLE _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHConstraintIf*) _this)->GetRelativePoseQ(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintIf_GetAbsolutePoseQ(HANDLE _this) {
	Quaternionf* _ptr = (Quaternionf*) NULL;
	try { _ptr = new Quaternionf(); (*_ptr) = ((PHConstraintIf*) _this)->GetAbsolutePoseQ(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintIf_GetRelativeVelocity(HANDLE _this, HANDLE v, HANDLE w) {
	try { ((PHConstraintIf*) _this)->GetRelativeVelocity((Vec3d&) *((Vec3d*) v), (Vec3d&) *((Vec3d*) w)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHConstraintIf_GetConstraintForce(HANDLE _this, HANDLE f, HANDLE t) {
	try { ((PHConstraintIf*) _this)->GetConstraintForce((Vec3d&) *((Vec3d*) f), (Vec3d&) *((Vec3d*) t)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHConstraintIf_IsYielded(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHConstraintIf*) _this)->IsYielded(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHConstraintsIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHConstraintsIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHConstraintsIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHConstraintsIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintsIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHConstraintsIf*) _this)) {
                (*((PHConstraintsIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHConstraintsIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintsIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHConstraintsIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintsIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHConstraintsIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintsIf_FindBySolidPair(HANDLE _this, HANDLE lhs, HANDLE rhs) {
	PHConstraintIf* _ptr = (PHConstraintIf*) NULL;
	try { _ptr = (PHConstraintIf*) ((PHConstraintsIf*) _this)->FindBySolidPair((PHSolidIf*) lhs, (PHSolidIf*) rhs); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHConstraintsIf_GetTotalForce(HANDLE _this, HANDLE lhs, HANDLE rhs) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHConstraintsIf*) _this)->GetTotalForce((PHSolidIf*) lhs, (PHSolidIf*) rhs); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHContactPointIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHContactPointIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHContactPointIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHContactPointIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHContactPointIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHContactPointIf*) _this)) {
                (*((PHContactPointIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHContactPointIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHContactPointIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHContactPointIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHContactPointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHContactPointIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHContactPointIf_GetPose(HANDLE _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHContactPointIf*) _this)->GetPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PHContactPointIf_IsStaticFriction(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHContactPointIf*) _this)->IsStaticFriction(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHJointIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHJointIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHJointIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHJointIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHJointIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHJointIf*) _this)) {
                (*((PHJointIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHJointIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHJointIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHJointIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHJointIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHJointIf_SetMaxForce(HANDLE _this, double max) {
	try { ((PHJointIf*) _this)->SetMaxForce(max); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHJointIf_GetMaxForce(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHJointIf*) _this)->GetMaxForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PH1DJointIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PH1DJointIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PH1DJointIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PH1DJointIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PH1DJointIf*) _this)) {
                (*((PH1DJointIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PH1DJointIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PH1DJointIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointIf_CreateLimit(HANDLE _this, HANDLE desc) {
	PH1DJointLimitIf* _ptr = (PH1DJointLimitIf*) NULL;
	try { _ptr = (PH1DJointLimitIf*) ((PH1DJointIf*) _this)->CreateLimit((const PH1DJointLimitDesc&) *((PH1DJointLimitDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointIf_CreateLimit_1(HANDLE _this) {
	PH1DJointLimitIf* _ptr = (PH1DJointLimitIf*) NULL;
	try { _ptr = (PH1DJointLimitIf*) ((PH1DJointIf*) _this)->CreateLimit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointIf_CreateMotor(HANDLE _this, HANDLE ii, HANDLE desc) {
	PH1DJointMotorIf* _ptr = (PH1DJointMotorIf*) NULL;
	try { _ptr = (PH1DJointMotorIf*) ((PH1DJointIf*) _this)->CreateMotor((const IfInfo*) ii, (const PH1DJointMotorDesc&) *((PH1DJointMotorDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointIf_CreateMotor_1(HANDLE _this, HANDLE ii) {
	PH1DJointMotorIf* _ptr = (PH1DJointMotorIf*) NULL;
	try { _ptr = (PH1DJointMotorIf*) ((PH1DJointIf*) _this)->CreateMotor((const IfInfo*) ii); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PH1DJointIf_AddMotor(HANDLE _this, HANDLE m) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointIf*) _this)->AddMotor((PH1DJointMotorIf*) m); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PH1DJointIf_RemoveMotor(HANDLE _this, int n) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointIf*) _this)->RemoveMotor(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PH1DJointIf_IsCyclic(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointIf*) _this)->IsCyclic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetCyclic(HANDLE _this, char on) {
	bool arg01_ = (on == 0) ? false : true;
	try { ((PH1DJointIf*) _this)->SetCyclic((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetPosition(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetVelocity(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_PH1DJointIf_HasLimit(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointIf*) _this)->HasLimit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointIf_GetLimit(HANDLE _this) {
	PH1DJointLimitIf* _ptr = (PH1DJointLimitIf*) NULL;
	try { _ptr = (PH1DJointLimitIf*) ((PH1DJointIf*) _this)->GetLimit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetSpring(HANDLE _this, double spring) {
	try { ((PH1DJointIf*) _this)->SetSpring(spring); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetSpring(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetDamper(HANDLE _this, double damper) {
	try { ((PH1DJointIf*) _this)->SetDamper(damper); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetDamper(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetSecondDamper(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetSecondDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetSecondDamper(HANDLE _this, double input) {
	try { ((PH1DJointIf*) _this)->SetSecondDamper(input); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetTargetPosition(HANDLE _this, double targetPosition) {
	try { ((PH1DJointIf*) _this)->SetTargetPosition(targetPosition); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetTargetPosition(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetTargetPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetTargetVelocity(HANDLE _this, double v) {
	try { ((PH1DJointIf*) _this)->SetTargetVelocity(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetTargetVelocity(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetTargetVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetOffsetForce(HANDLE _this, double dat) {
	try { ((PH1DJointIf*) _this)->SetOffsetForce(dat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetOffsetForce(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetOffsetForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetOffsetForceN(HANDLE _this, int n, double dat) {
	try { ((PH1DJointIf*) _this)->SetOffsetForceN(n, dat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetOffsetForceN(HANDLE _this, int n) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetOffsetForceN(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetYieldStress(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetYieldStress(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetYieldStress(HANDLE _this, const double yS) {
	try { ((PH1DJointIf*) _this)->SetYieldStress(yS); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetHardnessRate(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetHardnessRate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetHardnessRate(HANDLE _this, const double hR) {
	try { ((PH1DJointIf*) _this)->SetHardnessRate(hR); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointIf_SetSecondMoment(HANDLE _this, const double& sM) {
	try { ((PH1DJointIf*) _this)->SetSecondMoment(sM); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetSecondMoment(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetSecondMoment(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PH1DJointIf_NMotors(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PH1DJointIf*) _this)->NMotors(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointIf_GetMotors(HANDLE _this) {
	PH1DJointMotorIf* _ptr = (PH1DJointMotorIf*) NULL;
	try { _ptr = (PH1DJointMotorIf*) ((PH1DJointIf*) _this)->GetMotors(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetMotorForce(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetMotorForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetMotorForceN(HANDLE _this, int n) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetMotorForceN(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointIf_GetLimitForce(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetLimitForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHingeJointIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHingeJointIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHingeJointIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHingeJointIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHingeJointIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHingeJointIf*) _this)) {
                (*((PHHingeJointIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHHingeJointIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHingeJointIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHingeJointIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHingeJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHingeJointIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSliderJointIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSliderJointIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSliderJointIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSliderJointIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSliderJointIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSliderJointIf*) _this)) {
                (*((PHSliderJointIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSliderJointIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSliderJointIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSliderJointIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSliderJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSliderJointIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPathIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPathIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPathIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPathIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPathIf*) _this)) {
                (*((PHPathIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHPathIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPathIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPathIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHPathIf_AddPoint(HANDLE _this, double s, HANDLE pose) {
	try { ((PHPathIf*) _this)->AddPoint(s, (const Posed&) *((Posed*) pose)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHPathIf_SetLoop(HANDLE _this, char bOnOff) {
	bool arg01_ = (bOnOff == 0) ? false : true;
	try { ((PHPathIf*) _this)->SetLoop((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHPathIf_SetLoop_1(HANDLE _this) {
	try { ((PHPathIf*) _this)->SetLoop(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHPathIf_IsLoop(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHPathIf*) _this)->IsLoop(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPathJointIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPathJointIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPathJointIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPathJointIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathJointIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPathJointIf*) _this)) {
                (*((PHPathJointIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHPathJointIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathJointIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPathJointIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPathJointIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHPathJointIf_SetPosition(HANDLE _this, double q) {
	try { ((PHPathJointIf*) _this)->SetPosition(q); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHGenericJointIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHGenericJointIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHGenericJointIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHGenericJointIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGenericJointIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHGenericJointIf*) _this)) {
                (*((PHGenericJointIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHGenericJointIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGenericJointIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHGenericJointIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGenericJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHGenericJointIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointIf_SetCallback(HANDLE _this, HANDLE cb) {
	try { ((PHGenericJointIf*) _this)->SetCallback((PHGenericJointCallback*) cb); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHGenericJointIf_SetParam(HANDLE _this, BSTR name, double value) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	try { ((PHGenericJointIf*) _this)->SetParam((string) arg01_, value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointIf*) _this)) {
                (*((PHBallJointIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_CreateLimit(HANDLE _this, HANDLE ii, HANDLE desc) {
	PHBallJointLimitIf* _ptr = (PHBallJointLimitIf*) NULL;
	try { _ptr = (PHBallJointLimitIf*) ((PHBallJointIf*) _this)->CreateLimit((const IfInfo*) ii, (const PHBallJointLimitDesc&) *((PHBallJointLimitDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_CreateLimit_1(HANDLE _this, HANDLE ii) {
	PHBallJointLimitIf* _ptr = (PHBallJointLimitIf*) NULL;
	try { _ptr = (PHBallJointLimitIf*) ((PHBallJointIf*) _this)->CreateLimit((const IfInfo*) ii); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_CreateMotor(HANDLE _this, HANDLE ii, HANDLE desc) {
	PHBallJointMotorIf* _ptr = (PHBallJointMotorIf*) NULL;
	try { _ptr = (PHBallJointMotorIf*) ((PHBallJointIf*) _this)->CreateMotor((const IfInfo*) ii, (const PHBallJointMotorDesc&) *((PHBallJointMotorDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_CreateMotor_1(HANDLE _this, HANDLE ii) {
	PHBallJointMotorIf* _ptr = (PHBallJointMotorIf*) NULL;
	try { _ptr = (PHBallJointMotorIf*) ((PHBallJointIf*) _this)->CreateMotor((const IfInfo*) ii); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PHBallJointIf_AddMotor(HANDLE _this, HANDLE m) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointIf*) _this)->AddMotor((PHBallJointMotorIf*) m); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHBallJointIf_RemoveMotor(HANDLE _this, int n) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointIf*) _this)->RemoveMotor(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetAngle(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetAngle(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetPosition(HANDLE _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHBallJointIf*) _this)->GetPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetVelocity(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PHBallJointIf_HasLimit(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointIf*) _this)->HasLimit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetLimit(HANDLE _this) {
	PHBallJointLimitIf* _ptr = (PHBallJointLimitIf*) NULL;
	try { _ptr = (PHBallJointLimitIf*) ((PHBallJointIf*) _this)->GetLimit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_SetSpring(HANDLE _this, double spring) {
	try { ((PHBallJointIf*) _this)->SetSpring(spring); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointIf_GetSpring(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointIf*) _this)->GetSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_SetDamper(HANDLE _this, double damper) {
	try { ((PHBallJointIf*) _this)->SetDamper(damper); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointIf_GetDamper(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointIf*) _this)->GetDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetSecondDamper(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetSecondDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_SetSecondDamper(HANDLE _this, HANDLE damper2) {
	Vec3d arg01_ = *((Vec3d*) damper2);
	try { ((PHBallJointIf*) _this)->SetSecondDamper((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_SetTargetPosition(HANDLE _this, HANDLE p) {
	Quaterniond arg01_ = *((Quaterniond*) p);
	try { ((PHBallJointIf*) _this)->SetTargetPosition((Quaterniond) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetTargetPosition(HANDLE _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHBallJointIf*) _this)->GetTargetPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_SetTargetVelocity(HANDLE _this, HANDLE q) {
	Vec3d arg01_ = *((Vec3d*) q);
	try { ((PHBallJointIf*) _this)->SetTargetVelocity((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetTargetVelocity(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetTargetVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_SetOffsetForce(HANDLE _this, HANDLE ofst) {
	Vec3d arg01_ = *((Vec3d*) ofst);
	try { ((PHBallJointIf*) _this)->SetOffsetForce((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetOffsetForce(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetOffsetForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_SetOffsetForceN(HANDLE _this, int n, HANDLE ofst) {
	Vec3d arg02_ = *((Vec3d*) ofst);
	try { ((PHBallJointIf*) _this)->SetOffsetForceN(n, (Vec3d) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetOffsetForceN(HANDLE _this, int n) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetOffsetForceN(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_SetYieldStress(HANDLE _this, const double yS) {
	try { ((PHBallJointIf*) _this)->SetYieldStress(yS); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointIf_GetYieldStress(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointIf*) _this)->GetYieldStress(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_SetHardnessRate(HANDLE _this, const double hR) {
	try { ((PHBallJointIf*) _this)->SetHardnessRate(hR); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointIf_GetHardnessRate(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointIf*) _this)->GetHardnessRate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIf_SetSecondMoment(HANDLE _this, HANDLE m) {
	Vec3d arg01_ = *((Vec3d*) m);
	try { ((PHBallJointIf*) _this)->SetSecondMoment((const Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetSecondMoment(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetSecondMoment(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHBallJointIf_NMotors(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHBallJointIf*) _this)->NMotors(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetMotors(HANDLE _this) {
	PHBallJointMotorIf* _ptr = (PHBallJointMotorIf*) NULL;
	try { _ptr = (PHBallJointMotorIf*) ((PHBallJointIf*) _this)->GetMotors(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetMotorForce(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetMotorForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetMotorForceN(HANDLE _this, int n) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetMotorForceN(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIf_GetLimitForce(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetLimitForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFixJointIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFixJointIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFixJointIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFixJointIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFixJointIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFixJointIf*) _this)) {
                (*((PHFixJointIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFixJointIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFixJointIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFixJointIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFixJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFixJointIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSpringIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSpringIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSpringIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSpringIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSpringIf*) _this)) {
                (*((PHSpringIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSpringIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSpringIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetTargetPosition(HANDLE _this, HANDLE targetPosition) {
	try { ((PHSpringIf*) _this)->SetTargetPosition((const Vec3d&) *((Vec3d*) targetPosition)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_GetTargetPosition(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSpringIf*) _this)->GetTargetPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetTargetOrientation(HANDLE _this, HANDLE targetOrientation) {
	try { ((PHSpringIf*) _this)->SetTargetOrientation((const Quaterniond&) *((Quaterniond*) targetOrientation)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_GetTargetOrientation(HANDLE _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHSpringIf*) _this)->GetTargetOrientation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetSpring(HANDLE _this, HANDLE spring) {
	try { ((PHSpringIf*) _this)->SetSpring((const Vec3d&) *((Vec3d*) spring)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_GetSpring(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSpringIf*) _this)->GetSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetDamper(HANDLE _this, HANDLE damper) {
	try { ((PHSpringIf*) _this)->SetDamper((const Vec3d&) *((Vec3d*) damper)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_GetDamper(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSpringIf*) _this)->GetDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetSecondDamper(HANDLE _this, HANDLE secondDamper) {
	try { ((PHSpringIf*) _this)->SetSecondDamper((const Vec3d&) *((Vec3d*) secondDamper)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_GetSecondDamper(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSpringIf*) _this)->GetSecondDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetSpringOri(HANDLE _this, const double spring) {
	try { ((PHSpringIf*) _this)->SetSpringOri(spring); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSpringIf_GetSpringOri(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSpringIf*) _this)->GetSpringOri(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetDamperOri(HANDLE _this, const double damper) {
	try { ((PHSpringIf*) _this)->SetDamperOri(damper); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSpringIf_GetDamperOri(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSpringIf*) _this)->GetDamperOri(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetSecondDamperOri(HANDLE _this, const double& secondDamperOri) {
	try { ((PHSpringIf*) _this)->SetSecondDamperOri(secondDamperOri); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSpringIf_GetSecondDamperOri(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSpringIf*) _this)->GetSecondDamperOri(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetYieldStress(HANDLE _this, const double& yieldStress) {
	try { ((PHSpringIf*) _this)->SetYieldStress(yieldStress); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSpringIf_GetYieldStress(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSpringIf*) _this)->GetYieldStress(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetHardnessRate(HANDLE _this, const double& hardnessRate) {
	try { ((PHSpringIf*) _this)->SetHardnessRate(hardnessRate); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSpringIf_GetHardnessRate(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSpringIf*) _this)->GetHardnessRate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetSecondMoment(HANDLE _this, HANDLE secondMoment) {
	try { ((PHSpringIf*) _this)->SetSecondMoment((const Vec3d&) *((Vec3d*) secondMoment)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_GetSecondMoment(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSpringIf*) _this)->GetSecondMoment(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_GetMotorForce(HANDLE _this) {
	Vec6d* _ptr = (Vec6d*) NULL;
	try { _ptr = new Vec6d(); (*_ptr) = ((PHSpringIf*) _this)->GetMotorForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetOffsetForce(HANDLE _this, HANDLE offsetForce) {
	try { ((PHSpringIf*) _this)->SetOffsetForce((const Vec6d&) *((Vec6d*) offsetForce)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSpringIf_SetTargetVelocity(HANDLE _this, HANDLE targetVelocity) {
	try { ((PHSpringIf*) _this)->SetTargetVelocity((const Vec6d&) *((Vec6d*) targetVelocity)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringIf_GetTargetVelocity(HANDLE _this) {
	Vec6d* _ptr = (Vec6d*) NULL;
	try { _ptr = new Vec6d(); (*_ptr) = ((PHSpringIf*) _this)->GetTargetVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHMateIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHMateIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHMateIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHMateIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMateIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHMateIf*) _this)) {
                (*((PHMateIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHMateIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMateIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHMateIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHMateIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPointToPointMateIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPointToPointMateIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPointToPointMateIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPointToPointMateIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPointToPointMateIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPointToPointMateIf*) _this)) {
                (*((PHPointToPointMateIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHPointToPointMateIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPointToPointMateIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPointToPointMateIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPointToPointMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPointToPointMateIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPointToLineMateIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPointToLineMateIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPointToLineMateIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPointToLineMateIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPointToLineMateIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPointToLineMateIf*) _this)) {
                (*((PHPointToLineMateIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHPointToLineMateIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPointToLineMateIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPointToLineMateIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPointToLineMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPointToLineMateIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPointToPlaneMateIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPointToPlaneMateIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPointToPlaneMateIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPointToPlaneMateIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPointToPlaneMateIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPointToPlaneMateIf*) _this)) {
                (*((PHPointToPlaneMateIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHPointToPlaneMateIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPointToPlaneMateIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPointToPlaneMateIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPointToPlaneMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPointToPlaneMateIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHPointToPlaneMateIf_SetRange(HANDLE _this, HANDLE range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PHPointToPlaneMateIf*) _this)->SetRange((Vec2d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHPointToPlaneMateIf_GetRange(HANDLE _this, HANDLE range) {
	try { ((PHPointToPlaneMateIf*) _this)->GetRange((Vec2d&) *((Vec2d*) range)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHLineToLineMateIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHLineToLineMateIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHLineToLineMateIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHLineToLineMateIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHLineToLineMateIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHLineToLineMateIf*) _this)) {
                (*((PHLineToLineMateIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHLineToLineMateIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHLineToLineMateIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHLineToLineMateIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHLineToLineMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHLineToLineMateIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPlaneToPlaneMateIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPlaneToPlaneMateIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPlaneToPlaneMateIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPlaneToPlaneMateIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPlaneToPlaneMateIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPlaneToPlaneMateIf*) _this)) {
                (*((PHPlaneToPlaneMateIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHPlaneToPlaneMateIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPlaneToPlaneMateIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPlaneToPlaneMateIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPlaneToPlaneMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPlaneToPlaneMateIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHTreeNodeIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHTreeNodeIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHTreeNodeIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHTreeNodeIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHTreeNodeIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHTreeNodeIf*) _this)) {
                (*((PHTreeNodeIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHTreeNodeIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHTreeNodeIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHTreeNodeIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHTreeNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHTreeNodeIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHTreeNodeIf_Enable(HANDLE _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((PHTreeNodeIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHTreeNodeIf_Enable_1(HANDLE _this) {
	try { ((PHTreeNodeIf*) _this)->Enable(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHTreeNodeIf_IsEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHTreeNodeIf*) _this)->IsEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) int __cdecl Spr_PHTreeNodeIf_NChildren(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHTreeNodeIf*) _this)->NChildren(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHTreeNodeIf_GetParentNode(HANDLE _this) {
	PHTreeNodeIf* _ptr = (PHTreeNodeIf*) NULL;
	try { _ptr = (PHTreeNodeIf*) ((PHTreeNodeIf*) _this)->GetParentNode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHTreeNodeIf_GetChildNode(HANDLE _this, int i) {
	PHTreeNodeIf* _ptr = (PHTreeNodeIf*) NULL;
	try { _ptr = (PHTreeNodeIf*) ((PHTreeNodeIf*) _this)->GetChildNode(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHTreeNodeIf_GetRootNode(HANDLE _this) {
	PHRootNodeIf* _ptr = (PHRootNodeIf*) NULL;
	try { _ptr = (PHRootNodeIf*) ((PHTreeNodeIf*) _this)->GetRootNode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHTreeNodeIf_GetSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHTreeNodeIf*) _this)->GetSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHRootNodeIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHRootNodeIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHRootNodeIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHRootNodeIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRootNodeIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHRootNodeIf*) _this)) {
                (*((PHRootNodeIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHRootNodeIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRootNodeIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHRootNodeIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRootNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHRootNodeIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHTreeNode1DIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHTreeNode1DIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHTreeNode1DIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHTreeNode1DIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHTreeNode1DIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHTreeNode1DIf*) _this)) {
                (*((PHTreeNode1DIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHTreeNode1DIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHTreeNode1DIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHTreeNode1DIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHTreeNode1DIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHTreeNode1DIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHingeJointNodeIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHingeJointNodeIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHingeJointNodeIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHingeJointNodeIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHingeJointNodeIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHingeJointNodeIf*) _this)) {
                (*((PHHingeJointNodeIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHHingeJointNodeIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHingeJointNodeIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHingeJointNodeIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHingeJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHingeJointNodeIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSliderJointNodeIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSliderJointNodeIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSliderJointNodeIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSliderJointNodeIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSliderJointNodeIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSliderJointNodeIf*) _this)) {
                (*((PHSliderJointNodeIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSliderJointNodeIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSliderJointNodeIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSliderJointNodeIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSliderJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSliderJointNodeIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHPathJointNodeIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHPathJointNodeIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHPathJointNodeIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHPathJointNodeIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathJointNodeIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPathJointNodeIf*) _this)) {
                (*((PHPathJointNodeIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHPathJointNodeIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathJointNodeIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPathJointNodeIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHPathJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPathJointNodeIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHGenericJointNodeIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHGenericJointNodeIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHGenericJointNodeIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHGenericJointNodeIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGenericJointNodeIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHGenericJointNodeIf*) _this)) {
                (*((PHGenericJointNodeIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHGenericJointNodeIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGenericJointNodeIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHGenericJointNodeIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGenericJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHGenericJointNodeIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointNodeIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointNodeIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointNodeIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointNodeIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointNodeIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointNodeIf*) _this)) {
                (*((PHBallJointNodeIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHBallJointNodeIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointNodeIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointNodeIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointNodeIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHFixJointNodeIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHFixJointNodeIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHFixJointNodeIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHFixJointNodeIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFixJointNodeIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFixJointNodeIf*) _this)) {
                (*((PHFixJointNodeIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHFixJointNodeIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFixJointNodeIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFixJointNodeIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHFixJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFixJointNodeIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHGearIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHGearIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHGearIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHGearIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGearIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHGearIf*) _this)) {
                (*((PHGearIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHGearIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGearIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHGearIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHGearIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHGearIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHGearIf_Enable(HANDLE _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((PHGearIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHGearIf_Enable_1(HANDLE _this) {
	try { ((PHGearIf*) _this)->Enable(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHGearIf_IsEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHGearIf*) _this)->IsEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHGearIf_SetRatio(HANDLE _this, double ratio) {
	try { ((PHGearIf*) _this)->SetRatio(ratio); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHGearIf_GetRatio(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHGearIf*) _this)->GetRatio(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHGearIf_SetOffset(HANDLE _this, double offset) {
	try { ((PHGearIf*) _this)->SetOffset(offset); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHGearIf_GetOffset(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHGearIf*) _this)->GetOffset(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHGearIf_SetMode(HANDLE _this, int mode) {
	try { ((PHGearIf*) _this)->SetMode(mode); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHGearIf_GetMode(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHGearIf*) _this)->GetMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PH1DJointLimitIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PH1DJointLimitIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PH1DJointLimitIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PH1DJointLimitIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointLimitIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PH1DJointLimitIf*) _this)) {
                (*((PH1DJointLimitIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PH1DJointLimitIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointLimitIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PH1DJointLimitIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointLimitIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PH1DJointLimitIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointLimitIf_SetRange(HANDLE _this, HANDLE range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PH1DJointLimitIf*) _this)->SetRange((Vec2d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointLimitIf_GetRange(HANDLE _this, HANDLE range) {
	try { ((PH1DJointLimitIf*) _this)->GetRange((Vec2d&) *((Vec2d*) range)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointLimitIf_SetSpring(HANDLE _this, double spring) {
	try { ((PH1DJointLimitIf*) _this)->SetSpring(spring); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointLimitIf_GetSpring(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointLimitIf*) _this)->GetSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointLimitIf_SetDamper(HANDLE _this, double damper) {
	try { ((PH1DJointLimitIf*) _this)->SetDamper(damper); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PH1DJointLimitIf_GetDamper(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointLimitIf*) _this)->GetDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_PH1DJointLimitIf_IsOnLimit(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointLimitIf*) _this)->IsOnLimit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointLimitIf_Enable(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PH1DJointLimitIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PH1DJointLimitIf_IsEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointLimitIf*) _this)->IsEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointLimitIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointLimitIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointLimitIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointLimitIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointLimitIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointLimitIf*) _this)) {
                (*((PHBallJointLimitIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHBallJointLimitIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointLimitIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointLimitIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointLimitIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointLimitIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointLimitIf_SetSpring(HANDLE _this, double rSpring) {
	try { ((PHBallJointLimitIf*) _this)->SetSpring(rSpring); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointLimitIf_GetSpring(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointLimitIf*) _this)->GetSpring(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointLimitIf_SetDamper(HANDLE _this, double rDamper) {
	try { ((PHBallJointLimitIf*) _this)->SetDamper(rDamper); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHBallJointLimitIf_GetDamper(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointLimitIf*) _this)->GetDamper(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointLimitIf_SetLimitDir(HANDLE _this, HANDLE limDir) {
	Vec3d arg01_ = *((Vec3d*) limDir);
	try { ((PHBallJointLimitIf*) _this)->SetLimitDir((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointLimitIf_GetLimitDir(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointLimitIf*) _this)->GetLimitDir(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PHBallJointLimitIf_IsOnLimit(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointLimitIf*) _this)->IsOnLimit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointLimitIf_Enable(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHBallJointLimitIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHBallJointLimitIf_IsEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointLimitIf*) _this)->IsEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointConeLimitIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointConeLimitIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointConeLimitIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointConeLimitIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointConeLimitIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointConeLimitIf*) _this)) {
                (*((PHBallJointConeLimitIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHBallJointConeLimitIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointConeLimitIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointConeLimitIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointConeLimitIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointConeLimitIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointConeLimitIf_SetSwingRange(HANDLE _this, HANDLE range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PHBallJointConeLimitIf*) _this)->SetSwingRange((Vec2d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointConeLimitIf_GetSwingRange(HANDLE _this, HANDLE range) {
	try { ((PHBallJointConeLimitIf*) _this)->GetSwingRange((Vec2d&) *((Vec2d*) range)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointConeLimitIf_SetSwingDirRange(HANDLE _this, HANDLE range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PHBallJointConeLimitIf*) _this)->SetSwingDirRange((Vec2d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointConeLimitIf_GetSwingDirRange(HANDLE _this, HANDLE range) {
	try { ((PHBallJointConeLimitIf*) _this)->GetSwingDirRange((Vec2d&) *((Vec2d*) range)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointConeLimitIf_SetTwistRange(HANDLE _this, HANDLE range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PHBallJointConeLimitIf*) _this)->SetTwistRange((Vec2d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointConeLimitIf_GetTwistRange(HANDLE _this, HANDLE range) {
	try { ((PHBallJointConeLimitIf*) _this)->GetTwistRange((Vec2d&) *((Vec2d*) range)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointSplineLimitIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointSplineLimitIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointSplineLimitIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointSplineLimitIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointSplineLimitIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointSplineLimitIf*) _this)) {
                (*((PHBallJointSplineLimitIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHBallJointSplineLimitIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointSplineLimitIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointSplineLimitIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointSplineLimitIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointSplineLimitIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointSplineLimitIf_AddNode(HANDLE _this, HANDLE node) {
	PHSplineLimitNode arg01_ = *((PHSplineLimitNode*) node);
	try { ((PHBallJointSplineLimitIf*) _this)->AddNode((PHSplineLimitNode) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointSplineLimitIf_AddNode_1(HANDLE _this, double S, double SD, double dS, double dSD, double tMin, double tMax) {
	try { ((PHBallJointSplineLimitIf*) _this)->AddNode(S, SD, dS, dSD, tMin, tMax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointSplineLimitIf_AddNode_2(HANDLE _this, HANDLE node, int pos) {
	PHSplineLimitNode arg01_ = *((PHSplineLimitNode*) node);
	try { ((PHBallJointSplineLimitIf*) _this)->AddNode((PHSplineLimitNode) arg01_, pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointSplineLimitIf_AddNode_3(HANDLE _this, double S, double SD, double dS, double dSD, double tMin, double tMax, int pos) {
	try { ((PHBallJointSplineLimitIf*) _this)->AddNode(S, SD, dS, dSD, tMin, tMax, pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointSplineLimitIf_SetPoleTwistRange(HANDLE _this, HANDLE range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PHBallJointSplineLimitIf*) _this)->SetPoleTwistRange((Vec2d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointSplineLimitIf_GetPoleTwistRange(HANDLE _this, HANDLE range) {
	try { ((PHBallJointSplineLimitIf*) _this)->GetPoleTwistRange((Vec2d&) *((Vec2d*) range)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointIndependentLimitIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointIndependentLimitIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointIndependentLimitIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointIndependentLimitIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIndependentLimitIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointIndependentLimitIf*) _this)) {
                (*((PHBallJointIndependentLimitIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHBallJointIndependentLimitIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIndependentLimitIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointIndependentLimitIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointIndependentLimitIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointIndependentLimitIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PHBallJointIndependentLimitIf_IsOnLimit(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointIndependentLimitIf*) _this)->IsOnLimit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) int __cdecl Spr_PHBallJointIndependentLimitIf_AxesEnabled(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHBallJointIndependentLimitIf*) _this)->AxesEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIndependentLimitIf_SetLimitRangeN(HANDLE _this, int n, HANDLE range) {
	Vec2d arg02_ = *((Vec2d*) range);
	try { ((PHBallJointIndependentLimitIf*) _this)->SetLimitRangeN(n, (Vec2d) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointIndependentLimitIf_GetLimitRangeN(HANDLE _this, int n, HANDLE range) {
	try { ((PHBallJointIndependentLimitIf*) _this)->GetLimitRangeN(n, (Vec2d&) *((Vec2d*) range)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PH1DJointMotorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PH1DJointMotorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PH1DJointMotorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PH1DJointMotorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointMotorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PH1DJointMotorIf*) _this)) {
                (*((PH1DJointMotorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PH1DJointMotorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointMotorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PH1DJointMotorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PH1DJointMotorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PH1DJointNonLinearMotorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PH1DJointNonLinearMotorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PH1DJointNonLinearMotorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PH1DJointNonLinearMotorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointNonLinearMotorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PH1DJointNonLinearMotorIf*) _this)) {
                (*((PH1DJointNonLinearMotorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PH1DJointNonLinearMotorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointNonLinearMotorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PH1DJointNonLinearMotorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PH1DJointNonLinearMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PH1DJointNonLinearMotorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointNonLinearMotorIf_SetSpring(HANDLE _this, int m, HANDLE param) {
	PH1DJointNonLinearMotorDesc::FunctionMode arg01_ = ((PH1DJointNonLinearMotorDesc::FunctionMode) m);
	try { ((PH1DJointNonLinearMotorIf*) _this)->SetSpring((PH1DJointNonLinearMotorDesc::FunctionMode) arg01_, param); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointNonLinearMotorIf_SetDamper(HANDLE _this, int m, HANDLE param) {
	PH1DJointNonLinearMotorDesc::FunctionMode arg01_ = ((PH1DJointNonLinearMotorDesc::FunctionMode) m);
	try { ((PH1DJointNonLinearMotorIf*) _this)->SetDamper((PH1DJointNonLinearMotorDesc::FunctionMode) arg01_, param); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PH1DJointNonLinearMotorIf_SetSpringDamper(HANDLE _this, int smode, int dmode, HANDLE sparam, HANDLE dparam) {
	PH1DJointNonLinearMotorDesc::FunctionMode arg01_ = ((PH1DJointNonLinearMotorDesc::FunctionMode) smode);
	PH1DJointNonLinearMotorDesc::FunctionMode arg02_ = ((PH1DJointNonLinearMotorDesc::FunctionMode) dmode);
	try { ((PH1DJointNonLinearMotorIf*) _this)->SetSpringDamper((PH1DJointNonLinearMotorDesc::FunctionMode) arg01_, (PH1DJointNonLinearMotorDesc::FunctionMode) arg02_, sparam, dparam); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHuman1DJointResistanceIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHuman1DJointResistanceIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHuman1DJointResistanceIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHuman1DJointResistanceIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHuman1DJointResistanceIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHuman1DJointResistanceIf*) _this)) {
                (*((PHHuman1DJointResistanceIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHHuman1DJointResistanceIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHuman1DJointResistanceIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHuman1DJointResistanceIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHuman1DJointResistanceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHuman1DJointResistanceIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_PHHuman1DJointResistanceIf_GetCurrentResistance(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHHuman1DJointResistanceIf*) _this)->GetCurrentResistance(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointMotorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointMotorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointMotorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointMotorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointMotorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointMotorIf*) _this)) {
                (*((PHBallJointMotorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHBallJointMotorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointMotorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointMotorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointMotorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBallJointNonLinearMotorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBallJointNonLinearMotorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBallJointNonLinearMotorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBallJointNonLinearMotorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointNonLinearMotorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointNonLinearMotorIf*) _this)) {
                (*((PHBallJointNonLinearMotorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHBallJointNonLinearMotorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointNonLinearMotorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointNonLinearMotorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBallJointNonLinearMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointNonLinearMotorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBallJointNonLinearMotorIf_SetFuncFromDatabaseN(HANDLE _this, int n, int i, int j, HANDLE sparam, HANDLE dparam) {
	try { ((PHBallJointNonLinearMotorIf*) _this)->SetFuncFromDatabaseN(n, i, j, sparam, dparam); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHHumanBallJointResistanceIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHHumanBallJointResistanceIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHHumanBallJointResistanceIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHHumanBallJointResistanceIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHumanBallJointResistanceIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHumanBallJointResistanceIf*) _this)) {
                (*((PHHumanBallJointResistanceIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHHumanBallJointResistanceIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHumanBallJointResistanceIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHumanBallJointResistanceIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHumanBallJointResistanceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHumanBallJointResistanceIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHumanBallJointResistanceIf_GetCurrentResistance(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHHumanBallJointResistanceIf*) _this)->GetCurrentResistance(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSpringMotorIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSpringMotorIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSpringMotorIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSpringMotorIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringMotorIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSpringMotorIf*) _this)) {
                (*((PHSpringMotorIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSpringMotorIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringMotorIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSpringMotorIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSpringMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSpringMotorIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpObjIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpObjIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpObjIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpObjIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpObjIf*) _this)) {
                (*((PHOpObjIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpObjIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpObjIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PHOpObjIf_initialPHOpObj(HANDLE _this, HANDLE vts, int vtsNum, float pSize) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpObjIf*) _this)->initialPHOpObj((Vec3f*) vts, vtsNum, pSize); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_SetGravity(HANDLE _this, char bOn) {
	bool arg01_ = (bOn == 0) ? false : true;
	try { ((PHOpObjIf*) _this)->SetGravity((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_SimpleSimulationStep(HANDLE _this) {
	try { ((PHOpObjIf*) _this)->SimpleSimulationStep(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_AddVertextoLocalBuffer(HANDLE _this, HANDLE v) {
	Vec3f arg01_ = *((Vec3f*) v);
	try { ((PHOpObjIf*) _this)->AddVertextoLocalBuffer((Vec3f) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpObjIf_InitialObjUsingLocalBuffer(HANDLE _this, float pSize) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpObjIf*) _this)->InitialObjUsingLocalBuffer(pSize); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_positionPredict(HANDLE _this) {
	try { ((PHOpObjIf*) _this)->positionPredict(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_groupStep(HANDLE _this) {
	try { ((PHOpObjIf*) _this)->groupStep(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_integrationStep(HANDLE _this) {
	try { ((PHOpObjIf*) _this)->integrationStep(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_ReducedPositionProject(HANDLE _this) {
	try { ((PHOpObjIf*) _this)->ReducedPositionProject(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_positionProject(HANDLE _this) {
	try { ((PHOpObjIf*) _this)->positionProject(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_SetDefaultLinkNum(HANDLE _this, int linkNum) {
	try { ((PHOpObjIf*) _this)->SetDefaultLinkNum(linkNum); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_BuildBlendWeight(HANDLE _this) {
	try { ((PHOpObjIf*) _this)->BuildBlendWeight(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_buildGroupCenter(HANDLE _this) {
	try { ((PHOpObjIf*) _this)->buildGroupCenter(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpObjIf_GetVertexNum(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetVertexNum(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjIf_GetVertex(HANDLE _this, int vi) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((PHOpObjIf*) _this)->GetVertex(vi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjIf_GetOpParticle(HANDLE _this, int pi) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((PHOpObjIf*) _this)->GetOpParticle(pi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpObjIf_GetOpGroup(HANDLE _this, int gi) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((PHOpObjIf*) _this)->GetOpGroup(gi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHOpObjIf_GetobjVtoPmap(HANDLE _this, int vi) {
	int _val = (int) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetobjVtoPmap(vi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_PHOpObjIf_GetVtxBlendWeight(HANDLE _this, int Vtxi, int Grpi) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetVtxBlendWeight(Vtxi, Grpi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_SetVelocityDamping(HANDLE _this, float vd) {
	try { ((PHOpObjIf*) _this)->SetVelocityDamping(vd); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpObjIf_GetVelocityDamping(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetVelocityDamping(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_PHOpObjIf_GetBoundLength(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetBoundLength(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_SetBound(HANDLE _this, float b) {
	try { ((PHOpObjIf*) _this)->SetBound(b); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_SetTimeStep(HANDLE _this, float t) {
	try { ((PHOpObjIf*) _this)->SetTimeStep(t); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpObjIf_GetTimeStep(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetTimeStep(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_PHOpObjIf_GetObjBeta(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetObjBeta(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_SetObjBeta(HANDLE _this, float beta) {
	try { ((PHOpObjIf*) _this)->SetObjBeta(beta); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_SetObjAlpha(HANDLE _this, float alpha) {
	try { ((PHOpObjIf*) _this)->SetObjAlpha(alpha); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpObjIf_GetObjAlpha(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetObjAlpha(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_PHOpObjIf_GetObjDstConstraint(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetObjDstConstraint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_SetObjDstConstraint(HANDLE _this, char d) {
	bool arg01_ = (d == 0) ? false : true;
	try { ((PHOpObjIf*) _this)->SetObjDstConstraint((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_SetObjItrTime(HANDLE _this, int itrT) {
	try { ((PHOpObjIf*) _this)->SetObjItrTime(itrT); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHOpObjIf_GetObjItrTime(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetObjItrTime(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpObjIf_StoreOrigPose(HANDLE _this) {
	try { ((PHOpObjIf*) _this)->StoreOrigPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpParticleIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpParticleIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpParticleIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpParticleIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpParticleIf*) _this)) {
                (*((PHOpParticleIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHOpParticleIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpParticleIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpParticleIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHOpParticleIf_GetOpPtclVtxId(HANDLE _this, int vi) {
	int _val = (int) NULL;
	try { _val = ((PHOpParticleIf*) _this)->GetOpPtclVtxId(vi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHOpParticleIf_GetinGrpListNum(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpParticleIf*) _this)->GetinGrpListNum(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHOpParticleIf_GetinGrpList(HANDLE _this, int gi) {
	int _val = (int) NULL;
	try { _val = ((PHOpParticleIf*) _this)->GetinGrpList(gi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_PHOpParticleIf_GetVtxDisWeight(HANDLE _this, int vi) {
	float _val = (float) NULL;
	try { _val = ((PHOpParticleIf*) _this)->GetVtxDisWeight(vi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpParticleIf_GetParticleDesc(HANDLE _this) {
        PHOpParticleDesc* _ptr = (PHOpParticleDesc*) NULL;
        try { PHOpParticleDesc* _ary = (((PHOpParticleIf*) _this)->GetParticleDesc());
              int _size = 0;
              _ptr = new PHOpParticleDesc[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpGroupIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpGroupIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpGroupIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpGroupIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpGroupIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpGroupIf*) _this)) {
                (*((PHOpGroupIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHOpGroupIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpGroupIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpGroupIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpGroupIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpGroupIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHOpGroupIf_GetGrpInPtclNum(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpGroupIf*) _this)->GetGrpInPtclNum(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHOpGroupIf_GetGrpInPtcl(HANDLE _this, int gi) {
	int _val = (int) NULL;
	try { _val = ((PHOpGroupIf*) _this)->GetGrpInPtcl(gi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpGroupIf_GetGroupDesc(HANDLE _this) {
        PHOpGroupDesc* _ptr = (PHOpGroupDesc*) NULL;
        try { PHOpGroupDesc* _ary = (((PHOpGroupIf*) _this)->GetGroupDesc());
              int _size = 0;
              _ptr = new PHOpGroupDesc[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpHapticControllerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpHapticControllerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpHapticControllerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpHapticControllerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpHapticControllerIf*) _this)) {
                (*((PHOpHapticControllerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpHapticControllerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpHapticControllerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerIf_SetHCForceReady(HANDLE _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHOpHapticControllerIf*) _this)->SetHCForceReady((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticControllerIf_GetHCForceReady(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpHapticControllerIf*) _this)->GetHCForceReady(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticControllerIf_CheckProxyState(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpHapticControllerIf*) _this)->CheckProxyState(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerIf_AddColliedPtcl(HANDLE _this, int pIndex, int objindex, HANDLE ctcPos) {
	Vec3f arg03_ = *((Vec3f*) ctcPos);
	try { ((PHOpHapticControllerIf*) _this)->AddColliedPtcl(pIndex, objindex, (Vec3f) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticControllerIf_BeginLogForce(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpHapticControllerIf*) _this)->BeginLogForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerIf_EndLogForce(HANDLE _this) {
	try { ((PHOpHapticControllerIf*) _this)->EndLogForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerIf_setC_ObstacleRadius(HANDLE _this, float r) {
	try { ((PHOpHapticControllerIf*) _this)->setC_ObstacleRadius(r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerIf_GetUserPos(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((PHOpHapticControllerIf*) _this)->GetUserPos(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerIf_GetHCPosition(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((PHOpHapticControllerIf*) _this)->GetHCPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerIf_SetHCPosition(HANDLE _this, HANDLE pos) {
	Vec3f arg01_ = *((Vec3f*) pos);
	try { ((PHOpHapticControllerIf*) _this)->SetHCPosition((Vec3f) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerIf_SetHCPose(HANDLE _this, HANDLE pose) {
	Posef arg01_ = *((Posef*) pose);
	try { ((PHOpHapticControllerIf*) _this)->SetHCPose((Posef) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerIf_GetHCPose(HANDLE _this) {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = ((PHOpHapticControllerIf*) _this)->GetHCPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_PHOpHapticControllerIf_GetC_ObstacleRadius(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpHapticControllerIf*) _this)->GetC_ObstacleRadius(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerIf_GetCurrentOutputForce(HANDLE _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((PHOpHapticControllerIf*) _this)->GetCurrentOutputForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpHapticRendererIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpHapticRendererIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpHapticRendererIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpHapticRendererIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticRendererIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpHapticRendererIf*) _this)) {
                (*((PHOpHapticRendererIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticRendererIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpHapticRendererIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticRendererIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpHapticRendererIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticRendererIf_SetRigid(HANDLE _this, char set) {
	bool arg01_ = (set == 0) ? false : true;
	try { ((PHOpHapticRendererIf*) _this)->SetRigid((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpHapticRendererIf_IsRigid(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpHapticRendererIf*) _this)->IsRigid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpAnimationIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpAnimationIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpAnimationIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpAnimationIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpAnimationIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpAnimationIf*) _this)) {
                (*((PHOpAnimationIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHOpAnimationIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpAnimationIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpAnimationIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpAnimationIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpAnimationIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpAnimationIf_AddAnimationP(HANDLE _this, int objIndex, int pIndex, HANDLE start, HANDLE end, float totalTime) {
	Vec3f arg03_ = *((Vec3f*) start);
	Vec3f arg04_ = *((Vec3f*) end);
	try { ((PHOpAnimationIf*) _this)->AddAnimationP(objIndex, pIndex, (Vec3f) arg03_, (Vec3f) arg04_, totalTime); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpAnimationIf_AddAnimationP_1(HANDLE _this, int objIndex, int pIndex, HANDLE force, float totalTime) {
	Vec3f arg03_ = *((Vec3f*) force);
	try { ((PHOpAnimationIf*) _this)->AddAnimationP(objIndex, pIndex, (Vec3f) arg03_, totalTime); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpAnimationIf_AnimationStep(HANDLE _this, HANDLE opEngine) {
	try { ((PHOpAnimationIf*) _this)->AnimationStep(opEngine); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpAnimationIf_AnimationIntergration(HANDLE _this, HANDLE opEngine) {
	try { ((PHOpAnimationIf*) _this)->AnimationIntergration(opEngine); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHOpSpHashColliAgentIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHOpSpHashColliAgentIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHOpSpHashColliAgentIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHOpSpHashColliAgentIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpSpHashColliAgentIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpSpHashColliAgentIf*) _this)) {
                (*((PHOpSpHashColliAgentIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpSpHashColliAgentIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpSpHashColliAgentIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpSpHashColliAgentIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpSpHashColliAgentIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_SetCollisionCstrStiffness(HANDLE _this, float alpha) {
	try { ((PHOpSpHashColliAgentIf*) _this)->SetCollisionCstrStiffness(alpha); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_PHOpSpHashColliAgentIf_GetCollisionCstrStiffness(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpSpHashColliAgentIf*) _this)->GetCollisionCstrStiffness(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_EnableCollisionDetection(HANDLE _this, char able) {
	bool arg01_ = (able == 0) ? false : true;
	try { ((PHOpSpHashColliAgentIf*) _this)->EnableCollisionDetection((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_EnableCollisionDetection_1(HANDLE _this) {
	try { ((PHOpSpHashColliAgentIf*) _this)->EnableCollisionDetection(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_Initial(HANDLE _this, float cellSize, HANDLE bounds) {
	CDBounds arg02_ = *((CDBounds*) bounds);
	try { ((PHOpSpHashColliAgentIf*) _this)->Initial(cellSize, (CDBounds) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_OpCollisionProcedure(HANDLE _this, int myTimeStamp) {
	try { ((PHOpSpHashColliAgentIf*) _this)->OpCollisionProcedure(myTimeStamp); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_OpCollisionProcedure_1(HANDLE _this) {
	try { ((PHOpSpHashColliAgentIf*) _this)->OpCollisionProcedure(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_OpDirCollision(HANDLE _this) {
	try { ((PHOpSpHashColliAgentIf*) _this)->OpDirCollision(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_AddContactPlane(HANDLE _this, HANDLE planeP, HANDLE planeN) {
	Vec3f arg01_ = *((Vec3f*) planeP);
	Vec3f arg02_ = *((Vec3f*) planeN);
	try { ((PHOpSpHashColliAgentIf*) _this)->AddContactPlane((Vec3f) arg01_, (Vec3f) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpSpHashColliAgentIf_IsCollisionEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpSpHashColliAgentIf*) _this)->IsCollisionEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_SetIsDirCollision(HANDLE _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHOpSpHashColliAgentIf*) _this)->SetIsDirCollision((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpSpHashColliAgentIf_GetIsDirCollision(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpSpHashColliAgentIf*) _this)->GetIsDirCollision(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpSpHashColliAgentIf_SetDebugMode(HANDLE _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHOpSpHashColliAgentIf*) _this)->SetDebugMode((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHOpSpHashColliAgentIf_GetDebugMode(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpSpHashColliAgentIf*) _this)->GetDebugMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHRayIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHRayIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHRayIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHRayIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRayIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHRayIf*) _this)) {
                (*((PHRayIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHRayIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRayIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHRayIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRayIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHRayIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRayIf_GetOrigin(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHRayIf*) _this)->GetOrigin(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHRayIf_SetOrigin(HANDLE _this, HANDLE ori) {
	try { ((PHRayIf*) _this)->SetOrigin((const Vec3d&) *((Vec3d*) ori)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRayIf_GetDirection(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHRayIf*) _this)->GetDirection(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHRayIf_SetDirection(HANDLE _this, HANDLE dir) {
	try { ((PHRayIf*) _this)->SetDirection((const Vec3d&) *((Vec3d*) dir)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHRayIf_Apply(HANDLE _this) {
	try { ((PHRayIf*) _this)->Apply(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHRayIf_NHits(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHRayIf*) _this)->NHits(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRayIf_GetHits(HANDLE _this) {
        PHRaycastHit* _ptr = (PHRaycastHit*) NULL;
        try { PHRaycastHit* _ary = (((PHRayIf*) _this)->GetHits());
              int _size = 0;
              _ptr = new PHRaycastHit[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRayIf_GetNearest(HANDLE _this) {
        PHRaycastHit* _ptr = (PHRaycastHit*) NULL;
        try { PHRaycastHit* _ary = (((PHRayIf*) _this)->GetNearest());
              int _size = 0;
              _ptr = new PHRaycastHit[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHRayIf_GetDynamicalNearest(HANDLE _this) {
        PHRaycastHit* _ptr = (PHRaycastHit*) NULL;
        try { PHRaycastHit* _ary = (((PHRayIf*) _this)->GetDynamicalNearest());
              int _size = 0;
              _ptr = new PHRaycastHit[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSceneIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSceneIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSceneIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSceneIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSceneIf*) _this)) {
                (*((PHSceneIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSceneIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSceneIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetSdk(HANDLE _this) {
	PHSdkIf* _ptr = (PHSdkIf*) NULL;
	try { _ptr = (PHSdkIf*) ((PHSceneIf*) _this)->GetSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateSolid(HANDLE _this, HANDLE desc) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHSceneIf*) _this)->CreateSolid((const PHSolidDesc&) *((PHSolidDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateSolid_1(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHSceneIf*) _this)->CreateSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NSolids(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NSolids(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetSolid(HANDLE _this, int idx) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHSceneIf*) _this)->GetSolid(idx); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_GetSolidIndex(HANDLE _this, HANDLE s) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->GetSolidIndex((PHSolidIf*) s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetSolids(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHSceneIf*) _this)->GetSolids(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NSolidPairs(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NSolidPairs(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetSolidPair(HANDLE _this, int i, int j) {
	PHSolidPairForLCPIf* _ptr = (PHSolidPairForLCPIf*) NULL;
	try { _ptr = (PHSolidPairForLCPIf*) ((PHSceneIf*) _this)->GetSolidPair(i, j); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetSolidPair_1(HANDLE _this, HANDLE lhs, HANDLE rhs, char bSwap) {
	bool arg03_ = (bSwap == 0) ? false : true;
	PHSolidPairForLCPIf* _ptr = (PHSolidPairForLCPIf*) NULL;
	try { _ptr = (PHSolidPairForLCPIf*) ((PHSceneIf*) _this)->GetSolidPair((PHSolidIf*) lhs, (PHSolidIf*) rhs, (bool&) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetContactMode(HANDLE _this, HANDLE lhs, HANDLE rhs, int mode) {
	PHSceneDesc::ContactMode arg03_ = ((PHSceneDesc::ContactMode) mode);
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf*) lhs, (PHSolidIf*) rhs, (PHSceneDesc::ContactMode) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetContactMode_1(HANDLE _this, HANDLE lhs, HANDLE rhs) {
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf*) lhs, (PHSolidIf*) rhs); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetContactMode_2(HANDLE _this, HANDLE group, size_t length, int mode) {
	PHSceneDesc::ContactMode arg03_ = ((PHSceneDesc::ContactMode) mode);
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf**) group, length, (PHSceneDesc::ContactMode) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetContactMode_3(HANDLE _this, HANDLE group, size_t length) {
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf**) group, length); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetContactMode_4(HANDLE _this, HANDLE solid, int mode) {
	PHSceneDesc::ContactMode arg02_ = ((PHSceneDesc::ContactMode) mode);
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf*) solid, (PHSceneDesc::ContactMode) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetContactMode_5(HANDLE _this, HANDLE solid) {
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf*) solid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetContactMode_6(HANDLE _this, int mode) {
	PHSceneDesc::ContactMode arg01_ = ((PHSceneDesc::ContactMode) mode);
	try { ((PHSceneIf*) _this)->SetContactMode((PHSceneDesc::ContactMode) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetContactMode_7(HANDLE _this) {
	try { ((PHSceneIf*) _this)->SetContactMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateJoint(HANDLE _this, HANDLE lhs, HANDLE rhs, HANDLE ii, HANDLE desc) {
	PHJointIf* _ptr = (PHJointIf*) NULL;
	try { _ptr = (PHJointIf*) ((PHSceneIf*) _this)->CreateJoint((PHSolidIf*) lhs, (PHSolidIf*) rhs, (const IfInfo*) ii, (const PHJointDesc&) *((PHJointDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NJoints(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NJoints(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetJoint(HANDLE _this, int i) {
	PHJointIf* _ptr = (PHJointIf*) NULL;
	try { _ptr = (PHJointIf*) ((PHSceneIf*) _this)->GetJoint(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NContacts(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NContacts(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetContact(HANDLE _this, int i) {
	PHContactPointIf* _ptr = (PHContactPointIf*) NULL;
	try { _ptr = (PHContactPointIf*) ((PHSceneIf*) _this)->GetContact(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NFemMeshes(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NFemMeshes(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetFemMesh(HANDLE _this, int i) {
	PHFemMeshIf* _ptr = (PHFemMeshIf*) NULL;
	try { _ptr = (PHFemMeshIf*) ((PHSceneIf*) _this)->GetFemMesh(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NFemMeshesNew(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NFemMeshesNew(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetFemMeshNew(HANDLE _this, int i) {
	PHFemMeshNewIf* _ptr = (PHFemMeshNewIf*) NULL;
	try { _ptr = (PHFemMeshNewIf*) ((PHSceneIf*) _this)->GetFemMeshNew(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateRootNode(HANDLE _this, HANDLE root, HANDLE desc) {
	PHRootNodeIf* _ptr = (PHRootNodeIf*) NULL;
	try { _ptr = (PHRootNodeIf*) ((PHSceneIf*) _this)->CreateRootNode((PHSolidIf*) root, (const PHRootNodeDesc&) *((PHRootNodeDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateRootNode_1(HANDLE _this, HANDLE root) {
	PHRootNodeIf* _ptr = (PHRootNodeIf*) NULL;
	try { _ptr = (PHRootNodeIf*) ((PHSceneIf*) _this)->CreateRootNode((PHSolidIf*) root); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NRootNodes(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NRootNodes(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetRootNode(HANDLE _this, int i) {
	PHRootNodeIf* _ptr = (PHRootNodeIf*) NULL;
	try { _ptr = (PHRootNodeIf*) ((PHSceneIf*) _this)->GetRootNode(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateTreeNode(HANDLE _this, HANDLE parent, HANDLE child, HANDLE desc) {
	PHTreeNodeIf* _ptr = (PHTreeNodeIf*) NULL;
	try { _ptr = (PHTreeNodeIf*) ((PHSceneIf*) _this)->CreateTreeNode((PHTreeNodeIf*) parent, (PHSolidIf*) child, (const PHTreeNodeDesc&) *((PHTreeNodeDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateTreeNode_1(HANDLE _this, HANDLE parent, HANDLE child) {
	PHTreeNodeIf* _ptr = (PHTreeNodeIf*) NULL;
	try { _ptr = (PHTreeNodeIf*) ((PHSceneIf*) _this)->CreateTreeNode((PHTreeNodeIf*) parent, (PHSolidIf*) child); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateTreeNodes(HANDLE _this, HANDLE solid) {
	PHRootNodeIf* _ptr = (PHRootNodeIf*) NULL;
	try { _ptr = (PHRootNodeIf*) ((PHSceneIf*) _this)->CreateTreeNodes((PHSolidIf*) solid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateGear(HANDLE _this, HANDLE lhs, HANDLE rhs, HANDLE desc) {
	PHGearIf* _ptr = (PHGearIf*) NULL;
	try { _ptr = (PHGearIf*) ((PHSceneIf*) _this)->CreateGear((PH1DJointIf*) lhs, (PH1DJointIf*) rhs, (const PHGearDesc&) *((PHGearDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateGear_1(HANDLE _this, HANDLE lhs, HANDLE rhs) {
	PHGearIf* _ptr = (PHGearIf*) NULL;
	try { _ptr = (PHGearIf*) ((PHSceneIf*) _this)->CreateGear((PH1DJointIf*) lhs, (PH1DJointIf*) rhs); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NGears(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NGears(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetGear(HANDLE _this, int i) {
	PHGearIf* _ptr = (PHGearIf*) NULL;
	try { _ptr = (PHGearIf*) ((PHSceneIf*) _this)->GetGear(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreatePath(HANDLE _this, HANDLE desc) {
	PHPathIf* _ptr = (PHPathIf*) NULL;
	try { _ptr = (PHPathIf*) ((PHSceneIf*) _this)->CreatePath((const PHPathDesc&) *((PHPathDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreatePath_1(HANDLE _this) {
	PHPathIf* _ptr = (PHPathIf*) NULL;
	try { _ptr = (PHPathIf*) ((PHSceneIf*) _this)->CreatePath(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NPaths(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NPaths(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetPath(HANDLE _this, int i) {
	PHPathIf* _ptr = (PHPathIf*) NULL;
	try { _ptr = (PHPathIf*) ((PHSceneIf*) _this)->GetPath(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateRay(HANDLE _this, HANDLE desc) {
	PHRayIf* _ptr = (PHRayIf*) NULL;
	try { _ptr = (PHRayIf*) ((PHSceneIf*) _this)->CreateRay((const PHRayDesc&) *((PHRayDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateRay_1(HANDLE _this) {
	PHRayIf* _ptr = (PHRayIf*) NULL;
	try { _ptr = (PHRayIf*) ((PHSceneIf*) _this)->CreateRay(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NRays(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NRays(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetRay(HANDLE _this, int i) {
	PHRayIf* _ptr = (PHRayIf*) NULL;
	try { _ptr = (PHRayIf*) ((PHSceneIf*) _this)->GetRay(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_PHSceneIf_SetPosesOfJointedSolids(HANDLE _this, HANDLE base) {
	bool _val = (bool) NULL;
	try { _val = ((PHSceneIf*) _this)->SetPosesOfJointedSolids((const PHSolidIf*) base); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateIKActuator(HANDLE _this, HANDLE ii, HANDLE desc) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHSceneIf*) _this)->CreateIKActuator((const IfInfo*) ii, (const PHIKActuatorDesc&) *((PHIKActuatorDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateIKActuator_1(HANDLE _this, HANDLE ii) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHSceneIf*) _this)->CreateIKActuator((const IfInfo*) ii); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NIKActuators(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NIKActuators(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetIKActuator(HANDLE _this, int i) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHSceneIf*) _this)->GetIKActuator(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateIKEndEffector(HANDLE _this, HANDLE desc) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((PHSceneIf*) _this)->CreateIKEndEffector((const PHIKEndEffectorDesc&) *((PHIKEndEffectorDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateIKEndEffector_1(HANDLE _this) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((PHSceneIf*) _this)->CreateIKEndEffector(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NIKEndEffectors(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NIKEndEffectors(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetIKEndEffector(HANDLE _this, int i) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((PHSceneIf*) _this)->GetIKEndEffector(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NSkeletons(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NSkeletons(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetSkeleton(HANDLE _this, int i) {
	PHSkeletonIf* _ptr = (PHSkeletonIf*) NULL;
	try { _ptr = (PHSkeletonIf*) ((PHSceneIf*) _this)->GetSkeleton(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateSkeleton(HANDLE _this, HANDLE desc) {
	PHSkeletonIf* _ptr = (PHSkeletonIf*) NULL;
	try { _ptr = (PHSkeletonIf*) ((PHSceneIf*) _this)->CreateSkeleton((const PHSkeletonDesc&) *((PHSkeletonDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateSkeleton_1(HANDLE _this) {
	PHSkeletonIf* _ptr = (PHSkeletonIf*) NULL;
	try { _ptr = (PHSkeletonIf*) ((PHSceneIf*) _this)->CreateSkeleton(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetTimeStep(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetTimeStep(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetTimeStepInv(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetTimeStepInv(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetTimeStep(HANDLE _this, double dt) {
	try { ((PHSceneIf*) _this)->SetTimeStep(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetHapticTimeStep(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetHapticTimeStep(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetHapticTimeStep(HANDLE _this, double dt) {
	try { ((PHSceneIf*) _this)->SetHapticTimeStep(dt); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_PHSceneIf_GetCount(HANDLE _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((PHSceneIf*) _this)->GetCount(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetCount(HANDLE _this, unsigned int count) {
	try { ((PHSceneIf*) _this)->SetCount(count); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetGravity(HANDLE _this, HANDLE accel) {
	try { ((PHSceneIf*) _this)->SetGravity((const Vec3d&) *((Vec3d*) accel)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetGravity(HANDLE _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSceneIf*) _this)->GetGravity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetAirResistanceRateForVelocity(HANDLE _this, double rate) {
	try { ((PHSceneIf*) _this)->SetAirResistanceRateForVelocity(rate); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetAirResistanceRateForAngularVelocity(HANDLE _this, double rate) {
	try { ((PHSceneIf*) _this)->SetAirResistanceRateForAngularVelocity(rate); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetAirResistanceRateForVelocity(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetAirResistanceRateForVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetAirResistanceRateForAngularVelocity(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetAirResistanceRateForAngularVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetContactTolerance(HANDLE _this, double tol) {
	try { ((PHSceneIf*) _this)->SetContactTolerance(tol); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetContactTolerance(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetContactTolerance(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetImpactThreshold(HANDLE _this, double vth) {
	try { ((PHSceneIf*) _this)->SetImpactThreshold(vth); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetImpactThreshold(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetImpactThreshold(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetFrictionThreshold(HANDLE _this, double vth) {
	try { ((PHSceneIf*) _this)->SetFrictionThreshold(vth); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetFrictionThreshold(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetFrictionThreshold(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetMaxVelocity(HANDLE _this, double vmax) {
	try { ((PHSceneIf*) _this)->SetMaxVelocity(vmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetMaxVelocity(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetMaxAngularVelocity(HANDLE _this, double wmax) {
	try { ((PHSceneIf*) _this)->SetMaxAngularVelocity(wmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetMaxAngularVelocity(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxAngularVelocity(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetMaxForce(HANDLE _this, double fmax) {
	try { ((PHSceneIf*) _this)->SetMaxForce(fmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetMaxForce(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetMaxMoment(HANDLE _this, double tmax) {
	try { ((PHSceneIf*) _this)->SetMaxMoment(tmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetMaxMoment(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxMoment(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetMaxDeltaPosition(HANDLE _this, double dpmax) {
	try { ((PHSceneIf*) _this)->SetMaxDeltaPosition(dpmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetMaxDeltaPosition(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxDeltaPosition(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetMaxDeltaOrientation(HANDLE _this, double dqmax) {
	try { ((PHSceneIf*) _this)->SetMaxDeltaOrientation(dqmax); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_PHSceneIf_GetMaxDeltaOrientation(HANDLE _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxDeltaOrientation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_GetLCPSolver(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->GetLCPSolver(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetLCPSolver(HANDLE _this, int method) {
	try { ((PHSceneIf*) _this)->SetLCPSolver(method); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_GetNumIteration(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->GetNumIteration(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetNumIteration(HANDLE _this, int n) {
	try { ((PHSceneIf*) _this)->SetNumIteration(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetStateMode(HANDLE _this, char bConstraints) {
	bool arg01_ = (bConstraints == 0) ? false : true;
	try { ((PHSceneIf*) _this)->SetStateMode((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_EnableContactDetection(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHSceneIf*) _this)->EnableContactDetection((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSceneIf_IsContactDetectionEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHSceneIf*) _this)->IsContactDetectionEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_EnableCCD(HANDLE _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHSceneIf*) _this)->EnableCCD((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_PHSceneIf_IsCCDEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHSceneIf*) _this)->IsCCDEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetBroadPhaseMode(HANDLE _this, int mode) {
	try { ((PHSceneIf*) _this)->SetBroadPhaseMode(mode); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_GetBroadPhaseMode(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->GetBroadPhaseMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetContactDetectionRange(HANDLE _this, HANDLE center, HANDLE extent, int nx, int ny, int nz) {
	Vec3f arg01_ = *((Vec3f*) center);
	Vec3f arg02_ = *((Vec3f*) extent);
	try { ((PHSceneIf*) _this)->SetContactDetectionRange((Vec3f) arg01_, (Vec3f) arg02_, nx, ny, nz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_SetMaterialBlending(HANDLE _this, int mode) {
	try { ((PHSceneIf*) _this)->SetMaterialBlending(mode); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_GetMaterialBlending(HANDLE _this) {
	try { ((PHSceneIf*) _this)->GetMaterialBlending(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_Step(HANDLE _this) {
	try { ((PHSceneIf*) _this)->Step(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_ClearForce(HANDLE _this) {
	try { ((PHSceneIf*) _this)->ClearForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_GenerateForce(HANDLE _this) {
	try { ((PHSceneIf*) _this)->GenerateForce(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_Integrate(HANDLE _this) {
	try { ((PHSceneIf*) _this)->Integrate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_IntegratePart1(HANDLE _this) {
	try { ((PHSceneIf*) _this)->IntegratePart1(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_IntegratePart2(HANDLE _this) {
	try { ((PHSceneIf*) _this)->IntegratePart2(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_Clear(HANDLE _this) {
	try { ((PHSceneIf*) _this)->Clear(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_PHSceneIf_NEngines(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NEngines(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetEngine(HANDLE _this, int i) {
	PHEngineIf* _ptr = (PHEngineIf*) NULL;
	try { _ptr = (PHEngineIf*) ((PHSceneIf*) _this)->GetEngine(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetConstraintEngine(HANDLE _this) {
	PHConstraintEngineIf* _ptr = (PHConstraintEngineIf*) NULL;
	try { _ptr = (PHConstraintEngineIf*) ((PHSceneIf*) _this)->GetConstraintEngine(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetGravityEngine(HANDLE _this) {
	PHGravityEngineIf* _ptr = (PHGravityEngineIf*) NULL;
	try { _ptr = (PHGravityEngineIf*) ((PHSceneIf*) _this)->GetGravityEngine(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetPenaltyEngine(HANDLE _this) {
	PHPenaltyEngineIf* _ptr = (PHPenaltyEngineIf*) NULL;
	try { _ptr = (PHPenaltyEngineIf*) ((PHSceneIf*) _this)->GetPenaltyEngine(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetIKEngine(HANDLE _this) {
	PHIKEngineIf* _ptr = (PHIKEngineIf*) NULL;
	try { _ptr = (PHIKEngineIf*) ((PHSceneIf*) _this)->GetIKEngine(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetFemEngine(HANDLE _this) {
	PHFemEngineIf* _ptr = (PHFemEngineIf*) NULL;
	try { _ptr = (PHFemEngineIf*) ((PHSceneIf*) _this)->GetFemEngine(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetHapticEngine(HANDLE _this) {
	PHHapticEngineIf* _ptr = (PHHapticEngineIf*) NULL;
	try { _ptr = (PHHapticEngineIf*) ((PHSceneIf*) _this)->GetHapticEngine(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetOpEngine(HANDLE _this) {
	PHOpEngineIf* _ptr = (PHOpEngineIf*) NULL;
	try { _ptr = (PHOpEngineIf*) ((PHSceneIf*) _this)->GetOpEngine(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_GetOpColliAgent(HANDLE _this) {
	PHOpSpHashColliAgentIf* _ptr = (PHOpSpHashColliAgentIf*) NULL;
	try { _ptr = (PHOpSpHashColliAgentIf*) ((PHSceneIf*) _this)->GetOpColliAgent(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSceneIf_CreateHapticPointer(HANDLE _this) {
	PHHapticPointerIf* _ptr = (PHHapticPointerIf*) NULL;
	try { _ptr = (PHHapticPointerIf*) ((PHSceneIf*) _this)->CreateHapticPointer(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_StepHapticLoop(HANDLE _this) {
	try { ((PHSceneIf*) _this)->StepHapticLoop(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHSceneIf_StepHapticSync(HANDLE _this) {
	try { ((PHSceneIf*) _this)->StepHapticSync(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSdkIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSdkIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSdkIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSdkIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSdkIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSdkIf*) _this)) {
                (*((PHSdkIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSdkIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSdkIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSdkIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSdkIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSdkIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSdkIf_CreateScene(HANDLE _this, HANDLE desc) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((PHSdkIf*) _this)->CreateScene((const PHSceneDesc&) *((PHSceneDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSdkIf_CreateScene_1(HANDLE _this) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((PHSdkIf*) _this)->CreateScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSdkIf_NScene(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSdkIf*) _this)->NScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSdkIf_GetScene(HANDLE _this, int i) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((PHSdkIf*) _this)->GetScene(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSdkIf_MergeScene(HANDLE _this, HANDLE scene0, HANDLE scene1) {
	try { ((PHSdkIf*) _this)->MergeScene((PHSceneIf*) scene0, (PHSceneIf*) scene1); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSdkIf_CreateShape(HANDLE _this, HANDLE ii, HANDLE desc) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((PHSdkIf*) _this)->CreateShape((const IfInfo*) ii, (const CDShapeDesc&) *((CDShapeDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSdkIf_NShape(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSdkIf*) _this)->NShape(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSdkIf_GetShape(HANDLE _this, int i) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((PHSdkIf*) _this)->GetShape(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSdkIf_CreateSdk(HANDLE desc) {
	PHSdkIf* _ptr = (PHSdkIf*) NULL;
	try { _ptr = (PHSdkIf*) PHSdkIf::CreateSdk((const PHSdkDesc&) *((PHSdkDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSdkIf_CreateSdk_1() {
	PHSdkIf* _ptr = (PHSdkIf*) NULL;
	try { _ptr = (PHSdkIf*) PHSdkIf::CreateSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHSdkIf_RegisterSdk() {
	try { PHSdkIf::RegisterSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHBoneIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHBoneIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHBoneIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHBoneIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBoneIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBoneIf*) _this)) {
                (*((PHBoneIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHBoneIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBoneIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBoneIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBoneIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBoneIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBoneIf_SetSolid(HANDLE _this, HANDLE solid) {
	try { ((PHBoneIf*) _this)->SetSolid((PHSolidIf*) solid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBoneIf_GetSolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHBoneIf*) _this)->GetSolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBoneIf_SetProxySolid(HANDLE _this, HANDLE solid) {
	try { ((PHBoneIf*) _this)->SetProxySolid((PHSolidIf*) solid); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBoneIf_GetProxySolid(HANDLE _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHBoneIf*) _this)->GetProxySolid(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBoneIf_SetJoint(HANDLE _this, HANDLE joint) {
	try { ((PHBoneIf*) _this)->SetJoint((PHJointIf*) joint); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBoneIf_GetJoint(HANDLE _this) {
	PHJointIf* _ptr = (PHJointIf*) NULL;
	try { _ptr = (PHJointIf*) ((PHBoneIf*) _this)->GetJoint(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBoneIf_SetParent(HANDLE _this, HANDLE parent) {
	try { ((PHBoneIf*) _this)->SetParent((PHBoneIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHBoneIf_GetParent(HANDLE _this) {
	PHBoneIf* _ptr = (PHBoneIf*) NULL;
	try { _ptr = (PHBoneIf*) ((PHBoneIf*) _this)->GetParent(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHBoneIf_SetLength(HANDLE _this, double length) {
	try { ((PHBoneIf*) _this)->SetLength(length); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBoneIf_SetDirection(HANDLE _this, HANDLE dir) {
	Vec3d arg01_ = *((Vec3d*) dir);
	try { ((PHBoneIf*) _this)->SetDirection((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_PHBoneIf_SetPosition(HANDLE _this, HANDLE pos) {
	Vec3d arg01_ = *((Vec3d*) pos);
	try { ((PHBoneIf*) _this)->SetPosition((Vec3d) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_PHSkeletonIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new PHSkeletonIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_PHSkeletonIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (PHSkeletonIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSkeletonIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSkeletonIf*) _this)) {
                (*((PHSkeletonIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_PHSkeletonIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSkeletonIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSkeletonIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSkeletonIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSkeletonIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_PHSkeletonIf_NBones(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((PHSkeletonIf*) _this)->NBones(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSkeletonIf_GetBone(HANDLE _this, int i) {
	PHBoneIf* _ptr = (PHBoneIf*) NULL;
	try { _ptr = (PHBoneIf*) ((PHSkeletonIf*) _this)->GetBone(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSkeletonIf_CreateBone(HANDLE _this, HANDLE parent, HANDLE desc) {
	PHBoneIf* _ptr = (PHBoneIf*) NULL;
	try { _ptr = (PHBoneIf*) ((PHSkeletonIf*) _this)->CreateBone((PHBoneIf*) parent, (const PHBoneDesc&) *((PHBoneDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHSkeletonIf_CreateBone_1(HANDLE _this, HANDLE parent) {
	PHBoneIf* _ptr = (PHBoneIf*) NULL;
	try { _ptr = (PHBoneIf*) ((PHSkeletonIf*) _this)->CreateBone((PHBoneIf*) parent); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_PHSkeletonIf_GetGrabStrength(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((PHSkeletonIf*) _this)->GetGrabStrength(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
}

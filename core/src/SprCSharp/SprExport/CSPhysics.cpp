#include <Springhead.h>
#include <sstream>
#include <SprPhysics.h>
#include <Physics/SprPHJointMotor.h>
using namespace Spr;
using namespace std;
extern "C" {
    __attribute__((visibility("default"))) void*  Spr_new_PHConstraintEngineDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHConstraintEngineDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHConstraintEngineDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHConstraintEngineDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHConstraintEngineDesc_get_method(void* _this) {
        int _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).method; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_method(void* _this, int value) {
        try { (*((PHConstraintEngineDesc*)_this)).method = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHConstraintEngineDesc_get_numIter(void* _this) {
        int _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).numIter; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_numIter(void* _this, int value) {
        try { (*((PHConstraintEngineDesc*)_this)).numIter = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHConstraintEngineDesc_get_numIterCorrection(void* _this) {
        int _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).numIterCorrection; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_numIterCorrection(void* _this, int value) {
        try { (*((PHConstraintEngineDesc*)_this)).numIterCorrection = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHConstraintEngineDesc_get_numIterContactCorrection(void* _this) {
        int _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).numIterContactCorrection; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_numIterContactCorrection(void* _this, int value) {
        try { (*((PHConstraintEngineDesc*)_this)).numIterContactCorrection = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineDesc_get_velCorrectionRate(void* _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).velCorrectionRate; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_velCorrectionRate(void* _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).velCorrectionRate = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineDesc_get_posCorrectionRate(void* _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).posCorrectionRate; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_posCorrectionRate(void* _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).posCorrectionRate = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineDesc_get_contactCorrectionRate(void* _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).contactCorrectionRate; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_contactCorrectionRate(void* _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).contactCorrectionRate = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineDesc_get_shrinkRate(void* _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).shrinkRate; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_shrinkRate(void* _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).shrinkRate = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineDesc_get_shrinkRateCorrection(void* _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).shrinkRateCorrection; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_shrinkRateCorrection(void* _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).shrinkRateCorrection = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineDesc_get_freezeThreshold(void* _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).freezeThreshold; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_freezeThreshold(void* _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).freezeThreshold = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineDesc_get_accelSOR(void* _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).accelSOR; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_accelSOR(void* _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).accelSOR = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineDesc_get_dfEps(void* _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).dfEps; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_dfEps(void* _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).dfEps = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineDesc_get_regularization(void* _this) {
        double _val = 0;
        try { _val = (*((PHConstraintEngineDesc*)_this)).regularization; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_regularization(void* _this, double value) {
        try { (*((PHConstraintEngineDesc*)_this)).regularization = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHConstraintEngineDesc_get_bSaveConstraints(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHConstraintEngineDesc*)_this)).bSaveConstraints; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_bSaveConstraints(void* _this, char value) {
        try { (*((PHConstraintEngineDesc*)_this)).bSaveConstraints = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHConstraintEngineDesc_get_bUpdateAllState(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHConstraintEngineDesc*)_this)).bUpdateAllState; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_bUpdateAllState(void* _this, char value) {
        try { (*((PHConstraintEngineDesc*)_this)).bUpdateAllState = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHConstraintEngineDesc_get_bUseContactSurface(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHConstraintEngineDesc*)_this)).bUseContactSurface; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_bUseContactSurface(void* _this, char value) {
        try { (*((PHConstraintEngineDesc*)_this)).bUseContactSurface = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHConstraintEngineDesc_get_bReport(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHConstraintEngineDesc*)_this)).bReport; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineDesc_set_bReport(void* _this, char value) {
        try { (*((PHConstraintEngineDesc*)_this)).bReport = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKEngineDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKEngineDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKEngineDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHIKEngineDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) size_t  Spr_PHIKEngineDesc_get_numIter(void* _this) {
        size_t _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).numIter; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineDesc_set_numIter(void* _this, size_t value) {
        try { (*((PHIKEngineDesc*)_this)).numIter = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEngineDesc_get_maxVel(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).maxVel; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineDesc_set_maxVel(void* _this, double value) {
        try { (*((PHIKEngineDesc*)_this)).maxVel = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEngineDesc_get_maxAngVel(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).maxAngVel; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineDesc_set_maxAngVel(void* _this, double value) {
        try { (*((PHIKEngineDesc*)_this)).maxAngVel = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEngineDesc_get_maxActVel(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).maxActVel; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineDesc_set_maxActVel(void* _this, double value) {
        try { (*((PHIKEngineDesc*)_this)).maxActVel = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEngineDesc_get_regularizeParam(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).regularizeParam; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineDesc_set_regularizeParam(void* _this, double value) {
        try { (*((PHIKEngineDesc*)_this)).regularizeParam = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEngineDesc_get_regularizeParam2(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).regularizeParam2; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineDesc_set_regularizeParam2(void* _this, double value) {
        try { (*((PHIKEngineDesc*)_this)).regularizeParam2 = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHIKEngineDesc_get_regularizeMode(void* _this) {
        int _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).regularizeMode; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineDesc_set_regularizeMode(void* _this, int value) {
        try { (*((PHIKEngineDesc*)_this)).regularizeMode = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHIKEngineDesc_get_iterGaussSeidel(void* _this) {
        int _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).iterGaussSeidel; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineDesc_set_iterGaussSeidel(void* _this, int value) {
        try { (*((PHIKEngineDesc*)_this)).iterGaussSeidel = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHIKEngineDesc_get_solverMode(void* _this) {
        int _val = 0;
        try { _val = (*((PHIKEngineDesc*)_this)).solverMode; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineDesc_set_solverMode(void* _this, int value) {
        try { (*((PHIKEngineDesc*)_this)).solverMode = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemMeshState() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemMeshState(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemMeshState(void* v) {
        if (v == NULL) return;
        try { delete (PHFemMeshState*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemMeshDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemMeshDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemMeshDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHFemMeshDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshDesc_vector_get_vertices(void* _this) {
        void* _ptr = NULL;
        try { _ptr = (vector<Vec3d>*) &((PHFemMeshDesc*)_this)->vertices; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshDesc_vector_set_vertices(void* _this, void* value) {
        try { ((PHFemMeshDesc*)_this)->vertices = *((std::vector<Vec3d>*) value); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshDesc_vector_addr_tets(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &(*((PHFemMeshDesc*)_this)).tets; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshDesc_vector_set_tets(void* _this, void* _ptr) {
        try {
            if (&(*((PHFemMeshDesc*)_this)).tets != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHFemMeshDesc*)_this)).tets;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshDesc_vector_addr_faces(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &(*((PHFemMeshDesc*)_this)).faces; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshDesc_vector_set_faces(void* _this, void* _ptr) {
        try {
            if (&(*((PHFemMeshDesc*)_this)).faces != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHFemMeshDesc*)_this)).faces;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshDesc_Init(void* _this) {
	try { ((PHFemMeshDesc*) _this)->Init(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemMeshThermoDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemMeshThermoDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemMeshThermoDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHFemMeshThermoDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoDesc_get_rho(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).rho; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoDesc_set_rho(void* _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).rho = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoDesc_get_thConduct(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).thConduct; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoDesc_set_thConduct(void* _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).thConduct = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoDesc_get_thConduct_x(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).thConduct_x; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoDesc_set_thConduct_x(void* _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).thConduct_x = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoDesc_get_thConduct_y(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).thConduct_y; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoDesc_set_thConduct_y(void* _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).thConduct_y = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoDesc_get_thConduct_z(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).thConduct_z; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoDesc_set_thConduct_z(void* _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).thConduct_z = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoDesc_get_heatTrans(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).heatTrans; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoDesc_set_heatTrans(void* _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).heatTrans = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoDesc_get_specificHeat(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).specificHeat; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoDesc_set_specificHeat(void* _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).specificHeat = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoDesc_get_radiantHeat(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).radiantHeat; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoDesc_set_radiantHeat(void* _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).radiantHeat = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoDesc_get_initial_temp(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemMeshThermoDesc*)_this)).initial_temp; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoDesc_set_initial_temp(void* _this, double value) {
        try { (*((PHFemMeshThermoDesc*)_this)).initial_temp = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoDesc_Init(void* _this) {
	try { ((PHFemMeshThermoDesc*) _this)->Init(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemMeshNewState() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemMeshNewState(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemMeshNewState(void* v) {
        if (v == NULL) return;
        try { delete (PHFemMeshNewState*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemMeshNewDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemMeshNewDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemMeshNewDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHFemMeshNewDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewDesc_vector_get_vertices(void* _this) {
        void* _ptr = NULL;
        try { _ptr = (vector<Vec3d>*) &((PHFemMeshNewDesc*)_this)->vertices; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshNewDesc_vector_set_vertices(void* _this, void* value) {
        try { ((PHFemMeshNewDesc*)_this)->vertices = *((std::vector<Vec3d>*) value); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewDesc_vector_addr_tets(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &(*((PHFemMeshNewDesc*)_this)).tets; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshNewDesc_vector_set_tets(void* _this, void* _ptr) {
        try {
            if (&(*((PHFemMeshNewDesc*)_this)).tets != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHFemMeshNewDesc*)_this)).tets;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewDesc_vector_addr_faces(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &(*((PHFemMeshNewDesc*)_this)).faces; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshNewDesc_vector_set_faces(void* _this, void* _ptr) {
        try {
            if (&(*((PHFemMeshNewDesc*)_this)).faces != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHFemMeshNewDesc*)_this)).faces;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHFemMeshNewDesc_get_spheric(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHFemMeshNewDesc*)_this)).spheric; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshNewDesc_set_spheric(void* _this, char value) {
        try { (*((PHFemMeshNewDesc*)_this)).spheric = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemBaseDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemBaseDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemBaseDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHFemBaseDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemVibrationDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemVibrationDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemVibrationDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHFemVibrationDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationDesc_get_young(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemVibrationDesc*)_this)).young; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationDesc_set_young(void* _this, double value) {
        try { (*((PHFemVibrationDesc*)_this)).young = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationDesc_get_poisson(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemVibrationDesc*)_this)).poisson; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationDesc_set_poisson(void* _this, double value) {
        try { (*((PHFemVibrationDesc*)_this)).poisson = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationDesc_get_density(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemVibrationDesc*)_this)).density; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationDesc_set_density(void* _this, double value) {
        try { (*((PHFemVibrationDesc*)_this)).density = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationDesc_get_alpha(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemVibrationDesc*)_this)).alpha; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationDesc_set_alpha(void* _this, double value) {
        try { (*((PHFemVibrationDesc*)_this)).alpha = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationDesc_get_beta(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemVibrationDesc*)_this)).beta; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationDesc_set_beta(void* _this, double value) {
        try { (*((PHFemVibrationDesc*)_this)).beta = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemVibrationDesc_vector_addr_fixedVertices(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &(*((PHFemVibrationDesc*)_this)).fixedVertices; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationDesc_vector_set_fixedVertices(void* _this, void* _ptr) {
        try {
            if (&(*((PHFemVibrationDesc*)_this)).fixedVertices != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHFemVibrationDesc*)_this)).fixedVertices;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemThermoDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemThermoDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemThermoDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHFemThermoDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoDesc_get_rho(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).rho; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoDesc_set_rho(void* _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).rho = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoDesc_get_heatTrans(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).heatTrans; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoDesc_set_heatTrans(void* _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).heatTrans = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoDesc_get_specificHeat(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).specificHeat; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoDesc_set_specificHeat(void* _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).specificHeat = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoDesc_get_radiantHeat(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).radiantHeat; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoDesc_set_radiantHeat(void* _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).radiantHeat = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoDesc_get_initial_temp(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).initial_temp; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoDesc_set_initial_temp(void* _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).initial_temp = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoDesc_get_weekPow_full(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemThermoDesc*)_this)).weekPow_full; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoDesc_set_weekPow_full(void* _this, double value) {
        try { (*((PHFemThermoDesc*)_this)).weekPow_full = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoDesc_Init(void* _this) {
	try { ((PHFemThermoDesc*) _this)->Init(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemPorousWOMoveDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemPorousWOMoveDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemPorousWOMoveDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHFemPorousWOMoveDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_wDiffAir(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).wDiffAir; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_wDiffAir(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).wDiffAir = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_K(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).K; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_K(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).K = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_kc(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).kc; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_kc(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).kc = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_kp(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).kp; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_kp(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).kp = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_alpha(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).alpha; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_alpha(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).alpha = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_gamma(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).gamma; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_gamma(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).gamma = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_rhoWater(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).rhoWater; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_rhoWater(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).rhoWater = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_rhoOil(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).rhoOil; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_rhoOil(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).rhoOil = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_rhowInit(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).rhowInit; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_rhowInit(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).rhowInit = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_rhooInit(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).rhooInit; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_rhooInit(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).rhooInit = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_evapoRate(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).evapoRate; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_evapoRate(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).evapoRate = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_denatTemp(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).denatTemp; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_denatTemp(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).denatTemp = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_boundWaterRatio(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).boundWaterRatio; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_boundWaterRatio(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).boundWaterRatio = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_equilWaterCont(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).equilWaterCont; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_equilWaterCont(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).equilWaterCont = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_limitWaterCont(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).limitWaterCont; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_limitWaterCont(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).limitWaterCont = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_boundaryThick(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).boundaryThick; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_boundaryThick(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).boundaryThick = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_initMassAll(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).initMassAll; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_initMassAll(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).initMassAll = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_initWaterRatio(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).initWaterRatio; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_initWaterRatio(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).initWaterRatio = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_initOilRatio(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).initOilRatio; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_initOilRatio(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).initOilRatio = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveDesc_get_shrinkageRatio(void* _this) {
        double _val = 0;
        try { _val = (*((PHFemPorousWOMoveDesc*)_this)).shrinkageRatio; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_shrinkageRatio(void* _this, double value) {
        try { (*((PHFemPorousWOMoveDesc*)_this)).shrinkageRatio = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemPorousWOMoveDesc_addr_top(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHFemPorousWOMoveDesc*)_this)->top; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_top(void* _this, void* _ptr) {
        try {
            if (&(((PHFemPorousWOMoveDesc*)_this)->top) != _ptr) {
                ((PHFemPorousWOMoveDesc*)_this)->top = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemPorousWOMoveDesc_addr_center(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHFemPorousWOMoveDesc*)_this)->center; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_center(void* _this, void* _ptr) {
        try {
            if (&(((PHFemPorousWOMoveDesc*)_this)->center) != _ptr) {
                ((PHFemPorousWOMoveDesc*)_this)->center = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemPorousWOMoveDesc_addr_bottom(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHFemPorousWOMoveDesc*)_this)->bottom; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_set_bottom(void* _this, void* _ptr) {
        try {
            if (&(((PHFemPorousWOMoveDesc*)_this)->bottom) != _ptr) {
                ((PHFemPorousWOMoveDesc*)_this)->bottom = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveDesc_Init(void* _this) {
	try { ((PHFemPorousWOMoveDesc*) _this)->Init(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFrameDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFrameDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFrameDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHFrameDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFrameDesc_addr_pose(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHFrameDesc*)_this)->pose; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFrameDesc_set_pose(void* _this, void* _ptr) {
        try {
            if (&(((PHFrameDesc*)_this)->pose) != _ptr) {
                ((PHFrameDesc*)_this)->pose = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSolidState() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSolidState(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSolidState(void* v) {
        if (v == NULL) return;
        try { delete (PHSolidState*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidState_addr_velocity(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSolidState*)_this)->velocity; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidState_set_velocity(void* _this, void* _ptr) {
        try {
            if (&(((PHSolidState*)_this)->velocity) != _ptr) {
                ((PHSolidState*)_this)->velocity = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidState_addr_angVelocity(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSolidState*)_this)->angVelocity; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidState_set_angVelocity(void* _this, void* _ptr) {
        try {
            if (&(((PHSolidState*)_this)->angVelocity) != _ptr) {
                ((PHSolidState*)_this)->angVelocity = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidState_addr_pose(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSolidState*)_this)->pose; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidState_set_pose(void* _this, void* _ptr) {
        try {
            if (&(((PHSolidState*)_this)->pose) != _ptr) {
                ((PHSolidState*)_this)->pose = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSolidDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSolidDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSolidDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHSolidDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSolidDesc_get_mass(void* _this) {
        double _val = 0;
        try { _val = (*((PHSolidDesc*)_this)).mass; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidDesc_set_mass(void* _this, double value) {
        try { (*((PHSolidDesc*)_this)).mass = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidDesc_addr_inertia(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSolidDesc*)_this)->inertia; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidDesc_set_inertia(void* _this, void* _ptr) {
        try {
            if (&(((PHSolidDesc*)_this)->inertia) != _ptr) {
                ((PHSolidDesc*)_this)->inertia = *((Matrix3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidDesc_addr_center(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSolidDesc*)_this)->center; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidDesc_set_center(void* _this, void* _ptr) {
        try {
            if (&(((PHSolidDesc*)_this)->center) != _ptr) {
                ((PHSolidDesc*)_this)->center = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSolidDesc_get_dynamical(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHSolidDesc*)_this)).dynamical; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidDesc_set_dynamical(void* _this, char value) {
        try { (*((PHSolidDesc*)_this)).dynamical = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSolidDesc_get_stationary(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHSolidDesc*)_this)).stationary; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidDesc_set_stationary(void* _this, char value) {
        try { (*((PHSolidDesc*)_this)).stationary = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidDesc_Init(void* _this) {
	try { ((PHSolidDesc*) _this)->Init(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHCollisionListener() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHCollisionListener(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHCollisionListener(void* v) {
        if (v == NULL) return;
        try { delete (PHCollisionListener*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHCollisionListener_OnDetect(void* _this, void* sop, void* shp, unsigned int ct, double dt) {
	try { ((PHCollisionListener*) _this)->OnDetect((PHSolidPairIf*) sop, (CDShapePairIf*) shp, ct, dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHCollisionListener_OnContDetect(void* _this, void* sop, void* shp, unsigned int ct, double dt) {
	try { ((PHCollisionListener*) _this)->OnContDetect((PHSolidPairIf*) sop, (CDShapePairIf*) shp, ct, dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHapticPointerDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHapticPointerDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHapticPointerDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHHapticPointerDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) PHHapticPointerDesc::HapticRenderMode  Spr_PHHapticPointerDesc_get_renderMode(void* _this) {
        PHHapticPointerDesc::HapticRenderMode _val = (PHHapticPointerDesc::HapticRenderMode) 0;
        try { _val = (*((PHHapticPointerDesc*)_this)).renderMode; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerDesc_set_renderMode(void* _this, int value) {
        try { (*((PHHapticPointerDesc*)_this)).renderMode = (PHHapticPointerDesc::HapticRenderMode) value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHapticEngineDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHapticEngineDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHapticEngineDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHHapticEngineDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKEndEffectorState() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKEndEffectorState(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKEndEffectorState(void* v) {
        if (v == NULL) return;
        try { delete (PHIKEndEffectorState*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorState_addr_solidTempPose(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorState*)_this)->solidTempPose; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorState_set_solidTempPose(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorState*)_this)->solidTempPose) != _ptr) {
                ((PHIKEndEffectorState*)_this)->solidTempPose = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKEndEffectorDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKEndEffectorDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKEndEffectorDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHIKEndEffectorDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHIKEndEffectorDesc_get_bEnabled(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKEndEffectorDesc*)_this)).bEnabled; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_bEnabled(void* _this, char value) {
        try { (*((PHIKEndEffectorDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHIKEndEffectorDesc_get_bPosition(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKEndEffectorDesc*)_this)).bPosition; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_bPosition(void* _this, char value) {
        try { (*((PHIKEndEffectorDesc*)_this)).bPosition = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHIKEndEffectorDesc_get_bOrientation(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKEndEffectorDesc*)_this)).bOrientation; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_bOrientation(void* _this, char value) {
        try { (*((PHIKEndEffectorDesc*)_this)).bOrientation = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHIKEndEffectorDesc_get_oriCtlMode(void* _this) {
        int _val = 0;
        try { _val = (*((PHIKEndEffectorDesc*)_this)).oriCtlMode; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_oriCtlMode(void* _this, int value) {
        try { (*((PHIKEndEffectorDesc*)_this)).oriCtlMode = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHIKEndEffectorDesc_get_bForce(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKEndEffectorDesc*)_this)).bForce; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_bForce(void* _this, char value) {
        try { (*((PHIKEndEffectorDesc*)_this)).bForce = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHIKEndEffectorDesc_get_bTorque(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKEndEffectorDesc*)_this)).bTorque; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_bTorque(void* _this, char value) {
        try { (*((PHIKEndEffectorDesc*)_this)).bTorque = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEndEffectorDesc_get_positionPriority(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKEndEffectorDesc*)_this)).positionPriority; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_positionPriority(void* _this, double value) {
        try { (*((PHIKEndEffectorDesc*)_this)).positionPriority = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEndEffectorDesc_get_orientationPriority(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKEndEffectorDesc*)_this)).orientationPriority; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_orientationPriority(void* _this, double value) {
        try { (*((PHIKEndEffectorDesc*)_this)).orientationPriority = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEndEffectorDesc_get_forcePriority(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKEndEffectorDesc*)_this)).forcePriority; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_forcePriority(void* _this, double value) {
        try { (*((PHIKEndEffectorDesc*)_this)).forcePriority = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEndEffectorDesc_get_torquePriority(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKEndEffectorDesc*)_this)).torquePriority; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_torquePriority(void* _this, double value) {
        try { (*((PHIKEndEffectorDesc*)_this)).torquePriority = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetPosition(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetPosition; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetPosition(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetPosition) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetPosition = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetVelocity(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetVelocity; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetVelocity(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetVelocity) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetVelocity = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetLocalPosition(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetLocalPosition; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetLocalPosition(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetLocalPosition) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetLocalPosition = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetLocalDirection(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetLocalDirection; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetLocalDirection(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetLocalDirection) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetLocalDirection = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetOrientation(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetOrientation; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetOrientation(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetOrientation) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetOrientation = *((Quaterniond*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetDirection(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetDirection; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetDirection(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetDirection) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetDirection = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetLookat(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetLookat; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetLookat(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetLookat) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetLookat = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetAngVel(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetAngVel; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetAngVel(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetAngVel) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetAngVel = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetForce(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetForce; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetForce(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetForce) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetForce = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetForceWorkingPoint(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetForceWorkingPoint; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetForceWorkingPoint(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetForceWorkingPoint) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetForceWorkingPoint = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorDesc_addr_targetTorque(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKEndEffectorDesc*)_this)->targetTorque; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorDesc_set_targetTorque(void* _this, void* _ptr) {
        try {
            if (&(((PHIKEndEffectorDesc*)_this)->targetTorque) != _ptr) {
                ((PHIKEndEffectorDesc*)_this)->targetTorque = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKActuatorState() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKActuatorState(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKActuatorState(void* v) {
        if (v == NULL) return;
        try { delete (PHIKActuatorState*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorState_addr_solidTempPose(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKActuatorState*)_this)->solidTempPose; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorState_set_solidTempPose(void* _this, void* _ptr) {
        try {
            if (&(((PHIKActuatorState*)_this)->solidTempPose) != _ptr) {
                ((PHIKActuatorState*)_this)->solidTempPose = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorState_addr_jointTempOri(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKActuatorState*)_this)->jointTempOri; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorState_set_jointTempOri(void* _this, void* _ptr) {
        try {
            if (&(((PHIKActuatorState*)_this)->jointTempOri) != _ptr) {
                ((PHIKActuatorState*)_this)->jointTempOri = *((Quaterniond*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorState_addr_jointTempOriIntp(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKActuatorState*)_this)->jointTempOriIntp; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorState_set_jointTempOriIntp(void* _this, void* _ptr) {
        try {
            if (&(((PHIKActuatorState*)_this)->jointTempOriIntp) != _ptr) {
                ((PHIKActuatorState*)_this)->jointTempOriIntp = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKActuatorState_get_jointTempAngle(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKActuatorState*)_this)).jointTempAngle; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorState_set_jointTempAngle(void* _this, double value) {
        try { (*((PHIKActuatorState*)_this)).jointTempAngle = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKActuatorState_get_jointTempAngleIntp(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKActuatorState*)_this)).jointTempAngleIntp; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorState_set_jointTempAngleIntp(void* _this, double value) {
        try { (*((PHIKActuatorState*)_this)).jointTempAngleIntp = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorState_addr_solidPullbackPose(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKActuatorState*)_this)->solidPullbackPose; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorState_set_solidPullbackPose(void* _this, void* _ptr) {
        try {
            if (&(((PHIKActuatorState*)_this)->solidPullbackPose) != _ptr) {
                ((PHIKActuatorState*)_this)->solidPullbackPose = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorState_addr_jointTempPose(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKActuatorState*)_this)->jointTempPose; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorState_set_jointTempPose(void* _this, void* _ptr) {
        try {
            if (&(((PHIKActuatorState*)_this)->jointTempPose) != _ptr) {
                ((PHIKActuatorState*)_this)->jointTempPose = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKActuatorDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKActuatorDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKActuatorDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHIKActuatorDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHIKActuatorDesc_get_bEnabled(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHIKActuatorDesc*)_this)).bEnabled; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorDesc_set_bEnabled(void* _this, char value) {
        try { (*((PHIKActuatorDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHIKActuatorDesc_get_bias(void* _this) {
        float _val = 0;
        try { _val = (*((PHIKActuatorDesc*)_this)).bias; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorDesc_set_bias(void* _this, float value) {
        try { (*((PHIKActuatorDesc*)_this)).bias = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKActuatorDesc_get_pullbackRate(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKActuatorDesc*)_this)).pullbackRate; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorDesc_set_pullbackRate(void* _this, double value) {
        try { (*((PHIKActuatorDesc*)_this)).pullbackRate = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKBallActuatorDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKBallActuatorDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKBallActuatorDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHIKBallActuatorDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKBallActuatorDesc_addr_pullbackTarget(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKBallActuatorDesc*)_this)->pullbackTarget; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKBallActuatorDesc_set_pullbackTarget(void* _this, void* _ptr) {
        try {
            if (&(((PHIKBallActuatorDesc*)_this)->pullbackTarget) != _ptr) {
                ((PHIKBallActuatorDesc*)_this)->pullbackTarget = *((Quaterniond*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKHingeActuatorDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKHingeActuatorDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKHingeActuatorDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHIKHingeActuatorDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKHingeActuatorDesc_get_pullbackTarget(void* _this) {
        double _val = 0;
        try { _val = (*((PHIKHingeActuatorDesc*)_this)).pullbackTarget; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKHingeActuatorDesc_set_pullbackTarget(void* _this, double value) {
        try { (*((PHIKHingeActuatorDesc*)_this)).pullbackTarget = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKSpringActuatorDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKSpringActuatorDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKSpringActuatorDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHIKSpringActuatorDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKSpringActuatorDesc_addr_pullbackTarget(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHIKSpringActuatorDesc*)_this)->pullbackTarget; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKSpringActuatorDesc_set_pullbackTarget(void* _this, void* _ptr) {
        try {
            if (&(((PHIKSpringActuatorDesc*)_this)->pullbackTarget) != _ptr) {
                ((PHIKSpringActuatorDesc*)_this)->pullbackTarget = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHConstraintDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHConstraintDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHConstraintDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHConstraintDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHConstraintDesc_get_bEnabled(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHConstraintDesc*)_this)).bEnabled; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintDesc_set_bEnabled(void* _this, char value) {
        try { (*((PHConstraintDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintDesc_addr_poseSocket(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHConstraintDesc*)_this)->poseSocket; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintDesc_set_poseSocket(void* _this, void* _ptr) {
        try {
            if (&(((PHConstraintDesc*)_this)->poseSocket) != _ptr) {
                ((PHConstraintDesc*)_this)->poseSocket = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintDesc_addr_posePlug(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHConstraintDesc*)_this)->posePlug; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintDesc_set_posePlug(void* _this, void* _ptr) {
        try {
            if (&(((PHConstraintDesc*)_this)->posePlug) != _ptr) {
                ((PHConstraintDesc*)_this)->posePlug = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHJointDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHJointDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHJointDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHJointDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHJointDesc_get_fMax(void* _this) {
        double _val = 0;
        try { _val = (*((PHJointDesc*)_this)).fMax; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHJointDesc_set_fMax(void* _this, double value) {
        try { (*((PHJointDesc*)_this)).fMax = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PH1DJointDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PH1DJointDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PH1DJointDesc(void* v) {
        if (v == NULL) return;
        try { delete (PH1DJointDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PH1DJointDesc_get_cyclic(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PH1DJointDesc*)_this)).cyclic; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointDesc_set_cyclic(void* _this, char value) {
        try { (*((PH1DJointDesc*)_this)).cyclic = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointDesc_get_spring(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).spring; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointDesc_set_spring(void* _this, double value) {
        try { (*((PH1DJointDesc*)_this)).spring = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointDesc_get_damper(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).damper; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointDesc_set_damper(void* _this, double value) {
        try { (*((PH1DJointDesc*)_this)).damper = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointDesc_get_secondDamper(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).secondDamper; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointDesc_set_secondDamper(void* _this, double value) {
        try { (*((PH1DJointDesc*)_this)).secondDamper = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointDesc_get_targetPosition(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).targetPosition; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointDesc_set_targetPosition(void* _this, double value) {
        try { (*((PH1DJointDesc*)_this)).targetPosition = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointDesc_get_targetVelocity(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).targetVelocity; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointDesc_set_targetVelocity(void* _this, double value) {
        try { (*((PH1DJointDesc*)_this)).targetVelocity = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointDesc_get_offsetForce(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).offsetForce; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointDesc_set_offsetForce(void* _this, double value) {
        try { (*((PH1DJointDesc*)_this)).offsetForce = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointDesc_get_yieldStress(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).yieldStress; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointDesc_set_yieldStress(void* _this, double value) {
        try { (*((PH1DJointDesc*)_this)).yieldStress = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointDesc_get_hardnessRate(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).hardnessRate; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointDesc_set_hardnessRate(void* _this, double value) {
        try { (*((PH1DJointDesc*)_this)).hardnessRate = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointDesc_get_secondMoment(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointDesc*)_this)).secondMoment; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointDesc_set_secondMoment(void* _this, double value) {
        try { (*((PH1DJointDesc*)_this)).secondMoment = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHingeJointDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHingeJointDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHingeJointDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHHingeJointDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSliderJointDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSliderJointDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSliderJointDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHSliderJointDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSliderJointDesc_get_bConstraintY(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHSliderJointDesc*)_this)).bConstraintY; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSliderJointDesc_set_bConstraintY(void* _this, char value) {
        try { (*((PHSliderJointDesc*)_this)).bConstraintY = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSliderJointDesc_get_bConstraintRollX(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHSliderJointDesc*)_this)).bConstraintRollX; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSliderJointDesc_set_bConstraintRollX(void* _this, char value) {
        try { (*((PHSliderJointDesc*)_this)).bConstraintRollX = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSliderJointDesc_get_bConstraintRollZ(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHSliderJointDesc*)_this)).bConstraintRollZ; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSliderJointDesc_set_bConstraintRollZ(void* _this, char value) {
        try { (*((PHSliderJointDesc*)_this)).bConstraintRollZ = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPathPoint() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPathPoint(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPathPoint_4(double _s, void* _pose) {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPathPoint(_s, *((Posed*) _pose)); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPathPoint(void* v) {
        if (v == NULL) return;
        try { delete (PHPathPoint*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHPathPoint_get_s(void* _this) {
        double _val = 0;
        try { _val = (*((PHPathPoint*)_this)).s; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHPathPoint_set_s(void* _this, double value) {
        try { (*((PHPathPoint*)_this)).s = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathPoint_addr_pose(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHPathPoint*)_this)->pose; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHPathPoint_set_pose(void* _this, void* _ptr) {
        try {
            if (&(((PHPathPoint*)_this)->pose) != _ptr) {
                ((PHPathPoint*)_this)->pose = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPathDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPathDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPathDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHPathDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathDesc_vector_get_points(void* _this) {
        void* _ptr = NULL;
        try { _ptr = (vector<PHPathPoint>*) &((PHPathDesc*)_this)->points; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHPathDesc_vector_set_points(void* _this, void* value) {
        try { ((PHPathDesc*)_this)->points = *((std::vector<PHPathPoint>*) value); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHPathDesc_get_bLoop(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHPathDesc*)_this)).bLoop; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHPathDesc_set_bLoop(void* _this, char value) {
        try { (*((PHPathDesc*)_this)).bLoop = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPathJointDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPathJointDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPathJointDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHPathJointDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHGenericJointCallback() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHGenericJointCallback(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHGenericJointCallback(void* v) {
        if (v == NULL) return;
        try { delete (PHGenericJointCallback*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointCallback_SetParam(void* _this, void* jnt, void* name, double value) {
	string arg02_("");
	int lenMB2 = static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(name), 0));
	if (lenMB2 > 0) {
	    std::string str1(lenMB2, 0); char* addr2 = &str1[0];
        static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(name), 0));
	    arg02_ = (string) addr2;
	}
	try { ((PHGenericJointCallback*) _this)->SetParam((PHGenericJointIf*) jnt, (string) arg02_, value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHGenericJointCallback_IsCyclic(void* _this, void* jnt) {
	bool _val = (bool) NULL;
	try { _val = ((PHGenericJointCallback*) _this)->IsCyclic((PHGenericJointIf*) jnt); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointCallback_GetMovableAxes(void* _this, void* jnt, int& n, void* indices) {
	try { ((PHGenericJointCallback*) _this)->GetMovableAxes((PHGenericJointIf*) jnt, n, (int*) indices); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointCallback_CompBias(void* _this, void* jnt, void* dbv, void* dbw, void* prel, void* qrel, void* vrel, void* wrel) {
	try { ((PHGenericJointCallback*) _this)->CompBias((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) dbv), (Vec3d&) *((Vec3d*) dbw), (const Vec3d&) *((Vec3d*) prel), (const Quaterniond&) *((Quaterniond*) qrel), (const Vec3d&) *((Vec3d*) vrel), (const Vec3d&) *((Vec3d*) wrel)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointCallback_CompError(void* _this, void* jnt, void* Bv, void* Bw, void* prel, void* qrel) {
	try { ((PHGenericJointCallback*) _this)->CompError((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) Bv), (Vec3d&) *((Vec3d*) Bw), (const Vec3d&) *((Vec3d*) prel), (const Quaterniond&) *((Quaterniond*) qrel)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointCallback_UpdateJointState(void* _this, void* jnt, double& pos, double& vel, void* prel, void* qrel, void* vrel, void* wrel) {
	try { ((PHGenericJointCallback*) _this)->UpdateJointState((PHGenericJointIf*) jnt, pos, vel, (const Vec3d&) *((Vec3d*) prel), (const Quaterniond&) *((Quaterniond*) qrel), (const Vec3d&) *((Vec3d*) vrel), (const Vec3d&) *((Vec3d*) wrel)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointCallback_CompJointJacobian(void* _this, void* jnt, void* Jv, void* Jw, double pos) {
	try { ((PHGenericJointCallback*) _this)->CompJointJacobian((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) Jv), (Vec3d&) *((Vec3d*) Jw), pos); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointCallback_CompJointCoriolisAccel(void* _this, void* jnt, void* cv, void* cw, double pos, double vel) {
	try { ((PHGenericJointCallback*) _this)->CompJointCoriolisAccel((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) cv), (Vec3d&) *((Vec3d*) cw), pos, vel); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointCallback_CompRelativePosition(void* _this, void* jnt, void* prel, void* qrel, double pos) {
	try { ((PHGenericJointCallback*) _this)->CompRelativePosition((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) prel), (Quaterniond&) *((Quaterniond*) qrel), pos); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointCallback_CompRelativeVelocity(void* _this, void* jnt, void* vrel, void* wrel, double pos, double vel) {
	try { ((PHGenericJointCallback*) _this)->CompRelativeVelocity((PHGenericJointIf*) jnt, (Vec3d&) *((Vec3d*) vrel), (Vec3d&) *((Vec3d*) wrel), pos, vel); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHGenericJointDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHGenericJointDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHGenericJointDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHGenericJointDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointDesc_get_spring(void* _this) {
        double _val = 0;
        try { _val = (*((PHBallJointDesc*)_this)).spring; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointDesc_set_spring(void* _this, double value) {
        try { (*((PHBallJointDesc*)_this)).spring = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointDesc_get_damper(void* _this) {
        double _val = 0;
        try { _val = (*((PHBallJointDesc*)_this)).damper; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointDesc_set_damper(void* _this, double value) {
        try { (*((PHBallJointDesc*)_this)).damper = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointDesc_addr_secondDamper(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointDesc*)_this)->secondDamper; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointDesc_set_secondDamper(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointDesc*)_this)->secondDamper) != _ptr) {
                ((PHBallJointDesc*)_this)->secondDamper = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointDesc_addr_targetPosition(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointDesc*)_this)->targetPosition; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointDesc_set_targetPosition(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointDesc*)_this)->targetPosition) != _ptr) {
                ((PHBallJointDesc*)_this)->targetPosition = *((Quaterniond*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointDesc_addr_targetVelocity(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointDesc*)_this)->targetVelocity; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointDesc_set_targetVelocity(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointDesc*)_this)->targetVelocity) != _ptr) {
                ((PHBallJointDesc*)_this)->targetVelocity = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointDesc_addr_offsetForce(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointDesc*)_this)->offsetForce; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointDesc_set_offsetForce(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointDesc*)_this)->offsetForce) != _ptr) {
                ((PHBallJointDesc*)_this)->offsetForce = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointDesc_get_yieldStress(void* _this) {
        double _val = 0;
        try { _val = (*((PHBallJointDesc*)_this)).yieldStress; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointDesc_set_yieldStress(void* _this, double value) {
        try { (*((PHBallJointDesc*)_this)).yieldStress = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointDesc_get_hardnessRate(void* _this) {
        double _val = 0;
        try { _val = (*((PHBallJointDesc*)_this)).hardnessRate; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointDesc_set_hardnessRate(void* _this, double value) {
        try { (*((PHBallJointDesc*)_this)).hardnessRate = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointDesc_addr_secondMoment(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointDesc*)_this)->secondMoment; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointDesc_set_secondMoment(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointDesc*)_this)->secondMoment) != _ptr) {
                ((PHBallJointDesc*)_this)->secondMoment = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFixJointDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFixJointDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFixJointDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHFixJointDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSpringDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSpringDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSpringDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHSpringDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringDesc_addr_targetPosition(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->targetPosition; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_targetPosition(void* _this, void* _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->targetPosition) != _ptr) {
                ((PHSpringDesc*)_this)->targetPosition = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringDesc_addr_targetOrientation(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->targetOrientation; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_targetOrientation(void* _this, void* _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->targetOrientation) != _ptr) {
                ((PHSpringDesc*)_this)->targetOrientation = *((Quaterniond*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringDesc_addr_spring(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->spring; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_spring(void* _this, void* _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->spring) != _ptr) {
                ((PHSpringDesc*)_this)->spring = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringDesc_addr_damper(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->damper; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_damper(void* _this, void* _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->damper) != _ptr) {
                ((PHSpringDesc*)_this)->damper = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringDesc_addr_secondDamper(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->secondDamper; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_secondDamper(void* _this, void* _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->secondDamper) != _ptr) {
                ((PHSpringDesc*)_this)->secondDamper = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSpringDesc_get_springOri(void* _this) {
        double _val = 0;
        try { _val = (*((PHSpringDesc*)_this)).springOri; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_springOri(void* _this, double value) {
        try { (*((PHSpringDesc*)_this)).springOri = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSpringDesc_get_damperOri(void* _this) {
        double _val = 0;
        try { _val = (*((PHSpringDesc*)_this)).damperOri; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_damperOri(void* _this, double value) {
        try { (*((PHSpringDesc*)_this)).damperOri = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSpringDesc_get_secondDamperOri(void* _this) {
        double _val = 0;
        try { _val = (*((PHSpringDesc*)_this)).secondDamperOri; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_secondDamperOri(void* _this, double value) {
        try { (*((PHSpringDesc*)_this)).secondDamperOri = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSpringDesc_get_yieldStress(void* _this) {
        double _val = 0;
        try { _val = (*((PHSpringDesc*)_this)).yieldStress; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_yieldStress(void* _this, double value) {
        try { (*((PHSpringDesc*)_this)).yieldStress = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSpringDesc_get_hardnessRate(void* _this) {
        double _val = 0;
        try { _val = (*((PHSpringDesc*)_this)).hardnessRate; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_hardnessRate(void* _this, double value) {
        try { (*((PHSpringDesc*)_this)).hardnessRate = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringDesc_addr_secondMoment(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->secondMoment; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_secondMoment(void* _this, void* _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->secondMoment) != _ptr) {
                ((PHSpringDesc*)_this)->secondMoment = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringDesc_addr_targetVelocity(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->targetVelocity; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_targetVelocity(void* _this, void* _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->targetVelocity) != _ptr) {
                ((PHSpringDesc*)_this)->targetVelocity = *((Vec6d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringDesc_addr_offsetForce(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSpringDesc*)_this)->offsetForce; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringDesc_set_offsetForce(void* _this, void* _ptr) {
        try {
            if (&(((PHSpringDesc*)_this)->offsetForce) != _ptr) {
                ((PHSpringDesc*)_this)->offsetForce = *((Vec6d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHMateDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHMateDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHMateDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHMateDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPointToPointMateDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPointToPointMateDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPointToPointMateDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHPointToPointMateDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPointToLineMateDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPointToLineMateDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPointToLineMateDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHPointToLineMateDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPointToPlaneMateDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPointToPlaneMateDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPointToPlaneMateDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHPointToPlaneMateDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPointToPlaneMateDesc_addr_range(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHPointToPlaneMateDesc*)_this)->range; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHPointToPlaneMateDesc_set_range(void* _this, void* _ptr) {
        try {
            if (&(((PHPointToPlaneMateDesc*)_this)->range) != _ptr) {
                ((PHPointToPlaneMateDesc*)_this)->range = *((Vec2d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHLineToLineMateDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHLineToLineMateDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHLineToLineMateDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHLineToLineMateDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPlaneToPlaneMateDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPlaneToPlaneMateDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPlaneToPlaneMateDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHPlaneToPlaneMateDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHTreeNodeDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHTreeNodeDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHTreeNodeDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHTreeNodeDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHTreeNodeDesc_get_bEnabled(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHTreeNodeDesc*)_this)).bEnabled; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHTreeNodeDesc_set_bEnabled(void* _this, char value) {
        try { (*((PHTreeNodeDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHRootNodeDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHRootNodeDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHRootNodeDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHRootNodeDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHTreeNode1DDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHTreeNode1DDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHTreeNode1DDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHTreeNode1DDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHingeJointNodeDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHingeJointNodeDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHingeJointNodeDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHHingeJointNodeDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSliderJointNodeDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSliderJointNodeDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSliderJointNodeDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHSliderJointNodeDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPathJointNodeDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPathJointNodeDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPathJointNodeDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHPathJointNodeDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHGenericJointNodeDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHGenericJointNodeDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHGenericJointNodeDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHGenericJointNodeDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointNodeDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointNodeDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointNodeDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointNodeDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFixJointNodeDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFixJointNodeDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFixJointNodeDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHFixJointNodeDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHGearDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHGearDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHGearDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHGearDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHGearDesc_get_bEnabled(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHGearDesc*)_this)).bEnabled; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHGearDesc_set_bEnabled(void* _this, char value) {
        try { (*((PHGearDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHGearDesc_get_ratio(void* _this) {
        double _val = 0;
        try { _val = (*((PHGearDesc*)_this)).ratio; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHGearDesc_set_ratio(void* _this, double value) {
        try { (*((PHGearDesc*)_this)).ratio = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHGearDesc_get_offset(void* _this) {
        double _val = 0;
        try { _val = (*((PHGearDesc*)_this)).offset; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHGearDesc_set_offset(void* _this, double value) {
        try { (*((PHGearDesc*)_this)).offset = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHGearDesc_get_mode(void* _this) {
        int _val = 0;
        try { _val = (*((PHGearDesc*)_this)).mode; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHGearDesc_set_mode(void* _this, int value) {
        try { (*((PHGearDesc*)_this)).mode = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PH1DJointLimitDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PH1DJointLimitDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PH1DJointLimitDesc(void* v) {
        if (v == NULL) return;
        try { delete (PH1DJointLimitDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PH1DJointLimitDesc_get_bEnabled(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PH1DJointLimitDesc*)_this)).bEnabled; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointLimitDesc_set_bEnabled(void* _this, char value) {
        try { (*((PH1DJointLimitDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointLimitDesc_get_spring(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointLimitDesc*)_this)).spring; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointLimitDesc_set_spring(void* _this, double value) {
        try { (*((PH1DJointLimitDesc*)_this)).spring = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointLimitDesc_get_damper(void* _this) {
        double _val = 0;
        try { _val = (*((PH1DJointLimitDesc*)_this)).damper; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointLimitDesc_set_damper(void* _this, double value) {
        try { (*((PH1DJointLimitDesc*)_this)).damper = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointLimitDesc_addr_range(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PH1DJointLimitDesc*)_this)->range; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointLimitDesc_set_range(void* _this, void* _ptr) {
        try {
            if (&(((PH1DJointLimitDesc*)_this)->range) != _ptr) {
                ((PH1DJointLimitDesc*)_this)->range = *((Vec2d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointLimitDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointLimitDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointLimitDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointLimitDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHBallJointLimitDesc_get_bEnabled(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHBallJointLimitDesc*)_this)).bEnabled; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointLimitDesc_set_bEnabled(void* _this, char value) {
        try { (*((PHBallJointLimitDesc*)_this)).bEnabled = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointLimitDesc_get_spring(void* _this) {
        double _val = 0;
        try { _val = (*((PHBallJointLimitDesc*)_this)).spring; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointLimitDesc_set_spring(void* _this, double value) {
        try { (*((PHBallJointLimitDesc*)_this)).spring = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointLimitDesc_get_damper(void* _this) {
        double _val = 0;
        try { _val = (*((PHBallJointLimitDesc*)_this)).damper; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointLimitDesc_set_damper(void* _this, double value) {
        try { (*((PHBallJointLimitDesc*)_this)).damper = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointLimitDesc_addr_limitDir(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointLimitDesc*)_this)->limitDir; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointLimitDesc_set_limitDir(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointLimitDesc*)_this)->limitDir) != _ptr) {
                ((PHBallJointLimitDesc*)_this)->limitDir = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointConeLimitDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointConeLimitDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointConeLimitDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointConeLimitDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointConeLimitDesc_addr_limitSwing(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointConeLimitDesc*)_this)->limitSwing; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointConeLimitDesc_set_limitSwing(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointConeLimitDesc*)_this)->limitSwing) != _ptr) {
                ((PHBallJointConeLimitDesc*)_this)->limitSwing = *((Vec2d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointConeLimitDesc_addr_limitSwingDir(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointConeLimitDesc*)_this)->limitSwingDir; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointConeLimitDesc_set_limitSwingDir(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointConeLimitDesc*)_this)->limitSwingDir) != _ptr) {
                ((PHBallJointConeLimitDesc*)_this)->limitSwingDir = *((Vec2d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointConeLimitDesc_addr_limitTwist(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointConeLimitDesc*)_this)->limitTwist; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointConeLimitDesc_set_limitTwist(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointConeLimitDesc*)_this)->limitTwist) != _ptr) {
                ((PHBallJointConeLimitDesc*)_this)->limitTwist = *((Vec2d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSplineLimitNode() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSplineLimitNode(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSplineLimitNode_8(double s, double sd, double ds, double dsd, double tmn, double tmx) {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSplineLimitNode(s, sd, ds, dsd, tmn, tmx); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSplineLimitNode(void* v) {
        if (v == NULL) return;
        try { delete (PHSplineLimitNode*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSplineLimitNode_get_swing(void* _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).swing; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSplineLimitNode_set_swing(void* _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).swing = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSplineLimitNode_get_swingDir(void* _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).swingDir; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSplineLimitNode_set_swingDir(void* _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).swingDir = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSplineLimitNode_get_dSwing(void* _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).dSwing; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSplineLimitNode_set_dSwing(void* _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).dSwing = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSplineLimitNode_get_dSwingDir(void* _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).dSwingDir; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSplineLimitNode_set_dSwingDir(void* _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).dSwingDir = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSplineLimitNode_get_twistMin(void* _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).twistMin; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSplineLimitNode_set_twistMin(void* _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).twistMin = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSplineLimitNode_get_twistMax(void* _this) {
        double _val = 0;
        try { _val = (*((PHSplineLimitNode*)_this)).twistMax; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSplineLimitNode_set_twistMax(void* _this, double value) {
        try { (*((PHSplineLimitNode*)_this)).twistMax = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointSplineLimitDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointSplineLimitDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointSplineLimitDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointSplineLimitDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointSplineLimitDesc_vector_get_nodes(void* _this) {
        void* _ptr = NULL;
        try { _ptr = (vector<PHSplineLimitNode>*) &((PHBallJointSplineLimitDesc*)_this)->nodes; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointSplineLimitDesc_vector_set_nodes(void* _this, void* value) {
        try { ((PHBallJointSplineLimitDesc*)_this)->nodes = *((std::vector<PHSplineLimitNode>*) value); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointSplineLimitDesc_addr_poleTwist(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointSplineLimitDesc*)_this)->poleTwist; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointSplineLimitDesc_set_poleTwist(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointSplineLimitDesc*)_this)->poleTwist) != _ptr) {
                ((PHBallJointSplineLimitDesc*)_this)->poleTwist = *((Vec2d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointIndependentLimitDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointIndependentLimitDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointIndependentLimitDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointIndependentLimitDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIndependentLimitDesc_addr_limitX(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointIndependentLimitDesc*)_this)->limitX; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIndependentLimitDesc_set_limitX(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointIndependentLimitDesc*)_this)->limitX) != _ptr) {
                ((PHBallJointIndependentLimitDesc*)_this)->limitX = *((Vec2d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIndependentLimitDesc_addr_limitY(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointIndependentLimitDesc*)_this)->limitY; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIndependentLimitDesc_set_limitY(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointIndependentLimitDesc*)_this)->limitY) != _ptr) {
                ((PHBallJointIndependentLimitDesc*)_this)->limitY = *((Vec2d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIndependentLimitDesc_addr_limitZ(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHBallJointIndependentLimitDesc*)_this)->limitZ; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIndependentLimitDesc_set_limitZ(void* _this, void* _ptr) {
        try {
            if (&(((PHBallJointIndependentLimitDesc*)_this)->limitZ) != _ptr) {
                ((PHBallJointIndependentLimitDesc*)_this)->limitZ = *((Vec2d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PH1DJointMotorDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PH1DJointMotorDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PH1DJointMotorDesc(void* v) {
        if (v == NULL) return;
        try { delete (PH1DJointMotorDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PH1DJointNonLinearMotorDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PH1DJointNonLinearMotorDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PH1DJointNonLinearMotorDesc(void* v) {
        if (v == NULL) return;
        try { delete (PH1DJointNonLinearMotorDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHuman1DJointResistanceDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHuman1DJointResistanceDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHuman1DJointResistanceDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHHuman1DJointResistanceDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHuman1DJointResistanceDesc_addr_coefficient(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHHuman1DJointResistanceDesc*)_this)->coefficient; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHHuman1DJointResistanceDesc_set_coefficient(void* _this, void* _ptr) {
        try {
            if (&(((PHHuman1DJointResistanceDesc*)_this)->coefficient) != _ptr) {
                ((PHHuman1DJointResistanceDesc*)_this)->coefficient = *((Vec4d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointMotorDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointMotorDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointMotorDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointMotorDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointNonLinearMotorDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointNonLinearMotorDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointNonLinearMotorDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointNonLinearMotorDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHumanBallJointResistanceDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHumanBallJointResistanceDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHumanBallJointResistanceDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHHumanBallJointResistanceDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHumanBallJointResistanceDesc_addr_xCoefficient(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHHumanBallJointResistanceDesc*)_this)->xCoefficient; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHHumanBallJointResistanceDesc_set_xCoefficient(void* _this, void* _ptr) {
        try {
            if (&(((PHHumanBallJointResistanceDesc*)_this)->xCoefficient) != _ptr) {
                ((PHHumanBallJointResistanceDesc*)_this)->xCoefficient = *((Vec4d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHumanBallJointResistanceDesc_addr_yCoefficient(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHHumanBallJointResistanceDesc*)_this)->yCoefficient; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHHumanBallJointResistanceDesc_set_yCoefficient(void* _this, void* _ptr) {
        try {
            if (&(((PHHumanBallJointResistanceDesc*)_this)->yCoefficient) != _ptr) {
                ((PHHumanBallJointResistanceDesc*)_this)->yCoefficient = *((Vec4d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHumanBallJointResistanceDesc_addr_zCoefficient(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHHumanBallJointResistanceDesc*)_this)->zCoefficient; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHHumanBallJointResistanceDesc_set_zCoefficient(void* _this, void* _ptr) {
        try {
            if (&(((PHHumanBallJointResistanceDesc*)_this)->zCoefficient) != _ptr) {
                ((PHHumanBallJointResistanceDesc*)_this)->zCoefficient = *((Vec4d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSpringMotorDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSpringMotorDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSpringMotorDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHSpringMotorDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHInactiveSolids() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHInactiveSolids(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHInactiveSolids(void* v) {
        if (v == NULL) return;
        try { delete (PHInactiveSolids*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpObjState() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpObjState(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpObjState(void* v) {
        if (v == NULL) return;
        try { delete (PHOpObjState*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjState_addr_velocity(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpObjState*)_this)->velocity; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjState_set_velocity(void* _this, void* _ptr) {
        try {
            if (&(((PHOpObjState*)_this)->velocity) != _ptr) {
                ((PHOpObjState*)_this)->velocity = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjState_addr_angVelocity(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpObjState*)_this)->angVelocity; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjState_set_angVelocity(void* _this, void* _ptr) {
        try {
            if (&(((PHOpObjState*)_this)->angVelocity) != _ptr) {
                ((PHOpObjState*)_this)->angVelocity = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjState_addr_pose(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpObjState*)_this)->pose; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjState_set_pose(void* _this, void* _ptr) {
        try {
            if (&(((PHOpObjState*)_this)->pose) != _ptr) {
                ((PHOpObjState*)_this)->pose = *((Posed*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpHapticRendererDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpHapticRendererDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpHapticRendererDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHOpHapticRendererDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticRendererDesc_get_extForceSpring(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).extForceSpring; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_extForceSpring(void* _this, float value) {
        try { (*((PHOpHapticRendererDesc*)_this)).extForceSpring = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticRendererDesc_get_outForceSpring(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).outForceSpring; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_outForceSpring(void* _this, float value) {
        try { (*((PHOpHapticRendererDesc*)_this)).outForceSpring = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticRendererDesc_get_constraintSpring(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).constraintSpring; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_constraintSpring(void* _this, float value) {
        try { (*((PHOpHapticRendererDesc*)_this)).constraintSpring = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticRendererDesc_get_timeStep(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).timeStep; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_timeStep(void* _this, float value) {
        try { (*((PHOpHapticRendererDesc*)_this)).timeStep = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticRendererDesc_get_forceOnRadius(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).forceOnRadius; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_forceOnRadius(void* _this, float value) {
        try { (*((PHOpHapticRendererDesc*)_this)).forceOnRadius = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticRendererDesc_get_useConstrainForce(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).useConstrainForce; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_useConstrainForce(void* _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).useConstrainForce = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticRendererDesc_get_useProxyfixSubitr(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).useProxyfixSubitr; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_useProxyfixSubitr(void* _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).useProxyfixSubitr = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticRendererDesc_get_useIncreaseMeshMove(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).useIncreaseMeshMove; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_useIncreaseMeshMove(void* _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).useIncreaseMeshMove = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticRendererDesc_get_sqrtAlphaForce(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).sqrtAlphaForce; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_sqrtAlphaForce(void* _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).sqrtAlphaForce = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticRendererDesc_get_hitWall(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).hitWall; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_hitWall(void* _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).hitWall = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticRendererDesc_get_useDualTranFix(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).useDualTranFix; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_useDualTranFix(void* _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).useDualTranFix = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticRendererDesc_get_rigid(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticRendererDesc*)_this)).rigid; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_rigid(void* _this, char value) {
        try { (*((PHOpHapticRendererDesc*)_this)).rigid = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticRendererDesc_get_proxyItrtNum(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).proxyItrtNum; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_proxyItrtNum(void* _this, int value) {
        try { (*((PHOpHapticRendererDesc*)_this)).proxyItrtNum = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticRendererDesc_get_proxyItrtMaxNum(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).proxyItrtMaxNum; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_proxyItrtMaxNum(void* _this, int value) {
        try { (*((PHOpHapticRendererDesc*)_this)).proxyItrtMaxNum = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticRendererDesc_get_currDtType(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).currDtType; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_currDtType(void* _this, int value) {
        try { (*((PHOpHapticRendererDesc*)_this)).currDtType = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticRendererDesc_get_objNum(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).objNum; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_objNum(void* _this, int value) {
        try { (*((PHOpHapticRendererDesc*)_this)).objNum = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticRendererDesc_get_noCtcItrNum(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticRendererDesc*)_this)).noCtcItrNum; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_noCtcItrNum(void* _this, int value) {
        try { (*((PHOpHapticRendererDesc*)_this)).noCtcItrNum = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticRendererDesc_addr_proxyFixPos(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpHapticRendererDesc*)_this)->proxyFixPos; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererDesc_set_proxyFixPos(void* _this, void* _ptr) {
        try {
            if (&(((PHOpHapticRendererDesc*)_this)->proxyFixPos) != _ptr) {
                ((PHOpHapticRendererDesc*)_this)->proxyFixPos = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpObjDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpObjDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpObjDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHOpObjDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHOpObjDesc_get_mass(void* _this) {
        double _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).mass; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_mass(void* _this, double value) {
        try { (*((PHOpObjDesc*)_this)).mass = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjDesc_addr_inertia(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpObjDesc*)_this)->inertia; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_inertia(void* _this, void* _ptr) {
        try {
            if (&(((PHOpObjDesc*)_this)->inertia) != _ptr) {
                ((PHOpObjDesc*)_this)->inertia = *((Matrix3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjDesc_addr_center(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpObjDesc*)_this)->center; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_center(void* _this, void* _ptr) {
        try {
            if (&(((PHOpObjDesc*)_this)->center) != _ptr) {
                ((PHOpObjDesc*)_this)->center = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpObjDesc_get_dynamical(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpObjDesc*)_this)).dynamical; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_dynamical(void* _this, char value) {
        try { (*((PHOpObjDesc*)_this)).dynamical = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjDesc_get_objTargetVts(void* _this) {
        void* _ptr = NULL;
        try { _ptr = ((PHOpObjDesc*)_this)->objTargetVts; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_objTargetVts(void* _this, void* _ptr) {
        try {
            if (&(((PHOpObjDesc*)_this)->objTargetVts) != _ptr) {
                ((PHOpObjDesc*)_this)->objTargetVts = ((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjDesc_array_addr_objTargetVtsArr(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpObjDesc*) _this)->objTargetVtsArr[0]; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_array_set_objTargetVtsArr(void* _this, void* _ptr) {
        try {
            if (&(*((PHOpObjDesc*)_this)).objTargetVtsArr != _ptr) {
                float* src = (float*) _ptr;
                float* dst = &((PHOpObjDesc*) _this)->objTargetVtsArr[0];
                memcpy((void*) dst, (const void*) src, sizeof(((PHOpObjDesc*) _this)->objTargetVtsArr));
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpObjDesc_get_objTargetVtsNum(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objTargetVtsNum; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_objTargetVtsNum(void* _this, int value) {
        try { (*((PHOpObjDesc*)_this)).objTargetVtsNum = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpObjDesc_get_assPsNum(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).assPsNum; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_assPsNum(void* _this, int value) {
        try { (*((PHOpObjDesc*)_this)).assPsNum = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpObjDesc_get_assGrpNum(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).assGrpNum; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_assGrpNum(void* _this, int value) {
        try { (*((PHOpObjDesc*)_this)).assGrpNum = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpObjDesc_get_objGrouplinkCount(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objGrouplinkCount; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_objGrouplinkCount(void* _this, int value) {
        try { (*((PHOpObjDesc*)_this)).objGrouplinkCount = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpObjDesc_get_objId(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objId; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_objId(void* _this, int value) {
        try { (*((PHOpObjDesc*)_this)).objId = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpObjDesc_get_objUseDistCstr(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpObjDesc*)_this)).objUseDistCstr; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_objUseDistCstr(void* _this, char value) {
        try { (*((PHOpObjDesc*)_this)).objUseDistCstr = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpObjDesc_get_objNoMeshObj(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpObjDesc*)_this)).objNoMeshObj; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_objNoMeshObj(void* _this, char value) {
        try { (*((PHOpObjDesc*)_this)).objNoMeshObj = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpObjDesc_get_isRigid(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpObjDesc*)_this)).isRigid; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_isRigid(void* _this, char value) {
        try { (*((PHOpObjDesc*)_this)).isRigid = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpObjDesc_get_objType(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objType; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_objType(void* _this, int value) {
        try { (*((PHOpObjDesc*)_this)).objType = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpObjDesc_get_objAverRadius(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objAverRadius; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_objAverRadius(void* _this, float value) {
        try { (*((PHOpObjDesc*)_this)).objAverRadius = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpObjDesc_get_objMaxRadius(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objMaxRadius; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_objMaxRadius(void* _this, float value) {
        try { (*((PHOpObjDesc*)_this)).objMaxRadius = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpObjDesc_get_objitrTime(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpObjDesc*)_this)).objitrTime; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_objitrTime(void* _this, int value) {
        try { (*((PHOpObjDesc*)_this)).objitrTime = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpObjDesc_get_updateNormals(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpObjDesc*)_this)).updateNormals; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_set_updateNormals(void* _this, char value) {
        try { (*((PHOpObjDesc*)_this)).updateNormals = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjDesc_Init(void* _this) {
	try { ((PHOpObjDesc*) _this)->Init(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpParticleDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpParticleDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpParticleDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHOpParticleDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpParticleDesc_get_pNvertex(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pNvertex; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pNvertex(void* _this, int value) {
        try { (*((PHOpParticleDesc*)_this)).pNvertex = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpParticleDesc_get_pMyGroupInd(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pMyGroupInd; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pMyGroupInd(void* _this, int value) {
        try { (*((PHOpParticleDesc*)_this)).pMyGroupInd = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpParticleDesc_get_pPId(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pPId; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pPId(void* _this, int value) {
        try { (*((PHOpParticleDesc*)_this)).pPId = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpParticleDesc_get_pObjId(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pObjId; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pObjId(void* _this, int value) {
        try { (*((PHOpParticleDesc*)_this)).pObjId = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpParticleDesc_get_pParaAlpha(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pParaAlpha; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pParaAlpha(void* _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pParaAlpha = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpParticleDesc_get_hitedByMouse(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).hitedByMouse; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_hitedByMouse(void* _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).hitedByMouse = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpParticleDesc_get_pSingleVMass(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pSingleVMass; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pSingleVMass(void* _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pSingleVMass = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpParticleDesc_get_pTotalMass(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pTotalMass; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pTotalMass(void* _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pTotalMass = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpParticleDesc_get_pRadii(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pRadii; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pRadii(void* _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pRadii = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpParticleDesc_get_pDynamicRadius(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pDynamicRadius; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pDynamicRadius(void* _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pDynamicRadius = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pMainRadiusVec(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pMainRadiusVec; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pMainRadiusVec(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pMainRadiusVec) != _ptr) {
                ((PHOpParticleDesc*)_this)->pMainRadiusVec = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pSecRadiusVec(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pSecRadiusVec; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pSecRadiusVec(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pSecRadiusVec) != _ptr) {
                ((PHOpParticleDesc*)_this)->pSecRadiusVec = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pThrRadiusVec(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pThrRadiusVec; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pThrRadiusVec(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pThrRadiusVec) != _ptr) {
                ((PHOpParticleDesc*)_this)->pThrRadiusVec = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpParticleDesc_get_pMainRadius(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pMainRadius; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pMainRadius(void* _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pMainRadius = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpParticleDesc_get_pSecRadius(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pSecRadius; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pSecRadius(void* _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pSecRadius = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpParticleDesc_get_pThrRadius(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpParticleDesc*)_this)).pThrRadius; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pThrRadius(void* _this, float value) {
        try { (*((PHOpParticleDesc*)_this)).pThrRadius = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pCurrCtr(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pCurrCtr; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pCurrCtr(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pCurrCtr) != _ptr) {
                ((PHOpParticleDesc*)_this)->pCurrCtr = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pOrigCtr(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pOrigCtr; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pOrigCtr(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pOrigCtr) != _ptr) {
                ((PHOpParticleDesc*)_this)->pOrigCtr = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pNewCtr(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pNewCtr; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pNewCtr(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pNewCtr) != _ptr) {
                ((PHOpParticleDesc*)_this)->pNewCtr = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pVelocity(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pVelocity; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pVelocity(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pVelocity) != _ptr) {
                ((PHOpParticleDesc*)_this)->pVelocity = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpParticleDesc_get_isColliedbySphash(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isColliedbySphash; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_isColliedbySphash(void* _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isColliedbySphash = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpParticleDesc_get_isColliedbyColliCube(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isColliedbyColliCube; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_isColliedbyColliCube(void* _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isColliedbyColliCube = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpParticleDesc_get_isFixedbyMouse(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isFixedbyMouse; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_isFixedbyMouse(void* _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isFixedbyMouse = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpParticleDesc_get_isFixed(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isFixed; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_isFixed(void* _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isFixed = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpParticleDesc_get_isColliedSphashSolved(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isColliedSphashSolved; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_isColliedSphashSolved(void* _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isColliedSphashSolved = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpParticleDesc_get_isColliedSphashSolvedReady(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpParticleDesc*)_this)).isColliedSphashSolvedReady; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_isColliedSphashSolvedReady(void* _this, char value) {
        try { (*((PHOpParticleDesc*)_this)).isColliedSphashSolvedReady = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pExternalForce(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pExternalForce; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pExternalForce(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pExternalForce) != _ptr) {
                ((PHOpParticleDesc*)_this)->pExternalForce = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pExternalTorque(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pExternalTorque; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pExternalTorque(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pExternalTorque) != _ptr) {
                ((PHOpParticleDesc*)_this)->pExternalTorque = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pExternalDisplacement(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pExternalDisplacement; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pExternalDisplacement(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pExternalDisplacement) != _ptr) {
                ((PHOpParticleDesc*)_this)->pExternalDisplacement = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_vector_addr_pFaceInd(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &(*((PHOpParticleDesc*)_this)).pFaceInd; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_vector_set_pFaceInd(void* _this, void* _ptr) {
        try {
            if (&(*((PHOpParticleDesc*)_this)).pFaceInd != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((PHOpParticleDesc*)_this)).pFaceInd;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pMomentR(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pMomentR; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pMomentR(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pMomentR) != _ptr) {
                ((PHOpParticleDesc*)_this)->pMomentR = *((Matrix3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pSmR(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pSmR; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pSmR(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pSmR) != _ptr) {
                ((PHOpParticleDesc*)_this)->pSmR = *((Matrix3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pMomentInertia(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pMomentInertia; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pMomentInertia(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pMomentInertia) != _ptr) {
                ((PHOpParticleDesc*)_this)->pMomentInertia = *((Matrix3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pInverseOfMomentInertia(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pInverseOfMomentInertia; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pInverseOfMomentInertia(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pInverseOfMomentInertia) != _ptr) {
                ((PHOpParticleDesc*)_this)->pInverseOfMomentInertia = *((Matrix3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_ellipRotMatrix(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->ellipRotMatrix; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_ellipRotMatrix(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->ellipRotMatrix) != _ptr) {
                ((PHOpParticleDesc*)_this)->ellipRotMatrix = *((Matrix3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_ellipOrigOrint(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->ellipOrigOrint; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_ellipOrigOrint(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->ellipOrigOrint) != _ptr) {
                ((PHOpParticleDesc*)_this)->ellipOrigOrint = *((Quaternionf*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pWvel(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pWvel; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pWvel(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pWvel) != _ptr) {
                ((PHOpParticleDesc*)_this)->pWvel = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pPreEllipA(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pPreEllipA; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pPreEllipA(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pPreEllipA) != _ptr) {
                ((PHOpParticleDesc*)_this)->pPreEllipA = *((Matrix3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pCurrOrint(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pCurrOrint; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pCurrOrint(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pCurrOrint) != _ptr) {
                ((PHOpParticleDesc*)_this)->pCurrOrint = *((Quaternionf*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pOrigOrint(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pOrigOrint; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pOrigOrint(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pOrigOrint) != _ptr) {
                ((PHOpParticleDesc*)_this)->pOrigOrint = *((Quaternionf*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleDesc_addr_pNewOrint(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpParticleDesc*)_this)->pNewOrint; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleDesc_set_pNewOrint(void* _this, void* _ptr) {
        try {
            if (&(((PHOpParticleDesc*)_this)->pNewOrint) != _ptr) {
                ((PHOpParticleDesc*)_this)->pNewOrint = *((Quaternionf*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpGroupDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpGroupDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpGroupDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHOpGroupDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpGroupDesc_get_gMyIndex(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpGroupDesc*)_this)).gMyIndex; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpGroupDesc_set_gMyIndex(void* _this, int value) {
        try { (*((PHOpGroupDesc*)_this)).gMyIndex = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpGroupDesc_addr_gAgroup(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpGroupDesc*)_this)->gAgroup; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpGroupDesc_set_gAgroup(void* _this, void* _ptr) {
        try {
            if (&(((PHOpGroupDesc*)_this)->gAgroup) != _ptr) {
                ((PHOpGroupDesc*)_this)->gAgroup = *((Matrix3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpGroupDesc_addr_gEigen(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpGroupDesc*)_this)->gEigen; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpGroupDesc_set_gEigen(void* _this, void* _ptr) {
        try {
            if (&(((PHOpGroupDesc*)_this)->gEigen) != _ptr) {
                ((PHOpGroupDesc*)_this)->gEigen = *((Matrix3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpGroupDesc_get_gtotalMass(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpGroupDesc*)_this)).gtotalMass; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpGroupDesc_set_gtotalMass(void* _this, float value) {
        try { (*((PHOpGroupDesc*)_this)).gtotalMass = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpGroupDesc_addr_gOrigCenter(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpGroupDesc*)_this)->gOrigCenter; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpGroupDesc_set_gOrigCenter(void* _this, void* _ptr) {
        try {
            if (&(((PHOpGroupDesc*)_this)->gOrigCenter) != _ptr) {
                ((PHOpGroupDesc*)_this)->gOrigCenter = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpGroupDesc_addr_gCurrCenter(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpGroupDesc*)_this)->gCurrCenter; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpGroupDesc_set_gCurrCenter(void* _this, void* _ptr) {
        try {
            if (&(((PHOpGroupDesc*)_this)->gCurrCenter) != _ptr) {
                ((PHOpGroupDesc*)_this)->gCurrCenter = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpGroupDesc_get_gNptcl(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpGroupDesc*)_this)).gNptcl; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpGroupDesc_set_gNptcl(void* _this, int value) {
        try { (*((PHOpGroupDesc*)_this)).gNptcl = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpHapticControllerDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpHapticControllerDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpHapticControllerDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHOpHapticControllerDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticControllerDesc_get_posScale(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).posScale; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_posScale(void* _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).posScale = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticControllerDesc_get_rotScale(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).rotScale; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_rotScale(void* _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).rotScale = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticControllerDesc_get_forceScale(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).forceScale; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_forceScale(void* _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).forceScale = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerDesc_addr_userPos(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->userPos; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_userPos(void* _this, void* _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->userPos) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->userPos = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerDesc_addr_userPose(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->userPose; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_userPose(void* _this, void* _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->userPose) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->userPose = *((Posef*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerDesc_addr_hcCurrPPos(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->hcCurrPPos; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_hcCurrPPos(void* _this, void* _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->hcCurrPPos) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->hcCurrPPos = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerDesc_addr_hcCurrUPos(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->hcCurrUPos; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_hcCurrUPos(void* _this, void* _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->hcCurrUPos) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->hcCurrUPos = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerDesc_addr_hcLastUPos(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->hcLastUPos; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_hcLastUPos(void* _this, void* _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->hcLastUPos) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->hcLastUPos = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerDesc_addr_hcFixsubGoal(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->hcFixsubGoal; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_hcFixsubGoal(void* _this, void* _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->hcFixsubGoal) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->hcFixsubGoal = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticControllerDesc_get_c_obstRadius(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).c_obstRadius; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_c_obstRadius(void* _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).c_obstRadius = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticControllerDesc_get_hpObjIndex(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).hpObjIndex; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_hpObjIndex(void* _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hpObjIndex = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) PHOpHapticControllerDesc::HapticDOFType  Spr_PHOpHapticControllerDesc_get_hcType(void* _this) {
        PHOpHapticControllerDesc::HapticDOFType _val = (PHOpHapticControllerDesc::HapticDOFType) 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).hcType; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_hcType(void* _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hcType = (PHOpHapticControllerDesc::HapticDOFType) value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticControllerDesc_get_logForce(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticControllerDesc*)_this)).logForce; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_logForce(void* _this, char value) {
        try { (*((PHOpHapticControllerDesc*)_this)).logForce = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticControllerDesc_get_hcReady(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticControllerDesc*)_this)).hcReady; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_hcReady(void* _this, char value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hcReady = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticControllerDesc_get_IsSetForceReady(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticControllerDesc*)_this)).IsSetForceReady; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_IsSetForceReady(void* _this, char value) {
        try { (*((PHOpHapticControllerDesc*)_this)).IsSetForceReady = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticControllerDesc_get_fileindex(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).fileindex; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_fileindex(void* _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).fileindex = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerDesc_addr_lastHpRateF(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->lastHpRateF; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_lastHpRateF(void* _this, void* _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->lastHpRateF) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->lastHpRateF = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticControllerDesc_get_hcCollied(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticControllerDesc*)_this)).hcCollied; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_hcCollied(void* _this, char value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hcCollied = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticControllerDesc_get_constrainCount(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).constrainCount; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_constrainCount(void* _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).constrainCount = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticControllerDesc_get_constrainCountHc(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).constrainCountHc; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_constrainCountHc(void* _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).constrainCountHc = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerDesc_addr_couterPlaneN(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHOpHapticControllerDesc*)_this)->couterPlaneN; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_couterPlaneN(void* _this, void* _ptr) {
        try {
            if (&(((PHOpHapticControllerDesc*)_this)->couterPlaneN) != _ptr) {
                ((PHOpHapticControllerDesc*)_this)->couterPlaneN = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticControllerDesc_get_hcElmDtcRadius(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).hcElmDtcRadius; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_hcElmDtcRadius(void* _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hcElmDtcRadius = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticControllerDesc_get_collectCount(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).collectCount; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_collectCount(void* _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).collectCount = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticControllerDesc_get_collectItrtor(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).collectItrtor; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_collectItrtor(void* _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).collectItrtor = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticControllerDesc_get_hcProxyOn(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpHapticControllerDesc*)_this)).hcProxyOn; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_hcProxyOn(void* _this, char value) {
        try { (*((PHOpHapticControllerDesc*)_this)).hcProxyOn = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticControllerDesc_get_suspObjid(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).suspObjid; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_suspObjid(void* _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).suspObjid = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticControllerDesc_get_proxyRadius(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).proxyRadius; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_proxyRadius(void* _this, float value) {
        try { (*((PHOpHapticControllerDesc*)_this)).proxyRadius = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpHapticControllerDesc_get_surrCnstrs(void* _this) {
        int _val = 0;
        try { _val = (*((PHOpHapticControllerDesc*)_this)).surrCnstrs; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerDesc_set_surrCnstrs(void* _this, int value) {
        try { (*((PHOpHapticControllerDesc*)_this)).surrCnstrs = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpAnimationDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpAnimationDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpAnimationDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHOpAnimationDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpAnimationDesc_get_timestep(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpAnimationDesc*)_this)).timestep; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpAnimationDesc_set_timestep(void* _this, float value) {
        try { (*((PHOpAnimationDesc*)_this)).timestep = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpSpHashColliAgentDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpSpHashColliAgentDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpSpHashColliAgentDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHOpSpHashColliAgentDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpSpHashColliAgentDesc_get_useDirColli(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHOpSpHashColliAgentDesc*)_this)).useDirColli; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentDesc_set_useDirColli(void* _this, char value) {
        try { (*((PHOpSpHashColliAgentDesc*)_this)).useDirColli = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpSpHashColliAgentDesc_get_collisionCstrStiffness(void* _this) {
        float _val = 0;
        try { _val = (*((PHOpSpHashColliAgentDesc*)_this)).collisionCstrStiffness; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentDesc_set_collisionCstrStiffness(void* _this, float value) {
        try { (*((PHOpSpHashColliAgentDesc*)_this)).collisionCstrStiffness = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHRaycastHit() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHRaycastHit(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHRaycastHit(void* v) {
        if (v == NULL) return;
        try { delete (PHRaycastHit*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHRaycastHit_get_solid(void* _this) {
        void* _ptr = NULL;
        try { _ptr = ((PHRaycastHit*)_this)->solid; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHRaycastHit_set_solid(void* _this, void* _ptr) {
        try {
            if (&(((PHRaycastHit*)_this)->solid) != _ptr) {
                ((PHRaycastHit*)_this)->solid = ((PHSolidIf*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHRaycastHit_get_shape(void* _this) {
        void* _ptr = NULL;
        try { _ptr = ((PHRaycastHit*)_this)->shape; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHRaycastHit_set_shape(void* _this, void* _ptr) {
        try {
            if (&(((PHRaycastHit*)_this)->shape) != _ptr) {
                ((PHRaycastHit*)_this)->shape = ((CDShapeIf*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHRaycastHit_addr_point(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHRaycastHit*)_this)->point; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHRaycastHit_set_point(void* _this, void* _ptr) {
        try {
            if (&(((PHRaycastHit*)_this)->point) != _ptr) {
                ((PHRaycastHit*)_this)->point = *((Vec3f*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHRaycastHit_get_distance(void* _this) {
        float _val = 0;
        try { _val = (*((PHRaycastHit*)_this)).distance; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHRaycastHit_set_distance(void* _this, float value) {
        try { (*((PHRaycastHit*)_this)).distance = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHRayDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHRayDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHRayDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHRayDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHRayDesc_addr_origin(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHRayDesc*)_this)->origin; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHRayDesc_set_origin(void* _this, void* _ptr) {
        try {
            if (&(((PHRayDesc*)_this)->origin) != _ptr) {
                ((PHRayDesc*)_this)->origin = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHRayDesc_addr_direction(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHRayDesc*)_this)->direction; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHRayDesc_set_direction(void* _this, void* _ptr) {
        try {
            if (&(((PHRayDesc*)_this)->direction) != _ptr) {
                ((PHRayDesc*)_this)->direction = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSceneState() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSceneState(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSceneState(void* v) {
        if (v == NULL) return;
        try { delete (PHSceneState*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneState_get_timeStep(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneState*)_this)).timeStep; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneState_set_timeStep(void* _this, double value) {
        try { (*((PHSceneState*)_this)).timeStep = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneState_get_haptictimeStep(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneState*)_this)).haptictimeStep; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneState_set_haptictimeStep(void* _this, double value) {
        try { (*((PHSceneState*)_this)).haptictimeStep = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) unsigned int  Spr_PHSceneState_get_count(void* _this) {
        unsigned int _val = 0;
        try { _val = (*((PHSceneState*)_this)).count; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneState_set_count(void* _this, unsigned int value) {
        try { (*((PHSceneState*)_this)).count = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneState_Init(void* _this) {
	try { ((PHSceneState*) _this)->Init(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSceneDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSceneDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSceneDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHSceneDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneDesc_addr_gravity(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &((PHSceneDesc*)_this)->gravity; }
        catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_gravity(void* _this, void* _ptr) {
        try {
            if (&(((PHSceneDesc*)_this)->gravity) != _ptr) {
                ((PHSceneDesc*)_this)->gravity = *((Vec3d*)_ptr);
            }
        }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_airResistanceRateForVelocity(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).airResistanceRateForVelocity; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_airResistanceRateForVelocity(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).airResistanceRateForVelocity = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_airResistanceRateForAngularVelocity(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).airResistanceRateForAngularVelocity; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_airResistanceRateForAngularVelocity(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).airResistanceRateForAngularVelocity = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_contactTolerance(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).contactTolerance; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_contactTolerance(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).contactTolerance = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_impactThreshold(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).impactThreshold; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_impactThreshold(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).impactThreshold = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_frictionThreshold(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).frictionThreshold; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_frictionThreshold(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).frictionThreshold = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_maxDeltaPosition(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxDeltaPosition; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_maxDeltaPosition(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxDeltaPosition = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_maxDeltaOrientation(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxDeltaOrientation; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_maxDeltaOrientation(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxDeltaOrientation = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_maxVelocity(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxVelocity; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_maxVelocity(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxVelocity = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_maxAngularVelocity(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxAngularVelocity; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_maxAngularVelocity(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxAngularVelocity = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_maxForce(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxForce; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_maxForce(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxForce = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneDesc_get_maxMoment(void* _this) {
        double _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).maxMoment; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_maxMoment(void* _this, double value) {
        try { (*((PHSceneDesc*)_this)).maxMoment = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneDesc_get_numIteration(void* _this) {
        int _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).numIteration; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_numIteration(void* _this, int value) {
        try { (*((PHSceneDesc*)_this)).numIteration = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneDesc_get_method(void* _this) {
        int _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).method; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_method(void* _this, int value) {
        try { (*((PHSceneDesc*)_this)).method = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSceneDesc_get_bContactDetectionEnabled(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHSceneDesc*)_this)).bContactDetectionEnabled; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_bContactDetectionEnabled(void* _this, char value) {
        try { (*((PHSceneDesc*)_this)).bContactDetectionEnabled = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSceneDesc_get_bCCDEnabled(void* _this) {
        char _val = 0;
        try { _val = (char) (*((PHSceneDesc*)_this)).bCCDEnabled; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_bCCDEnabled(void* _this, char value) {
        try { (*((PHSceneDesc*)_this)).bCCDEnabled = (value == 0) ? false : true; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneDesc_get_broadPhaseMode(void* _this) {
        int _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).broadPhaseMode; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_broadPhaseMode(void* _this, int value) {
        try { (*((PHSceneDesc*)_this)).broadPhaseMode = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneDesc_get_blendMode(void* _this) {
        int _val = 0;
        try { _val = (*((PHSceneDesc*)_this)).blendMode; }
        catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_set_blendMode(void* _this, int value) {
        try { (*((PHSceneDesc*)_this)).blendMode = value; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneDesc_Init(void* _this) {
	try { ((PHSceneDesc*) _this)->Init(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSdkDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSdkDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSdkDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHSdkDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBoneDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBoneDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBoneDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHBoneDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSkeletonDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSkeletonDesc(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSkeletonDesc(void* v) {
        if (v == NULL) return;
        try { delete (PHSkeletonDesc*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHEngineIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHEngineIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHEngineIf(void* v) {
        if (v == NULL) return;
        try { delete (PHEngineIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHEngineIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHEngineIf*) _this)) {
                (*((PHEngineIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHEngineIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHEngineIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHEngineIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHEngineIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHEngineIf_GetPriority(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHEngineIf*) _this)->GetPriority(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHEngineIf_Step(void* _this) {
	try { ((PHEngineIf*) _this)->Step(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHEngineIf_Enable(void* _this, char on) {
	bool arg01_ = (on == 0) ? false : true;
	try { ((PHEngineIf*) _this)->Enable((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHEngineIf_Enable_1(void* _this) {
	try { ((PHEngineIf*) _this)->Enable(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHEngineIf_IsEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHEngineIf*) _this)->IsEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_PHEngineIf_GetScene(void* _this) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((PHEngineIf*) _this)->GetScene(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHConstraintEngineIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHConstraintEngineIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHConstraintEngineIf(void* v) {
        if (v == NULL) return;
        try { delete (PHConstraintEngineIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintEngineIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHConstraintEngineIf*) _this)) {
                (*((PHConstraintEngineIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintEngineIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHConstraintEngineIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHConstraintEngineIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintEngineIf_GetContactPoints(void* _this) {
	PHConstraintsIf* _ptr = (PHConstraintsIf*) NULL;
	try { _ptr = (PHConstraintsIf*) ((PHConstraintEngineIf*) _this)->GetContactPoints(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_SetVelCorrectionRate(void* _this, double value) {
	try { ((PHConstraintEngineIf*) _this)->SetVelCorrectionRate(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineIf_GetVelCorrectionRate(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetVelCorrectionRate(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_SetPosCorrectionRate(void* _this, double value) {
	try { ((PHConstraintEngineIf*) _this)->SetPosCorrectionRate(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineIf_GetPosCorrectionRate(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetPosCorrectionRate(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_SetContactCorrectionRate(void* _this, double value) {
	try { ((PHConstraintEngineIf*) _this)->SetContactCorrectionRate(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineIf_GetContactCorrectionRate(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetContactCorrectionRate(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_SetBSaveConstraints(void* _this, char value) {
	bool arg01_ = (value == 0) ? false : true;
	try { ((PHConstraintEngineIf*) _this)->SetBSaveConstraints((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_SetUpdateAllSolidState(void* _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHConstraintEngineIf*) _this)->SetUpdateAllSolidState((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_SetUseContactSurface(void* _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHConstraintEngineIf*) _this)->SetUseContactSurface((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_SetShrinkRate(void* _this, double data) {
	try { ((PHConstraintEngineIf*) _this)->SetShrinkRate(data); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineIf_GetShrinkRate(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetShrinkRate(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_SetShrinkRateCorrection(void* _this, double data) {
	try { ((PHConstraintEngineIf*) _this)->SetShrinkRateCorrection(data); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineIf_GetShrinkRateCorrection(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetShrinkRateCorrection(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_SetRegularization(void* _this, double reg) {
	try { ((PHConstraintEngineIf*) _this)->SetRegularization(reg); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHConstraintEngineIf_GetRegularization(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHConstraintEngineIf*) _this)->GetRegularization(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintEngineIf_EnableRenderContact(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHConstraintEngineIf*) _this)->EnableRenderContact((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHGravityEngineIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHGravityEngineIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHGravityEngineIf(void* v) {
        if (v == NULL) return;
        try { delete (PHGravityEngineIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHGravityEngineIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHGravityEngineIf*) _this)) {
                (*((PHGravityEngineIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHGravityEngineIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHGravityEngineIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHGravityEngineIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHGravityEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHGravityEngineIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPenaltyEngineIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPenaltyEngineIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPenaltyEngineIf(void* v) {
        if (v == NULL) return;
        try { delete (PHPenaltyEngineIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPenaltyEngineIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPenaltyEngineIf*) _this)) {
                (*((PHPenaltyEngineIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHPenaltyEngineIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPenaltyEngineIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPenaltyEngineIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHPenaltyEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPenaltyEngineIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKEngineIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKEngineIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKEngineIf(void* v) {
        if (v == NULL) return;
        try { delete (PHIKEngineIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEngineIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKEngineIf*) _this)) {
                (*((PHIKEngineIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_SetMaxVelocity(void* _this, double maxVel) {
	try { ((PHIKEngineIf*) _this)->SetMaxVelocity(maxVel); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEngineIf_GetMaxVelocity(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetMaxVelocity(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_SetMaxAngularVelocity(void* _this, double maxAV) {
	try { ((PHIKEngineIf*) _this)->SetMaxAngularVelocity(maxAV); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEngineIf_GetMaxAngularVelocity(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetMaxAngularVelocity(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_SetMaxActuatorVelocity(void* _this, double maxAV) {
	try { ((PHIKEngineIf*) _this)->SetMaxActuatorVelocity(maxAV); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEngineIf_GetMaxActuatorVelocity(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetMaxActuatorVelocity(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_SetRegularizeParam(void* _this, double epsilon) {
	try { ((PHIKEngineIf*) _this)->SetRegularizeParam(epsilon); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEngineIf_GetRegularizeParam(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetRegularizeParam(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_SetIterCutOffAngVel(void* _this, double epsilon) {
	try { ((PHIKEngineIf*) _this)->SetIterCutOffAngVel(epsilon); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEngineIf_GetIterCutOffAngVel(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetIterCutOffAngVel(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_SetIntpRate(void* _this) {
	try { ((PHIKEngineIf*) _this)->SetIntpRate(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHIKEngineIf_GetIntpRate(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetIntpRate(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_ApplyExactState(void* _this, char reverse) {
	bool arg01_ = (reverse == 0) ? false : true;
	try { ((PHIKEngineIf*) _this)->ApplyExactState((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_ApplyExactState_1(void* _this) {
	try { ((PHIKEngineIf*) _this)->ApplyExactState(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_SetNumIter(void* _this, int numIter) {
	try { ((PHIKEngineIf*) _this)->SetNumIter(numIter); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHIKEngineIf_GetNumIter(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHIKEngineIf*) _this)->GetNumIter(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEngineIf_FK(void* _this) {
	try { ((PHIKEngineIf*) _this)->FK(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEngineIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKEngineIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKEngineIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemEngineIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemEngineIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemEngineIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFemEngineIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemEngineIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemEngineIf*) _this)) {
                (*((PHFemEngineIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemEngineIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemEngineIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemEngineIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemEngineIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemEngineIf_SetTimeStep(void* _this, double dt) {
	try { ((PHFemEngineIf*) _this)->SetTimeStep(dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemEngineIf_GetTimeStep(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemEngineIf*) _this)->GetTimeStep(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemEngineIf_SetVibrationTransfer(void* _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((PHFemEngineIf*) _this)->SetVibrationTransfer((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemEngineIf_SetThermalTransfer(void* _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((PHFemEngineIf*) _this)->SetThermalTransfer((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHFemEngineIf_NMeshNew(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemEngineIf*) _this)->NMeshNew(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemEngineIf_GetMeshNew(void* _this, int i) {
	PHFemMeshNewIf* _ptr = (PHFemMeshNewIf*) NULL;
	try { _ptr = (PHFemMeshNewIf*) ((PHFemEngineIf*) _this)->GetMeshNew(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemEngineIf_AddMeshPair(void* _this, void* m0, void* m1) {
	bool _val = (bool) NULL;
	try { _val = ((PHFemEngineIf*) _this)->AddMeshPair((PHFemMeshNewIf*) m0, (PHFemMeshNewIf*) m1); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemEngineIf_RemoveMeshPair(void* _this, void* m0, void* m1) {
	bool _val = (bool) NULL;
	try { _val = ((PHFemEngineIf*) _this)->RemoveMeshPair((PHFemMeshNewIf*) m0, (PHFemMeshNewIf*) m1); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemEngineIf_ThermalTransfer(void* _this) {
	try { ((PHFemEngineIf*) _this)->ThermalTransfer(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemEngineIf_setheatTransferRatio(void* _this, double setheatTransferRatio) {
	try { ((PHFemEngineIf*) _this)->setheatTransferRatio(setheatTransferRatio); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemEngineIf_FEMSolidMatchRefresh(void* _this) {
	try { ((PHFemEngineIf*) _this)->FEMSolidMatchRefresh(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemEngineIf_InitContacts(void* _this) {
	try { ((PHFemEngineIf*) _this)->InitContacts(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemEngineIf_ClearContactVectors(void* _this) {
	try { ((PHFemEngineIf*) _this)->ClearContactVectors(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHFemEngineIf_NMesh(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemEngineIf*) _this)->NMesh(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemEngineIf_GetMesh(void* _this, int i) {
	PHFemMeshIf* _ptr = (PHFemMeshIf*) NULL;
	try { _ptr = (PHFemMeshIf*) ((PHFemEngineIf*) _this)->GetMesh(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpEngineIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpEngineIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpEngineIf(void* v) {
        if (v == NULL) return;
        try { delete (PHOpEngineIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpEngineIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpEngineIf*) _this)) {
                (*((PHOpEngineIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpEngineIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpEngineIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpEngineIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_SetTimeStep(void* _this, double dt) {
	try { ((PHOpEngineIf*) _this)->SetTimeStep(dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHOpEngineIf_GetTimeStep(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetTimeStep(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_SetGravity(void* _this, char gflag) {
	bool arg01_ = (gflag == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetGravity((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_InitialHapticRenderer(void* _this, int objId) {
	try { ((PHOpEngineIf*) _this)->InitialHapticRenderer(objId); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpEngineIf_GetOpObj(void* _this, int i) {
        PHOpObjDesc* _ptr = (PHOpObjDesc*) NULL;
        try { PHOpObjDesc* _ary = (((PHOpEngineIf*) _this)->GetOpObj(i));
              int _size = 0;
              _ptr = new PHOpObjDesc[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_StepWithBlend(void* _this) {
	try { ((PHOpEngineIf*) _this)->StepWithBlend(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpEngineIf_AddOpObj(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpEngineIf*) _this)->AddOpObj(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_SetHapticSolveEnable(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetHapticSolveEnable((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpEngineIf_IsHapticSolve(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpEngineIf*) _this)->IsHapticSolve(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_SetProxyCorrectionEnable(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetProxyCorrectionEnable((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpEngineIf_IsProxyCorrection(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpEngineIf*) _this)->IsProxyCorrection(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_SetUpdateNormal(void* _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetUpdateNormal((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpEngineIf_IsUpdateNormal(void* _this, int obji) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpEngineIf*) _this)->IsUpdateNormal(obji); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_SetUseHaptic(void* _this, char hapticUsage) {
	bool arg01_ = (hapticUsage == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetUseHaptic((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpEngineIf_GetUseHaptic(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetUseHaptic(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpEngineIf_GetOpObjIf(void* _this, int obji) {
	PHOpObjIf* _ptr = (PHOpObjIf*) NULL;
	try { _ptr = (PHOpObjIf*) ((PHOpEngineIf*) _this)->GetOpObjIf(obji); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHOpEngineIf_GetOpObjNum(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetOpObjNum(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpEngineIf_GetOpAnimator(void* _this) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((PHOpEngineIf*) _this)->GetOpAnimator(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpEngineIf_GetOpHapticController(void* _this) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((PHOpEngineIf*) _this)->GetOpHapticController(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpEngineIf_GetOpHapticRenderer(void* _this) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((PHOpEngineIf*) _this)->GetOpHapticRenderer(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_SetIterationCount(void* _this, int count) {
	try { ((PHOpEngineIf*) _this)->SetIterationCount(count); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpEngineIf_GetIterationCount(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetIterationCount(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_SetAnimationFlag(void* _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHOpEngineIf*) _this)->SetAnimationFlag((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpEngineIf_GetAnimationFlag(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetAnimationFlag(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_SetDrawPtclR(void* _this, float r) {
	try { ((PHOpEngineIf*) _this)->SetDrawPtclR(r); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpEngineIf_GetDrawPtclR(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpEngineIf*) _this)->GetDrawPtclR(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpEngineIf_InitialNoMeshHapticRenderer(void* _this) {
	try { ((PHOpEngineIf*) _this)->InitialNoMeshHapticRenderer(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemMeshIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemMeshIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemMeshIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFemMeshIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemMeshIf*) _this)) {
                (*((PHFemMeshIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemMeshIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemMeshIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemMeshThermoIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemMeshThermoIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemMeshThermoIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFemMeshThermoIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshThermoIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemMeshThermoIf*) _this)) {
                (*((PHFemMeshThermoIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshThermoIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemMeshThermoIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshThermoIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemMeshThermoIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemMeshThermoIf_GetSurfaceVertex(void* _this, int id) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetSurfaceVertex(id); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemMeshThermoIf_NSurfaceVertices(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->NSurfaceVertices(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetVertexTc(void* _this, int id, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->SetVertexTc(id, temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetVertexTc_1(void* _this, int id, double temp, double heatTrans) {
	try { ((PHFemMeshThermoIf*) _this)->SetVertexTc(id, temp, heatTrans); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshThermoIf_GetPose(void* _this, int id) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshThermoIf*) _this)->GetPose(id); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshThermoIf_GetSufVtxPose(void* _this, unsigned int id) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshThermoIf*) _this)->GetSufVtxPose(id); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) unsigned long  Spr_PHFemMeshThermoIf_GetStepCount(void* _this) {
	unsigned long _val = (unsigned long) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetStepCount(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) unsigned long  Spr_PHFemMeshThermoIf_GetStepCountCyc(void* _this) {
	unsigned long _val = (unsigned long) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetStepCountCyc(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoIf_GetVertexTemp(void* _this, unsigned int id) {
	double _val = (double) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetVertexTemp(id); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoIf_GetSufVertexTemp(void* _this, unsigned int id) {
	double _val = (double) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetSufVertexTemp(id); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetVertexTemp(void* _this, unsigned int id, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->SetVertexTemp(id, temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetVerticesTempAll(void* _this, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->SetVerticesTempAll(temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_AddvecFAll(void* _this, unsigned int id, double dqdt) {
	try { ((PHFemMeshThermoIf*) _this)->AddvecFAll(id, dqdt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetvecFAll(void* _this, unsigned int id, double dqdt) {
	try { ((PHFemMeshThermoIf*) _this)->SetvecFAll(id, dqdt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetRhoSpheat(void* _this, double rho, double Cp) {
	try { ((PHFemMeshThermoIf*) _this)->SetRhoSpheat(rho, Cp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) unsigned int  Spr_PHFemMeshThermoIf_GetNFace(void* _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetNFace(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshThermoIf_GetFaceEdgeVtx(void* _this, unsigned int id) {
        vector<Vec3d>* _ptr = (vector<Vec3d>*) NULL;
        try { _ptr = new vector<Vec3d>;
              vector<Vec3d> _vec = (((PHFemMeshThermoIf*) _this)->GetFaceEdgeVtx(id));
              for (int n = 0; n < (int) _vec.size(); n++) {
                  _ptr->push_back(_vec[n]);
              }
        }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshThermoIf_GetFaceEdgeVtx_1(void* _this, unsigned int id, unsigned int vtx) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshThermoIf*) _this)->GetFaceEdgeVtx(id, vtx); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshThermoIf_GetIHbandDrawVtx(void* _this) {
	Vec2d* _ptr = (Vec2d*) NULL;
	try { _ptr = new Vec2d(); (*_ptr) = ((PHFemMeshThermoIf*) _this)->GetIHbandDrawVtx(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_CalcIHdqdt_atleast(void* _this, double r, double R, double dqdtAll, unsigned int num) {
	try { ((PHFemMeshThermoIf*) _this)->CalcIHdqdt_atleast(r, R, dqdtAll, num); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_UpdateIHheatband(void* _this, double xS, double xE, unsigned int heatingMODE) {
	try { ((PHFemMeshThermoIf*) _this)->UpdateIHheatband(xS, xE, heatingMODE); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_UpdateIHheat(void* _this, unsigned int heating) {
	try { ((PHFemMeshThermoIf*) _this)->UpdateIHheat(heating); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_UpdateVecF(void* _this) {
	try { ((PHFemMeshThermoIf*) _this)->UpdateVecF(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_UpdateVecF_frypan(void* _this) {
	try { ((PHFemMeshThermoIf*) _this)->UpdateVecF_frypan(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_DecrMoist(void* _this) {
	try { ((PHFemMeshThermoIf*) _this)->DecrMoist(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_DecrMoist_velo(void* _this, double vel) {
	try { ((PHFemMeshThermoIf*) _this)->DecrMoist_velo(vel); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_DecrMoist_vel(void* _this, double dt) {
	try { ((PHFemMeshThermoIf*) _this)->DecrMoist_vel(dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_InitAllVertexTemp(void* _this) {
	try { ((PHFemMeshThermoIf*) _this)->InitAllVertexTemp(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetInitThermoConductionParam(void* _this, double thConduct, double rho, double specificHeat, double heatTrans) {
	try { ((PHFemMeshThermoIf*) _this)->SetInitThermoConductionParam(thConduct, rho, specificHeat, heatTrans); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetParamAndReCreateMatrix(void* _this, double thConduct0, double roh0, double specificHeat0) {
	try { ((PHFemMeshThermoIf*) _this)->SetParamAndReCreateMatrix(thConduct0, roh0, specificHeat0); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoIf_GetArbitraryPointTemp(void* _this, void* temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetArbitraryPointTemp((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoIf_GetVtxTempInTets(void* _this, void* temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->GetVtxTempInTets((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_InitVecFAlls(void* _this) {
	try { ((PHFemMeshThermoIf*) _this)->InitVecFAlls(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshThermoIf_Get_thConduct(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->Get_thConduct(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemMeshThermoIf_SetConcentricHeatMap(void* _this, void* r, void* temp, void* origin) {
	Vec2d arg03_ = *((Vec2d*) origin);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshThermoIf*) _this)->SetConcentricHeatMap(*((vector<double>*) r), *((vector<double>*) temp), (Vec2d) arg03_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetThermalEmissivityToVerticesAll(void* _this, double thermalEmissivity, double thermalEmissivity_const) {
	try { ((PHFemMeshThermoIf*) _this)->SetThermalEmissivityToVerticesAll(thermalEmissivity, thermalEmissivity_const); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetOuterTemp(void* _this, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->SetOuterTemp(temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetThermalRadiation(void* _this, double ems, double ems_const) {
	try { ((PHFemMeshThermoIf*) _this)->SetThermalRadiation(ems, ems_const); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetGaussCalcParam(void* _this, unsigned int cyc, double epsilon) {
	try { ((PHFemMeshThermoIf*) _this)->SetGaussCalcParam(cyc, epsilon); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_InitTcAll(void* _this, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->InitTcAll(temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_InitToutAll(void* _this, double temp) {
	try { ((PHFemMeshThermoIf*) _this)->InitToutAll(temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetWeekPow(void* _this, double weekPow_) {
	try { ((PHFemMeshThermoIf*) _this)->SetWeekPow(weekPow_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetIHParamWEEK(void* _this, double inr_, double outR_, double weekPow_) {
	try { ((PHFemMeshThermoIf*) _this)->SetIHParamWEEK(inr_, outR_, weekPow_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetHeatTransRatioToAllVertex(void* _this, double heatTransR_) {
	try { ((PHFemMeshThermoIf*) _this)->SetHeatTransRatioToAllVertex(heatTransR_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_AfterSetDesc(void* _this) {
	try { ((PHFemMeshThermoIf*) _this)->AfterSetDesc(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_SetStopTimespan(void* _this, double timespan) {
	try { ((PHFemMeshThermoIf*) _this)->SetStopTimespan(timespan); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_UpdateMatk_RadiantHeatToAir(void* _this) {
	try { ((PHFemMeshThermoIf*) _this)->UpdateMatk_RadiantHeatToAir(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_ActivateVtxbeRadiantHeat(void* _this) {
	try { ((PHFemMeshThermoIf*) _this)->ActivateVtxbeRadiantHeat(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_OutputMatKall(void* _this) {
	try { ((PHFemMeshThermoIf*) _this)->OutputMatKall(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshThermoIf_IfRadiantHeatTrans(void* _this) {
	try { ((PHFemMeshThermoIf*) _this)->IfRadiantHeatTrans(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemMeshNewIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemMeshNewIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemMeshNewIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFemMeshNewIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemMeshNewIf*) _this)) {
                (*((PHFemMeshNewIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshNewIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemMeshNewIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemMeshNewIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshNewIf_SetPHSolid(void* _this, void* s) {
	try { ((PHFemMeshNewIf*) _this)->SetPHSolid((PHSolidIf*) s); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetPHSolid(void* _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHFemMeshNewIf*) _this)->GetPHSolid(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetPHFemVibration(void* _this) {
	PHFemVibrationIf* _ptr = (PHFemVibrationIf*) NULL;
	try { _ptr = (PHFemVibrationIf*) ((PHFemMeshNewIf*) _this)->GetPHFemVibration(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetPHFemThermo(void* _this) {
	PHFemThermoIf* _ptr = (PHFemThermoIf*) NULL;
	try { _ptr = (PHFemThermoIf*) ((PHFemMeshNewIf*) _this)->GetPHFemThermo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetPHFemPorousWOMove(void* _this) {
	PHFemPorousWOMoveIf* _ptr = (PHFemPorousWOMoveIf*) NULL;
	try { _ptr = (PHFemPorousWOMoveIf*) ((PHFemMeshNewIf*) _this)->GetPHFemPorousWOMove(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemMeshNewIf_NVertices(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->NVertices(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemMeshNewIf_NFaces(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->NFaces(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemMeshNewIf_NTets(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->NTets(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshNewIf_SetVertexUpdateFlags(void* _this, char flg) {
	bool arg01_ = (flg == 0) ? false : true;
	try { ((PHFemMeshNewIf*) _this)->SetVertexUpdateFlags((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshNewIf_SetVertexUpateFlag(void* _this, int vid, char flg) {
	bool arg02_ = (flg == 0) ? false : true;
	try { ((PHFemMeshNewIf*) _this)->SetVertexUpateFlag(vid, (bool) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemMeshNewIf_CompTetVolume(void* _this, int tetID, char bDeform) {
	bool arg02_ = (bDeform == 0) ? false : true;
	double _val = (double) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->CompTetVolume(tetID, (bool) arg02_); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemMeshNewIf_AddVertexDisplacementW(void* _this, int vtxId, void* disW) {
	Vec3d arg02_ = *((Vec3d*) disW);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->AddVertexDisplacementW(vtxId, (Vec3d) arg02_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemMeshNewIf_AddVertexDisplacementL(void* _this, int vtxId, void* disL) {
	Vec3d arg02_ = *((Vec3d*) disL);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->AddVertexDisplacementL(vtxId, (Vec3d) arg02_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemMeshNewIf_SetVertexPositionW(void* _this, int vtxId, void* posW) {
	Vec3d arg02_ = *((Vec3d*) posW);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->SetVertexPositionW(vtxId, (Vec3d) arg02_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemMeshNewIf_SetVertexPositionL(void* _this, int vtxId, void* posL) {
	Vec3d arg02_ = *((Vec3d*) posL);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->SetVertexPositionL(vtxId, (Vec3d) arg02_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemMeshNewIf_SetVertexVelocityL(void* _this, int vtxId, void* posL) {
	Vec3d arg02_ = *((Vec3d*) posL);
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->SetVertexVelocityL(vtxId, (Vec3d) arg02_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetVertexVelocityL(void* _this, int vtxId) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshNewIf*) _this)->GetVertexVelocityL(vtxId); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetVertexPositionL(void* _this, int vtxId) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshNewIf*) _this)->GetVertexPositionL(vtxId); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetVertexDisplacementL(void* _this, int vtxId) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshNewIf*) _this)->GetVertexDisplacementL(vtxId); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetVertexInitalPositionL(void* _this, int vtxId) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshNewIf*) _this)->GetVertexInitalPositionL(vtxId); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemMeshNewIf_SetVelocity(void* _this, void* v) {
	Vec3d arg01_ = *((Vec3d*) v);
	try { ((PHFemMeshNewIf*) _this)->SetVelocity((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetTetVertexIds(void* _this, int t) {
	int* _ptr = (int*) NULL;
	try { _ptr = ((PHFemMeshNewIf*) _this)->GetTetVertexIds(t); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetFaceVertexIds(void* _this, int f) {
	int* _ptr = (int*) NULL;
	try { _ptr = ((PHFemMeshNewIf*) _this)->GetFaceVertexIds(f); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemMeshNewIf_GetFaceNormal(void* _this, int f) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemMeshNewIf*) _this)->GetFaceNormal(f); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemMeshNewIf_GetSurfaceVertex(void* _this, int i) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->GetSurfaceVertex(i); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemMeshNewIf_NSurfaceVertices(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->NSurfaceVertices(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemMeshNewIf_NSurfaceFace(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->NSurfaceFace(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemMeshNewIf_CompTetShapeFunctionValue(void* _this, const int& tetId, void* posL, void* value, char bDeform) {
	bool arg04_ = (bDeform == 0) ? false : true;
	bool _val = (bool) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->CompTetShapeFunctionValue(tetId, (const Vec3d&) *((Vec3d*) posL), (Vec4d&) *((Vec4d*) value), (const bool&) arg04_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemMeshNewIf_FindTetFromFace(void* _this, int faceId) {
	int _val = (int) NULL;
	try { _val = ((PHFemMeshNewIf*) _this)->FindTetFromFace(faceId); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemBaseIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemBaseIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemBaseIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFemBaseIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemBaseIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemBaseIf*) _this)) {
                (*((PHFemBaseIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemBaseIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemBaseIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemBaseIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemBaseIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemBaseIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemBaseIf_GetPHFemMesh(void* _this) {
	PHFemMeshNewIf* _ptr = (PHFemMeshNewIf*) NULL;
	try { _ptr = (PHFemMeshNewIf*) ((PHFemBaseIf*) _this)->GetPHFemMesh(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemVibrationIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemVibrationIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemVibrationIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFemVibrationIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemVibrationIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemVibrationIf*) _this)) {
                (*((PHFemVibrationIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemVibrationIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemVibrationIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemVibrationIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemVibrationIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_SetTimeStep(void* _this, double dt) {
	try { ((PHFemVibrationIf*) _this)->SetTimeStep(dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationIf_GetTimeStep(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetTimeStep(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_SetYoungModulus(void* _this, double value) {
	try { ((PHFemVibrationIf*) _this)->SetYoungModulus(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationIf_GetYoungModulus(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetYoungModulus(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_SetPoissonsRatio(void* _this, double value) {
	try { ((PHFemVibrationIf*) _this)->SetPoissonsRatio(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationIf_GetPoissonsRatio(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetPoissonsRatio(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_SetDensity(void* _this, double value) {
	try { ((PHFemVibrationIf*) _this)->SetDensity(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationIf_GetDensity(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetDensity(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_SetAlpha(void* _this, double value) {
	try { ((PHFemVibrationIf*) _this)->SetAlpha(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationIf_GetAlpha(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetAlpha(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_SetBeta(void* _this, double value) {
	try { ((PHFemVibrationIf*) _this)->SetBeta(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemVibrationIf_GetBeta(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetBeta(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_SetBoundary(void* _this, int vtxIds) {
	try { ((PHFemVibrationIf*) _this)->SetBoundary(vtxIds); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_ClearBoundary(void* _this) {
	try { ((PHFemVibrationIf*) _this)->ClearBoundary(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemVibrationIf_GetBoundary(void* _this) {
        vector<int>* _ptr = (vector<int>*) NULL;
        try { _ptr = new vector<int>;
              vector<int> _vec = (((PHFemVibrationIf*) _this)->GetBoundary());
              for (int n = 0; n < (int) _vec.size(); n++) {
                  _ptr->push_back(_vec[n]);
              }
        }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_SetAnalysisMode(void* _this, int mode) {
	PHFemVibrationDesc::ANALYSIS_MODE arg01_ = ((PHFemVibrationDesc::ANALYSIS_MODE) mode);
	try { ((PHFemVibrationIf*) _this)->SetAnalysisMode((PHFemVibrationDesc::ANALYSIS_MODE) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_SetIntegrationMode(void* _this, int mode) {
	PHFemVibrationDesc::INTEGRATION_MODE arg01_ = ((PHFemVibrationDesc::INTEGRATION_MODE) mode);
	try { ((PHFemVibrationIf*) _this)->SetIntegrationMode((PHFemVibrationDesc::INTEGRATION_MODE) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHFemVibrationIf_AddBoundaryCondition(void* _this, int vtxId, void* dof) {
	Vec3i arg02_ = *((Vec3i*) dof);
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->AddBoundaryCondition(vtxId, (Vec3i) arg02_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_DeleteBoundaryCondition(void* _this) {
	try { ((PHFemVibrationIf*) _this)->DeleteBoundaryCondition(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHFemVibrationIf_FindNeighborTetrahedron(void* _this, void* posW, int& tetId, void* cpW, char bDeform) {
	Vec3d arg01_ = *((Vec3d*) posW);
	bool arg04_ = (bDeform == 0) ? false : true;
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->FindNeighborTetrahedron((Vec3d) arg01_, tetId, (Vec3d&) *((Vec3d*) cpW), (bool) arg04_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemVibrationIf_SetDamping(void* _this, int tetId, void* posW, double damp_ratio) {
	Vec3d arg02_ = *((Vec3d*) posW);
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->SetDamping(tetId, (Vec3d) arg02_, damp_ratio); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemVibrationIf_AddForce(void* _this, int tetId, void* posW, void* fW) {
	Vec3d arg02_ = *((Vec3d*) posW);
	Vec3d arg03_ = *((Vec3d*) fW);
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->AddForce(tetId, (Vec3d) arg02_, (Vec3d) arg03_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemVibrationIf_GetDisplacement(void* _this, int tetId, void* posW, void* disp, char bDeform) {
	Vec3d arg02_ = *((Vec3d*) posW);
	bool arg04_ = (bDeform == 0) ? false : true;
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetDisplacement(tetId, (Vec3d) arg02_, (Vec3d&) *((Vec3d*) disp), (bool) arg04_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemVibrationIf_GetVelocity(void* _this, int tetId, void* posW, void* vel, char bDeform) {
	Vec3d arg02_ = *((Vec3d*) posW);
	bool arg04_ = (bDeform == 0) ? false : true;
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetVelocity(tetId, (Vec3d) arg02_, (Vec3d&) *((Vec3d*) vel), (bool) arg04_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemVibrationIf_GetPosition(void* _this, int tetId, void* posW, void* pos, char bDeform) {
	Vec3d arg02_ = *((Vec3d*) posW);
	bool arg04_ = (bDeform == 0) ? false : true;
	bool _val = (bool) NULL;
	try { _val = ((PHFemVibrationIf*) _this)->GetPosition(tetId, (Vec3d) arg02_, (Vec3d&) *((Vec3d*) pos), (bool) arg04_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_SetbRecomp(void* _this) {
	try { ((PHFemVibrationIf*) _this)->SetbRecomp(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemVibrationIf_Init(void* _this) {
	try { ((PHFemVibrationIf*) _this)->Init(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemThermoIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemThermoIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemThermoIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFemThermoIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemThermoIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemThermoIf*) _this)) {
                (*((PHFemThermoIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemThermoIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemThermoIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemThermoIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemThermoIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemThermoIf_GetSurfaceVertex(void* _this, int id) {
	int _val = (int) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetSurfaceVertex(id); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemThermoIf_NSurfaceVertices(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHFemThermoIf*) _this)->NSurfaceVertices(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetVertexTc(void* _this, int id, double temp) {
	try { ((PHFemThermoIf*) _this)->SetVertexTc(id, temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetVertexTc_1(void* _this, int id, double temp, double heatTrans) {
	try { ((PHFemThermoIf*) _this)->SetVertexTc(id, temp, heatTrans); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemThermoIf_GetPose(void* _this, int id) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemThermoIf*) _this)->GetPose(id); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemThermoIf_GetSufVtxPose(void* _this, unsigned int id) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemThermoIf*) _this)->GetSufVtxPose(id); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) unsigned long  Spr_PHFemThermoIf_GetStepCount(void* _this) {
	unsigned long _val = (unsigned long) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetStepCount(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) unsigned long  Spr_PHFemThermoIf_GetStepCountCyc(void* _this) {
	unsigned long _val = (unsigned long) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetStepCountCyc(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoIf_GetVertexTemp(void* _this, unsigned int id) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetVertexTemp(id); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoIf_GetSufVertexTemp(void* _this, unsigned int id) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetSufVertexTemp(id); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetVertexTemp(void* _this, unsigned int id, double temp) {
	try { ((PHFemThermoIf*) _this)->SetVertexTemp(id, temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetVerticesTempAll(void* _this, double temp) {
	try { ((PHFemThermoIf*) _this)->SetVerticesTempAll(temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_AddvecFAll(void* _this, unsigned int id, double dqdt) {
	try { ((PHFemThermoIf*) _this)->AddvecFAll(id, dqdt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetvecFAll(void* _this, unsigned int id, double dqdt) {
	try { ((PHFemThermoIf*) _this)->SetvecFAll(id, dqdt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetRhoSpheat(void* _this, double rho, double Cp) {
	try { ((PHFemThermoIf*) _this)->SetRhoSpheat(rho, Cp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemThermoIf_GetIHbandDrawVtx(void* _this) {
	Vec2d* _ptr = (Vec2d*) NULL;
	try { _ptr = new Vec2d(); (*_ptr) = ((PHFemThermoIf*) _this)->GetIHbandDrawVtx(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_CalcIHdqdt_atleast(void* _this, double r, double R, double dqdtAll, unsigned int num) {
	try { ((PHFemThermoIf*) _this)->CalcIHdqdt_atleast(r, R, dqdtAll, num); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_UpdateIHheatband(void* _this, double xS, double xE, unsigned int heatingMODE) {
	try { ((PHFemThermoIf*) _this)->UpdateIHheatband(xS, xE, heatingMODE); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_UpdateIHheat(void* _this, unsigned int heating) {
	try { ((PHFemThermoIf*) _this)->UpdateIHheat(heating); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_UpdateVecF(void* _this) {
	try { ((PHFemThermoIf*) _this)->UpdateVecF(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_UpdateVecF_frypan(void* _this) {
	try { ((PHFemThermoIf*) _this)->UpdateVecF_frypan(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_DecrMoist(void* _this) {
	try { ((PHFemThermoIf*) _this)->DecrMoist(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_DecrMoist_velo(void* _this, double vel) {
	try { ((PHFemThermoIf*) _this)->DecrMoist_velo(vel); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_DecrMoist_vel(void* _this, double dt) {
	try { ((PHFemThermoIf*) _this)->DecrMoist_vel(dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_InitAllVertexTemp(void* _this) {
	try { ((PHFemThermoIf*) _this)->InitAllVertexTemp(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetInitThermoConductionParam(void* _this, double thConduct, double rho, double specificHeat, double heatTrans) {
	try { ((PHFemThermoIf*) _this)->SetInitThermoConductionParam(thConduct, rho, specificHeat, heatTrans); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetParamAndReCreateMatrix(void* _this, double thConduct0, double roh0, double specificHeat0) {
	try { ((PHFemThermoIf*) _this)->SetParamAndReCreateMatrix(thConduct0, roh0, specificHeat0); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoIf_GetArbitraryPointTemp(void* _this, void* temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetArbitraryPointTemp((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoIf_GetVtxTempInTets(void* _this, void* temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetVtxTempInTets((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_InitVecFAlls(void* _this) {
	try { ((PHFemThermoIf*) _this)->InitVecFAlls(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoIf_Get_thConduct(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->Get_thConduct(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) char  Spr_PHFemThermoIf_SetConcentricHeatMap(void* _this, void* r, void* temp, void* origin) {
	Vec2d arg03_ = *((Vec2d*) origin);
	bool _val = (bool) NULL;
	try { _val = ((PHFemThermoIf*) _this)->SetConcentricHeatMap(*((vector<double>*) r), *((vector<double>*) temp), (Vec2d) arg03_); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetThermalEmissivityToVerticesAll(void* _this, double thermalEmissivity, double thermalEmissivity_const) {
	try { ((PHFemThermoIf*) _this)->SetThermalEmissivityToVerticesAll(thermalEmissivity, thermalEmissivity_const); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetOuterTemp(void* _this, double temp) {
	try { ((PHFemThermoIf*) _this)->SetOuterTemp(temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetThermalRadiation(void* _this, double ems, double ems_const) {
	try { ((PHFemThermoIf*) _this)->SetThermalRadiation(ems, ems_const); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetGaussCalcParam(void* _this, unsigned int cyc, double epsilon) {
	try { ((PHFemThermoIf*) _this)->SetGaussCalcParam(cyc, epsilon); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_InitTcAll(void* _this, double temp) {
	try { ((PHFemThermoIf*) _this)->InitTcAll(temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_InitToutAll(void* _this, double temp) {
	try { ((PHFemThermoIf*) _this)->InitToutAll(temp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetWeekPow(void* _this, double weekPow_) {
	try { ((PHFemThermoIf*) _this)->SetWeekPow(weekPow_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetIHParamWEEK(void* _this, double inr_, double outR_, double weekPow_) {
	try { ((PHFemThermoIf*) _this)->SetIHParamWEEK(inr_, outR_, weekPow_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetHeatTransRatioToAllVertex(void* _this, double heatTransR_) {
	try { ((PHFemThermoIf*) _this)->SetHeatTransRatioToAllVertex(heatTransR_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_AfterSetDesc(void* _this) {
	try { ((PHFemThermoIf*) _this)->AfterSetDesc(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetStopTimespan(void* _this, double timespan) {
	try { ((PHFemThermoIf*) _this)->SetStopTimespan(timespan); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_UpdateMatk_RadiantHeatToAir(void* _this) {
	try { ((PHFemThermoIf*) _this)->UpdateMatk_RadiantHeatToAir(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_ReCreateMatrix(void* _this, double thConduct0) {
	try { ((PHFemThermoIf*) _this)->ReCreateMatrix(thConduct0); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_ActivateVtxbeRadiantHeat(void* _this) {
	try { ((PHFemThermoIf*) _this)->ActivateVtxbeRadiantHeat(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_OutputMatKall(void* _this) {
	try { ((PHFemThermoIf*) _this)->OutputMatKall(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_IfRadiantHeatTrans(void* _this) {
	try { ((PHFemThermoIf*) _this)->IfRadiantHeatTrans(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_IfRadiantHeatTransSteak(void* _this) {
	try { ((PHFemThermoIf*) _this)->IfRadiantHeatTransSteak(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHFemThermoIf_calcGvtx(void* _this, void* fwfood, int pv, unsigned int texture_mode) {
	string arg01_("");
    int lenMB1 = static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(fwfood), 0));
	if (lenMB1 > 0) {
	    std::string str1(lenMB1, 0); char* addr1 = &str1[0];
	    static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(fwfood), 0));
	    arg01_ = (string) addr1;
	}
	float _val = (float) NULL;
	try { _val = ((PHFemThermoIf*) _this)->calcGvtx((string) arg01_, pv, texture_mode); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetTimeStep(void* _this, double dt) {
	try { ((PHFemThermoIf*) _this)->SetTimeStep(dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemThermoIf_GetVertexNormal(void* _this, unsigned int vtxid) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemThermoIf*) _this)->GetVertexNormal(vtxid); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetVertexHeatTransRatio(void* _this, unsigned int vtxid, double heattransRatio) {
	try { ((PHFemThermoIf*) _this)->SetVertexHeatTransRatio(vtxid, heattransRatio); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetVertexBeRadiantHeat(void* _this, unsigned int vtxid, char flag) {
	bool arg02_ = (flag == 0) ? false : true;
	try { ((PHFemThermoIf*) _this)->SetVertexBeRadiantHeat(vtxid, (bool) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoIf_GetVertexArea(void* _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetVertexArea(vtxid); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetVertexToofar(void* _this, unsigned int vtxid, char tooFar) {
	bool arg02_ = (tooFar == 0) ? false : true;
	try { ((PHFemThermoIf*) _this)->SetVertexToofar(vtxid, (bool) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHFemThermoIf_GetVertexToofar(void* _this, unsigned int vtxid) {
	bool _val = (bool) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetVertexToofar(vtxid); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetVertexBeCondVtxs(void* _this, unsigned int vtxid, char becondVtxs) {
	bool arg02_ = (becondVtxs == 0) ? false : true;
	try { ((PHFemThermoIf*) _this)->SetVertexBeCondVtxs(vtxid, (bool) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_CreateVecFAll(void* _this) {
	try { ((PHFemThermoIf*) _this)->CreateVecFAll(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_CalcFaceNormalAll(void* _this) {
	try { ((PHFemThermoIf*) _this)->CalcFaceNormalAll(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_CalcVertexNormalAll(void* _this) {
	try { ((PHFemThermoIf*) _this)->CalcVertexNormalAll(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_InitFaceNormalAll(void* _this) {
	try { ((PHFemThermoIf*) _this)->InitFaceNormalAll(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_InitVertexNormalAll(void* _this) {
	try { ((PHFemThermoIf*) _this)->InitVertexNormalAll(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_RevVertexNormalAll(void* _this) {
	try { ((PHFemThermoIf*) _this)->RevVertexNormalAll(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetWeekPowFULL(void* _this, double weekPow_full) {
	try { ((PHFemThermoIf*) _this)->SetWeekPowFULL(weekPow_full); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetweekPow_FULL(void* _this, double setweekPow_FULL) {
	try { ((PHFemThermoIf*) _this)->SetweekPow_FULL(setweekPow_FULL); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_setIhRatio(void* _this, double a) {
	try { ((PHFemThermoIf*) _this)->setIhRatio(a); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_Setems(void* _this, double setems) {
	try { ((PHFemThermoIf*) _this)->Setems(setems); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_Setems_steak(void* _this, double setems_steak) {
	try { ((PHFemThermoIf*) _this)->Setems_steak(setems_steak); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetthConduct(void* _this, double thConduct) {
	try { ((PHFemThermoIf*) _this)->SetthConduct(thConduct); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoIf_GetWeekPowFULL(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetWeekPowFULL(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemThermoIf_GetVertexPose(void* _this, unsigned int vtxid) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHFemThermoIf*) _this)->GetVertexPose(vtxid); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_OutTetVolumeAll(void* _this) {
	try { ((PHFemThermoIf*) _this)->OutTetVolumeAll(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHFemThermoIf_GetTetsV(void* _this, unsigned int tetid, unsigned int vtxid) {
	int _val = (int) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetTetsV(tetid, vtxid); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_VecFNegativeCheck(void* _this) {
	try { ((PHFemThermoIf*) _this)->VecFNegativeCheck(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoIf_GetVecFElem(void* _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetVecFElem(vtxid); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHFemThermoIf_GetTetVNums(void* _this, unsigned int id, unsigned int num) {
	int _val = (int) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetTetVNums(id, num); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemThermoIf_GetInitialTemp(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemThermoIf*) _this)->GetInitialTemp(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_UpdateVertexTempAll(void* _this) {
	try { ((PHFemThermoIf*) _this)->UpdateVertexTempAll(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemThermoIf_SetThermoCameraScale(void* _this, double minTemp, double maxTemp) {
	try { ((PHFemThermoIf*) _this)->SetThermoCameraScale(minTemp, maxTemp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFemPorousWOMoveIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFemPorousWOMoveIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFemPorousWOMoveIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFemPorousWOMoveIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemPorousWOMoveIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFemPorousWOMoveIf*) _this)) {
                (*((PHFemPorousWOMoveIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemPorousWOMoveIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFemPorousWOMoveIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFemPorousWOMoveIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFemPorousWOMoveIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveIf_SetTimeStep(void* _this, double dt) {
	try { ((PHFemPorousWOMoveIf*) _this)->SetTimeStep(dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveIf_GetTimeStep(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetTimeStep(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveIf_UpdateVertexRhoWAll(void* _this) {
	try { ((PHFemPorousWOMoveIf*) _this)->UpdateVertexRhoWAll(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveIf_UpdateVertexRhoOAll(void* _this) {
	try { ((PHFemPorousWOMoveIf*) _this)->UpdateVertexRhoOAll(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveIf_SetVertexMw(void* _this, unsigned int vtxid, double mw) {
	try { ((PHFemPorousWOMoveIf*) _this)->SetVertexMw(vtxid, mw); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveIf_SetVertexMo(void* _this, unsigned int vtxid, double mo) {
	try { ((PHFemPorousWOMoveIf*) _this)->SetVertexMo(vtxid, mo); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveIf_GetVertexMw(void* _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVertexMw(vtxid); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveIf_GetVertexMo(void* _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVertexMo(vtxid); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveIf_GetVtxWaterInTets(void* _this, void* temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVtxWaterInTets((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveIf_GetVtxOilInTets(void* _this, void* temppos) {
	Vec3d arg01_ = *((Vec3d*) temppos);
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVtxOilInTets((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveIf_GetVertexRhoW(void* _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVertexRhoW(vtxid); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveIf_GetVertexRhoO(void* _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVertexRhoO(vtxid); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) float  Spr_PHFemPorousWOMoveIf_calcGvtx(void* _this, void* fwfood, int pv, unsigned int texture_mode) {
	string arg01_("");
    int lenMB1 = static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(fwfood), 0));
	if (lenMB1 > 0) {
	    std::string str1(lenMB1, 0); char* addr1 = &str1[0];
	    static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(fwfood), 0));
	    arg01_ = (string) addr1;
	}
	float _val = (float) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->calcGvtx((string) arg01_, pv, texture_mode); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHFemPorousWOMoveIf_setGravity(void* _this, void* g) {
	Vec3d arg01_ = *((Vec3d*) g);
	try { ((PHFemPorousWOMoveIf*) _this)->setGravity((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveIf_decideWetValue(void* _this, unsigned int faceid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->decideWetValue(faceid); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHFemPorousWOMoveIf_GetVtxSaturation(void* _this, unsigned int vtxid) {
	double _val = (double) NULL;
	try { _val = ((PHFemPorousWOMoveIf*) _this)->GetVtxSaturation(vtxid); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFrameIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFrameIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFrameIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFrameIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFrameIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFrameIf*) _this)) {
                (*((PHFrameIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFrameIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFrameIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFrameIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFrameIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFrameIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFrameIf_GetPose(void* _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHFrameIf*) _this)->GetPose(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHFrameIf_SetPose(void* _this, void* p) {
	Posed arg01_ = *((Posed*) p);
	try { ((PHFrameIf*) _this)->SetPose((Posed) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFrameIf_GetShape(void* _this) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((PHFrameIf*) _this)->GetShape(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBodyIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBodyIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBodyIf(void* v) {
        if (v == NULL) return;
        try { delete (PHBodyIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBodyIf*) _this)) {
                (*((PHBodyIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHBodyIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBodyIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBodyIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_GetPose(void* _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHBodyIf*) _this)->GetPose(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_GetVelocity(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBodyIf*) _this)->GetVelocity(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_GetAngularVelocity(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBodyIf*) _this)->GetAngularVelocity(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_GetCenterOfMass(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBodyIf*) _this)->GetCenterOfMass(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_GetFramePosition(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBodyIf*) _this)->GetFramePosition(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_GetCenterPosition(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBodyIf*) _this)->GetCenterPosition(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PHBodyIf_IsDynamical(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBodyIf*) _this)->IsDynamical(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHBodyIf_IsFrozen(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBodyIf*) _this)->IsFrozen(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHBodyIf_AddShape(void* _this, void* shape) {
	try { ((PHBodyIf*) _this)->AddShape((CDShapeIf*) shape); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBodyIf_AddShapes(void* _this, void* shBegin, void* shEnd) {
	try { ((PHBodyIf*) _this)->AddShapes((CDShapeIf**) shBegin, (CDShapeIf**) shEnd); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBodyIf_RemoveShape(void* _this, int index) {
	try { ((PHBodyIf*) _this)->RemoveShape(index); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBodyIf_RemoveShapes(void* _this, int idxBegin, int idxEnd) {
	try { ((PHBodyIf*) _this)->RemoveShapes(idxBegin, idxEnd); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBodyIf_RemoveShape_1(void* _this, void* shape) {
	try { ((PHBodyIf*) _this)->RemoveShape((CDShapeIf*) shape); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHBodyIf_NShape(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHBodyIf*) _this)->NShape(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_GetShape(void* _this, int index) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((PHBodyIf*) _this)->GetShape(index); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBodyIf_GetShapePose(void* _this, int index) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHBodyIf*) _this)->GetShapePose(index); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBodyIf_SetShapePose(void* _this, int index, void* pose) {
	try { ((PHBodyIf*) _this)->SetShapePose(index, (const Posed&) *((Posed*) pose)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBodyIf_ClearShape(void* _this) {
	try { ((PHBodyIf*) _this)->ClearShape(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBodyIf_GetBBox(void* _this, void* bbmin, void* bbmax, char world) {
	bool arg03_ = (world == 0) ? false : true;
	try { ((PHBodyIf*) _this)->GetBBox((Vec3d&) *((Vec3d*) bbmin), (Vec3d&) *((Vec3d*) bbmax), (bool) arg03_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHBodyIf_InvalidateBbox(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBodyIf*) _this)->InvalidateBbox(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSolidIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSolidIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSolidIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSolidIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSolidIf*) _this)) {
                (*((PHSolidIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSolidIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSolidIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_AddForce(void* _this, void* f) {
	Vec3d arg01_ = *((Vec3d*) f);
	try { ((PHSolidIf*) _this)->AddForce((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_AddTorque(void* _this, void* t) {
	Vec3d arg01_ = *((Vec3d*) t);
	try { ((PHSolidIf*) _this)->AddTorque((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_AddForce_1(void* _this, void* f, void* r) {
	Vec3d arg01_ = *((Vec3d*) f);
	Vec3d arg02_ = *((Vec3d*) r);
	try { ((PHSolidIf*) _this)->AddForce((Vec3d) arg01_, (Vec3d) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSolidIf_GetMass(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSolidIf*) _this)->GetMass(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHSolidIf_GetMassInv(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSolidIf*) _this)->GetMassInv(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetMass(void* _this, double m) {
	try { ((PHSolidIf*) _this)->SetMass(m); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetCenterOfMass(void* _this, void* center) {
	try { ((PHSolidIf*) _this)->SetCenterOfMass((const Vec3d&) *((Vec3d*) center)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_GetInertia(void* _this) {
	Matrix3d* _ptr = (Matrix3d*) NULL;
	try { _ptr = new Matrix3d(); (*_ptr) = ((PHSolidIf*) _this)->GetInertia(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_GetInertiaInv(void* _this) {
	Matrix3d* _ptr = (Matrix3d*) NULL;
	try { _ptr = new Matrix3d(); (*_ptr) = ((PHSolidIf*) _this)->GetInertiaInv(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetInertia(void* _this, void* I) {
	try { ((PHSolidIf*) _this)->SetInertia((const Matrix3d&) *((Matrix3d*) I)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_CompInertia(void* _this) {
	try { ((PHSolidIf*) _this)->CompInertia(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetFramePosition(void* _this, void* p) {
	try { ((PHSolidIf*) _this)->SetFramePosition((const Vec3d&) *((Vec3d*) p)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetCenterPosition(void* _this, void* p) {
	try { ((PHSolidIf*) _this)->SetCenterPosition((const Vec3d&) *((Vec3d*) p)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_GetDeltaPosition(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidIf*) _this)->GetDeltaPosition(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_GetDeltaPosition_1(void* _this, void* p) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidIf*) _this)->GetDeltaPosition((const Vec3d&) *((Vec3d*) p)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_GetOrientation(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHSolidIf*) _this)->GetOrientation(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetOrientation(void* _this, void* q) {
	try { ((PHSolidIf*) _this)->SetOrientation((const Quaterniond&) *((Quaterniond*) q)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetPose(void* _this, void* p) {
	try { ((PHSolidIf*) _this)->SetPose((const Posed&) *((Posed*) p)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetVelocity(void* _this, void* v) {
	try { ((PHSolidIf*) _this)->SetVelocity((const Vec3d&) *((Vec3d*) v)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetAngularVelocity(void* _this, void* av) {
	try { ((PHSolidIf*) _this)->SetAngularVelocity((const Vec3d&) *((Vec3d*) av)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_GetForce(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidIf*) _this)->GetForce(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_GetTorque(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidIf*) _this)->GetTorque(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetGravity(void* _this, char bOn) {
	bool arg01_ = (bOn == 0) ? false : true;
	try { ((PHSolidIf*) _this)->SetGravity((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetDynamical(void* _this, char bOn) {
	bool arg01_ = (bOn == 0) ? false : true;
	try { ((PHSolidIf*) _this)->SetDynamical((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSolidIf_IsDynamical(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHSolidIf*) _this)->IsDynamical(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidIf_SetStationary(void* _this, char bOn) {
	bool arg01_ = (bOn == 0) ? false : true;
	try { ((PHSolidIf*) _this)->SetStationary((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSolidIf_IsStationary(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHSolidIf*) _this)->IsStationary(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidIf_GetTreeNode(void* _this) {
	PHTreeNodeIf* _ptr = (PHTreeNodeIf*) NULL;
	try { _ptr = (PHTreeNodeIf*) ((PHSolidIf*) _this)->GetTreeNode(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHShapePairForLCPIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHShapePairForLCPIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHShapePairForLCPIf(void* v) {
        if (v == NULL) return;
        try { delete (PHShapePairForLCPIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForLCPIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHShapePairForLCPIf*) _this)) {
                (*((PHShapePairForLCPIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHShapePairForLCPIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForLCPIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHShapePairForLCPIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForLCPIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHShapePairForLCPIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHShapePairForLCPIf_NSectionVertexes(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHShapePairForLCPIf*) _this)->NSectionVertexes(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForLCPIf_GetSectionVertex(void* _this, int i) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHShapePairForLCPIf*) _this)->GetSectionVertex(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) double  Spr_PHShapePairForLCPIf_GetContactDimension(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHShapePairForLCPIf*) _this)->GetContactDimension(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForLCPIf_GetNormalVector(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHShapePairForLCPIf*) _this)->GetNormalVector(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHShapePairForLCPIf_GetClosestPoints(void* _this, void* pa, void* pb) {
	try { ((PHShapePairForLCPIf*) _this)->GetClosestPoints((Vec3d&) *((Vec3d*) pa), (Vec3d&) *((Vec3d*) pb)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForLCPIf_GetShape(void* _this, int i) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((PHShapePairForLCPIf*) _this)->GetShape(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSolidPairIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSolidPairIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSolidPairIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSolidPairIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSolidPairIf*) _this)) {
                (*((PHSolidPairIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSolidPairIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSolidPairIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairIf_GetSolid(void* _this, int i) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHSolidPairIf*) _this)->GetSolid(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSolidPairIf_NListener(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSolidPairIf*) _this)->NListener(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairIf_GetListener(void* _this, int i) {
	PHCollisionListener* _ptr = (PHCollisionListener*) NULL;
	try { _ptr = (PHCollisionListener*) ((PHSolidPairIf*) _this)->GetListener(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairIf_RemoveListener(void* _this, int i) {
	try { ((PHSolidPairIf*) _this)->RemoveListener(i); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairIf_AddListener(void* _this, void* l, int pos) {
	try { ((PHSolidPairIf*) _this)->AddListener((PHCollisionListener*) l, pos); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairIf_AddListener_1(void* _this, void* l) {
	try { ((PHSolidPairIf*) _this)->AddListener((PHCollisionListener*) l); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSolidPairForLCPIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSolidPairForLCPIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSolidPairForLCPIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSolidPairForLCPIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForLCPIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSolidPairForLCPIf*) _this)) {
                (*((PHSolidPairForLCPIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairForLCPIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForLCPIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSolidPairForLCPIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForLCPIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSolidPairForLCPIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PHSolidPairForLCPIf_IsContactEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHSolidPairForLCPIf*) _this)->IsContactEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairForLCPIf_EnableContact(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHSolidPairForLCPIf*) _this)->EnableContact((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHSolidPairForLCPIf_GetContactState(void* _this, int i, int j) {
	int _val = (int) NULL;
	try { _val = ((PHSolidPairForLCPIf*) _this)->GetContactState(i, j); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForLCPIf_GetCommonPoint(void* _this, int i, int j) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidPairForLCPIf*) _this)->GetCommonPoint(i, j); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) unsigned int  Spr_PHSolidPairForLCPIf_GetLastContactCount(void* _this, int i, int j) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((PHSolidPairForLCPIf*) _this)->GetLastContactCount(i, j); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHSolidPairForLCPIf_GetContactDepth(void* _this, int i, int j) {
	double _val = (double) NULL;
	try { _val = ((PHSolidPairForLCPIf*) _this)->GetContactDepth(i, j); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForLCPIf_GetShapePair(void* _this, int i, int j) {
	PHShapePairForLCPIf* _ptr = (PHShapePairForLCPIf*) NULL;
	try { _ptr = (PHShapePairForLCPIf*) ((PHSolidPairForLCPIf*) _this)->GetShapePair(i, j); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHapticPointerIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHapticPointerIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHapticPointerIf(void* v) {
        if (v == NULL) return;
        try { delete (PHHapticPointerIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticPointerIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHapticPointerIf*) _this)) {
                (*((PHHapticPointerIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticPointerIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHapticPointerIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticPointerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHapticPointerIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetHapticRenderMode(void* _this, int m) {
	PHHapticPointerDesc::HapticRenderMode arg01_ = ((PHHapticPointerDesc::HapticRenderMode) m);
	try { ((PHHapticPointerIf*) _this)->SetHapticRenderMode((PHHapticPointerDesc::HapticRenderMode) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticPointerIf_GetHapticRenderMode(void* _this) {
	PHHapticPointerDesc::HapticRenderMode _val = (PHHapticPointerDesc::HapticRenderMode) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetHapticRenderMode(); }
	catch (const std::exception& e) {  }
	return (int) _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_EnableRotation(void* _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableRotation((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHHapticPointerIf_IsRotation(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsRotation(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_EnableForce(void* _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableForce((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHHapticPointerIf_IsForce(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsForce(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_EnableFriction(void* _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableFriction((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHHapticPointerIf_IsFriction(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsFriction(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_EnableTimeVaryFriction(void* _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableTimeVaryFriction((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHHapticPointerIf_IsTimeVaryFriction(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsTimeVaryFriction(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_EnableVibration(void* _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableVibration((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHHapticPointerIf_IsVibration(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsVibration(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_EnableMultiPoints(void* _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableMultiPoints((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHHapticPointerIf_IsMultiPoints(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsMultiPoints(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_EnableMultiProxy(void* _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableMultiProxy((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHHapticPointerIf_IsMultiProxy(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsMultiProxy(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_EnableSimulation(void* _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHHapticPointerIf*) _this)->EnableSimulation((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHHapticPointerIf_IsSimulation(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->IsSimulation(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetFrictionSpring(void* _this, float s) {
	try { ((PHHapticPointerIf*) _this)->SetFrictionSpring(s); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHHapticPointerIf_GetFrictionSpring(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetFrictionSpring(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetFrictionDamper(void* _this, float s) {
	try { ((PHHapticPointerIf*) _this)->SetFrictionDamper(s); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHHapticPointerIf_GetFrictionDamper(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetFrictionDamper(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetReflexSpring(void* _this, float s) {
	try { ((PHHapticPointerIf*) _this)->SetReflexSpring(s); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHHapticPointerIf_GetReflexSpring(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetReflexSpring(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetReflexDamper(void* _this, float d) {
	try { ((PHHapticPointerIf*) _this)->SetReflexDamper(d); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHHapticPointerIf_GetReflexDamper(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetReflexDamper(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetRotationReflexSpring(void* _this, float s) {
	try { ((PHHapticPointerIf*) _this)->SetRotationReflexSpring(s); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHHapticPointerIf_GetRotationReflexSpring(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetRotationReflexSpring(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetRotationReflexDamper(void* _this, float d) {
	try { ((PHHapticPointerIf*) _this)->SetRotationReflexDamper(d); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHHapticPointerIf_GetRotationReflexDamper(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetRotationReflexDamper(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetLocalRange(void* _this, float r) {
	try { ((PHHapticPointerIf*) _this)->SetLocalRange(r); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHHapticPointerIf_GetLocalRange(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetLocalRange(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetPosScale(void* _this, double scale) {
	try { ((PHHapticPointerIf*) _this)->SetPosScale(scale); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHHapticPointerIf_GetPosScale(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetPosScale(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetRotationalWeight(void* _this, double w) {
	try { ((PHHapticPointerIf*) _this)->SetRotationalWeight(w); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHHapticPointerIf_GetRotationalWeight(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetRotationalWeight(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetDefaultPose(void* _this, void* p) {
	Posed arg01_ = *((Posed*) p);
	try { ((PHHapticPointerIf*) _this)->SetDefaultPose((Posed) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticPointerIf_GetDefaultPose(void* _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHHapticPointerIf*) _this)->GetDefaultPose(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticPointerIf_NNeighborSolids(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->NNeighborSolids(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticPointerIf_GetNeighborSolidId(void* _this, int i) {
	int _val = (int) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetNeighborSolidId(i); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticPointerIf_GetNeighborSolid(void* _this, int i) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHHapticPointerIf*) _this)->GetNeighborSolid(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) float  Spr_PHHapticPointerIf_GetContactForce(void* _this, int i) {
	float _val = (float) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetContactForce(i); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticPointerIf_GetHapticForce(void* _this) {
	SpatialVector* _ptr = (SpatialVector*) NULL;
	try { _ptr = new SpatialVector(); (*_ptr) = ((PHHapticPointerIf*) _this)->GetHapticForce(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticPointerIf_GetProxyVelocity(void* _this) {
	SpatialVector* _ptr = (SpatialVector*) NULL;
	try { _ptr = new SpatialVector(); (*_ptr) = ((PHHapticPointerIf*) _this)->GetProxyVelocity(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetProxyN(void* _this, int n) {
	try { ((PHHapticPointerIf*) _this)->SetProxyN(n); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticPointerIf_GetProxyN(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetProxyN(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticPointerIf_GetTotalSlipState(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetTotalSlipState(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticPointerIf_GetSlipState(void* _this, int i) {
	int _val = (int) NULL;
	try { _val = ((PHHapticPointerIf*) _this)->GetSlipState(i); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_SetProxyVelocity(void* _this, void* spv) {
	SpatialVector arg01_ = *((SpatialVector*) spv);
	try { ((PHHapticPointerIf*) _this)->SetProxyVelocity((SpatialVector) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_AddHapticForce(void* _this, void* f) {
	try { ((PHHapticPointerIf*) _this)->AddHapticForce((const SpatialVector&) *((SpatialVector*) f)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_ClearHapticForce(void* _this) {
	try { ((PHHapticPointerIf*) _this)->ClearHapticForce(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticPointerIf_UpdateHumanInterface(void* _this, void* pose, void* vel) {
	try { ((PHHapticPointerIf*) _this)->UpdateHumanInterface((const Posed&) *((Posed*) pose), (const SpatialVector&) *((SpatialVector*) vel)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHShapePairForHapticIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHShapePairForHapticIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHShapePairForHapticIf(void* v) {
        if (v == NULL) return;
        try { delete (PHShapePairForHapticIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForHapticIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHShapePairForHapticIf*) _this)) {
                (*((PHShapePairForHapticIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHShapePairForHapticIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForHapticIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHShapePairForHapticIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForHapticIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHShapePairForHapticIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHShapePairForHapticIf_NIrs(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHShapePairForHapticIf*) _this)->NIrs(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHShapePairForHapticIf_NIrsNormal(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHShapePairForHapticIf*) _this)->NIrsNormal(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForHapticIf_GetIrForce(void* _this, int i) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHShapePairForHapticIf*) _this)->GetIrForce(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) double  Spr_PHShapePairForHapticIf_GetMu(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHShapePairForHapticIf*) _this)->GetMu(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHShapePairForHapticIf_GetFrame(void* _this, int i) {
	PHFrameIf* _ptr = (PHFrameIf*) NULL;
	try { _ptr = (PHFrameIf*) ((PHShapePairForHapticIf*) _this)->GetFrame(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHShapePairForHapticIf_UpdateCache(void* _this) {
	try { ((PHShapePairForHapticIf*) _this)->UpdateCache(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHShapePairForHapticIf_GetMus(void* _this, int id) {
	double _val = (double) NULL;
	try { _val = ((PHShapePairForHapticIf*) _this)->GetMus(id); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSolidPairForHapticIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSolidPairForHapticIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSolidPairForHapticIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSolidPairForHapticIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForHapticIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSolidPairForHapticIf*) _this)) {
                (*((PHSolidPairForHapticIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairForHapticIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForHapticIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSolidPairForHapticIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForHapticIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSolidPairForHapticIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForHapticIf_GetShapePair(void* _this, int i, int j) {
	PHShapePairForHapticIf* _ptr = (PHShapePairForHapticIf*) NULL;
	try { _ptr = (PHShapePairForHapticIf*) ((PHSolidPairForHapticIf*) _this)->GetShapePair(i, j); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSolidPairForHapticIf_GetFrictionState(void* _this) {
	PHSolidPairForHapticIf::FrictionState _val = (PHSolidPairForHapticIf::FrictionState) NULL;
	try { _val = ((PHSolidPairForHapticIf*) _this)->GetFrictionState(); }
	catch (const std::exception& e) {  }
	return (int) _val;
    }
    __attribute__((visibility("default"))) unsigned int  Spr_PHSolidPairForHapticIf_GetContactCount(void* _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((PHSolidPairForHapticIf*) _this)->GetContactCount(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) unsigned int  Spr_PHSolidPairForHapticIf_GetFrictionCount(void* _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((PHSolidPairForHapticIf*) _this)->GetFrictionCount(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairForHapticIf_InitFrictionState(void* _this, int n) {
	try { ((PHSolidPairForHapticIf*) _this)->InitFrictionState(n); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairForHapticIf_InitFrictionCount(void* _this, int n) {
	try { ((PHSolidPairForHapticIf*) _this)->InitFrictionCount(n); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairForHapticIf_InitContactCount(void* _this, int n) {
	try { ((PHSolidPairForHapticIf*) _this)->InitContactCount(n); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSolidPairForHapticIf_InitSlipState(void* _this, int n) {
	try { ((PHSolidPairForHapticIf*) _this)->InitSlipState(n); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHSolidPairForHapticIf_GetSlipState(void* _this, int i) {
	int _val = (int) NULL;
	try { _val = ((PHSolidPairForHapticIf*) _this)->GetSlipState(i); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForHapticIf_GetForce(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidPairForHapticIf*) _this)->GetForce(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSolidPairForHapticIf_GetTorque(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSolidPairForHapticIf*) _this)->GetTorque(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSolidPairForHapticIf_GetFrictionStates(void* _this, int i) {
	PHSolidPairForHapticIf::FrictionState _val = (PHSolidPairForHapticIf::FrictionState) NULL;
	try { _val = ((PHSolidPairForHapticIf*) _this)->GetFrictionStates(i); }
	catch (const std::exception& e) {  }
	return (int) _val;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHapticEngineIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHapticEngineIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHapticEngineIf(void* v) {
        if (v == NULL) return;
        try { delete (PHHapticEngineIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticEngineIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHapticEngineIf*) _this)) {
                (*((PHHapticEngineIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticEngineIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticEngineIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHapticEngineIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticEngineIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHapticEngineIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticEngineIf_SetHapticStepMode(void* _this, int mode) {
	PHHapticEngineDesc::HapticStepMode arg01_ = ((PHHapticEngineDesc::HapticStepMode) mode);
	try { ((PHHapticEngineIf*) _this)->SetHapticStepMode((PHHapticEngineDesc::HapticStepMode) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticEngineIf_GetHapticStepMode(void* _this) {
	PHHapticEngineDesc::HapticStepMode _val = (PHHapticEngineDesc::HapticStepMode) NULL;
	try { _val = ((PHHapticEngineIf*) _this)->GetHapticStepMode(); }
	catch (const std::exception& e) {  }
	return (int) _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticEngineIf_NSolids(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticEngineIf*) _this)->NSolids(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticEngineIf_NPointers(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticEngineIf*) _this)->NPointers(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticEngineIf_GetPointer(void* _this, int i) {
	PHHapticPointerIf* _ptr = (PHHapticPointerIf*) NULL;
	try { _ptr = (PHHapticPointerIf*) ((PHHapticEngineIf*) _this)->GetPointer(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticEngineIf_GetSolidPair(void* _this, int i, int j) {
	PHSolidPairForHapticIf* _ptr = (PHSolidPairForHapticIf*) NULL;
	try { _ptr = (PHSolidPairForHapticIf*) ((PHHapticEngineIf*) _this)->GetSolidPair(i, j); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticEngineIf_NSolidsInHaptic(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticEngineIf*) _this)->NSolidsInHaptic(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHHapticEngineIf_NPointersInHaptic(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHHapticEngineIf*) _this)->NPointersInHaptic(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticEngineIf_GetPointerInHaptic(void* _this, int i) {
	PHHapticPointerIf* _ptr = (PHHapticPointerIf*) NULL;
	try { _ptr = (PHHapticPointerIf*) ((PHHapticEngineIf*) _this)->GetPointerInHaptic(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticEngineIf_GetSolidPairInHaptic(void* _this, int i, int j) {
	PHSolidPairForHapticIf* _ptr = (PHSolidPairForHapticIf*) NULL;
	try { _ptr = (PHSolidPairForHapticIf*) ((PHHapticEngineIf*) _this)->GetSolidPairInHaptic(i, j); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticEngineIf_StepPhysicsSimulation(void* _this) {
	try { ((PHHapticEngineIf*) _this)->StepPhysicsSimulation(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHHapticEngineIf_ReleaseState(void* _this) {
	try { ((PHHapticEngineIf*) _this)->ReleaseState(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHapticEngineIf_Callback(void* _this, void* arg) {
	void* _ptr = (void*) NULL;
	// try { _ptr = PHHapticEngineIf::Callback(arg); }
	// catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKEndEffectorIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKEndEffectorIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKEndEffectorIf(void* v) {
        if (v == NULL) return;
        try { delete (PHIKEndEffectorIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKEndEffectorIf*) _this)) {
                (*((PHIKEndEffectorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKEndEffectorIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKEndEffectorIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetSolid(void* _this, void* solid) {
	try { ((PHIKEndEffectorIf*) _this)->SetSolid((PHSolidIf*) solid); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetSolid(void* _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHIKEndEffectorIf*) _this)->GetSolid(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetParentActuator(void* _this, void* ika) {
	try { ((PHIKEndEffectorIf*) _this)->SetParentActuator((PHIKActuatorIf*) ika); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetParentActuator(void* _this) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHIKEndEffectorIf*) _this)->GetParentActuator(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_Enable(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKEndEffectorIf*) _this)->Enable((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHIKEndEffectorIf_IsEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->IsEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetLocalPosition(void* _this, void* localPosition) {
	Vec3d arg01_ = *((Vec3d*) localPosition);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetLocalPosition((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetLocalPosition(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetLocalPosition(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetLocalDirection(void* _this, void* localDirection) {
	Vec3d arg01_ = *((Vec3d*) localDirection);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetLocalDirection((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetLocalDirection(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetLocalDirection(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_EnablePositionControl(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKEndEffectorIf*) _this)->EnablePositionControl((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHIKEndEffectorIf_IsPositionControlEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->IsPositionControlEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetPositionPriority(void* _this, double priority) {
	try { ((PHIKEndEffectorIf*) _this)->SetPositionPriority(priority); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEndEffectorIf_GetPositionPriority(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->GetPositionPriority(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetPosition(void* _this, void* position) {
	Vec3d arg01_ = *((Vec3d*) position);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetPosition((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetPosition(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetPosition(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_EnableOrientationControl(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKEndEffectorIf*) _this)->EnableOrientationControl((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHIKEndEffectorIf_IsOrientationControlEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->IsOrientationControlEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetOrientationPriority(void* _this, double priority) {
	try { ((PHIKEndEffectorIf*) _this)->SetOrientationPriority(priority); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKEndEffectorIf_GetOrientationPriority(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->GetOrientationPriority(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetOriCtlMode(void* _this, int mode) {
	PHIKEndEffectorDesc::OriCtlMode arg01_ = ((PHIKEndEffectorDesc::OriCtlMode) mode);
	try { ((PHIKEndEffectorIf*) _this)->SetOriCtlMode((PHIKEndEffectorDesc::OriCtlMode) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHIKEndEffectorIf_GetOriCtlMode(void* _this) {
	PHIKEndEffectorDesc::OriCtlMode _val = (PHIKEndEffectorDesc::OriCtlMode) NULL;
	try { _val = ((PHIKEndEffectorIf*) _this)->GetOriCtlMode(); }
	catch (const std::exception& e) {  }
	return (int) _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetOrientation(void* _this, void* orientation) {
	Quaterniond arg01_ = *((Quaterniond*) orientation);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetOrientation((Quaterniond) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetOrientation(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetOrientation(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetDirection(void* _this, void* direction) {
	Vec3d arg01_ = *((Vec3d*) direction);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetDirection((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetDirection(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetDirection(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetLookat(void* _this, void* lookat) {
	Vec3d arg01_ = *((Vec3d*) lookat);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetLookat((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetLookat(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetLookat(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetVelocity(void* _this, void* velocity) {
	Vec3d arg01_ = *((Vec3d*) velocity);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetVelocity((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetVelocity(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetVelocity(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetAngularVelocity(void* _this, void* angVel) {
	Vec3d arg01_ = *((Vec3d*) angVel);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetAngularVelocity((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetAngularVelocity(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetAngularVelocity(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_EnableForceControl(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKEndEffectorIf*) _this)->EnableForceControl((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetForce(void* _this, void* force, void* workingPoint) {
	Vec3d arg01_ = *((Vec3d*) force);
	Vec3d arg02_ = *((Vec3d*) workingPoint);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetForce((Vec3d) arg01_, (Vec3d) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetForce_1(void* _this, void* force) {
	Vec3d arg01_ = *((Vec3d*) force);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetForce((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetForce(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetForce(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetForceWorkingPoint(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetForceWorkingPoint(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_EnableTorqueControl(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKEndEffectorIf*) _this)->EnableTorqueControl((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_SetTargetTorque(void* _this, void* torque) {
	Vec3d arg01_ = *((Vec3d*) torque);
	try { ((PHIKEndEffectorIf*) _this)->SetTargetTorque((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetTargetTorque(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetTargetTorque(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKEndEffectorIf_GetSolidTempPose(void* _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHIKEndEffectorIf*) _this)->GetSolidTempPose(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKEndEffectorIf_ApplyExactState(void* _this) {
	try { ((PHIKEndEffectorIf*) _this)->ApplyExactState(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKActuatorIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKActuatorIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKActuatorIf(void* v) {
        if (v == NULL) return;
        try { delete (PHIKActuatorIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKActuatorIf*) _this)) {
                (*((PHIKActuatorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKActuatorIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKActuatorIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorIf_PrepareSolve(void* _this) {
	try { ((PHIKActuatorIf*) _this)->PrepareSolve(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorIf_ProceedSolve(void* _this) {
	try { ((PHIKActuatorIf*) _this)->ProceedSolve(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorIf_Move(void* _this) {
	try { ((PHIKActuatorIf*) _this)->Move(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorIf_ApplyExactState(void* _this, char reverse) {
	bool arg01_ = (reverse == 0) ? false : true;
	try { ((PHIKActuatorIf*) _this)->ApplyExactState((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorIf_ApplyExactState_1(void* _this) {
	try { ((PHIKActuatorIf*) _this)->ApplyExactState(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorIf_SetBias(void* _this, float bias) {
	try { ((PHIKActuatorIf*) _this)->SetBias(bias); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHIKActuatorIf_GetBias(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHIKActuatorIf*) _this)->GetBias(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorIf_SetPullbackRate(void* _this, double pullbackRate) {
	try { ((PHIKActuatorIf*) _this)->SetPullbackRate(pullbackRate); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKActuatorIf_GetPullbackRate(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKActuatorIf*) _this)->GetPullbackRate(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKActuatorIf_Enable(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHIKActuatorIf*) _this)->Enable((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHIKActuatorIf_IsEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHIKActuatorIf*) _this)->IsEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) int  Spr_PHIKActuatorIf_NAncestors(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHIKActuatorIf*) _this)->NAncestors(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorIf_GetAncestor(void* _this, int i) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHIKActuatorIf*) _this)->GetAncestor(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorIf_GetParent(void* _this) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHIKActuatorIf*) _this)->GetParent(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHIKActuatorIf_NChildActuators(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHIKActuatorIf*) _this)->NChildActuators(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorIf_GetChildActuator(void* _this, int i) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHIKActuatorIf*) _this)->GetChildActuator(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorIf_GetChildEndEffector(void* _this) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((PHIKActuatorIf*) _this)->GetChildEndEffector(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorIf_GetSolidTempPose(void* _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHIKActuatorIf*) _this)->GetSolidTempPose(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKActuatorIf_GetSolidPullbackPose(void* _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHIKActuatorIf*) _this)->GetSolidPullbackPose(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKBallActuatorIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKBallActuatorIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKBallActuatorIf(void* v) {
        if (v == NULL) return;
        try { delete (PHIKBallActuatorIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKBallActuatorIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKBallActuatorIf*) _this)) {
                (*((PHIKBallActuatorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKBallActuatorIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKBallActuatorIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKBallActuatorIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKBallActuatorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKBallActuatorIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKBallActuatorIf_SetJoint(void* _this, void* joint) {
	try { ((PHIKBallActuatorIf*) _this)->SetJoint((PHBallJointIf*) joint); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKBallActuatorIf_GetJoint(void* _this) {
	PHBallJointIf* _ptr = (PHBallJointIf*) NULL;
	try { _ptr = (PHBallJointIf*) ((PHIKBallActuatorIf*) _this)->GetJoint(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKBallActuatorIf_SetJointTempOri(void* _this, void* ori) {
	Quaterniond arg01_ = *((Quaterniond*) ori);
	try { ((PHIKBallActuatorIf*) _this)->SetJointTempOri((Quaterniond) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKBallActuatorIf_SetPullbackTarget(void* _this, void* ori) {
	Quaterniond arg01_ = *((Quaterniond*) ori);
	try { ((PHIKBallActuatorIf*) _this)->SetPullbackTarget((Quaterniond) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKBallActuatorIf_GetJointTempOri(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHIKBallActuatorIf*) _this)->GetJointTempOri(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKBallActuatorIf_GetPullbackTarget(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHIKBallActuatorIf*) _this)->GetPullbackTarget(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKHingeActuatorIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKHingeActuatorIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKHingeActuatorIf(void* v) {
        if (v == NULL) return;
        try { delete (PHIKHingeActuatorIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKHingeActuatorIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKHingeActuatorIf*) _this)) {
                (*((PHIKHingeActuatorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKHingeActuatorIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKHingeActuatorIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKHingeActuatorIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKHingeActuatorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKHingeActuatorIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKHingeActuatorIf_SetJoint(void* _this, void* joint) {
	try { ((PHIKHingeActuatorIf*) _this)->SetJoint((PHHingeJointIf*) joint); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKHingeActuatorIf_GetJoint(void* _this) {
	PHHingeJointIf* _ptr = (PHHingeJointIf*) NULL;
	try { _ptr = (PHHingeJointIf*) ((PHIKHingeActuatorIf*) _this)->GetJoint(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKHingeActuatorIf_SetJointTempAngle(void* _this, double angle) {
	try { ((PHIKHingeActuatorIf*) _this)->SetJointTempAngle(angle); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKHingeActuatorIf_SetPullbackTarget(void* _this, double angle) {
	try { ((PHIKHingeActuatorIf*) _this)->SetPullbackTarget(angle); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHIKHingeActuatorIf_GetJointTempAngle(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKHingeActuatorIf*) _this)->GetJointTempAngle(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHIKHingeActuatorIf_GetPullbackTarget(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHIKHingeActuatorIf*) _this)->GetPullbackTarget(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHIKSpringActuatorIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHIKSpringActuatorIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHIKSpringActuatorIf(void* v) {
        if (v == NULL) return;
        try { delete (PHIKSpringActuatorIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKSpringActuatorIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHIKSpringActuatorIf*) _this)) {
                (*((PHIKSpringActuatorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKSpringActuatorIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKSpringActuatorIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHIKSpringActuatorIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKSpringActuatorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHIKSpringActuatorIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKSpringActuatorIf_SetJoint(void* _this, void* joint) {
	try { ((PHIKSpringActuatorIf*) _this)->SetJoint((PHSpringIf*) joint); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKSpringActuatorIf_GetJoint(void* _this) {
	PHSpringIf* _ptr = (PHSpringIf*) NULL;
	try { _ptr = (PHSpringIf*) ((PHIKSpringActuatorIf*) _this)->GetJoint(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHIKSpringActuatorIf_SetJointTempPose(void* _this, void* pose) {
	Posed arg01_ = *((Posed*) pose);
	try { ((PHIKSpringActuatorIf*) _this)->SetJointTempPose((Posed) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHIKSpringActuatorIf_SetPullbackTarget(void* _this, void* pose) {
	Posed arg01_ = *((Posed*) pose);
	try { ((PHIKSpringActuatorIf*) _this)->SetPullbackTarget((Posed) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKSpringActuatorIf_GetJointTempPose(void* _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHIKSpringActuatorIf*) _this)->GetJointTempPose(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHIKSpringActuatorIf_GetPullbackTarget(void* _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHIKSpringActuatorIf*) _this)->GetPullbackTarget(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHConstraintIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHConstraintIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHConstraintIf(void* v) {
        if (v == NULL) return;
        try { delete (PHConstraintIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHConstraintIf*) _this)) {
                (*((PHConstraintIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHConstraintIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHConstraintIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintIf_GetSocketSolid(void* _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHConstraintIf*) _this)->GetSocketSolid(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintIf_GetPlugSolid(void* _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHConstraintIf*) _this)->GetPlugSolid(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintIf_GetScene(void* _this) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((PHConstraintIf*) _this)->GetScene(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintIf_Enable(void* _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((PHConstraintIf*) _this)->Enable((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintIf_Enable_1(void* _this) {
	try { ((PHConstraintIf*) _this)->Enable(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHConstraintIf_IsEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHConstraintIf*) _this)->IsEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHConstraintIf_IsArticulated(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHConstraintIf*) _this)->IsArticulated(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintIf_GetSocketPose(void* _this, void* pose) {
	try { ((PHConstraintIf*) _this)->GetSocketPose((Posed&) *((Posed*) pose)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintIf_SetSocketPose(void* _this, void* pose) {
	try { ((PHConstraintIf*) _this)->SetSocketPose((const Posed&) *((Posed*) pose)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintIf_GetPlugPose(void* _this, void* pose) {
	try { ((PHConstraintIf*) _this)->GetPlugPose((Posed&) *((Posed*) pose)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintIf_SetPlugPose(void* _this, void* pose) {
	try { ((PHConstraintIf*) _this)->SetPlugPose((const Posed&) *((Posed*) pose)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintIf_GetRelativePose(void* _this, void* p) {
	try { ((PHConstraintIf*) _this)->GetRelativePose((Posed&) *((Posed*) p)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintIf_GetRelativePoseR(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHConstraintIf*) _this)->GetRelativePoseR(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintIf_GetRelativePoseQ(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHConstraintIf*) _this)->GetRelativePoseQ(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintIf_GetAbsolutePoseQ(void* _this) {
	Quaternionf* _ptr = (Quaternionf*) NULL;
	try { _ptr = new Quaternionf(); (*_ptr) = ((PHConstraintIf*) _this)->GetAbsolutePoseQ(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintIf_GetRelativeVelocity(void* _this, void* v, void* w) {
	try { ((PHConstraintIf*) _this)->GetRelativeVelocity((Vec3d&) *((Vec3d*) v), (Vec3d&) *((Vec3d*) w)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintIf_GetConstraintForce(void* _this, void* f, void* t) {
	try { ((PHConstraintIf*) _this)->GetConstraintForce((Vec3d&) *((Vec3d*) f), (Vec3d&) *((Vec3d*) t)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHConstraintIf_IsYielded(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHConstraintIf*) _this)->IsYielded(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHConstraintsIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHConstraintsIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHConstraintsIf(void* v) {
        if (v == NULL) return;
        try { delete (PHConstraintsIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintsIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHConstraintsIf*) _this)) {
                (*((PHConstraintsIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHConstraintsIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintsIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHConstraintsIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintsIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHConstraintsIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintsIf_FindBySolidPair(void* _this, void* lhs, void* rhs) {
	PHConstraintIf* _ptr = (PHConstraintIf*) NULL;
	try { _ptr = (PHConstraintIf*) ((PHConstraintsIf*) _this)->FindBySolidPair((PHSolidIf*) lhs, (PHSolidIf*) rhs); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHConstraintsIf_GetTotalForce(void* _this, void* lhs, void* rhs) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHConstraintsIf*) _this)->GetTotalForce((PHSolidIf*) lhs, (PHSolidIf*) rhs); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHContactPointIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHContactPointIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHContactPointIf(void* v) {
        if (v == NULL) return;
        try { delete (PHContactPointIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHContactPointIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHContactPointIf*) _this)) {
                (*((PHContactPointIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHContactPointIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHContactPointIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHContactPointIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHContactPointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHContactPointIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHContactPointIf_GetPose(void* _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((PHContactPointIf*) _this)->GetPose(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PHContactPointIf_IsStaticFriction(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHContactPointIf*) _this)->IsStaticFriction(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHJointIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHJointIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHJointIf(void* v) {
        if (v == NULL) return;
        try { delete (PHJointIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHJointIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHJointIf*) _this)) {
                (*((PHJointIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHJointIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHJointIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHJointIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHJointIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHJointIf_SetMaxForce(void* _this, double max) {
	try { ((PHJointIf*) _this)->SetMaxForce(max); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHJointIf_GetMaxForce(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHJointIf*) _this)->GetMaxForce(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PH1DJointIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PH1DJointIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PH1DJointIf(void* v) {
        if (v == NULL) return;
        try { delete (PH1DJointIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PH1DJointIf*) _this)) {
                (*((PH1DJointIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PH1DJointIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PH1DJointIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointIf_CreateLimit(void* _this, void* desc) {
	PH1DJointLimitIf* _ptr = (PH1DJointLimitIf*) NULL;
	try { _ptr = (PH1DJointLimitIf*) ((PH1DJointIf*) _this)->CreateLimit((const PH1DJointLimitDesc&) *((PH1DJointLimitDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointIf_CreateLimit_1(void* _this) {
	PH1DJointLimitIf* _ptr = (PH1DJointLimitIf*) NULL;
	try { _ptr = (PH1DJointLimitIf*) ((PH1DJointIf*) _this)->CreateLimit(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointIf_CreateMotor(void* _this, void* ii, void* desc) {
	PH1DJointMotorIf* _ptr = (PH1DJointMotorIf*) NULL;
	try { _ptr = (PH1DJointMotorIf*) ((PH1DJointIf*) _this)->CreateMotor((const IfInfo*) ii, (const PH1DJointMotorDesc&) *((PH1DJointMotorDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointIf_CreateMotor_1(void* _this, void* ii) {
	PH1DJointMotorIf* _ptr = (PH1DJointMotorIf*) NULL;
	try { _ptr = (PH1DJointMotorIf*) ((PH1DJointIf*) _this)->CreateMotor((const IfInfo*) ii); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PH1DJointIf_AddMotor(void* _this, void* m) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointIf*) _this)->AddMotor((PH1DJointMotorIf*) m); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PH1DJointIf_RemoveMotor(void* _this, int n) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointIf*) _this)->RemoveMotor(n); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PH1DJointIf_IsCyclic(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointIf*) _this)->IsCyclic(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetCyclic(void* _this, char on) {
	bool arg01_ = (on == 0) ? false : true;
	try { ((PH1DJointIf*) _this)->SetCyclic((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetPosition(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetPosition(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetVelocity(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetVelocity(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) char  Spr_PH1DJointIf_HasLimit(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointIf*) _this)->HasLimit(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointIf_GetLimit(void* _this) {
	PH1DJointLimitIf* _ptr = (PH1DJointLimitIf*) NULL;
	try { _ptr = (PH1DJointLimitIf*) ((PH1DJointIf*) _this)->GetLimit(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetSpring(void* _this, double spring) {
	try { ((PH1DJointIf*) _this)->SetSpring(spring); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetSpring(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetSpring(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetDamper(void* _this, double damper) {
	try { ((PH1DJointIf*) _this)->SetDamper(damper); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetDamper(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetDamper(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetSecondDamper(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetSecondDamper(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetSecondDamper(void* _this, double input) {
	try { ((PH1DJointIf*) _this)->SetSecondDamper(input); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetTargetPosition(void* _this, double targetPosition) {
	try { ((PH1DJointIf*) _this)->SetTargetPosition(targetPosition); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetTargetPosition(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetTargetPosition(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetTargetVelocity(void* _this, double v) {
	try { ((PH1DJointIf*) _this)->SetTargetVelocity(v); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetTargetVelocity(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetTargetVelocity(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetOffsetForce(void* _this, double dat) {
	try { ((PH1DJointIf*) _this)->SetOffsetForce(dat); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetOffsetForce(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetOffsetForce(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetOffsetForceN(void* _this, int n, double dat) {
	try { ((PH1DJointIf*) _this)->SetOffsetForceN(n, dat); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetOffsetForceN(void* _this, int n) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetOffsetForceN(n); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetYieldStress(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetYieldStress(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetYieldStress(void* _this, const double yS) {
	try { ((PH1DJointIf*) _this)->SetYieldStress(yS); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetHardnessRate(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetHardnessRate(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetHardnessRate(void* _this, const double hR) {
	try { ((PH1DJointIf*) _this)->SetHardnessRate(hR); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointIf_SetSecondMoment(void* _this, const double& sM) {
	try { ((PH1DJointIf*) _this)->SetSecondMoment(sM); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetSecondMoment(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetSecondMoment(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PH1DJointIf_NMotors(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PH1DJointIf*) _this)->NMotors(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointIf_GetMotors(void* _this) {
	PH1DJointMotorIf* _ptr = (PH1DJointMotorIf*) NULL;
	try { _ptr = (PH1DJointMotorIf*) ((PH1DJointIf*) _this)->GetMotors(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetMotorForce(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetMotorForce(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetMotorForceN(void* _this, int n) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetMotorForceN(n); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointIf_GetLimitForce(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointIf*) _this)->GetLimitForce(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHingeJointIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHingeJointIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHingeJointIf(void* v) {
        if (v == NULL) return;
        try { delete (PHHingeJointIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHingeJointIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHingeJointIf*) _this)) {
                (*((PHHingeJointIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHHingeJointIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHingeJointIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHingeJointIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHingeJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHingeJointIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSliderJointIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSliderJointIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSliderJointIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSliderJointIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSliderJointIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSliderJointIf*) _this)) {
                (*((PHSliderJointIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSliderJointIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSliderJointIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSliderJointIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSliderJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSliderJointIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPathIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPathIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPathIf(void* v) {
        if (v == NULL) return;
        try { delete (PHPathIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPathIf*) _this)) {
                (*((PHPathIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHPathIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPathIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPathIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHPathIf_AddPoint(void* _this, double s, void* pose) {
	try { ((PHPathIf*) _this)->AddPoint(s, (const Posed&) *((Posed*) pose)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHPathIf_SetLoop(void* _this, char bOnOff) {
	bool arg01_ = (bOnOff == 0) ? false : true;
	try { ((PHPathIf*) _this)->SetLoop((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHPathIf_SetLoop_1(void* _this) {
	try { ((PHPathIf*) _this)->SetLoop(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHPathIf_IsLoop(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHPathIf*) _this)->IsLoop(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPathJointIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPathJointIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPathJointIf(void* v) {
        if (v == NULL) return;
        try { delete (PHPathJointIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathJointIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPathJointIf*) _this)) {
                (*((PHPathJointIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHPathJointIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathJointIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPathJointIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPathJointIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHPathJointIf_SetPosition(void* _this, double q) {
	try { ((PHPathJointIf*) _this)->SetPosition(q); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHGenericJointIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHGenericJointIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHGenericJointIf(void* v) {
        if (v == NULL) return;
        try { delete (PHGenericJointIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHGenericJointIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHGenericJointIf*) _this)) {
                (*((PHGenericJointIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHGenericJointIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHGenericJointIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHGenericJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHGenericJointIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointIf_SetCallback(void* _this, void* cb) {
	try { ((PHGenericJointIf*) _this)->SetCallback((PHGenericJointCallback*) cb); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointIf_SetParam(void* _this, void* name, double value) {
	string arg01_("");
	int lenMB1 = static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(name), 0));
	if (lenMB1 > 0) {
	    std::string str1(lenMB1, 0); char* addr1 = &str1[0];
        static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(name), 0));
	    arg01_ = (string) addr1;
	}
	try { ((PHGenericJointIf*) _this)->SetParam((string) arg01_, value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointIf(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointIf*) _this)) {
                (*((PHBallJointIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_CreateLimit(void* _this, void* ii, void* desc) {
	PHBallJointLimitIf* _ptr = (PHBallJointLimitIf*) NULL;
	try { _ptr = (PHBallJointLimitIf*) ((PHBallJointIf*) _this)->CreateLimit((const IfInfo*) ii, (const PHBallJointLimitDesc&) *((PHBallJointLimitDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_CreateLimit_1(void* _this, void* ii) {
	PHBallJointLimitIf* _ptr = (PHBallJointLimitIf*) NULL;
	try { _ptr = (PHBallJointLimitIf*) ((PHBallJointIf*) _this)->CreateLimit((const IfInfo*) ii); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_CreateMotor(void* _this, void* ii, void* desc) {
	PHBallJointMotorIf* _ptr = (PHBallJointMotorIf*) NULL;
	try { _ptr = (PHBallJointMotorIf*) ((PHBallJointIf*) _this)->CreateMotor((const IfInfo*) ii, (const PHBallJointMotorDesc&) *((PHBallJointMotorDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_CreateMotor_1(void* _this, void* ii) {
	PHBallJointMotorIf* _ptr = (PHBallJointMotorIf*) NULL;
	try { _ptr = (PHBallJointMotorIf*) ((PHBallJointIf*) _this)->CreateMotor((const IfInfo*) ii); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PHBallJointIf_AddMotor(void* _this, void* m) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointIf*) _this)->AddMotor((PHBallJointMotorIf*) m); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHBallJointIf_RemoveMotor(void* _this, int n) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointIf*) _this)->RemoveMotor(n); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetAngle(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetAngle(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetPosition(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHBallJointIf*) _this)->GetPosition(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetVelocity(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetVelocity(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PHBallJointIf_HasLimit(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointIf*) _this)->HasLimit(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetLimit(void* _this) {
	PHBallJointLimitIf* _ptr = (PHBallJointLimitIf*) NULL;
	try { _ptr = (PHBallJointLimitIf*) ((PHBallJointIf*) _this)->GetLimit(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_SetSpring(void* _this, double spring) {
	try { ((PHBallJointIf*) _this)->SetSpring(spring); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointIf_GetSpring(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointIf*) _this)->GetSpring(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_SetDamper(void* _this, double damper) {
	try { ((PHBallJointIf*) _this)->SetDamper(damper); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointIf_GetDamper(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointIf*) _this)->GetDamper(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetSecondDamper(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetSecondDamper(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_SetSecondDamper(void* _this, void* damper2) {
	Vec3d arg01_ = *((Vec3d*) damper2);
	try { ((PHBallJointIf*) _this)->SetSecondDamper((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_SetTargetPosition(void* _this, void* p) {
	Quaterniond arg01_ = *((Quaterniond*) p);
	try { ((PHBallJointIf*) _this)->SetTargetPosition((Quaterniond) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetTargetPosition(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHBallJointIf*) _this)->GetTargetPosition(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_SetTargetVelocity(void* _this, void* q) {
	Vec3d arg01_ = *((Vec3d*) q);
	try { ((PHBallJointIf*) _this)->SetTargetVelocity((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetTargetVelocity(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetTargetVelocity(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_SetOffsetForce(void* _this, void* ofst) {
	Vec3d arg01_ = *((Vec3d*) ofst);
	try { ((PHBallJointIf*) _this)->SetOffsetForce((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetOffsetForce(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetOffsetForce(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_SetOffsetForceN(void* _this, int n, void* ofst) {
	Vec3d arg02_ = *((Vec3d*) ofst);
	try { ((PHBallJointIf*) _this)->SetOffsetForceN(n, (Vec3d) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetOffsetForceN(void* _this, int n) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetOffsetForceN(n); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_SetYieldStress(void* _this, const double yS) {
	try { ((PHBallJointIf*) _this)->SetYieldStress(yS); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointIf_GetYieldStress(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointIf*) _this)->GetYieldStress(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_SetHardnessRate(void* _this, const double hR) {
	try { ((PHBallJointIf*) _this)->SetHardnessRate(hR); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointIf_GetHardnessRate(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointIf*) _this)->GetHardnessRate(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIf_SetSecondMoment(void* _this, void* m) {
	Vec3d arg01_ = *((Vec3d*) m);
	try { ((PHBallJointIf*) _this)->SetSecondMoment((const Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetSecondMoment(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetSecondMoment(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHBallJointIf_NMotors(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHBallJointIf*) _this)->NMotors(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetMotors(void* _this) {
	PHBallJointMotorIf* _ptr = (PHBallJointMotorIf*) NULL;
	try { _ptr = (PHBallJointMotorIf*) ((PHBallJointIf*) _this)->GetMotors(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetMotorForce(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetMotorForce(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetMotorForceN(void* _this, int n) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetMotorForceN(n); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIf_GetLimitForce(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointIf*) _this)->GetLimitForce(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFixJointIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFixJointIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFixJointIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFixJointIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFixJointIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFixJointIf*) _this)) {
                (*((PHFixJointIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFixJointIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFixJointIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFixJointIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFixJointIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFixJointIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSpringIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSpringIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSpringIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSpringIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSpringIf*) _this)) {
                (*((PHSpringIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSpringIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSpringIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetTargetPosition(void* _this, void* targetPosition) {
	try { ((PHSpringIf*) _this)->SetTargetPosition((const Vec3d&) *((Vec3d*) targetPosition)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_GetTargetPosition(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSpringIf*) _this)->GetTargetPosition(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetTargetOrientation(void* _this, void* targetOrientation) {
	try { ((PHSpringIf*) _this)->SetTargetOrientation((const Quaterniond&) *((Quaterniond*) targetOrientation)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_GetTargetOrientation(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((PHSpringIf*) _this)->GetTargetOrientation(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetSpring(void* _this, void* spring) {
	try { ((PHSpringIf*) _this)->SetSpring((const Vec3d&) *((Vec3d*) spring)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_GetSpring(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSpringIf*) _this)->GetSpring(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetDamper(void* _this, void* damper) {
	try { ((PHSpringIf*) _this)->SetDamper((const Vec3d&) *((Vec3d*) damper)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_GetDamper(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSpringIf*) _this)->GetDamper(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetSecondDamper(void* _this, void* secondDamper) {
	try { ((PHSpringIf*) _this)->SetSecondDamper((const Vec3d&) *((Vec3d*) secondDamper)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_GetSecondDamper(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSpringIf*) _this)->GetSecondDamper(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetSpringOri(void* _this, const double spring) {
	try { ((PHSpringIf*) _this)->SetSpringOri(spring); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSpringIf_GetSpringOri(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSpringIf*) _this)->GetSpringOri(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetDamperOri(void* _this, const double damper) {
	try { ((PHSpringIf*) _this)->SetDamperOri(damper); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSpringIf_GetDamperOri(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSpringIf*) _this)->GetDamperOri(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetSecondDamperOri(void* _this, const double& secondDamperOri) {
	try { ((PHSpringIf*) _this)->SetSecondDamperOri(secondDamperOri); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSpringIf_GetSecondDamperOri(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSpringIf*) _this)->GetSecondDamperOri(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetYieldStress(void* _this, const double& yieldStress) {
	try { ((PHSpringIf*) _this)->SetYieldStress(yieldStress); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSpringIf_GetYieldStress(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSpringIf*) _this)->GetYieldStress(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetHardnessRate(void* _this, const double& hardnessRate) {
	try { ((PHSpringIf*) _this)->SetHardnessRate(hardnessRate); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSpringIf_GetHardnessRate(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSpringIf*) _this)->GetHardnessRate(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetSecondMoment(void* _this, void* secondMoment) {
	try { ((PHSpringIf*) _this)->SetSecondMoment((const Vec3d&) *((Vec3d*) secondMoment)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_GetSecondMoment(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSpringIf*) _this)->GetSecondMoment(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_GetMotorForce(void* _this) {
	Vec6d* _ptr = (Vec6d*) NULL;
	try { _ptr = new Vec6d(); (*_ptr) = ((PHSpringIf*) _this)->GetMotorForce(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetOffsetForce(void* _this, void* offsetForce) {
	try { ((PHSpringIf*) _this)->SetOffsetForce((const Vec6d&) *((Vec6d*) offsetForce)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringIf_SetTargetVelocity(void* _this, void* targetVelocity) {
	try { ((PHSpringIf*) _this)->SetTargetVelocity((const Vec6d&) *((Vec6d*) targetVelocity)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringIf_GetTargetVelocity(void* _this) {
	Vec6d* _ptr = (Vec6d*) NULL;
	try { _ptr = new Vec6d(); (*_ptr) = ((PHSpringIf*) _this)->GetTargetVelocity(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHMateIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHMateIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHMateIf(void* v) {
        if (v == NULL) return;
        try { delete (PHMateIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHMateIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHMateIf*) _this)) {
                (*((PHMateIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHMateIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHMateIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHMateIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHMateIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPointToPointMateIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPointToPointMateIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPointToPointMateIf(void* v) {
        if (v == NULL) return;
        try { delete (PHPointToPointMateIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPointToPointMateIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPointToPointMateIf*) _this)) {
                (*((PHPointToPointMateIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHPointToPointMateIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPointToPointMateIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPointToPointMateIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHPointToPointMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPointToPointMateIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPointToLineMateIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPointToLineMateIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPointToLineMateIf(void* v) {
        if (v == NULL) return;
        try { delete (PHPointToLineMateIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPointToLineMateIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPointToLineMateIf*) _this)) {
                (*((PHPointToLineMateIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHPointToLineMateIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPointToLineMateIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPointToLineMateIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHPointToLineMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPointToLineMateIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPointToPlaneMateIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPointToPlaneMateIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPointToPlaneMateIf(void* v) {
        if (v == NULL) return;
        try { delete (PHPointToPlaneMateIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPointToPlaneMateIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPointToPlaneMateIf*) _this)) {
                (*((PHPointToPlaneMateIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHPointToPlaneMateIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPointToPlaneMateIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPointToPlaneMateIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHPointToPlaneMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPointToPlaneMateIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHPointToPlaneMateIf_SetRange(void* _this, void* range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PHPointToPlaneMateIf*) _this)->SetRange((Vec2d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHPointToPlaneMateIf_GetRange(void* _this, void* range) {
	try { ((PHPointToPlaneMateIf*) _this)->GetRange((Vec2d&) *((Vec2d*) range)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHLineToLineMateIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHLineToLineMateIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHLineToLineMateIf(void* v) {
        if (v == NULL) return;
        try { delete (PHLineToLineMateIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHLineToLineMateIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHLineToLineMateIf*) _this)) {
                (*((PHLineToLineMateIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHLineToLineMateIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHLineToLineMateIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHLineToLineMateIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHLineToLineMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHLineToLineMateIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPlaneToPlaneMateIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPlaneToPlaneMateIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPlaneToPlaneMateIf(void* v) {
        if (v == NULL) return;
        try { delete (PHPlaneToPlaneMateIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPlaneToPlaneMateIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPlaneToPlaneMateIf*) _this)) {
                (*((PHPlaneToPlaneMateIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHPlaneToPlaneMateIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPlaneToPlaneMateIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPlaneToPlaneMateIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHPlaneToPlaneMateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPlaneToPlaneMateIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHTreeNodeIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHTreeNodeIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHTreeNodeIf(void* v) {
        if (v == NULL) return;
        try { delete (PHTreeNodeIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHTreeNodeIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHTreeNodeIf*) _this)) {
                (*((PHTreeNodeIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHTreeNodeIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHTreeNodeIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHTreeNodeIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHTreeNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHTreeNodeIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHTreeNodeIf_Enable(void* _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((PHTreeNodeIf*) _this)->Enable((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHTreeNodeIf_Enable_1(void* _this) {
	try { ((PHTreeNodeIf*) _this)->Enable(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHTreeNodeIf_IsEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHTreeNodeIf*) _this)->IsEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) int  Spr_PHTreeNodeIf_NChildren(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHTreeNodeIf*) _this)->NChildren(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHTreeNodeIf_GetParentNode(void* _this) {
	PHTreeNodeIf* _ptr = (PHTreeNodeIf*) NULL;
	try { _ptr = (PHTreeNodeIf*) ((PHTreeNodeIf*) _this)->GetParentNode(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHTreeNodeIf_GetChildNode(void* _this, int i) {
	PHTreeNodeIf* _ptr = (PHTreeNodeIf*) NULL;
	try { _ptr = (PHTreeNodeIf*) ((PHTreeNodeIf*) _this)->GetChildNode(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHTreeNodeIf_GetRootNode(void* _this) {
	PHRootNodeIf* _ptr = (PHRootNodeIf*) NULL;
	try { _ptr = (PHRootNodeIf*) ((PHTreeNodeIf*) _this)->GetRootNode(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHTreeNodeIf_GetSolid(void* _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHTreeNodeIf*) _this)->GetSolid(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHRootNodeIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHRootNodeIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHRootNodeIf(void* v) {
        if (v == NULL) return;
        try { delete (PHRootNodeIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHRootNodeIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHRootNodeIf*) _this)) {
                (*((PHRootNodeIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHRootNodeIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHRootNodeIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHRootNodeIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHRootNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHRootNodeIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHTreeNode1DIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHTreeNode1DIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHTreeNode1DIf(void* v) {
        if (v == NULL) return;
        try { delete (PHTreeNode1DIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHTreeNode1DIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHTreeNode1DIf*) _this)) {
                (*((PHTreeNode1DIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHTreeNode1DIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHTreeNode1DIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHTreeNode1DIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHTreeNode1DIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHTreeNode1DIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHingeJointNodeIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHingeJointNodeIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHingeJointNodeIf(void* v) {
        if (v == NULL) return;
        try { delete (PHHingeJointNodeIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHingeJointNodeIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHingeJointNodeIf*) _this)) {
                (*((PHHingeJointNodeIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHHingeJointNodeIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHingeJointNodeIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHingeJointNodeIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHingeJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHingeJointNodeIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSliderJointNodeIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSliderJointNodeIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSliderJointNodeIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSliderJointNodeIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSliderJointNodeIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSliderJointNodeIf*) _this)) {
                (*((PHSliderJointNodeIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSliderJointNodeIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSliderJointNodeIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSliderJointNodeIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSliderJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSliderJointNodeIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHPathJointNodeIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHPathJointNodeIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHPathJointNodeIf(void* v) {
        if (v == NULL) return;
        try { delete (PHPathJointNodeIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathJointNodeIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHPathJointNodeIf*) _this)) {
                (*((PHPathJointNodeIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHPathJointNodeIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathJointNodeIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHPathJointNodeIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHPathJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHPathJointNodeIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHGenericJointNodeIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHGenericJointNodeIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHGenericJointNodeIf(void* v) {
        if (v == NULL) return;
        try { delete (PHGenericJointNodeIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHGenericJointNodeIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHGenericJointNodeIf*) _this)) {
                (*((PHGenericJointNodeIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHGenericJointNodeIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHGenericJointNodeIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHGenericJointNodeIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHGenericJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHGenericJointNodeIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointNodeIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointNodeIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointNodeIf(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointNodeIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointNodeIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointNodeIf*) _this)) {
                (*((PHBallJointNodeIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointNodeIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointNodeIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointNodeIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointNodeIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHFixJointNodeIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHFixJointNodeIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHFixJointNodeIf(void* v) {
        if (v == NULL) return;
        try { delete (PHFixJointNodeIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFixJointNodeIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHFixJointNodeIf*) _this)) {
                (*((PHFixJointNodeIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHFixJointNodeIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHFixJointNodeIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHFixJointNodeIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHFixJointNodeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHFixJointNodeIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHGearIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHGearIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHGearIf(void* v) {
        if (v == NULL) return;
        try { delete (PHGearIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHGearIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHGearIf*) _this)) {
                (*((PHGearIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHGearIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHGearIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHGearIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHGearIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHGearIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHGearIf_Enable(void* _this, char bEnable) {
	bool arg01_ = (bEnable == 0) ? false : true;
	try { ((PHGearIf*) _this)->Enable((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHGearIf_Enable_1(void* _this) {
	try { ((PHGearIf*) _this)->Enable(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHGearIf_IsEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHGearIf*) _this)->IsEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHGearIf_SetRatio(void* _this, double ratio) {
	try { ((PHGearIf*) _this)->SetRatio(ratio); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHGearIf_GetRatio(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHGearIf*) _this)->GetRatio(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHGearIf_SetOffset(void* _this, double offset) {
	try { ((PHGearIf*) _this)->SetOffset(offset); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHGearIf_GetOffset(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHGearIf*) _this)->GetOffset(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHGearIf_SetMode(void* _this, int mode) {
	try { ((PHGearIf*) _this)->SetMode(mode); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHGearIf_GetMode(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHGearIf*) _this)->GetMode(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PH1DJointLimitIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PH1DJointLimitIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PH1DJointLimitIf(void* v) {
        if (v == NULL) return;
        try { delete (PH1DJointLimitIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointLimitIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PH1DJointLimitIf*) _this)) {
                (*((PH1DJointLimitIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointLimitIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointLimitIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PH1DJointLimitIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointLimitIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PH1DJointLimitIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointLimitIf_SetRange(void* _this, void* range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PH1DJointLimitIf*) _this)->SetRange((Vec2d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointLimitIf_GetRange(void* _this, void* range) {
	try { ((PH1DJointLimitIf*) _this)->GetRange((Vec2d&) *((Vec2d*) range)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointLimitIf_SetSpring(void* _this, double spring) {
	try { ((PH1DJointLimitIf*) _this)->SetSpring(spring); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointLimitIf_GetSpring(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointLimitIf*) _this)->GetSpring(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointLimitIf_SetDamper(void* _this, double damper) {
	try { ((PH1DJointLimitIf*) _this)->SetDamper(damper); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PH1DJointLimitIf_GetDamper(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PH1DJointLimitIf*) _this)->GetDamper(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) char  Spr_PH1DJointLimitIf_IsOnLimit(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointLimitIf*) _this)->IsOnLimit(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointLimitIf_Enable(void* _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PH1DJointLimitIf*) _this)->Enable((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PH1DJointLimitIf_IsEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PH1DJointLimitIf*) _this)->IsEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointLimitIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointLimitIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointLimitIf(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointLimitIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointLimitIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointLimitIf*) _this)) {
                (*((PHBallJointLimitIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointLimitIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointLimitIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointLimitIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointLimitIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointLimitIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointLimitIf_SetSpring(void* _this, double rSpring) {
	try { ((PHBallJointLimitIf*) _this)->SetSpring(rSpring); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointLimitIf_GetSpring(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointLimitIf*) _this)->GetSpring(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointLimitIf_SetDamper(void* _this, double rDamper) {
	try { ((PHBallJointLimitIf*) _this)->SetDamper(rDamper); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHBallJointLimitIf_GetDamper(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHBallJointLimitIf*) _this)->GetDamper(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointLimitIf_SetLimitDir(void* _this, void* limDir) {
	Vec3d arg01_ = *((Vec3d*) limDir);
	try { ((PHBallJointLimitIf*) _this)->SetLimitDir((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointLimitIf_GetLimitDir(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHBallJointLimitIf*) _this)->GetLimitDir(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PHBallJointLimitIf_IsOnLimit(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointLimitIf*) _this)->IsOnLimit(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointLimitIf_Enable(void* _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((PHBallJointLimitIf*) _this)->Enable((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHBallJointLimitIf_IsEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointLimitIf*) _this)->IsEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointConeLimitIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointConeLimitIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointConeLimitIf(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointConeLimitIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointConeLimitIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointConeLimitIf*) _this)) {
                (*((PHBallJointConeLimitIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointConeLimitIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointConeLimitIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointConeLimitIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointConeLimitIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointConeLimitIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointConeLimitIf_SetSwingRange(void* _this, void* range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PHBallJointConeLimitIf*) _this)->SetSwingRange((Vec2d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointConeLimitIf_GetSwingRange(void* _this, void* range) {
	try { ((PHBallJointConeLimitIf*) _this)->GetSwingRange((Vec2d&) *((Vec2d*) range)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointConeLimitIf_SetSwingDirRange(void* _this, void* range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PHBallJointConeLimitIf*) _this)->SetSwingDirRange((Vec2d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointConeLimitIf_GetSwingDirRange(void* _this, void* range) {
	try { ((PHBallJointConeLimitIf*) _this)->GetSwingDirRange((Vec2d&) *((Vec2d*) range)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointConeLimitIf_SetTwistRange(void* _this, void* range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PHBallJointConeLimitIf*) _this)->SetTwistRange((Vec2d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointConeLimitIf_GetTwistRange(void* _this, void* range) {
	try { ((PHBallJointConeLimitIf*) _this)->GetTwistRange((Vec2d&) *((Vec2d*) range)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointSplineLimitIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointSplineLimitIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointSplineLimitIf(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointSplineLimitIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointSplineLimitIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointSplineLimitIf*) _this)) {
                (*((PHBallJointSplineLimitIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointSplineLimitIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointSplineLimitIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointSplineLimitIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointSplineLimitIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointSplineLimitIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointSplineLimitIf_AddNode(void* _this, void* node) {
	PHSplineLimitNode arg01_ = *((PHSplineLimitNode*) node);
	try { ((PHBallJointSplineLimitIf*) _this)->AddNode((PHSplineLimitNode) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointSplineLimitIf_AddNode_1(void* _this, double S, double SD, double dS, double dSD, double tMin, double tMax) {
	try { ((PHBallJointSplineLimitIf*) _this)->AddNode(S, SD, dS, dSD, tMin, tMax); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointSplineLimitIf_AddNode_2(void* _this, void* node, int pos) {
	PHSplineLimitNode arg01_ = *((PHSplineLimitNode*) node);
	try { ((PHBallJointSplineLimitIf*) _this)->AddNode((PHSplineLimitNode) arg01_, pos); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointSplineLimitIf_AddNode_3(void* _this, double S, double SD, double dS, double dSD, double tMin, double tMax, int pos) {
	try { ((PHBallJointSplineLimitIf*) _this)->AddNode(S, SD, dS, dSD, tMin, tMax, pos); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointSplineLimitIf_SetPoleTwistRange(void* _this, void* range) {
	Vec2d arg01_ = *((Vec2d*) range);
	try { ((PHBallJointSplineLimitIf*) _this)->SetPoleTwistRange((Vec2d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointSplineLimitIf_GetPoleTwistRange(void* _this, void* range) {
	try { ((PHBallJointSplineLimitIf*) _this)->GetPoleTwistRange((Vec2d&) *((Vec2d*) range)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointIndependentLimitIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointIndependentLimitIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointIndependentLimitIf(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointIndependentLimitIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIndependentLimitIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointIndependentLimitIf*) _this)) {
                (*((PHBallJointIndependentLimitIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIndependentLimitIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIndependentLimitIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointIndependentLimitIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointIndependentLimitIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointIndependentLimitIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PHBallJointIndependentLimitIf_IsOnLimit(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHBallJointIndependentLimitIf*) _this)->IsOnLimit(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) int  Spr_PHBallJointIndependentLimitIf_AxesEnabled(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHBallJointIndependentLimitIf*) _this)->AxesEnabled(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIndependentLimitIf_SetLimitRangeN(void* _this, int n, void* range) {
	Vec2d arg02_ = *((Vec2d*) range);
	try { ((PHBallJointIndependentLimitIf*) _this)->SetLimitRangeN(n, (Vec2d) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointIndependentLimitIf_GetLimitRangeN(void* _this, int n, void* range) {
	try { ((PHBallJointIndependentLimitIf*) _this)->GetLimitRangeN(n, (Vec2d&) *((Vec2d*) range)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PH1DJointMotorIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PH1DJointMotorIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PH1DJointMotorIf(void* v) {
        if (v == NULL) return;
        try { delete (PH1DJointMotorIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointMotorIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PH1DJointMotorIf*) _this)) {
                (*((PH1DJointMotorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointMotorIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointMotorIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PH1DJointMotorIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PH1DJointMotorIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PH1DJointNonLinearMotorIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PH1DJointNonLinearMotorIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PH1DJointNonLinearMotorIf(void* v) {
        if (v == NULL) return;
        try { delete (PH1DJointNonLinearMotorIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointNonLinearMotorIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PH1DJointNonLinearMotorIf*) _this)) {
                (*((PH1DJointNonLinearMotorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointNonLinearMotorIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointNonLinearMotorIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PH1DJointNonLinearMotorIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PH1DJointNonLinearMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PH1DJointNonLinearMotorIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointNonLinearMotorIf_SetSpring(void* _this, int m, void* param) {
	PH1DJointNonLinearMotorDesc::FunctionMode arg01_ = ((PH1DJointNonLinearMotorDesc::FunctionMode) m);
	try { ((PH1DJointNonLinearMotorIf*) _this)->SetSpring((PH1DJointNonLinearMotorDesc::FunctionMode) arg01_, param); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointNonLinearMotorIf_SetDamper(void* _this, int m, void* param) {
	PH1DJointNonLinearMotorDesc::FunctionMode arg01_ = ((PH1DJointNonLinearMotorDesc::FunctionMode) m);
	try { ((PH1DJointNonLinearMotorIf*) _this)->SetDamper((PH1DJointNonLinearMotorDesc::FunctionMode) arg01_, param); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PH1DJointNonLinearMotorIf_SetSpringDamper(void* _this, int smode, int dmode, void* sparam, void* dparam) {
	PH1DJointNonLinearMotorDesc::FunctionMode arg01_ = ((PH1DJointNonLinearMotorDesc::FunctionMode) smode);
	PH1DJointNonLinearMotorDesc::FunctionMode arg02_ = ((PH1DJointNonLinearMotorDesc::FunctionMode) dmode);
	try { ((PH1DJointNonLinearMotorIf*) _this)->SetSpringDamper((PH1DJointNonLinearMotorDesc::FunctionMode) arg01_, (PH1DJointNonLinearMotorDesc::FunctionMode) arg02_, sparam, dparam); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHuman1DJointResistanceIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHuman1DJointResistanceIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHuman1DJointResistanceIf(void* v) {
        if (v == NULL) return;
        try { delete (PHHuman1DJointResistanceIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHuman1DJointResistanceIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHuman1DJointResistanceIf*) _this)) {
                (*((PHHuman1DJointResistanceIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHHuman1DJointResistanceIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHuman1DJointResistanceIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHuman1DJointResistanceIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHuman1DJointResistanceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHuman1DJointResistanceIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) double  Spr_PHHuman1DJointResistanceIf_GetCurrentResistance(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHHuman1DJointResistanceIf*) _this)->GetCurrentResistance(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointMotorIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointMotorIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointMotorIf(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointMotorIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointMotorIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointMotorIf*) _this)) {
                (*((PHBallJointMotorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointMotorIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointMotorIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointMotorIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointMotorIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBallJointNonLinearMotorIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBallJointNonLinearMotorIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBallJointNonLinearMotorIf(void* v) {
        if (v == NULL) return;
        try { delete (PHBallJointNonLinearMotorIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointNonLinearMotorIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBallJointNonLinearMotorIf*) _this)) {
                (*((PHBallJointNonLinearMotorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointNonLinearMotorIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointNonLinearMotorIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBallJointNonLinearMotorIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBallJointNonLinearMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBallJointNonLinearMotorIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBallJointNonLinearMotorIf_SetFuncFromDatabaseN(void* _this, int n, int i, int j, void* sparam, void* dparam) {
	try { ((PHBallJointNonLinearMotorIf*) _this)->SetFuncFromDatabaseN(n, i, j, sparam, dparam); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHHumanBallJointResistanceIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHHumanBallJointResistanceIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHHumanBallJointResistanceIf(void* v) {
        if (v == NULL) return;
        try { delete (PHHumanBallJointResistanceIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHumanBallJointResistanceIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHHumanBallJointResistanceIf*) _this)) {
                (*((PHHumanBallJointResistanceIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHHumanBallJointResistanceIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHHumanBallJointResistanceIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHHumanBallJointResistanceIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHumanBallJointResistanceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHHumanBallJointResistanceIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHHumanBallJointResistanceIf_GetCurrentResistance(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHHumanBallJointResistanceIf*) _this)->GetCurrentResistance(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSpringMotorIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSpringMotorIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSpringMotorIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSpringMotorIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringMotorIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSpringMotorIf*) _this)) {
                (*((PHSpringMotorIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSpringMotorIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringMotorIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSpringMotorIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSpringMotorIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSpringMotorIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpObjIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpObjIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpObjIf(void* v) {
        if (v == NULL) return;
        try { delete (PHOpObjIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpObjIf*) _this)) {
                (*((PHOpObjIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpObjIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpObjIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PHOpObjIf_initialPHOpObj(void* _this, void* vts, int vtsNum, float pSize) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpObjIf*) _this)->initialPHOpObj((Vec3f*) vts, vtsNum, pSize); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_SetGravity(void* _this, char bOn) {
	bool arg01_ = (bOn == 0) ? false : true;
	try { ((PHOpObjIf*) _this)->SetGravity((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_SimpleSimulationStep(void* _this) {
	try { ((PHOpObjIf*) _this)->SimpleSimulationStep(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_AddVertextoLocalBuffer(void* _this, void* v) {
	Vec3f arg01_ = *((Vec3f*) v);
	try { ((PHOpObjIf*) _this)->AddVertextoLocalBuffer((Vec3f) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpObjIf_InitialObjUsingLocalBuffer(void* _this, float pSize) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpObjIf*) _this)->InitialObjUsingLocalBuffer(pSize); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_positionPredict(void* _this) {
	try { ((PHOpObjIf*) _this)->positionPredict(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_groupStep(void* _this) {
	try { ((PHOpObjIf*) _this)->groupStep(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_integrationStep(void* _this) {
	try { ((PHOpObjIf*) _this)->integrationStep(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_ReducedPositionProject(void* _this) {
	try { ((PHOpObjIf*) _this)->ReducedPositionProject(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_positionProject(void* _this) {
	try { ((PHOpObjIf*) _this)->positionProject(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_SetDefaultLinkNum(void* _this, int linkNum) {
	try { ((PHOpObjIf*) _this)->SetDefaultLinkNum(linkNum); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_BuildBlendWeight(void* _this) {
	try { ((PHOpObjIf*) _this)->BuildBlendWeight(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_buildGroupCenter(void* _this) {
	try { ((PHOpObjIf*) _this)->buildGroupCenter(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpObjIf_GetVertexNum(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetVertexNum(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjIf_GetVertex(void* _this, int vi) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((PHOpObjIf*) _this)->GetVertex(vi); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjIf_GetOpParticle(void* _this, int pi) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((PHOpObjIf*) _this)->GetOpParticle(pi); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpObjIf_GetOpGroup(void* _this, int gi) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((PHOpObjIf*) _this)->GetOpGroup(gi); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHOpObjIf_GetobjVtoPmap(void* _this, int vi) {
	int _val = (int) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetobjVtoPmap(vi); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) float  Spr_PHOpObjIf_GetVtxBlendWeight(void* _this, int Vtxi, int Grpi) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetVtxBlendWeight(Vtxi, Grpi); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_SetVelocityDamping(void* _this, float vd) {
	try { ((PHOpObjIf*) _this)->SetVelocityDamping(vd); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpObjIf_GetVelocityDamping(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetVelocityDamping(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) float  Spr_PHOpObjIf_GetBoundLength(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetBoundLength(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_SetBound(void* _this, float b) {
	try { ((PHOpObjIf*) _this)->SetBound(b); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_SetTimeStep(void* _this, float t) {
	try { ((PHOpObjIf*) _this)->SetTimeStep(t); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpObjIf_GetTimeStep(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetTimeStep(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) float  Spr_PHOpObjIf_GetObjBeta(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetObjBeta(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_SetObjBeta(void* _this, float beta) {
	try { ((PHOpObjIf*) _this)->SetObjBeta(beta); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_SetObjAlpha(void* _this, float alpha) {
	try { ((PHOpObjIf*) _this)->SetObjAlpha(alpha); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpObjIf_GetObjAlpha(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetObjAlpha(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) char  Spr_PHOpObjIf_GetObjDstConstraint(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetObjDstConstraint(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_SetObjDstConstraint(void* _this, char d) {
	bool arg01_ = (d == 0) ? false : true;
	try { ((PHOpObjIf*) _this)->SetObjDstConstraint((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_SetObjItrTime(void* _this, int itrT) {
	try { ((PHOpObjIf*) _this)->SetObjItrTime(itrT); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHOpObjIf_GetObjItrTime(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpObjIf*) _this)->GetObjItrTime(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpObjIf_StoreOrigPose(void* _this) {
	try { ((PHOpObjIf*) _this)->StoreOrigPose(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpParticleIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpParticleIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpParticleIf(void* v) {
        if (v == NULL) return;
        try { delete (PHOpParticleIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpParticleIf*) _this)) {
                (*((PHOpParticleIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpParticleIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpParticleIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpParticleIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHOpParticleIf_GetOpPtclVtxId(void* _this, int vi) {
	int _val = (int) NULL;
	try { _val = ((PHOpParticleIf*) _this)->GetOpPtclVtxId(vi); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHOpParticleIf_GetinGrpListNum(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpParticleIf*) _this)->GetinGrpListNum(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHOpParticleIf_GetinGrpList(void* _this, int gi) {
	int _val = (int) NULL;
	try { _val = ((PHOpParticleIf*) _this)->GetinGrpList(gi); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) float  Spr_PHOpParticleIf_GetVtxDisWeight(void* _this, int vi) {
	float _val = (float) NULL;
	try { _val = ((PHOpParticleIf*) _this)->GetVtxDisWeight(vi); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpParticleIf_GetParticleDesc(void* _this) {
        PHOpParticleDesc* _ptr = (PHOpParticleDesc*) NULL;
        try { PHOpParticleDesc* _ary = (((PHOpParticleIf*) _this)->GetParticleDesc());
              int _size = 0;
              _ptr = new PHOpParticleDesc[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpGroupIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpGroupIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpGroupIf(void* v) {
        if (v == NULL) return;
        try { delete (PHOpGroupIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpGroupIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpGroupIf*) _this)) {
                (*((PHOpGroupIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpGroupIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpGroupIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpGroupIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpGroupIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpGroupIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHOpGroupIf_GetGrpInPtclNum(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHOpGroupIf*) _this)->GetGrpInPtclNum(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHOpGroupIf_GetGrpInPtcl(void* _this, int gi) {
	int _val = (int) NULL;
	try { _val = ((PHOpGroupIf*) _this)->GetGrpInPtcl(gi); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpGroupIf_GetGroupDesc(void* _this) {
        PHOpGroupDesc* _ptr = (PHOpGroupDesc*) NULL;
        try { PHOpGroupDesc* _ary = (((PHOpGroupIf*) _this)->GetGroupDesc());
              int _size = 0;
              _ptr = new PHOpGroupDesc[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpHapticControllerIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpHapticControllerIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpHapticControllerIf(void* v) {
        if (v == NULL) return;
        try { delete (PHOpHapticControllerIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpHapticControllerIf*) _this)) {
                (*((PHOpHapticControllerIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpHapticControllerIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpHapticControllerIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerIf_SetHCForceReady(void* _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHOpHapticControllerIf*) _this)->SetHCForceReady((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticControllerIf_GetHCForceReady(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpHapticControllerIf*) _this)->GetHCForceReady(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticControllerIf_CheckProxyState(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpHapticControllerIf*) _this)->CheckProxyState(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerIf_AddColliedPtcl(void* _this, int pIndex, int objindex, void* ctcPos) {
	Vec3f arg03_ = *((Vec3f*) ctcPos);
	try { ((PHOpHapticControllerIf*) _this)->AddColliedPtcl(pIndex, objindex, (Vec3f) arg03_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticControllerIf_BeginLogForce(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpHapticControllerIf*) _this)->BeginLogForce(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerIf_EndLogForce(void* _this) {
	try { ((PHOpHapticControllerIf*) _this)->EndLogForce(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerIf_setC_ObstacleRadius(void* _this, float r) {
	try { ((PHOpHapticControllerIf*) _this)->setC_ObstacleRadius(r); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerIf_GetUserPos(void* _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((PHOpHapticControllerIf*) _this)->GetUserPos(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerIf_GetHCPosition(void* _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((PHOpHapticControllerIf*) _this)->GetHCPosition(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerIf_SetHCPosition(void* _this, void* pos) {
	Vec3f arg01_ = *((Vec3f*) pos);
	try { ((PHOpHapticControllerIf*) _this)->SetHCPosition((Vec3f) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticControllerIf_SetHCPose(void* _this, void* pose) {
	Posef arg01_ = *((Posef*) pose);
	try { ((PHOpHapticControllerIf*) _this)->SetHCPose((Posef) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerIf_GetHCPose(void* _this) {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = ((PHOpHapticControllerIf*) _this)->GetHCPose(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) float  Spr_PHOpHapticControllerIf_GetC_ObstacleRadius(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpHapticControllerIf*) _this)->GetC_ObstacleRadius(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticControllerIf_GetCurrentOutputForce(void* _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((PHOpHapticControllerIf*) _this)->GetCurrentOutputForce(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpHapticRendererIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpHapticRendererIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpHapticRendererIf(void* v) {
        if (v == NULL) return;
        try { delete (PHOpHapticRendererIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticRendererIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpHapticRendererIf*) _this)) {
                (*((PHOpHapticRendererIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticRendererIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpHapticRendererIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpHapticRendererIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpHapticRendererIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpHapticRendererIf_SetRigid(void* _this, char set) {
	bool arg01_ = (set == 0) ? false : true;
	try { ((PHOpHapticRendererIf*) _this)->SetRigid((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpHapticRendererIf_IsRigid(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpHapticRendererIf*) _this)->IsRigid(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpAnimationIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpAnimationIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpAnimationIf(void* v) {
        if (v == NULL) return;
        try { delete (PHOpAnimationIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpAnimationIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpAnimationIf*) _this)) {
                (*((PHOpAnimationIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpAnimationIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpAnimationIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpAnimationIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpAnimationIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpAnimationIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpAnimationIf_AddAnimationP(void* _this, int objIndex, int pIndex, void* start, void* end, float totalTime) {
	Vec3f arg03_ = *((Vec3f*) start);
	Vec3f arg04_ = *((Vec3f*) end);
	try { ((PHOpAnimationIf*) _this)->AddAnimationP(objIndex, pIndex, (Vec3f) arg03_, (Vec3f) arg04_, totalTime); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpAnimationIf_AddAnimationP_1(void* _this, int objIndex, int pIndex, void* force, float totalTime) {
	Vec3f arg03_ = *((Vec3f*) force);
	try { ((PHOpAnimationIf*) _this)->AddAnimationP(objIndex, pIndex, (Vec3f) arg03_, totalTime); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpAnimationIf_AnimationStep(void* _this, void* opEngine) {
	try { ((PHOpAnimationIf*) _this)->AnimationStep(opEngine); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpAnimationIf_AnimationIntergration(void* _this, void* opEngine) {
	try { ((PHOpAnimationIf*) _this)->AnimationIntergration(opEngine); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHOpSpHashColliAgentIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHOpSpHashColliAgentIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHOpSpHashColliAgentIf(void* v) {
        if (v == NULL) return;
        try { delete (PHOpSpHashColliAgentIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpSpHashColliAgentIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHOpSpHashColliAgentIf*) _this)) {
                (*((PHOpSpHashColliAgentIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpSpHashColliAgentIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHOpSpHashColliAgentIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHOpSpHashColliAgentIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHOpSpHashColliAgentIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_SetCollisionCstrStiffness(void* _this, float alpha) {
	try { ((PHOpSpHashColliAgentIf*) _this)->SetCollisionCstrStiffness(alpha); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHOpSpHashColliAgentIf_GetCollisionCstrStiffness(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHOpSpHashColliAgentIf*) _this)->GetCollisionCstrStiffness(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_EnableCollisionDetection(void* _this, char able) {
	bool arg01_ = (able == 0) ? false : true;
	try { ((PHOpSpHashColliAgentIf*) _this)->EnableCollisionDetection((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_EnableCollisionDetection_1(void* _this) {
	try { ((PHOpSpHashColliAgentIf*) _this)->EnableCollisionDetection(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_Initial(void* _this, float cellSize, void* bounds) {
	CDBounds arg02_ = *((CDBounds*) bounds);
	try { ((PHOpSpHashColliAgentIf*) _this)->Initial(cellSize, (CDBounds) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_OpCollisionProcedure(void* _this, int myTimeStamp) {
	try { ((PHOpSpHashColliAgentIf*) _this)->OpCollisionProcedure(myTimeStamp); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_OpCollisionProcedure_1(void* _this) {
	try { ((PHOpSpHashColliAgentIf*) _this)->OpCollisionProcedure(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_OpDirCollision(void* _this) {
	try { ((PHOpSpHashColliAgentIf*) _this)->OpDirCollision(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_AddContactPlane(void* _this, void* planeP, void* planeN) {
	Vec3f arg01_ = *((Vec3f*) planeP);
	Vec3f arg02_ = *((Vec3f*) planeN);
	try { ((PHOpSpHashColliAgentIf*) _this)->AddContactPlane((Vec3f) arg01_, (Vec3f) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpSpHashColliAgentIf_IsCollisionEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpSpHashColliAgentIf*) _this)->IsCollisionEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_SetIsDirCollision(void* _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHOpSpHashColliAgentIf*) _this)->SetIsDirCollision((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpSpHashColliAgentIf_GetIsDirCollision(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpSpHashColliAgentIf*) _this)->GetIsDirCollision(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHOpSpHashColliAgentIf_SetDebugMode(void* _this, char flag) {
	bool arg01_ = (flag == 0) ? false : true;
	try { ((PHOpSpHashColliAgentIf*) _this)->SetDebugMode((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHOpSpHashColliAgentIf_GetDebugMode(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHOpSpHashColliAgentIf*) _this)->GetDebugMode(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHRayIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHRayIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHRayIf(void* v) {
        if (v == NULL) return;
        try { delete (PHRayIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHRayIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHRayIf*) _this)) {
                (*((PHRayIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHRayIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHRayIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHRayIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHRayIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHRayIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHRayIf_GetOrigin(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHRayIf*) _this)->GetOrigin(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHRayIf_SetOrigin(void* _this, void* ori) {
	try { ((PHRayIf*) _this)->SetOrigin((const Vec3d&) *((Vec3d*) ori)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHRayIf_GetDirection(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHRayIf*) _this)->GetDirection(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHRayIf_SetDirection(void* _this, void* dir) {
	try { ((PHRayIf*) _this)->SetDirection((const Vec3d&) *((Vec3d*) dir)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHRayIf_Apply(void* _this) {
	try { ((PHRayIf*) _this)->Apply(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHRayIf_NHits(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHRayIf*) _this)->NHits(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHRayIf_GetHits(void* _this) {
        PHRaycastHit* _ptr = (PHRaycastHit*) NULL;
        try { PHRaycastHit* _ary = (((PHRayIf*) _this)->GetHits());
              int _size = 0;
              _ptr = new PHRaycastHit[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHRayIf_GetNearest(void* _this) {
        PHRaycastHit* _ptr = (PHRaycastHit*) NULL;
        try { PHRaycastHit* _ary = (((PHRayIf*) _this)->GetNearest());
              int _size = 0;
              _ptr = new PHRaycastHit[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHRayIf_GetDynamicalNearest(void* _this) {
        PHRaycastHit* _ptr = (PHRaycastHit*) NULL;
        try { PHRaycastHit* _ary = (((PHRayIf*) _this)->GetDynamicalNearest());
              int _size = 0;
              _ptr = new PHRaycastHit[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSceneIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSceneIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSceneIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSceneIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSceneIf*) _this)) {
                (*((PHSceneIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSceneIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSceneIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetSdk(void* _this) {
	PHSdkIf* _ptr = (PHSdkIf*) NULL;
	try { _ptr = (PHSdkIf*) ((PHSceneIf*) _this)->GetSdk(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateSolid(void* _this, void* desc) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHSceneIf*) _this)->CreateSolid((const PHSolidDesc&) *((PHSolidDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateSolid_1(void* _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHSceneIf*) _this)->CreateSolid(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NSolids(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NSolids(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetSolid(void* _this, int idx) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHSceneIf*) _this)->GetSolid(idx); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_GetSolidIndex(void* _this, void* s) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->GetSolidIndex((PHSolidIf*) s); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetSolids(void* _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHSceneIf*) _this)->GetSolids(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NSolidPairs(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NSolidPairs(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetSolidPair(void* _this, int i, int j) {
	PHSolidPairForLCPIf* _ptr = (PHSolidPairForLCPIf*) NULL;
	try { _ptr = (PHSolidPairForLCPIf*) ((PHSceneIf*) _this)->GetSolidPair(i, j); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetSolidPair_1(void* _this, void* lhs, void* rhs, char bSwap) {
	bool arg03_ = (bSwap == 0) ? false : true;
	PHSolidPairForLCPIf* _ptr = (PHSolidPairForLCPIf*) NULL;
	try { _ptr = (PHSolidPairForLCPIf*) ((PHSceneIf*) _this)->GetSolidPair((PHSolidIf*) lhs, (PHSolidIf*) rhs, (bool&) arg03_); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetContactMode(void* _this, void* lhs, void* rhs, int mode) {
	PHSceneDesc::ContactMode arg03_ = ((PHSceneDesc::ContactMode) mode);
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf*) lhs, (PHSolidIf*) rhs, (PHSceneDesc::ContactMode) arg03_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetContactMode_1(void* _this, void* lhs, void* rhs) {
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf*) lhs, (PHSolidIf*) rhs); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetContactMode_2(void* _this, void* group, size_t length, int mode) {
	PHSceneDesc::ContactMode arg03_ = ((PHSceneDesc::ContactMode) mode);
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf**) group, length, (PHSceneDesc::ContactMode) arg03_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetContactMode_3(void* _this, void* group, size_t length) {
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf**) group, length); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetContactMode_4(void* _this, void* solid, int mode) {
	PHSceneDesc::ContactMode arg02_ = ((PHSceneDesc::ContactMode) mode);
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf*) solid, (PHSceneDesc::ContactMode) arg02_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetContactMode_5(void* _this, void* solid) {
	try { ((PHSceneIf*) _this)->SetContactMode((PHSolidIf*) solid); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetContactMode_6(void* _this, int mode) {
	PHSceneDesc::ContactMode arg01_ = ((PHSceneDesc::ContactMode) mode);
	try { ((PHSceneIf*) _this)->SetContactMode((PHSceneDesc::ContactMode) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetContactMode_7(void* _this) {
	try { ((PHSceneIf*) _this)->SetContactMode(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateJoint(void* _this, void* lhs, void* rhs, void* ii, void* desc) {
	PHJointIf* _ptr = (PHJointIf*) NULL;
	try { _ptr = (PHJointIf*) ((PHSceneIf*) _this)->CreateJoint((PHSolidIf*) lhs, (PHSolidIf*) rhs, (const IfInfo*) ii, (const PHJointDesc&) *((PHJointDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NJoints(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NJoints(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetJoint(void* _this, int i) {
	PHJointIf* _ptr = (PHJointIf*) NULL;
	try { _ptr = (PHJointIf*) ((PHSceneIf*) _this)->GetJoint(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NContacts(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NContacts(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetContact(void* _this, int i) {
	PHContactPointIf* _ptr = (PHContactPointIf*) NULL;
	try { _ptr = (PHContactPointIf*) ((PHSceneIf*) _this)->GetContact(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NFemMeshes(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NFemMeshes(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetFemMesh(void* _this, int i) {
	PHFemMeshIf* _ptr = (PHFemMeshIf*) NULL;
	try { _ptr = (PHFemMeshIf*) ((PHSceneIf*) _this)->GetFemMesh(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NFemMeshesNew(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NFemMeshesNew(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetFemMeshNew(void* _this, int i) {
	PHFemMeshNewIf* _ptr = (PHFemMeshNewIf*) NULL;
	try { _ptr = (PHFemMeshNewIf*) ((PHSceneIf*) _this)->GetFemMeshNew(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateRootNode(void* _this, void* root, void* desc) {
	PHRootNodeIf* _ptr = (PHRootNodeIf*) NULL;
	try { _ptr = (PHRootNodeIf*) ((PHSceneIf*) _this)->CreateRootNode((PHSolidIf*) root, (const PHRootNodeDesc&) *((PHRootNodeDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateRootNode_1(void* _this, void* root) {
	PHRootNodeIf* _ptr = (PHRootNodeIf*) NULL;
	try { _ptr = (PHRootNodeIf*) ((PHSceneIf*) _this)->CreateRootNode((PHSolidIf*) root); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NRootNodes(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NRootNodes(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetRootNode(void* _this, int i) {
	PHRootNodeIf* _ptr = (PHRootNodeIf*) NULL;
	try { _ptr = (PHRootNodeIf*) ((PHSceneIf*) _this)->GetRootNode(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateTreeNode(void* _this, void* parent, void* child, void* desc) {
	PHTreeNodeIf* _ptr = (PHTreeNodeIf*) NULL;
	try { _ptr = (PHTreeNodeIf*) ((PHSceneIf*) _this)->CreateTreeNode((PHTreeNodeIf*) parent, (PHSolidIf*) child, (const PHTreeNodeDesc&) *((PHTreeNodeDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateTreeNode_1(void* _this, void* parent, void* child) {
	PHTreeNodeIf* _ptr = (PHTreeNodeIf*) NULL;
	try { _ptr = (PHTreeNodeIf*) ((PHSceneIf*) _this)->CreateTreeNode((PHTreeNodeIf*) parent, (PHSolidIf*) child); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateTreeNodes(void* _this, void* solid) {
	PHRootNodeIf* _ptr = (PHRootNodeIf*) NULL;
	try { _ptr = (PHRootNodeIf*) ((PHSceneIf*) _this)->CreateTreeNodes((PHSolidIf*) solid); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateGear(void* _this, void* lhs, void* rhs, void* desc) {
	PHGearIf* _ptr = (PHGearIf*) NULL;
	try { _ptr = (PHGearIf*) ((PHSceneIf*) _this)->CreateGear((PH1DJointIf*) lhs, (PH1DJointIf*) rhs, (const PHGearDesc&) *((PHGearDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateGear_1(void* _this, void* lhs, void* rhs) {
	PHGearIf* _ptr = (PHGearIf*) NULL;
	try { _ptr = (PHGearIf*) ((PHSceneIf*) _this)->CreateGear((PH1DJointIf*) lhs, (PH1DJointIf*) rhs); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NGears(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NGears(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetGear(void* _this, int i) {
	PHGearIf* _ptr = (PHGearIf*) NULL;
	try { _ptr = (PHGearIf*) ((PHSceneIf*) _this)->GetGear(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreatePath(void* _this, void* desc) {
	PHPathIf* _ptr = (PHPathIf*) NULL;
	try { _ptr = (PHPathIf*) ((PHSceneIf*) _this)->CreatePath((const PHPathDesc&) *((PHPathDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreatePath_1(void* _this) {
	PHPathIf* _ptr = (PHPathIf*) NULL;
	try { _ptr = (PHPathIf*) ((PHSceneIf*) _this)->CreatePath(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NPaths(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NPaths(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetPath(void* _this, int i) {
	PHPathIf* _ptr = (PHPathIf*) NULL;
	try { _ptr = (PHPathIf*) ((PHSceneIf*) _this)->GetPath(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateRay(void* _this, void* desc) {
	PHRayIf* _ptr = (PHRayIf*) NULL;
	try { _ptr = (PHRayIf*) ((PHSceneIf*) _this)->CreateRay((const PHRayDesc&) *((PHRayDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateRay_1(void* _this) {
	PHRayIf* _ptr = (PHRayIf*) NULL;
	try { _ptr = (PHRayIf*) ((PHSceneIf*) _this)->CreateRay(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NRays(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NRays(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetRay(void* _this, int i) {
	PHRayIf* _ptr = (PHRayIf*) NULL;
	try { _ptr = (PHRayIf*) ((PHSceneIf*) _this)->GetRay(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_PHSceneIf_SetPosesOfJointedSolids(void* _this, void* base) {
	bool _val = (bool) NULL;
	try { _val = ((PHSceneIf*) _this)->SetPosesOfJointedSolids((const PHSolidIf*) base); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateIKActuator(void* _this, void* ii, void* desc) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHSceneIf*) _this)->CreateIKActuator((const IfInfo*) ii, (const PHIKActuatorDesc&) *((PHIKActuatorDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateIKActuator_1(void* _this, void* ii) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHSceneIf*) _this)->CreateIKActuator((const IfInfo*) ii); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NIKActuators(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NIKActuators(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetIKActuator(void* _this, int i) {
	PHIKActuatorIf* _ptr = (PHIKActuatorIf*) NULL;
	try { _ptr = (PHIKActuatorIf*) ((PHSceneIf*) _this)->GetIKActuator(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateIKEndEffector(void* _this, void* desc) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((PHSceneIf*) _this)->CreateIKEndEffector((const PHIKEndEffectorDesc&) *((PHIKEndEffectorDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateIKEndEffector_1(void* _this) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((PHSceneIf*) _this)->CreateIKEndEffector(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NIKEndEffectors(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NIKEndEffectors(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetIKEndEffector(void* _this, int i) {
	PHIKEndEffectorIf* _ptr = (PHIKEndEffectorIf*) NULL;
	try { _ptr = (PHIKEndEffectorIf*) ((PHSceneIf*) _this)->GetIKEndEffector(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NSkeletons(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NSkeletons(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetSkeleton(void* _this, int i) {
	PHSkeletonIf* _ptr = (PHSkeletonIf*) NULL;
	try { _ptr = (PHSkeletonIf*) ((PHSceneIf*) _this)->GetSkeleton(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateSkeleton(void* _this, void* desc) {
	PHSkeletonIf* _ptr = (PHSkeletonIf*) NULL;
	try { _ptr = (PHSkeletonIf*) ((PHSceneIf*) _this)->CreateSkeleton((const PHSkeletonDesc&) *((PHSkeletonDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateSkeleton_1(void* _this) {
	PHSkeletonIf* _ptr = (PHSkeletonIf*) NULL;
	try { _ptr = (PHSkeletonIf*) ((PHSceneIf*) _this)->CreateSkeleton(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetTimeStep(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetTimeStep(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetTimeStepInv(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetTimeStepInv(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetTimeStep(void* _this, double dt) {
	try { ((PHSceneIf*) _this)->SetTimeStep(dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetHapticTimeStep(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetHapticTimeStep(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetHapticTimeStep(void* _this, double dt) {
	try { ((PHSceneIf*) _this)->SetHapticTimeStep(dt); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) unsigned int  Spr_PHSceneIf_GetCount(void* _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((PHSceneIf*) _this)->GetCount(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetCount(void* _this, unsigned int count) {
	try { ((PHSceneIf*) _this)->SetCount(count); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetGravity(void* _this, void* accel) {
	try { ((PHSceneIf*) _this)->SetGravity((const Vec3d&) *((Vec3d*) accel)); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetGravity(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((PHSceneIf*) _this)->GetGravity(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetAirResistanceRateForVelocity(void* _this, double rate) {
	try { ((PHSceneIf*) _this)->SetAirResistanceRateForVelocity(rate); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetAirResistanceRateForAngularVelocity(void* _this, double rate) {
	try { ((PHSceneIf*) _this)->SetAirResistanceRateForAngularVelocity(rate); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetAirResistanceRateForVelocity(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetAirResistanceRateForVelocity(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetAirResistanceRateForAngularVelocity(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetAirResistanceRateForAngularVelocity(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetContactTolerance(void* _this, double tol) {
	try { ((PHSceneIf*) _this)->SetContactTolerance(tol); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetContactTolerance(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetContactTolerance(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetImpactThreshold(void* _this, double vth) {
	try { ((PHSceneIf*) _this)->SetImpactThreshold(vth); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetImpactThreshold(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetImpactThreshold(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetFrictionThreshold(void* _this, double vth) {
	try { ((PHSceneIf*) _this)->SetFrictionThreshold(vth); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetFrictionThreshold(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetFrictionThreshold(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetMaxVelocity(void* _this, double vmax) {
	try { ((PHSceneIf*) _this)->SetMaxVelocity(vmax); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetMaxVelocity(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxVelocity(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetMaxAngularVelocity(void* _this, double wmax) {
	try { ((PHSceneIf*) _this)->SetMaxAngularVelocity(wmax); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetMaxAngularVelocity(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxAngularVelocity(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetMaxForce(void* _this, double fmax) {
	try { ((PHSceneIf*) _this)->SetMaxForce(fmax); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetMaxForce(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxForce(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetMaxMoment(void* _this, double tmax) {
	try { ((PHSceneIf*) _this)->SetMaxMoment(tmax); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetMaxMoment(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxMoment(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetMaxDeltaPosition(void* _this, double dpmax) {
	try { ((PHSceneIf*) _this)->SetMaxDeltaPosition(dpmax); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetMaxDeltaPosition(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxDeltaPosition(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetMaxDeltaOrientation(void* _this, double dqmax) {
	try { ((PHSceneIf*) _this)->SetMaxDeltaOrientation(dqmax); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHSceneIf_GetMaxDeltaOrientation(void* _this) {
	double _val = (double) NULL;
	try { _val = ((PHSceneIf*) _this)->GetMaxDeltaOrientation(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_GetLCPSolver(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->GetLCPSolver(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetLCPSolver(void* _this, int method) {
	try { ((PHSceneIf*) _this)->SetLCPSolver(method); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_GetNumIteration(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->GetNumIteration(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetNumIteration(void* _this, int n) {
	try { ((PHSceneIf*) _this)->SetNumIteration(n); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetStateMode(void* _this, char bConstraints) {
	bool arg01_ = (bConstraints == 0) ? false : true;
	try { ((PHSceneIf*) _this)->SetStateMode((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_EnableContactDetection(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHSceneIf*) _this)->EnableContactDetection((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSceneIf_IsContactDetectionEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHSceneIf*) _this)->IsContactDetectionEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_EnableCCD(void* _this, char enable) {
	bool arg01_ = (enable == 0) ? false : true;
	try { ((PHSceneIf*) _this)->EnableCCD((bool) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHSceneIf_IsCCDEnabled(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((PHSceneIf*) _this)->IsCCDEnabled(); }
	catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetBroadPhaseMode(void* _this, int mode) {
	try { ((PHSceneIf*) _this)->SetBroadPhaseMode(mode); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_GetBroadPhaseMode(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->GetBroadPhaseMode(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetContactDetectionRange(void* _this, void* center, void* extent, int nx, int ny, int nz) {
	Vec3f arg01_ = *((Vec3f*) center);
	Vec3f arg02_ = *((Vec3f*) extent);
	try { ((PHSceneIf*) _this)->SetContactDetectionRange((Vec3f) arg01_, (Vec3f) arg02_, nx, ny, nz); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_SetMaterialBlending(void* _this, int mode) {
	try { ((PHSceneIf*) _this)->SetMaterialBlending(mode); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_GetMaterialBlending(void* _this) {
	try { ((PHSceneIf*) _this)->GetMaterialBlending(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_Step(void* _this) {
	try { ((PHSceneIf*) _this)->Step(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_ClearForce(void* _this) {
	try { ((PHSceneIf*) _this)->ClearForce(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_GenerateForce(void* _this) {
	try { ((PHSceneIf*) _this)->GenerateForce(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_Integrate(void* _this) {
	try { ((PHSceneIf*) _this)->Integrate(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_IntegratePart1(void* _this) {
	try { ((PHSceneIf*) _this)->IntegratePart1(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_IntegratePart2(void* _this) {
	try { ((PHSceneIf*) _this)->IntegratePart2(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_Clear(void* _this) {
	try { ((PHSceneIf*) _this)->Clear(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHSceneIf_NEngines(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSceneIf*) _this)->NEngines(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetEngine(void* _this, int i) {
	PHEngineIf* _ptr = (PHEngineIf*) NULL;
	try { _ptr = (PHEngineIf*) ((PHSceneIf*) _this)->GetEngine(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetConstraintEngine(void* _this) {
	PHConstraintEngineIf* _ptr = (PHConstraintEngineIf*) NULL;
	try { _ptr = (PHConstraintEngineIf*) ((PHSceneIf*) _this)->GetConstraintEngine(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetGravityEngine(void* _this) {
	PHGravityEngineIf* _ptr = (PHGravityEngineIf*) NULL;
	try { _ptr = (PHGravityEngineIf*) ((PHSceneIf*) _this)->GetGravityEngine(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetPenaltyEngine(void* _this) {
	PHPenaltyEngineIf* _ptr = (PHPenaltyEngineIf*) NULL;
	try { _ptr = (PHPenaltyEngineIf*) ((PHSceneIf*) _this)->GetPenaltyEngine(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetIKEngine(void* _this) {
	PHIKEngineIf* _ptr = (PHIKEngineIf*) NULL;
	try { _ptr = (PHIKEngineIf*) ((PHSceneIf*) _this)->GetIKEngine(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetFemEngine(void* _this) {
	PHFemEngineIf* _ptr = (PHFemEngineIf*) NULL;
	try { _ptr = (PHFemEngineIf*) ((PHSceneIf*) _this)->GetFemEngine(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetHapticEngine(void* _this) {
	PHHapticEngineIf* _ptr = (PHHapticEngineIf*) NULL;
	try { _ptr = (PHHapticEngineIf*) ((PHSceneIf*) _this)->GetHapticEngine(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetOpEngine(void* _this) {
	PHOpEngineIf* _ptr = (PHOpEngineIf*) NULL;
	try { _ptr = (PHOpEngineIf*) ((PHSceneIf*) _this)->GetOpEngine(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_GetOpColliAgent(void* _this) {
	PHOpSpHashColliAgentIf* _ptr = (PHOpSpHashColliAgentIf*) NULL;
	try { _ptr = (PHOpSpHashColliAgentIf*) ((PHSceneIf*) _this)->GetOpColliAgent(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSceneIf_CreateHapticPointer(void* _this) {
	PHHapticPointerIf* _ptr = (PHHapticPointerIf*) NULL;
	try { _ptr = (PHHapticPointerIf*) ((PHSceneIf*) _this)->CreateHapticPointer(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_StepHapticLoop(void* _this) {
	try { ((PHSceneIf*) _this)->StepHapticLoop(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHSceneIf_StepHapticSync(void* _this) {
	try { ((PHSceneIf*) _this)->StepHapticSync(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSdkIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSdkIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSdkIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSdkIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSdkIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSdkIf*) _this)) {
                (*((PHSdkIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSdkIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSdkIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSdkIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSdkIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSdkIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSdkIf_CreateScene(void* _this, void* desc) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((PHSdkIf*) _this)->CreateScene((const PHSceneDesc&) *((PHSceneDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSdkIf_CreateScene_1(void* _this) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((PHSdkIf*) _this)->CreateScene(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSdkIf_NScene(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSdkIf*) _this)->NScene(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSdkIf_GetScene(void* _this, int i) {
	PHSceneIf* _ptr = (PHSceneIf*) NULL;
	try { _ptr = (PHSceneIf*) ((PHSdkIf*) _this)->GetScene(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSdkIf_MergeScene(void* _this, void* scene0, void* scene1) {
	try { ((PHSdkIf*) _this)->MergeScene((PHSceneIf*) scene0, (PHSceneIf*) scene1); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSdkIf_CreateShape(void* _this, void* ii, void* desc) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((PHSdkIf*) _this)->CreateShape((const IfInfo*) ii, (const CDShapeDesc&) *((CDShapeDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSdkIf_NShape(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSdkIf*) _this)->NShape(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSdkIf_GetShape(void* _this, int i) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	try { _ptr = (CDShapeIf*) ((PHSdkIf*) _this)->GetShape(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSdkIf_CreateSdk(void* desc) {
	PHSdkIf* _ptr = (PHSdkIf*) NULL;
	try { _ptr = (PHSdkIf*) PHSdkIf::CreateSdk((const PHSdkDesc&) *((PHSdkDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSdkIf_CreateSdk_1() {
	PHSdkIf* _ptr = (PHSdkIf*) NULL;
	try { _ptr = (PHSdkIf*) PHSdkIf::CreateSdk(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHSdkIf_RegisterSdk() {
	try { PHSdkIf::RegisterSdk(); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHBoneIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHBoneIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHBoneIf(void* v) {
        if (v == NULL) return;
        try { delete (PHBoneIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBoneIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHBoneIf*) _this)) {
                (*((PHBoneIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHBoneIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBoneIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHBoneIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHBoneIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHBoneIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBoneIf_SetSolid(void* _this, void* solid) {
	try { ((PHBoneIf*) _this)->SetSolid((PHSolidIf*) solid); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBoneIf_GetSolid(void* _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHBoneIf*) _this)->GetSolid(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBoneIf_SetProxySolid(void* _this, void* solid) {
	try { ((PHBoneIf*) _this)->SetProxySolid((PHSolidIf*) solid); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBoneIf_GetProxySolid(void* _this) {
	PHSolidIf* _ptr = (PHSolidIf*) NULL;
	try { _ptr = (PHSolidIf*) ((PHBoneIf*) _this)->GetProxySolid(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBoneIf_SetJoint(void* _this, void* joint) {
	try { ((PHBoneIf*) _this)->SetJoint((PHJointIf*) joint); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBoneIf_GetJoint(void* _this) {
	PHJointIf* _ptr = (PHJointIf*) NULL;
	try { _ptr = (PHJointIf*) ((PHBoneIf*) _this)->GetJoint(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBoneIf_SetParent(void* _this, void* parent) {
	try { ((PHBoneIf*) _this)->SetParent((PHBoneIf*) parent); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHBoneIf_GetParent(void* _this) {
	PHBoneIf* _ptr = (PHBoneIf*) NULL;
	try { _ptr = (PHBoneIf*) ((PHBoneIf*) _this)->GetParent(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHBoneIf_SetLength(void* _this, double length) {
	try { ((PHBoneIf*) _this)->SetLength(length); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBoneIf_SetDirection(void* _this, void* dir) {
	Vec3d arg01_ = *((Vec3d*) dir);
	try { ((PHBoneIf*) _this)->SetDirection((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_PHBoneIf_SetPosition(void* _this, void* pos) {
	Vec3d arg01_ = *((Vec3d*) pos);
	try { ((PHBoneIf*) _this)->SetPosition((Vec3d) arg01_); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_new_PHSkeletonIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new PHSkeletonIf(); }
	catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHSkeletonIf(void* v) {
        if (v == NULL) return;
        try { delete (PHSkeletonIf*) v; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSkeletonIf_ToString(void* _this) {
        void * result = nullptr;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((PHSkeletonIf*) _this)) {
                (*((PHSkeletonIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = result = ::calloc(lenW + 1, sizeof(wchar_t));
                lenW = ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_PHSkeletonIf_FreeString(void* ptr) {
        try { delete(ptr); }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_PHSkeletonIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((PHSkeletonIf*) _this)->GetIfInfo(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSkeletonIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) PHSkeletonIf::GetIfInfoStatic(); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_PHSkeletonIf_NBones(void* _this) {
	int _val = (int) NULL;
	try { _val = ((PHSkeletonIf*) _this)->NBones(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSkeletonIf_GetBone(void* _this, int i) {
	PHBoneIf* _ptr = (PHBoneIf*) NULL;
	try { _ptr = (PHBoneIf*) ((PHSkeletonIf*) _this)->GetBone(i); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSkeletonIf_CreateBone(void* _this, void* parent, void* desc) {
	PHBoneIf* _ptr = (PHBoneIf*) NULL;
	try { _ptr = (PHBoneIf*) ((PHSkeletonIf*) _this)->CreateBone((PHBoneIf*) parent, (const PHBoneDesc&) *((PHBoneDesc*) desc)); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void*  Spr_PHSkeletonIf_CreateBone_1(void* _this, void* parent) {
	PHBoneIf* _ptr = (PHBoneIf*) NULL;
	try { _ptr = (PHBoneIf*) ((PHSkeletonIf*) _this)->CreateBone((PHBoneIf*) parent); }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) float  Spr_PHSkeletonIf_GetGrabStrength(void* _this) {
	float _val = (float) NULL;
	try { _val = ((PHSkeletonIf*) _this)->GetGrabStrength(); }
	catch (const std::exception& e) {  }
	return _val;
    }
}

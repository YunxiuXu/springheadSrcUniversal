#include <Springhead.h>
#include <Windows.h>
#include <sstream>
#include <SprFoundation.h>
#include <Framework/SprFWApp.h>
#include <Physics/SprPHJointMotor.h>
#include <Framework/SprFWEditor.h>
#include <Framework/SprFWOpObj.h>
#include <Framework/FWScene.h>
#include <../src/SprCSharp/SprExport/CSUtility.h>
using namespace Spr;
using namespace std;
extern "C" {
    __declspec(dllexport) void* __cdecl Spr_new_ObjectIfs() {
	void* _ptr = (void*) NULL;
	try { _ptr = new ObjectIfs(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_ObjectIfs(void* v) {
        if (v == NULL) return;
        try { delete (ObjectIfs*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_ObjectIfs_Push(void* _this, void* obj) {
	try { ((ObjectIfs*) _this)->Push((ObjectIf*) obj); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_ObjectIfs_Pop(void* _this) {
	try { ((ObjectIfs*) _this)->Pop(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectIfs_Top(void* _this) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((ObjectIfs*) _this)->Top(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTAccessBase_Create(void* _this) {
	void* _ptr = (void*) NULL;
	try { _ptr = ((UTAccessBase*) _this)->Create(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTAccessBase_Delete(void* _this, void* ptr) {
	try { ((UTAccessBase*) _this)->Delete(ptr); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTAccessBase_VectorPush(void* _this, void* v) {
	void* _ptr = (void*) NULL;
	try { _ptr = ((UTAccessBase*) _this)->VectorPush(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTAccessBase_VectorPop(void* _this, void* v) {
	try { ((UTAccessBase*) _this)->VectorPop(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTAccessBase_VectorAt(void* _this, void* v, int pos) {
	void* _ptr = (void*) NULL;
	try { _ptr = ((UTAccessBase*) _this)->VectorAt(v, pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) size_t __cdecl Spr_UTAccessBase_VectorSize(void* _this, void* v) {
	size_t _val = (size_t) NULL;
	try { _val = ((UTAccessBase*) _this)->VectorSize(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) size_t __cdecl Spr_UTAccessBase_SizeOfVector(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((UTAccessBase*) _this)->SizeOfVector(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_new_UTCMAESOptimizerDesc() {
	void* _ptr = (void*) NULL;
	try { _ptr = new UTCMAESOptimizerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_UTCMAESOptimizerDesc(void* v) {
        if (v == NULL) return;
        try { delete (UTCMAESOptimizerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_stopMaxFunEvals(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).stopMaxFunEvals; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_stopMaxFunEvals(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).stopMaxFunEvals = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_facmaxeval(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).facmaxeval; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_facmaxeval(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).facmaxeval = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_stopMaxIter(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).stopMaxIter; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_stopMaxIter(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).stopMaxIter = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_stopTolFun(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).stopTolFun; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_stopTolFun(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).stopTolFun = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_stopTolFunHist(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).stopTolFunHist; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_stopTolFunHist(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).stopTolFunHist = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_stopTolX(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).stopTolX; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_stopTolX(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).stopTolX = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_stopTolUpXFactor(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).stopTolUpXFactor; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_stopTolUpXFactor(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).stopTolUpXFactor = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_UTCMAESOptimizerDesc_get_lambda(void* _this) {
        int _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).lambda; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_lambda(void* _this, int value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).lambda = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_UTCMAESOptimizerDesc_get_mu(void* _this) {
        int _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).mu; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_mu(void* _this, int value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).mu = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_mucov(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).mucov; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_mucov(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).mucov = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_mueff(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).mueff; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_mueff(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).mueff = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTCMAESOptimizerDesc_vector_addr_weights(void* _this) {
        void* _ptr = NULL;
        try { _ptr = &(*((UTCMAESOptimizerDesc*)_this)).weights; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_vector_set_weights(void* _this, void* _ptr) {
        try {
            if (&(*((UTCMAESOptimizerDesc*)_this)).weights != _ptr) {
                vector<double>* src = (vector<double>*) _ptr;
                vector<double>* dst = &(*((UTCMAESOptimizerDesc*)_this)).weights;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_damps(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).damps; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_damps(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).damps = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_cs(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).cs; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_cs(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).cs = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_ccumcov(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).ccumcov; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_ccumcov(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).ccumcov = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_ccov(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).ccov; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_ccov(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).ccov = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_diagonalCov(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).diagonalCov; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_diagonalCov(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).diagonalCov = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerDesc_get_facupdateCmode(void* _this) {
        double _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).facupdateCmode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_facupdateCmode(void* _this, double value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).facupdateCmode = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_UTCMAESOptimizerDesc_get_weightMode(void* _this) {
        int _val = 0;
        try { _val = (*((UTCMAESOptimizerDesc*)_this)).weightMode; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerDesc_set_weightMode(void* _this, int value) {
        try { (*((UTCMAESOptimizerDesc*)_this)).weightMode = (Spr::UTCMAESOptimizerDesc::Weights) value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec2f() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2f(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec2f_3(float x, float y) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2f(x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec2f(void* v) {
        if (v == NULL) return;
        try { delete (Vec2f*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec2f(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2f(-(*((Vec2f*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec2f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2f((*((Vec2f*) ptr1)) + (*((Vec2f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec2f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2f((*((Vec2f*) ptr1)) - (*((Vec2f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vfv_Vec2f(float a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2f((a) * (*((Vec2f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvf_Vec2f(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2f((*((Vec2f*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvf_Vec2f(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2f((*((Vec2f*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_binary_operator_sprod_fvv_Vec2f(void* ptr1, void* ptr2) {
	float _val = (float) NULL;
	try { _val = (float) ((*((Vec2f*) ptr1)) * (*((Vec2f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_binary_operator_vprod1_fvv_Vec2f(void* ptr1, void* ptr2) {
	float _val = (float) NULL;
	try { _val = (float) ((*((Vec2f*) ptr1)) % (*((Vec2f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_binary_operator_vprod2_fvv_Vec2f(void* ptr1, void* ptr2) {
	float _val = (float) NULL;
	try { _val = (float) ((*((Vec2f*) ptr1)) ^ (*((Vec2f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec2f(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec2f*) ptr1)) == (*((Vec2f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec2f(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec2f*) ptr1)) != (*((Vec2f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_unary_operator_index_fi_get_Vec2f(void* ptr, int i) {
	float _val = (float) NULL;
	try { _val = (float) (*((Vec2f*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_fi_set_Vec2f(void* ptr, int i, float value) {
	try { (*((Vec2f*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec2f_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec2f*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec2f_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec2f_get_x(void* _this) {
        float _val = 0;
        try { _val = (*((Vec2f*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec2f_set_x(void* _this, float value) {
        try { (*((Vec2f*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec2f_get_y(void* _this) {
        float _val = 0;
        try { _val = (*((Vec2f*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec2f_set_y(void* _this, float value) {
        try { (*((Vec2f*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec2f_square(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Vec2f*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Vec2f_norm(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Vec2f*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec2f_unitize(void* _this) {
	try { ((Vec2f*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec2d() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2d(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec2d_3(double x, double y) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2d(x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec2d(void* v) {
        if (v == NULL) return;
        try { delete (Vec2d*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec2d(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2d(-(*((Vec2d*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec2d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2d((*((Vec2d*) ptr1)) + (*((Vec2d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec2d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2d((*((Vec2d*) ptr1)) - (*((Vec2d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vdv_Vec2d(double a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2d((a) * (*((Vec2d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvd_Vec2d(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2d((*((Vec2d*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvd_Vec2d(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2d((*((Vec2d*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_binary_operator_sprod_dvv_Vec2d(void* ptr1, void* ptr2) {
	double _val = (double) NULL;
	try { _val = (double) ((*((Vec2d*) ptr1)) * (*((Vec2d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_binary_operator_vprod1_dvv_Vec2d(void* ptr1, void* ptr2) {
	double _val = (double) NULL;
	try { _val = (double) ((*((Vec2d*) ptr1)) % (*((Vec2d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_binary_operator_vprod2_dvv_Vec2d(void* ptr1, void* ptr2) {
	double _val = (double) NULL;
	try { _val = (double) ((*((Vec2d*) ptr1)) ^ (*((Vec2d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec2d(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec2d*) ptr1)) == (*((Vec2d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec2d(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec2d*) ptr1)) != (*((Vec2d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_unary_operator_index_di_get_Vec2d(void* ptr, int i) {
	double _val = (double) NULL;
	try { _val = (double) (*((Vec2d*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_di_set_Vec2d(void* ptr, int i, double value) {
	try { (*((Vec2d*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec2d_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec2d*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec2d_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec2d_get_x(void* _this) {
        double _val = 0;
        try { _val = (*((Vec2d*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec2d_set_x(void* _this, double value) {
        try { (*((Vec2d*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec2d_get_y(void* _this) {
        double _val = 0;
        try { _val = (*((Vec2d*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec2d_set_y(void* _this, double value) {
        try { (*((Vec2d*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec2d_square(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Vec2d*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Vec2d_norm(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Vec2d*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec2d_unitize(void* _this) {
	try { ((Vec2d*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec3f() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec3f_4(float x, float y, float z) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f(x, y, z); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec3f(void* v) {
        if (v == NULL) return;
        try { delete (Vec3f*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec3f(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f(-(*((Vec3f*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec3f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Vec3f*) ptr1)) + (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec3f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Vec3f*) ptr1)) - (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vfv_Vec3f(float a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((a) * (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvf_Vec3f(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Vec3f*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvf_Vec3f(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Vec3f*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_binary_operator_sprod_fvv_Vec3f(void* ptr1, void* ptr2) {
	float _val = (float) NULL;
	try { _val = (float) ((*((Vec3f*) ptr1)) * (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_vprod1_vvv_Vec3f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Vec3f*) ptr1)) % (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_vprod2_vvv_Vec3f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Vec3f*) ptr1)) ^ (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec3f(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec3f*) ptr1)) == (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec3f(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec3f*) ptr1)) != (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_unary_operator_index_fi_get_Vec3f(void* ptr, int i) {
	float _val = (float) NULL;
	try { _val = (float) (*((Vec3f*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_fi_set_Vec3f(void* ptr, int i, float value) {
	try { (*((Vec3f*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec3f_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec3f*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec3f_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec3f_get_x(void* _this) {
        float _val = 0;
        try { _val = (*((Vec3f*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3f_set_x(void* _this, float value) {
        try { (*((Vec3f*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec3f_get_y(void* _this) {
        float _val = 0;
        try { _val = (*((Vec3f*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3f_set_y(void* _this, float value) {
        try { (*((Vec3f*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec3f_get_z(void* _this) {
        float _val = 0;
        try { _val = (*((Vec3f*)_this)).z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3f_set_z(void* _this, float value) {
        try { (*((Vec3f*)_this)).z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec3f_square(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Vec3f*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Vec3f_norm(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Vec3f*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3f_unitize(void* _this) {
	try { ((Vec3f*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec3d() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec3d_4(double x, double y, double z) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d(x, y, z); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec3d(void* v) {
        if (v == NULL) return;
        try { delete (Vec3d*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec3d(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d(-(*((Vec3d*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec3d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Vec3d*) ptr1)) + (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec3d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Vec3d*) ptr1)) - (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vdv_Vec3d(double a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((a) * (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvd_Vec3d(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Vec3d*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvd_Vec3d(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Vec3d*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_binary_operator_sprod_dvv_Vec3d(void* ptr1, void* ptr2) {
	double _val = (double) NULL;
	try { _val = (double) ((*((Vec3d*) ptr1)) * (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_vprod1_vvv_Vec3d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Vec3d*) ptr1)) % (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_vprod2_vvv_Vec3d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Vec3d*) ptr1)) ^ (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec3d(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec3d*) ptr1)) == (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec3d(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec3d*) ptr1)) != (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_unary_operator_index_di_get_Vec3d(void* ptr, int i) {
	double _val = (double) NULL;
	try { _val = (double) (*((Vec3d*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_di_set_Vec3d(void* ptr, int i, double value) {
	try { (*((Vec3d*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec3d_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec3d*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec3d_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec3d_get_x(void* _this) {
        double _val = 0;
        try { _val = (*((Vec3d*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3d_set_x(void* _this, double value) {
        try { (*((Vec3d*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec3d_get_y(void* _this) {
        double _val = 0;
        try { _val = (*((Vec3d*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3d_set_y(void* _this, double value) {
        try { (*((Vec3d*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec3d_get_z(void* _this) {
        double _val = 0;
        try { _val = (*((Vec3d*)_this)).z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3d_set_z(void* _this, double value) {
        try { (*((Vec3d*)_this)).z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec3d_square(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Vec3d*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Vec3d_norm(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Vec3d*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3d_unitize(void* _this) {
	try { ((Vec3d*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec4f() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4f(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec4f_5(float x, float y, float z, float w) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4f(x, y, z, w); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec4f(void* v) {
        if (v == NULL) return;
        try { delete (Vec4f*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec4f(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4f(-(*((Vec4f*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec4f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4f((*((Vec4f*) ptr1)) + (*((Vec4f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec4f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4f((*((Vec4f*) ptr1)) - (*((Vec4f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vfv_Vec4f(float a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4f((a) * (*((Vec4f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvf_Vec4f(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4f((*((Vec4f*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvf_Vec4f(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4f((*((Vec4f*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec4f(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec4f*) ptr1)) == (*((Vec4f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec4f(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec4f*) ptr1)) != (*((Vec4f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_unary_operator_index_fi_get_Vec4f(void* ptr, int i) {
	float _val = (float) NULL;
	try { _val = (float) (*((Vec4f*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_fi_set_Vec4f(void* ptr, int i, float value) {
	try { (*((Vec4f*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec4f_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec4f*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec4f_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec4f_get_x(void* _this) {
        float _val = 0;
        try { _val = (*((Vec4f*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4f_set_x(void* _this, float value) {
        try { (*((Vec4f*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec4f_get_y(void* _this) {
        float _val = 0;
        try { _val = (*((Vec4f*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4f_set_y(void* _this, float value) {
        try { (*((Vec4f*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec4f_get_z(void* _this) {
        float _val = 0;
        try { _val = (*((Vec4f*)_this)).z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4f_set_z(void* _this, float value) {
        try { (*((Vec4f*)_this)).z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec4f_get_w(void* _this) {
        float _val = 0;
        try { _val = (*((Vec4f*)_this)).w; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4f_set_w(void* _this, float value) {
        try { (*((Vec4f*)_this)).w = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec4f_square(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Vec4f*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Vec4f_norm(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Vec4f*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4f_unitize(void* _this) {
	try { ((Vec4f*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec4d() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4d(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec4d_5(double x, double y, double z, double w) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4d(x, y, z, w); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec4d(void* v) {
        if (v == NULL) return;
        try { delete (Vec4d*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec4d(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4d(-(*((Vec4d*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec4d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4d((*((Vec4d*) ptr1)) + (*((Vec4d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec4d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4d((*((Vec4d*) ptr1)) - (*((Vec4d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vdv_Vec4d(double a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4d((a) * (*((Vec4d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvd_Vec4d(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4d((*((Vec4d*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvd_Vec4d(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4d((*((Vec4d*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec4d(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec4d*) ptr1)) == (*((Vec4d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec4d(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec4d*) ptr1)) != (*((Vec4d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_unary_operator_index_di_get_Vec4d(void* ptr, int i) {
	double _val = (double) NULL;
	try { _val = (double) (*((Vec4d*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_di_set_Vec4d(void* ptr, int i, double value) {
	try { (*((Vec4d*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec4d_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec4d*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec4d_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec4d_get_x(void* _this) {
        double _val = 0;
        try { _val = (*((Vec4d*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4d_set_x(void* _this, double value) {
        try { (*((Vec4d*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec4d_get_y(void* _this) {
        double _val = 0;
        try { _val = (*((Vec4d*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4d_set_y(void* _this, double value) {
        try { (*((Vec4d*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec4d_get_z(void* _this) {
        double _val = 0;
        try { _val = (*((Vec4d*)_this)).z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4d_set_z(void* _this, double value) {
        try { (*((Vec4d*)_this)).z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec4d_get_w(void* _this) {
        double _val = 0;
        try { _val = (*((Vec4d*)_this)).w; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4d_set_w(void* _this, double value) {
        try { (*((Vec4d*)_this)).w = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec4d_square(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Vec4d*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Vec4d_norm(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Vec4d*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4d_unitize(void* _this) {
	try { ((Vec4d*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Quaternionf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaternionf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Quaternionf_5(float w, float x, float y, float z) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaternionf(w, x, y, z); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Quaternionf(void* v) {
        if (v == NULL) return;
        try { delete (Quaternionf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_qqq_Quaternionf(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaternionf((*((Quaternionf*) ptr1)) + (*((Quaternionf*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_qqq_Quaternionf(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaternionf((*((Quaternionf*) ptr1)) - (*((Quaternionf*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_qfq_Quaternionf(float a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaternionf((a) * (*((Quaternionf*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_qqf_Quaternionf(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaternionf((*((Quaternionf*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_qqf_Quaternionf(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaternionf((*((Quaternionf*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_vqv_Quaternionf(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Quaternionf*) ptr1)) * (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_qqq_Quaternionf(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaternionf((*((Quaternionf*) ptr1)) * (*((Quaternionf*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_mqm_Quaternionf(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3f((*((Quaternionf*) ptr1)) * (*((Matrix3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaternionf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Quaternionf*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Quaternionf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Quaternionf_get_x(void* _this) {
        float _val = 0;
        try { _val = (*((Quaternionf*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Quaternionf_set_x(void* _this, float value) {
        try { (*((Quaternionf*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Quaternionf_get_y(void* _this) {
        float _val = 0;
        try { _val = (*((Quaternionf*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Quaternionf_set_y(void* _this, float value) {
        try { (*((Quaternionf*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Quaternionf_get_z(void* _this) {
        float _val = 0;
        try { _val = (*((Quaternionf*)_this)).z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Quaternionf_set_z(void* _this, float value) {
        try { (*((Quaternionf*)_this)).z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Quaternionf_get_w(void* _this) {
        float _val = 0;
        try { _val = (*((Quaternionf*)_this)).w; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Quaternionf_set_w(void* _this, float value) {
        try { (*((Quaternionf*)_this)).w = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Quaternionf_W(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Quaternionf*) _this)->W(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Quaternionf_X(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Quaternionf*) _this)->X(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Quaternionf_Y(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Quaternionf*) _this)->Y(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Quaternionf_Z(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Quaternionf*) _this)->Z(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaternionf_V(void* _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((Quaternionf*) _this)->V(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaternionf_RotationHalf(void* _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((Quaternionf*) _this)->RotationHalf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaternionf_Rotation(void* _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((Quaternionf*) _this)->Rotation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaternionf_Axis(void* _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((Quaternionf*) _this)->Axis(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_Quaternionf_Theta(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Quaternionf*) _this)->Theta(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaternionf_Rot(float angle, void* axis) {
	Vec3f arg02_ = *((Vec3f*) axis);
	Quaternionf* _ptr = (Quaternionf*) NULL;
	try { _ptr = new Quaternionf(); (*_ptr) = Quaternionf::Rot(angle, (Vec3f) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaternionf_Rot_1(float angle, char axis) {
	Quaternionf* _ptr = (Quaternionf*) NULL;
	try { _ptr = new Quaternionf(); (*_ptr) = Quaternionf::Rot(angle, axis); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaternionf_Rot_2(void* rot) {
	Quaternionf* _ptr = (Quaternionf*) NULL;
	try { _ptr = new Quaternionf(); (*_ptr) = Quaternionf::Rot((Vec3f&) *((Vec3f*) rot)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaternionf_Inv(void* _this) {
	Quaternionf* _ptr = (Quaternionf*) NULL;
	try { _ptr = new Quaternionf(); (*_ptr) = ((Quaternionf*) _this)->Inv(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_Quaternionf_Conjugate(void* _this) {
	try { ((Quaternionf*) _this)->Conjugate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Quaternionf_Conjugated(void* _this) {
	Quaternionf* _ptr = (Quaternionf*) NULL;
	try { _ptr = new Quaternionf(); (*_ptr) = ((Quaternionf*) _this)->Conjugated(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_Quaternionf_RotationArc(void* _this, void* lhs, void* rhs) {
	try { ((Quaternionf*) _this)->RotationArc((Vec3f&) *((Vec3f*) lhs), (Vec3f&) *((Vec3f*) rhs)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_Quaternionf_Euler(void* _this, float heading, float attitude, float bank) {
	try { ((Quaternionf*) _this)->Euler(heading, attitude, bank); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Quaterniond() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaterniond(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Quaterniond_5(double w, double x, double y, double z) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaterniond(w, x, y, z); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Quaterniond(void* v) {
        if (v == NULL) return;
        try { delete (Quaterniond*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_qqq_Quaterniond(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaterniond((*((Quaterniond*) ptr1)) + (*((Quaterniond*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_qqq_Quaterniond(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaterniond((*((Quaterniond*) ptr1)) - (*((Quaterniond*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_qdq_Quaterniond(double a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaterniond((a) * (*((Quaterniond*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_qqd_Quaterniond(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaterniond((*((Quaterniond*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_qqd_Quaterniond(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaterniond((*((Quaterniond*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_vqv_Quaterniond(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Quaterniond*) ptr1)) * (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_qqq_Quaterniond(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Quaterniond((*((Quaterniond*) ptr1)) * (*((Quaterniond*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_mqm_Quaterniond(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3d((*((Quaterniond*) ptr1)) * (*((Matrix3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaterniond_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Quaterniond*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Quaterniond_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Quaterniond_get_x(void* _this) {
        double _val = 0;
        try { _val = (*((Quaterniond*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Quaterniond_set_x(void* _this, double value) {
        try { (*((Quaterniond*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Quaterniond_get_y(void* _this) {
        double _val = 0;
        try { _val = (*((Quaterniond*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Quaterniond_set_y(void* _this, double value) {
        try { (*((Quaterniond*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Quaterniond_get_z(void* _this) {
        double _val = 0;
        try { _val = (*((Quaterniond*)_this)).z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Quaterniond_set_z(void* _this, double value) {
        try { (*((Quaterniond*)_this)).z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Quaterniond_get_w(void* _this) {
        double _val = 0;
        try { _val = (*((Quaterniond*)_this)).w; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Quaterniond_set_w(void* _this, double value) {
        try { (*((Quaterniond*)_this)).w = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Quaterniond_W(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Quaterniond*) _this)->W(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Quaterniond_X(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Quaterniond*) _this)->X(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Quaterniond_Y(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Quaterniond*) _this)->Y(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Quaterniond_Z(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Quaterniond*) _this)->Z(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaterniond_V(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((Quaterniond*) _this)->V(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaterniond_RotationHalf(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((Quaterniond*) _this)->RotationHalf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaterniond_Rotation(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((Quaterniond*) _this)->Rotation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaterniond_Axis(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((Quaterniond*) _this)->Axis(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_Quaterniond_Theta(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Quaterniond*) _this)->Theta(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaterniond_Rot(double angle, void* axis) {
	Vec3d arg02_ = *((Vec3d*) axis);
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = Quaterniond::Rot(angle, (Vec3d) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaterniond_Rot_1(double angle, char axis) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = Quaterniond::Rot(angle, axis); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaterniond_Rot_2(void* rot) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = Quaterniond::Rot((Vec3d&) *((Vec3d*) rot)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Quaterniond_Inv(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((Quaterniond*) _this)->Inv(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_Quaterniond_Conjugate(void* _this) {
	try { ((Quaterniond*) _this)->Conjugate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Quaterniond_Conjugated(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((Quaterniond*) _this)->Conjugated(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_Quaterniond_RotationArc(void* _this, void* lhs, void* rhs) {
	try { ((Quaterniond*) _this)->RotationArc((Vec3d&) *((Vec3d*) lhs), (Vec3d&) *((Vec3d*) rhs)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_Quaterniond_Euler(void* _this, double heading, double attitude, double bank) {
	try { ((Quaterniond*) _this)->Euler(heading, attitude, bank); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Posef() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Posef(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Posef_8(void* p, void* q) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Posef(*((const Vec3f*) p), *((const Quaternionf*) q)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Posef_9(float w, float x, float y, float z, float px, float py, float pz) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Posef(w, x, y, z, px, py, pz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Posef(void* v) {
        if (v == NULL) return;
        try { delete (Posef*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_vpv_Posef(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Posef*) ptr1)) * (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_ppp_Posef(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Posef((*((Posef*) ptr1)) * (*((Posef*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Posef*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Posef_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Posef_get_w(void* _this) {
        float _val = 0;
        try { _val = (*((Posef*)_this)).w; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posef_set_w(void* _this, float value) {
        try { (*((Posef*)_this)).w = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Posef_get_x(void* _this) {
        float _val = 0;
        try { _val = (*((Posef*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posef_set_x(void* _this, float value) {
        try { (*((Posef*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Posef_get_y(void* _this) {
        float _val = 0;
        try { _val = (*((Posef*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posef_set_y(void* _this, float value) {
        try { (*((Posef*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Posef_get_z(void* _this) {
        float _val = 0;
        try { _val = (*((Posef*)_this)).z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posef_set_z(void* _this, float value) {
        try { (*((Posef*)_this)).z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Posef_get_px(void* _this) {
        float _val = 0;
        try { _val = (*((Posef*)_this)).px; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posef_set_px(void* _this, float value) {
        try { (*((Posef*)_this)).px = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Posef_get_py(void* _this) {
        float _val = 0;
        try { _val = (*((Posef*)_this)).py; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posef_set_py(void* _this, float value) {
        try { (*((Posef*)_this)).py = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Posef_get_pz(void* _this) {
        float _val = 0;
        try { _val = (*((Posef*)_this)).pz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posef_set_pz(void* _this, float value) {
        try { (*((Posef*)_this)).pz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Pos(void* _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((Posef*) _this)->Pos(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Ori(void* _this) {
	Quaternionf* _ptr = (Quaternionf*) NULL;
	try { _ptr = new Quaternionf(); (*_ptr) = ((Posef*) _this)->Ori(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_W(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->W(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_X(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->X(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_Y(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->Y(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_Z(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->Z(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_Px(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->Px(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_Py(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->Py(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_Pz(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->Pz(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_PosX(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->PosX(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_PosY(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->PosY(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_PosZ(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->PosZ(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_OriX(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->OriX(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_OriY(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->OriY(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_OriZ(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->OriZ(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Posef_OriW(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Posef*) _this)->OriW(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Inv(void* _this) {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = ((Posef*) _this)->Inv(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Unit() {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = Posef::Unit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Trn(float px, float py, float pz) {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = Posef::Trn(px, py, pz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Trn_1(void* v) {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = Posef::Trn((Vec3f&) *((Vec3f*) v)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Rot(float wi, float xi, float yi, float zi) {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = Posef::Rot(wi, xi, yi, zi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Rot_1(float angle, void* axis) {
	Vec3f arg02_ = *((Vec3f*) axis);
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = Posef::Rot(angle, (Vec3f) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Rot_2(float angle, char axis) {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = Posef::Rot(angle, axis); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Rot_3(void* rot) {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = Posef::Rot((Vec3f&) *((Vec3f*) rot)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posef_Rot_4(void* q) {
	Posef* _ptr = (Posef*) NULL;
	try { _ptr = new Posef(); (*_ptr) = Posef::Rot((Quaternionf&) *((Quaternionf*) q)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Posed() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Posed(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Posed_8(void* p, void* q) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Posed(*((const Vec3d*) p), *((const Quaterniond*) q)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Posed_9(double w, double x, double y, double z, double px, double py, double pz) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Posed(w, x, y, z, px, py, pz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Posed(void* v) {
        if (v == NULL) return;
        try { delete (Posed*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_vpv_Posed(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Posed*) ptr1)) * (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_ppp_Posed(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Posed((*((Posed*) ptr1)) * (*((Posed*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Posed*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Posed_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Posed_get_w(void* _this) {
        double _val = 0;
        try { _val = (*((Posed*)_this)).w; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posed_set_w(void* _this, double value) {
        try { (*((Posed*)_this)).w = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Posed_get_x(void* _this) {
        double _val = 0;
        try { _val = (*((Posed*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posed_set_x(void* _this, double value) {
        try { (*((Posed*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Posed_get_y(void* _this) {
        double _val = 0;
        try { _val = (*((Posed*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posed_set_y(void* _this, double value) {
        try { (*((Posed*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Posed_get_z(void* _this) {
        double _val = 0;
        try { _val = (*((Posed*)_this)).z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posed_set_z(void* _this, double value) {
        try { (*((Posed*)_this)).z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Posed_get_px(void* _this) {
        double _val = 0;
        try { _val = (*((Posed*)_this)).px; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posed_set_px(void* _this, double value) {
        try { (*((Posed*)_this)).px = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Posed_get_py(void* _this) {
        double _val = 0;
        try { _val = (*((Posed*)_this)).py; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posed_set_py(void* _this, double value) {
        try { (*((Posed*)_this)).py = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Posed_get_pz(void* _this) {
        double _val = 0;
        try { _val = (*((Posed*)_this)).pz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Posed_set_pz(void* _this, double value) {
        try { (*((Posed*)_this)).pz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Pos(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((Posed*) _this)->Pos(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Ori(void* _this) {
	Quaterniond* _ptr = (Quaterniond*) NULL;
	try { _ptr = new Quaterniond(); (*_ptr) = ((Posed*) _this)->Ori(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_W(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->W(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_X(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->X(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_Y(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->Y(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_Z(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->Z(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_Px(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->Px(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_Py(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->Py(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_Pz(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->Pz(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_PosX(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->PosX(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_PosY(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->PosY(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_PosZ(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->PosZ(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_OriX(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->OriX(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_OriY(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->OriY(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_OriZ(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->OriZ(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Posed_OriW(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Posed*) _this)->OriW(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Inv(void* _this) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = ((Posed*) _this)->Inv(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Unit() {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = Posed::Unit(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Trn(double px, double py, double pz) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = Posed::Trn(px, py, pz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Trn_1(void* v) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = Posed::Trn((Vec3f&) *((Vec3f*) v)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Rot(double wi, double xi, double yi, double zi) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = Posed::Rot(wi, xi, yi, zi); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Rot_1(double angle, void* axis) {
	Vec3f arg02_ = *((Vec3f*) axis);
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = Posed::Rot(angle, (Vec3f) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Rot_2(double angle, char axis) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = Posed::Rot(angle, axis); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Rot_3(void* rot) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = Posed::Rot((Vec3d&) *((Vec3d*) rot)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_Posed_Rot_4(void* q) {
	Posed* _ptr = (Posed*) NULL;
	try { _ptr = new Posed(); (*_ptr) = Posed::Rot((Quaterniond&) *((Quaterniond*) q)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec2i() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2i(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec2i_3(int x, int y) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2i(x, y); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec2i(void* v) {
        if (v == NULL) return;
        try { delete (Vec2i*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec2i(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2i(-(*((Vec2i*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec2i(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2i((*((Vec2i*) ptr1)) + (*((Vec2i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec2i(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2i((*((Vec2i*) ptr1)) - (*((Vec2i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_viv_Vec2i(int a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2i((a) * (*((Vec2i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvi_Vec2i(void* ptr1, int b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2i((*((Vec2i*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvi_Vec2i(void* ptr1, int b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec2i((*((Vec2i*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_binary_operator_sprod_ivv_Vec2i(void* ptr1, void* ptr2) {
	int _val = (int) NULL;
	try { _val = (int) ((*((Vec2i*) ptr1)) * (*((Vec2i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_binary_operator_vprod1_ivv_Vec2i(void* ptr1, void* ptr2) {
	int _val = (int) NULL;
	try { _val = (int) ((*((Vec2i*) ptr1)) % (*((Vec2i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_binary_operator_vprod2_ivv_Vec2i(void* ptr1, void* ptr2) {
	int _val = (int) NULL;
	try { _val = (int) ((*((Vec2i*) ptr1)) ^ (*((Vec2i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec2i(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec2i*) ptr1)) == (*((Vec2i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec2i(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec2i*) ptr1)) != (*((Vec2i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_unary_operator_index_ii_get_Vec2i(void* ptr, int i) {
	int _val = (int) NULL;
	try { _val = (int) (*((Vec2i*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_ii_set_Vec2i(void* ptr, int i, int value) {
	try { (*((Vec2i*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec2i_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec2i*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec2i_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec2i_get_x(void* _this) {
        int _val = 0;
        try { _val = (*((Vec2i*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec2i_set_x(void* _this, int value) {
        try { (*((Vec2i*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec2i_get_y(void* _this) {
        int _val = 0;
        try { _val = (*((Vec2i*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec2i_set_y(void* _this, int value) {
        try { (*((Vec2i*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec2i_square(void* _this) {
	int _val = (int) NULL;
	try { _val = ((Vec2i*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_Vec2i_norm(void* _this) {
	int _val = (int) NULL;
	try { _val = ((Vec2i*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec2i_unitize(void* _this) {
	try { ((Vec2i*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec3i() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3i(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec3i_4(int x, int y, int z) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3i(x, y, z); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec3i(void* v) {
        if (v == NULL) return;
        try { delete (Vec3i*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec3i(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3i(-(*((Vec3i*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec3i(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3i((*((Vec3i*) ptr1)) + (*((Vec3i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec3i(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3i((*((Vec3i*) ptr1)) - (*((Vec3i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_viv_Vec3i(int a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3i((a) * (*((Vec3i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvi_Vec3i(void* ptr1, int b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3i((*((Vec3i*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvi_Vec3i(void* ptr1, int b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3i((*((Vec3i*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_binary_operator_sprod_ivv_Vec3i(void* ptr1, void* ptr2) {
	int _val = (int) NULL;
	try { _val = (int) ((*((Vec3i*) ptr1)) * (*((Vec3i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_vprod1_vvv_Vec3i(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3i((*((Vec3i*) ptr1)) % (*((Vec3i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_vprod2_vvv_Vec3i(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3i((*((Vec3i*) ptr1)) ^ (*((Vec3i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec3i(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec3i*) ptr1)) == (*((Vec3i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec3i(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec3i*) ptr1)) != (*((Vec3i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_unary_operator_index_ii_get_Vec3i(void* ptr, int i) {
	int _val = (int) NULL;
	try { _val = (int) (*((Vec3i*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_ii_set_Vec3i(void* ptr, int i, int value) {
	try { (*((Vec3i*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec3i_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec3i*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec3i_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec3i_get_x(void* _this) {
        int _val = 0;
        try { _val = (*((Vec3i*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3i_set_x(void* _this, int value) {
        try { (*((Vec3i*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec3i_get_y(void* _this) {
        int _val = 0;
        try { _val = (*((Vec3i*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3i_set_y(void* _this, int value) {
        try { (*((Vec3i*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec3i_get_z(void* _this) {
        int _val = 0;
        try { _val = (*((Vec3i*)_this)).z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3i_set_z(void* _this, int value) {
        try { (*((Vec3i*)_this)).z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec3i_square(void* _this) {
	int _val = (int) NULL;
	try { _val = ((Vec3i*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_Vec3i_norm(void* _this) {
	int _val = (int) NULL;
	try { _val = ((Vec3i*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec3i_unitize(void* _this) {
	try { ((Vec3i*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec4i() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4i(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec4i_5(int x, int y, int z, int w) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4i(x, y, z, w); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec4i(void* v) {
        if (v == NULL) return;
        try { delete (Vec4i*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec4i(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4i(-(*((Vec4i*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec4i(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4i((*((Vec4i*) ptr1)) + (*((Vec4i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec4i(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4i((*((Vec4i*) ptr1)) - (*((Vec4i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_viv_Vec4i(int a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4i((a) * (*((Vec4i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvi_Vec4i(void* ptr1, int b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4i((*((Vec4i*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvi_Vec4i(void* ptr1, int b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec4i((*((Vec4i*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec4i(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec4i*) ptr1)) == (*((Vec4i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec4i(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec4i*) ptr1)) != (*((Vec4i*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_unary_operator_index_ii_get_Vec4i(void* ptr, int i) {
	int _val = (int) NULL;
	try { _val = (int) (*((Vec4i*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_ii_set_Vec4i(void* ptr, int i, int value) {
	try { (*((Vec4i*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec4i_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec4i*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec4i_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec4i_get_x(void* _this) {
        int _val = 0;
        try { _val = (*((Vec4i*)_this)).x; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4i_set_x(void* _this, int value) {
        try { (*((Vec4i*)_this)).x = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec4i_get_y(void* _this) {
        int _val = 0;
        try { _val = (*((Vec4i*)_this)).y; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4i_set_y(void* _this, int value) {
        try { (*((Vec4i*)_this)).y = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec4i_get_z(void* _this) {
        int _val = 0;
        try { _val = (*((Vec4i*)_this)).z; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4i_set_z(void* _this, int value) {
        try { (*((Vec4i*)_this)).z = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec4i_get_w(void* _this) {
        int _val = 0;
        try { _val = (*((Vec4i*)_this)).w; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4i_set_w(void* _this, int value) {
        try { (*((Vec4i*)_this)).w = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_Vec4i_square(void* _this) {
	int _val = (int) NULL;
	try { _val = ((Vec4i*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_Vec4i_norm(void* _this) {
	int _val = (int) NULL;
	try { _val = ((Vec4i*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec4i_unitize(void* _this) {
	try { ((Vec4i*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec6f() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6f(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec6f_7(float vx, float vy, float vz, float wx, float wy, float wz) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6f(vx, vy, vz, wx, wy, wz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec6f(void* v) {
        if (v == NULL) return;
        try { delete (Vec6f*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec6f(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6f(-(*((Vec6f*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec6f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6f((*((Vec6f*) ptr1)) + (*((Vec6f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec6f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6f((*((Vec6f*) ptr1)) - (*((Vec6f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vfv_Vec6f(float a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6f((a) * (*((Vec6f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvf_Vec6f(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6f((*((Vec6f*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvf_Vec6f(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6f((*((Vec6f*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec6f(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec6f*) ptr1)) == (*((Vec6f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec6f(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec6f*) ptr1)) != (*((Vec6f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_unary_operator_index_fi_get_Vec6f(void* ptr, int i) {
	float _val = (float) NULL;
	try { _val = (float) (*((Vec6f*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_fi_set_Vec6f(void* ptr, int i, float value) {
	try { (*((Vec6f*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec6f_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec6f*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec6f_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec6f_get_vx(void* _this) {
        float _val = 0;
        try { _val = (*((Vec6f*)_this)).vx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6f_set_vx(void* _this, float value) {
        try { (*((Vec6f*)_this)).vx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec6f_get_vy(void* _this) {
        float _val = 0;
        try { _val = (*((Vec6f*)_this)).vy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6f_set_vy(void* _this, float value) {
        try { (*((Vec6f*)_this)).vy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec6f_get_vz(void* _this) {
        float _val = 0;
        try { _val = (*((Vec6f*)_this)).vz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6f_set_vz(void* _this, float value) {
        try { (*((Vec6f*)_this)).vz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec6f_get_wx(void* _this) {
        float _val = 0;
        try { _val = (*((Vec6f*)_this)).wx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6f_set_wx(void* _this, float value) {
        try { (*((Vec6f*)_this)).wx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec6f_get_wy(void* _this) {
        float _val = 0;
        try { _val = (*((Vec6f*)_this)).wy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6f_set_wy(void* _this, float value) {
        try { (*((Vec6f*)_this)).wy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec6f_get_wz(void* _this) {
        float _val = 0;
        try { _val = (*((Vec6f*)_this)).wz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6f_set_wz(void* _this, float value) {
        try { (*((Vec6f*)_this)).wz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Vec6f_square(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Vec6f*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) float __cdecl Spr_Vec6f_norm(void* _this) {
	float _val = (float) NULL;
	try { _val = ((Vec6f*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6f_unitize(void* _this) {
	try { ((Vec6f*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec6d() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6d(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Vec6d_7(double vx, double vy, double vz, double wx, double wy, double wz) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6d(vx, vy, vz, wx, wy, wz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Vec6d(void* v) {
        if (v == NULL) return;
        try { delete (Vec6d*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_vv_Vec6d(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6d(-(*((Vec6d*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_vvv_Vec6d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6d((*((Vec6d*) ptr1)) + (*((Vec6d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_vvv_Vec6d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6d((*((Vec6d*) ptr1)) - (*((Vec6d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vdv_Vec6d(double a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6d((a) * (*((Vec6d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_vvd_Vec6d(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6d((*((Vec6d*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_div_vvd_Vec6d(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec6d((*((Vec6d*) ptr1)) / (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_eq_bvv_Vec6d(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec6d*) ptr1)) == (*((Vec6d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_binary_operator_ne_bvv_Vec6d(void* ptr1, void* ptr2) {
	char _val = (char) NULL;
	try { _val = (char) ((*((Vec6d*) ptr1)) != (*((Vec6d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_unary_operator_index_di_get_Vec6d(void* ptr, int i) {
	double _val = (double) NULL;
	try { _val = (double) (*((Vec6d*) ptr))[i]; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_di_set_Vec6d(void* ptr, int i, double value) {
	try { (*((Vec6d*) ptr))[i] = value; }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Vec6d_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Vec6d*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Vec6d_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec6d_get_vx(void* _this) {
        double _val = 0;
        try { _val = (*((Vec6d*)_this)).vx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6d_set_vx(void* _this, double value) {
        try { (*((Vec6d*)_this)).vx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec6d_get_vy(void* _this) {
        double _val = 0;
        try { _val = (*((Vec6d*)_this)).vy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6d_set_vy(void* _this, double value) {
        try { (*((Vec6d*)_this)).vy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec6d_get_vz(void* _this) {
        double _val = 0;
        try { _val = (*((Vec6d*)_this)).vz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6d_set_vz(void* _this, double value) {
        try { (*((Vec6d*)_this)).vz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec6d_get_wx(void* _this) {
        double _val = 0;
        try { _val = (*((Vec6d*)_this)).wx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6d_set_wx(void* _this, double value) {
        try { (*((Vec6d*)_this)).wx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec6d_get_wy(void* _this) {
        double _val = 0;
        try { _val = (*((Vec6d*)_this)).wy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6d_set_wy(void* _this, double value) {
        try { (*((Vec6d*)_this)).wy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec6d_get_wz(void* _this) {
        double _val = 0;
        try { _val = (*((Vec6d*)_this)).wz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6d_set_wz(void* _this, double value) {
        try { (*((Vec6d*)_this)).wz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Vec6d_square(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Vec6d*) _this)->square(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_Vec6d_norm(void* _this) {
	double _val = (double) NULL;
	try { _val = ((Vec6d*) _this)->norm(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Vec6d_unitize(void* _this) {
	try { ((Vec6d*) _this)->unitize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Curve3f() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Curve3f(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Curve3f(void* v) {
        if (v == NULL) return;
        try { delete (Curve3f*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Matrix3f() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3f(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Matrix3f_10(void* ex, void* ey, void* ez) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3f(*((Vec3f*) ex), *((Vec3f*) ey), *((Vec3f*) ez)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Matrix3f_11(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3f(m11, m12, m13, m21, m22, m23, m31, m32, m33); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Matrix3f(void* v) {
        if (v == NULL) return;
        try { delete (Matrix3f*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_mm_Matrix3f(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3f(-(*((Matrix3f*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_mmm_Matrix3f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3f((*((Matrix3f*) ptr1)) + (*((Matrix3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_mmm_Matrix3f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3f((*((Matrix3f*) ptr1)) - (*((Matrix3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_mfm_Matrix3f(float a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3f((a) * (*((Matrix3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_mmf_Matrix3f(void* ptr1, float b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3f((*((Matrix3f*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_vmv_Matrix3f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Matrix3f*) ptr1)) * (*((Vec3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_vvm_Matrix3f(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Vec3f*) ptr1)) * (*((Matrix3f*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_index_vi_get_Matrix3f(void* ptr, int i) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3f((*((Matrix3f*) ptr))[i]); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_vi_set_Matrix3f(void* ptr1, int i, void* ptr2) {
	try { (*((Matrix3f*) ptr1))[i] = *((Vec3f*) ptr2); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Matrix3f_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Matrix3f*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Matrix3f_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Matrix3f_get_xx(void* _this) {
        float _val = 0;
        try { _val = (*((Matrix3f*)_this)).xx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_set_xx(void* _this, float value) {
        try { (*((Matrix3f*)_this)).xx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Matrix3f_get_xy(void* _this) {
        float _val = 0;
        try { _val = (*((Matrix3f*)_this)).xy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_set_xy(void* _this, float value) {
        try { (*((Matrix3f*)_this)).xy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Matrix3f_get_xz(void* _this) {
        float _val = 0;
        try { _val = (*((Matrix3f*)_this)).xz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_set_xz(void* _this, float value) {
        try { (*((Matrix3f*)_this)).xz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Matrix3f_get_yx(void* _this) {
        float _val = 0;
        try { _val = (*((Matrix3f*)_this)).yx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_set_yx(void* _this, float value) {
        try { (*((Matrix3f*)_this)).yx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Matrix3f_get_yy(void* _this) {
        float _val = 0;
        try { _val = (*((Matrix3f*)_this)).yy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_set_yy(void* _this, float value) {
        try { (*((Matrix3f*)_this)).yy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Matrix3f_get_yz(void* _this) {
        float _val = 0;
        try { _val = (*((Matrix3f*)_this)).yz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_set_yz(void* _this, float value) {
        try { (*((Matrix3f*)_this)).yz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Matrix3f_get_zx(void* _this) {
        float _val = 0;
        try { _val = (*((Matrix3f*)_this)).zx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_set_zx(void* _this, float value) {
        try { (*((Matrix3f*)_this)).zx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Matrix3f_get_zy(void* _this) {
        float _val = 0;
        try { _val = (*((Matrix3f*)_this)).zy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_set_zy(void* _this, float value) {
        try { (*((Matrix3f*)_this)).zy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Matrix3f_get_zz(void* _this) {
        float _val = 0;
        try { _val = (*((Matrix3f*)_this)).zz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_set_zz(void* _this, float value) {
        try { (*((Matrix3f*)_this)).zz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) size_t __cdecl Spr_Matrix3f_height(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((Matrix3f*) _this)->height(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) size_t __cdecl Spr_Matrix3f_width(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((Matrix3f*) _this)->width(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_resize(void* _this, size_t h, size_t w) {
	try { ((Matrix3f*) _this)->resize(h, w); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) size_t __cdecl Spr_Matrix3f_stride(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((Matrix3f*) _this)->stride(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3f_clear(void* _this) {
	try { ((Matrix3f*) _this)->clear(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Matrix3d() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3d(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Matrix3d_10(void* ex, void* ey, void* ez) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3d(*((Vec3d*) ex), *((Vec3d*) ey), *((Vec3d*) ez)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Matrix3d_11(double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3d(m11, m12, m13, m21, m22, m23, m31, m32, m33); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Matrix3d(void* v) {
        if (v == NULL) return;
        try { delete (Matrix3d*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_neg_mm_Matrix3d(void* ptr1) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3d(-(*((Matrix3d*) ptr1))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_add_mmm_Matrix3d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3d((*((Matrix3d*) ptr1)) + (*((Matrix3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sub_mmm_Matrix3d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3d((*((Matrix3d*) ptr1)) - (*((Matrix3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_mdm_Matrix3d(double a, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3d((a) * (*((Matrix3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_mul_mmd_Matrix3d(void* ptr1, double b) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Matrix3d((*((Matrix3d*) ptr1)) * (b)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_vmv_Matrix3d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Matrix3d*) ptr1)) * (*((Vec3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_binary_operator_sprod_vvm_Matrix3d(void* ptr1, void* ptr2) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Vec3d*) ptr1)) * (*((Matrix3d*) ptr2))); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_unary_operator_index_vi_get_Matrix3d(void* ptr, int i) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Vec3d((*((Matrix3d*) ptr))[i]); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_unary_operator_index_vi_set_Matrix3d(void* ptr1, int i, void* ptr2) {
	try { (*((Matrix3d*) ptr1))[i] = *((Vec3d*) ptr2); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Matrix3d_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Matrix3d*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Matrix3d_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Matrix3d_get_xx(void* _this) {
        double _val = 0;
        try { _val = (*((Matrix3d*)_this)).xx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_set_xx(void* _this, double value) {
        try { (*((Matrix3d*)_this)).xx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Matrix3d_get_xy(void* _this) {
        double _val = 0;
        try { _val = (*((Matrix3d*)_this)).xy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_set_xy(void* _this, double value) {
        try { (*((Matrix3d*)_this)).xy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Matrix3d_get_xz(void* _this) {
        double _val = 0;
        try { _val = (*((Matrix3d*)_this)).xz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_set_xz(void* _this, double value) {
        try { (*((Matrix3d*)_this)).xz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Matrix3d_get_yx(void* _this) {
        double _val = 0;
        try { _val = (*((Matrix3d*)_this)).yx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_set_yx(void* _this, double value) {
        try { (*((Matrix3d*)_this)).yx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Matrix3d_get_yy(void* _this) {
        double _val = 0;
        try { _val = (*((Matrix3d*)_this)).yy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_set_yy(void* _this, double value) {
        try { (*((Matrix3d*)_this)).yy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Matrix3d_get_yz(void* _this) {
        double _val = 0;
        try { _val = (*((Matrix3d*)_this)).yz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_set_yz(void* _this, double value) {
        try { (*((Matrix3d*)_this)).yz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Matrix3d_get_zx(void* _this) {
        double _val = 0;
        try { _val = (*((Matrix3d*)_this)).zx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_set_zx(void* _this, double value) {
        try { (*((Matrix3d*)_this)).zx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Matrix3d_get_zy(void* _this) {
        double _val = 0;
        try { _val = (*((Matrix3d*)_this)).zy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_set_zy(void* _this, double value) {
        try { (*((Matrix3d*)_this)).zy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Matrix3d_get_zz(void* _this) {
        double _val = 0;
        try { _val = (*((Matrix3d*)_this)).zz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_set_zz(void* _this, double value) {
        try { (*((Matrix3d*)_this)).zz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) size_t __cdecl Spr_Matrix3d_height(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((Matrix3d*) _this)->height(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) size_t __cdecl Spr_Matrix3d_width(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((Matrix3d*) _this)->width(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_resize(void* _this, size_t h, size_t w) {
	try { ((Matrix3d*) _this)->resize(h, w); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) size_t __cdecl Spr_Matrix3d_stride(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((Matrix3d*) _this)->stride(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Matrix3d_clear(void* _this) {
	try { ((Matrix3d*) _this)->clear(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Affinef() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Affinef(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Affinef_17(void* a) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Affinef(*((Affinef*) a)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Affinef(void* v) {
        if (v == NULL) return;
        try { delete (Affinef*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Affinef_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Affinef*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Affinef_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_xx(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).xx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_xx(void* _this, float value) {
        try { (*((Affinef*)_this)).xx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_xy(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).xy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_xy(void* _this, float value) {
        try { (*((Affinef*)_this)).xy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_xz(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).xz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_xz(void* _this, float value) {
        try { (*((Affinef*)_this)).xz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_xw(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).xw; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_xw(void* _this, float value) {
        try { (*((Affinef*)_this)).xw = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_yx(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).yx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_yx(void* _this, float value) {
        try { (*((Affinef*)_this)).yx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_yy(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).yy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_yy(void* _this, float value) {
        try { (*((Affinef*)_this)).yy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_yz(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).yz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_yz(void* _this, float value) {
        try { (*((Affinef*)_this)).yz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_yw(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).yw; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_yw(void* _this, float value) {
        try { (*((Affinef*)_this)).yw = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_zx(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).zx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_zx(void* _this, float value) {
        try { (*((Affinef*)_this)).zx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_zy(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).zy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_zy(void* _this, float value) {
        try { (*((Affinef*)_this)).zy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_zz(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).zz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_zz(void* _this, float value) {
        try { (*((Affinef*)_this)).zz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_zw(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).zw; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_zw(void* _this, float value) {
        try { (*((Affinef*)_this)).zw = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_px(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).px; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_px(void* _this, float value) {
        try { (*((Affinef*)_this)).px = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_py(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).py; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_py(void* _this, float value) {
        try { (*((Affinef*)_this)).py = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_pz(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).pz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_pz(void* _this, float value) {
        try { (*((Affinef*)_this)).pz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_Affinef_get_pw(void* _this) {
        float _val = 0;
        try { _val = (*((Affinef*)_this)).pw; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affinef_set_pw(void* _this, float value) {
        try { (*((Affinef*)_this)).pw = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_Affined() {
	void* _ptr = (void*) NULL;
	try { _ptr = new Affined(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_Affined_17(void* a) {
	void* _ptr = (void*) NULL;
	try { _ptr = new Affined(*((Affined*) a)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_Affined(void* v) {
        if (v == NULL) return;
        try { delete (Affined*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_Affined_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            oss << (*((Affined*) _this));
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_Affined_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_xx(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).xx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_xx(void* _this, double value) {
        try { (*((Affined*)_this)).xx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_xy(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).xy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_xy(void* _this, double value) {
        try { (*((Affined*)_this)).xy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_xz(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).xz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_xz(void* _this, double value) {
        try { (*((Affined*)_this)).xz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_xw(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).xw; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_xw(void* _this, double value) {
        try { (*((Affined*)_this)).xw = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_yx(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).yx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_yx(void* _this, double value) {
        try { (*((Affined*)_this)).yx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_yy(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).yy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_yy(void* _this, double value) {
        try { (*((Affined*)_this)).yy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_yz(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).yz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_yz(void* _this, double value) {
        try { (*((Affined*)_this)).yz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_yw(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).yw; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_yw(void* _this, double value) {
        try { (*((Affined*)_this)).yw = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_zx(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).zx; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_zx(void* _this, double value) {
        try { (*((Affined*)_this)).zx = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_zy(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).zy; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_zy(void* _this, double value) {
        try { (*((Affined*)_this)).zy = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_zz(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).zz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_zz(void* _this, double value) {
        try { (*((Affined*)_this)).zz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_zw(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).zw; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_zw(void* _this, double value) {
        try { (*((Affined*)_this)).zw = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_px(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).px; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_px(void* _this, double value) {
        try { (*((Affined*)_this)).px = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_py(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).py; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_py(void* _this, double value) {
        try { (*((Affined*)_this)).py = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_pz(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).pz; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_pz(void* _this, double value) {
        try { (*((Affined*)_this)).pz = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_Affined_get_pw(void* _this) {
        double _val = 0;
        try { _val = (*((Affined*)_this)).pw; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_Affined_set_pw(void* _this, double value) {
        try { (*((Affined*)_this)).pw = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_SpatialVector() {
	void* _ptr = (void*) NULL;
	try { _ptr = new SpatialVector(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_SpatialVector_2(void* _v, void* _w) {
	void* _ptr = (void*) NULL;
	try { _ptr = new SpatialVector(((const Vec3d&) _v), ((const Vec3d&) _w)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_SpatialVector(void* v) {
        if (v == NULL) return;
        try { delete (SpatialVector*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_SpatialVector_v(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((SpatialVector*) _this)->v(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_SpatialVector_w(void* _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	try { _ptr = new Vec3d(); (*_ptr) = ((SpatialVector*) _this)->w(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_ObjectIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new ObjectIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_ObjectIf(void* v) {
        if (v == NULL) return;
        try { delete (ObjectIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            (*((ObjectIf*) _this)).Print(oss);
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_ObjectIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((ObjectIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ObjectIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_ObjectIf_AddRef(void* _this) {
	int _val = (int) NULL;
	try { _val = ((ObjectIf*) _this)->AddRef(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_ObjectIf_RefCount(void* _this) {
	int _val = (int) NULL;
	try { _val = ((ObjectIf*) _this)->RefCount(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) size_t __cdecl Spr_ObjectIf_NChildObject(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((ObjectIf*) _this)->NChildObject(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectIf_GetChildObject(void* _this, size_t pos) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((ObjectIf*) _this)->GetChildObject(pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_ObjectIf_AddChildObject(void* _this, void* o) {
	bool _val = (bool) NULL;
	try { _val = ((ObjectIf*) _this)->AddChildObject((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_ObjectIf_DelChildObject(void* _this, void* o) {
	bool _val = (bool) NULL;
	try { _val = ((ObjectIf*) _this)->DelChildObject((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_ObjectIf_Clear(void* _this) {
	try { ((ObjectIf*) _this)->Clear(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectIf_CreateObject(void* _this, void* info, void* desc) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((ObjectIf*) _this)->CreateObject((const IfInfo*) info, desc); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectIf_GetDescAddress(void* _this) {
	const void* _ptr = (const void*) NULL;
	try { _ptr = (void*)((ObjectIf*) _this)->GetDescAddress(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_ObjectIf_GetDesc(void* _this, void* desc) {
	bool _val = (bool) NULL;
	try { _val = ((ObjectIf*) _this)->GetDesc(desc); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_ObjectIf_SetDesc(void* _this, void* desc) {
	try { ((ObjectIf*) _this)->SetDesc(desc); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) size_t __cdecl Spr_ObjectIf_GetDescSize(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((ObjectIf*) _this)->GetDescSize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectIf_GetStateAddress(void* _this) {
	const void* _ptr = (const void*) NULL;
	try { _ptr = (void*)((ObjectIf*) _this)->GetStateAddress(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_ObjectIf_GetState(void* _this, void* state) {
	bool _val = (bool) NULL;
	try { _val = ((ObjectIf*) _this)->GetState(state); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_ObjectIf_SetState(void* _this, void* state) {
	try { ((ObjectIf*) _this)->SetState(state); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_ObjectIf_WriteState(void* _this, BSTR fileName) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) fileName, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) fileName, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	bool _val = (bool) NULL;
	try { _val = ((ObjectIf*) _this)->WriteState((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_ObjectIf_ReadState(void* _this, BSTR fileName) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) fileName, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) fileName, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	bool _val = (bool) NULL;
	try { _val = ((ObjectIf*) _this)->ReadState((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) size_t __cdecl Spr_ObjectIf_GetStateSize(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((ObjectIf*) _this)->GetStateSize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_ObjectIf_ConstructState(void* _this, void* m) {
	try { ((ObjectIf*) _this)->ConstructState(m); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_ObjectIf_DestructState(void* _this, void* m) {
	try { ((ObjectIf*) _this)->DestructState(m); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_NamedObjectIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new NamedObjectIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_NamedObjectIf(void* v) {
        if (v == NULL) return;
        try { delete (NamedObjectIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_NamedObjectIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((NamedObjectIf*) _this)) {
                (*((NamedObjectIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_NamedObjectIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_NamedObjectIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((NamedObjectIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_NamedObjectIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) NamedObjectIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_NamedObjectIf_GetName(void* _this) {
	const char* _ptr = (const char*) NULL;
	try { _ptr = ((NamedObjectIf*) _this)->GetName(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_NamedObjectIf_SetName(void* _this, void* n) {
	try { ((NamedObjectIf*) _this)->SetName((const char*) n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_NamedObjectIf_GetNameManager(void* _this) {
	NameManagerIf* _ptr = (NameManagerIf*) NULL;
	try { _ptr = (NameManagerIf*) ((NamedObjectIf*) _this)->GetNameManager(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_SceneObjectIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new SceneObjectIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_SceneObjectIf(void* v) {
        if (v == NULL) return;
        try { delete (SceneObjectIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_SceneObjectIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((SceneObjectIf*) _this)) {
                (*((SceneObjectIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_SceneObjectIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_SceneObjectIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((SceneObjectIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_SceneObjectIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) SceneObjectIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_SceneObjectIf_GetScene(void* _this) {
	SceneIf* _ptr = (SceneIf*) NULL;
	try { _ptr = (SceneIf*) ((SceneObjectIf*) _this)->GetScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_SceneObjectIf_CloneObject(void* _this) {
	SceneObjectIf* _ptr = (SceneObjectIf*) NULL;
	try { _ptr = (SceneObjectIf*) ((SceneObjectIf*) _this)->CloneObject(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_ObjectStatesIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new ObjectStatesIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_ObjectStatesIf(void* v) {
        if (v == NULL) return;
        try { delete (ObjectStatesIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectStatesIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((ObjectStatesIf*) _this)) {
                (*((ObjectStatesIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_ObjectStatesIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectStatesIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((ObjectStatesIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectStatesIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ObjectStatesIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_ObjectStatesIf_AllocateState(void* _this, void* o) {
	try { ((ObjectStatesIf*) _this)->AllocateState((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_ObjectStatesIf_ReleaseState(void* _this, void* o) {
	try { ((ObjectStatesIf*) _this)->ReleaseState((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) size_t __cdecl Spr_ObjectStatesIf_CalcStateSize(void* _this, void* o) {
	size_t _val = (size_t) NULL;
	try { _val = ((ObjectStatesIf*) _this)->CalcStateSize((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_ObjectStatesIf_SaveState(void* _this, void* o) {
	try { ((ObjectStatesIf*) _this)->SaveState((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_ObjectStatesIf_LoadState(void* _this, void* o) {
	try { ((ObjectStatesIf*) _this)->LoadState((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_ObjectStatesIf_SingleSave(void* _this, void* o) {
	try { ((ObjectStatesIf*) _this)->SingleSave((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_ObjectStatesIf_SingleLoad(void* _this, void* o) {
	try { ((ObjectStatesIf*) _this)->SingleLoad((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_ObjectStatesIf_IsAllocated(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((ObjectStatesIf*) _this)->IsAllocated(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void* __cdecl Spr_ObjectStatesIf_Create() {
	ObjectStatesIf* _ptr = (ObjectStatesIf*) NULL;
	try { _ptr = (ObjectStatesIf*) ObjectStatesIf::Create(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_UTTypeDescIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new UTTypeDescIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_UTTypeDescIf(void* v) {
        if (v == NULL) return;
        try { delete (UTTypeDescIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            (*((UTTypeDescIf*) _this)).Print(oss);
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((UTTypeDescIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) UTTypeDescIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_FindTypeDesc(void* typeName, void* moduleName) {
	UTTypeDescIf* _ptr = (UTTypeDescIf*) NULL;
	try { _ptr = (UTTypeDescIf*) UTTypeDescIf::FindTypeDesc((const char*) typeName, (const char*) moduleName); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_Create(BSTR tn, int sz) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) tn, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) tn, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	UTTypeDescIf* _ptr = (UTTypeDescIf*) NULL;
	try { _ptr = (UTTypeDescIf*) UTTypeDescIf::Create((string) arg01_, sz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_Create_1(BSTR tn) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) tn, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) tn, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	UTTypeDescIf* _ptr = (UTTypeDescIf*) NULL;
	try { _ptr = (UTTypeDescIf*) UTTypeDescIf::Create((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_SetSize(void* _this, size_t sz) {
	try { ((UTTypeDescIf*) _this)->SetSize(sz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_SetAccess(void* _this, void* a) {
	try { ((UTTypeDescIf*) _this)->SetAccess((UTAccessBase*) a); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_SetOffset(void* _this, int field, int offset) {
	try { ((UTTypeDescIf*) _this)->SetOffset(field, offset); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_SetIfInfo(void* _this, void* info) {
	try { ((UTTypeDescIf*) _this)->SetIfInfo((const IfInfo*) info); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_UTTypeDescIf_AddField(void* _this, BSTR pre, BSTR ty, BSTR n, BSTR post) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) pre, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) pre, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	string arg02_("");
	int lenMB2 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) ty, -1, NULL, 0, NULL, NULL);
	if (lenMB2 > 0) {
	    LPSTR addr2 = (LPSTR) ::SysAllocStringLen(0, lenMB2);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) ty, -1, addr2, lenMB2, NULL, NULL);
	    arg02_ = (string) addr2;
	}
	string arg03_("");
	int lenMB3 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) n, -1, NULL, 0, NULL, NULL);
	if (lenMB3 > 0) {
	    LPSTR addr3 = (LPSTR) ::SysAllocStringLen(0, lenMB3);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) n, -1, addr3, lenMB3, NULL, NULL);
	    arg03_ = (string) addr3;
	}
	string arg04_("");
	int lenMB4 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) post, -1, NULL, 0, NULL, NULL);
	if (lenMB4 > 0) {
	    LPSTR addr4 = (LPSTR) ::SysAllocStringLen(0, lenMB4);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) post, -1, addr4, lenMB4, NULL, NULL);
	    arg04_ = (string) addr4;
	}
	int _val = (int) NULL;
	try { _val = ((UTTypeDescIf*) _this)->AddField((string) arg01_, (string) arg02_, (string) arg03_, (string) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_UTTypeDescIf_AddBase(void* _this, BSTR tn) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) tn, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) tn, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	int _val = (int) NULL;
	try { _val = ((UTTypeDescIf*) _this)->AddBase((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_AddEnumConst(void* _this, int field, BSTR name, int val) {
	string arg02_("");
	int lenMB2 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, NULL, 0, NULL, NULL);
	if (lenMB2 > 0) {
	    LPSTR addr2 = (LPSTR) ::SysAllocStringLen(0, lenMB2);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, addr2, lenMB2, NULL, NULL);
	    arg02_ = (string) addr2;
	}
	try { ((UTTypeDescIf*) _this)->AddEnumConst(field, (string) arg02_, val); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) BSTR __cdecl Spr_UTTypeDescIf_GetTypeName(void* _this) {
	string _val = "";
	try { _val = ((UTTypeDescIf*) _this)->GetTypeName(); }
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
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_FreeString_GetTypeName(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_SetTypeName(void* _this, void* s) {
	try { ((UTTypeDescIf*) _this)->SetTypeName((const char*) s); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) size_t __cdecl Spr_UTTypeDescIf_GetSize(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((UTTypeDescIf*) _this)->GetSize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_UTTypeDescIf_IsPrimitive(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTTypeDescIf*) _this)->IsPrimitive(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_UTTypeDescIf_IsSimple(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTTypeDescIf*) _this)->IsSimple(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) int __cdecl Spr_UTTypeDescIf_NFields(void* _this) {
	int _val = (int) NULL;
	try { _val = ((UTTypeDescIf*) _this)->NFields(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_UTTypeDescIf_GetFieldLength(void* _this, int i) {
	int _val = (int) NULL;
	try { _val = ((UTTypeDescIf*) _this)->GetFieldLength(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_UTTypeDescIf_GetFieldVectorSize(void* _this, int i, void* base) {
	int _val = (int) NULL;
	try { _val = ((UTTypeDescIf*) _this)->GetFieldVectorSize(i, base); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_GetFieldLengthName(void* _this, int i) {
	const char* _ptr = (const char*) NULL;
	try { _ptr = ((UTTypeDescIf*) _this)->GetFieldLengthName(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_UTTypeDescIf_GetFieldVarType(void* _this, int i) {
	UTTypeDescIf::FieldType _val = (UTTypeDescIf::FieldType) NULL;
	try { _val = ((UTTypeDescIf*) _this)->GetFieldVarType(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (int) _val;
    }
    __declspec(dllexport) char __cdecl Spr_UTTypeDescIf_GetFieldIsReference(void* _this, int i) {
	bool _val = (bool) NULL;
	try { _val = ((UTTypeDescIf*) _this)->GetFieldIsReference(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_GetFieldName(void* _this, int i) {
	const char* _ptr = (const char*) NULL;
	try { _ptr = ((UTTypeDescIf*) _this)->GetFieldName(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_GetFieldAddress(void* _this, int i, void* base, int pos) {
	void* _ptr = (void*) NULL;
	try { _ptr = ((UTTypeDescIf*) _this)->GetFieldAddress(i, base, pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_GetFieldAddressEx(void* _this, int i, void* base, int pos) {
	void* _ptr = (void*) NULL;
	try { _ptr = ((UTTypeDescIf*) _this)->GetFieldAddressEx(i, base, pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) BSTR __cdecl Spr_UTTypeDescIf_ReadToString(void* _this, int i, void* base, int pos) {
	string _val = "";
	try { _val = ((UTTypeDescIf*) _this)->ReadToString(i, base, pos); }
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
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_FreeString_ReadToString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_WriteFromString(void* _this, BSTR from, int i, void* base, int pos) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) from, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) from, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	try { ((UTTypeDescIf*) _this)->WriteFromString((string) arg01_, i, base, pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_GetIfInfoOfType(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((UTTypeDescIf*) _this)->GetIfInfoOfType(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_UTTypeDescIf_IsBool(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTTypeDescIf*) _this)->IsBool(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_UTTypeDescIf_IsNumber(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTTypeDescIf*) _this)->IsNumber(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_UTTypeDescIf_IsString(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTTypeDescIf*) _this)->IsString(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_UTTypeDescIf_ReadBool(void* _this, void* ptr) {
	bool _val = (bool) NULL;
	try { _val = ((UTTypeDescIf*) _this)->ReadBool(ptr); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_WriteBool(void* _this, char val, void* ptr) {
	bool arg01_ = (val == 0) ? false : true;
	try { ((UTTypeDescIf*) _this)->WriteBool((bool) arg01_, ptr); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) double __cdecl Spr_UTTypeDescIf_ReadNumber(void* _this, void* ptr) {
	double _val = (double) NULL;
	try { _val = ((UTTypeDescIf*) _this)->ReadNumber(ptr); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_WriteNumber(void* _this, double val, void* ptr) {
	try { ((UTTypeDescIf*) _this)->WriteNumber(val, ptr); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) BSTR __cdecl Spr_UTTypeDescIf_ReadString(void* _this, void* ptr) {
	string _val = "";
	try { _val = ((UTTypeDescIf*) _this)->ReadString(ptr); }
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
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_FreeString_ReadString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_WriteString(void* _this, void* val, void* ptr) {
	try { ((UTTypeDescIf*) _this)->WriteString((const char*) val, ptr); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_Create_2(void* _this) {
	void* _ptr = (void*) NULL;
	try { _ptr = ((UTTypeDescIf*) _this)->Create(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_Delete(void* _this, void* ptr) {
	try { ((UTTypeDescIf*) _this)->Delete(ptr); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_VectorPush(void* _this, void* v) {
	void* _ptr = (void*) NULL;
	try { _ptr = ((UTTypeDescIf*) _this)->VectorPush(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescIf_VectorPop(void* _this, void* v) {
	try { ((UTTypeDescIf*) _this)->VectorPop(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescIf_VectorAt(void* _this, void* v, int pos) {
	void* _ptr = (void*) NULL;
	try { _ptr = ((UTTypeDescIf*) _this)->VectorAt(v, pos); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) size_t __cdecl Spr_UTTypeDescIf_VectorSize(void* _this, void* v) {
	size_t _val = (size_t) NULL;
	try { _val = ((UTTypeDescIf*) _this)->VectorSize(v); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) size_t __cdecl Spr_UTTypeDescIf_SizeOfVector(void* _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((UTTypeDescIf*) _this)->SizeOfVector(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_new_UTTypeDescDbIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new UTTypeDescDbIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_UTTypeDescDbIf(void* v) {
        if (v == NULL) return;
        try { delete (UTTypeDescDbIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescDbIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            (*((UTTypeDescDbIf*) _this)).Print(oss);
            str = oss.str();
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
    __declspec(dllexport) void __cdecl Spr_UTTypeDescDbIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescDbIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((UTTypeDescDbIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescDbIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) UTTypeDescDbIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescDbIf_GetDb(BSTR n) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) n, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) n, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	UTTypeDescDbIf* _ptr = (UTTypeDescDbIf*) NULL;
	try { _ptr = (UTTypeDescDbIf*) UTTypeDescDbIf::GetDb((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescDbIf_RegisterDesc(void* _this, void* n) {
	try { ((UTTypeDescDbIf*) _this)->RegisterDesc((UTTypeDescIf*) n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescDbIf_RegisterAlias(void* _this, void* src, void* dest) {
	try { ((UTTypeDescDbIf*) _this)->RegisterAlias((const char*) src, (const char*) dest); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescDbIf_SetPrefix(void* _this, BSTR p) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) p, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) p, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	try { ((UTTypeDescDbIf*) _this)->SetPrefix((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTypeDescDbIf_Find(void* _this, BSTR tn) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) tn, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) tn, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	UTTypeDescIf* _ptr = (UTTypeDescIf*) NULL;
	try { _ptr = (UTTypeDescIf*) ((UTTypeDescDbIf*) _this)->Find((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescDbIf_Link(void* _this, void* db) {
	try { ((UTTypeDescDbIf*) _this)->Link((UTTypeDescDbIf*) db); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescDbIf_Link_1(void* _this) {
	try { ((UTTypeDescDbIf*) _this)->Link(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescDbIf_LinkAll(void* _this) {
	try { ((UTTypeDescDbIf*) _this)->LinkAll(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_UTTypeDescDbIf_LinkCheck(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTTypeDescDbIf*) _this)->LinkCheck(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) BSTR __cdecl Spr_UTTypeDescDbIf_GetGroup(void* _this) {
	string _val = "";
	try { _val = ((UTTypeDescDbIf*) _this)->GetGroup(); }
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
    __declspec(dllexport) void __cdecl Spr_UTTypeDescDbIf_FreeString_GetGroup(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTTypeDescDbIf_Clear(void* _this) {
	try { ((UTTypeDescDbIf*) _this)->Clear(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_NameManagerIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new NameManagerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_NameManagerIf(void* v) {
        if (v == NULL) return;
        try { delete (NameManagerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_NameManagerIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((NameManagerIf*) _this)) {
                (*((NameManagerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_NameManagerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_NameManagerIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((NameManagerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_NameManagerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) NameManagerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_NameManagerIf_FindObject_2(void* _this, BSTR name, BSTR cls) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	string arg02_("");
	int lenMB2 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) cls, -1, NULL, 0, NULL, NULL);
	if (lenMB2 > 0) {
	    LPSTR addr2 = (LPSTR) ::SysAllocStringLen(0, lenMB2);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) cls, -1, addr2, lenMB2, NULL, NULL);
	    arg02_ = (string) addr2;
	}
	NamedObjectIf* _ptr = (NamedObjectIf*) NULL;
	try { _ptr = (NamedObjectIf*) ((NameManagerIf*) _this)->FindObject((string) arg01_, (string) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_NameManagerIf_FindObject_3(void* _this, BSTR name) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	NamedObjectIf* _ptr = (NamedObjectIf*) NULL;
	try { _ptr = (NamedObjectIf*) ((NameManagerIf*) _this)->FindObject((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_SceneIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new SceneIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_SceneIf(void* v) {
        if (v == NULL) return;
        try { delete (SceneIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_SceneIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((SceneIf*) _this)) {
                (*((SceneIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_SceneIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_SceneIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((SceneIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_SceneIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) SceneIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_SdkIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new SdkIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_SdkIf(void* v) {
        if (v == NULL) return;
        try { delete (SdkIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_SdkIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((SdkIf*) _this)) {
                (*((SdkIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_SdkIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_SdkIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((SdkIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_SdkIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) SdkIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_new_UTTimerIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new UTTimerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_UTTimerIf(void* v) {
        if (v == NULL) return;
        try { delete (UTTimerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTimerIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((UTTimerIf*) _this)) {
                (*((UTTimerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_UTTimerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTTimerIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((UTTimerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTimerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) UTTimerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTimerIf_TimerFunc(void* _this, int id) {
	void* _ptr = (void*) NULL;
	try { _ptr = UTTimerIf::TimerFunc(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) unsigned int __cdecl Spr_UTTimerIf_NTimers() {
	unsigned int _val = (unsigned int) NULL;
	try { _val = UTTimerIf::NTimers(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTimerIf_Get(unsigned int id) {
	UTTimerIf* _ptr = (UTTimerIf*) NULL;
	try { _ptr = (UTTimerIf*) UTTimerIf::Get(id); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTimerIf_Create() {
	UTTimerIf* _ptr = (UTTimerIf*) NULL;
	try { _ptr = (UTTimerIf*) UTTimerIf::Create(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) unsigned int __cdecl Spr_UTTimerIf_GetID(void* _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((UTTimerIf*) _this)->GetID(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) unsigned int __cdecl Spr_UTTimerIf_GetResolution(void* _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((UTTimerIf*) _this)->GetResolution(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_UTTimerIf_SetResolution(void* _this, unsigned int r) {
	bool _val = (bool) NULL;
	try { _val = ((UTTimerIf*) _this)->SetResolution(r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) unsigned int __cdecl Spr_UTTimerIf_GetInterval(void* _this) {
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((UTTimerIf*) _this)->GetInterval(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_UTTimerIf_SetInterval(void* _this, unsigned int i) {
	bool _val = (bool) NULL;
	try { _val = ((UTTimerIf*) _this)->SetInterval(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void* __cdecl Spr_UTTimerIf_GetCallbackArg(void* _this) {
	void* _ptr = (void*) NULL;
	try { _ptr = ((UTTimerIf*) _this)->GetCallbackArg(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_UTTimerIf_GetMode(void* _this) {
	UTTimerIf::Mode _val = (UTTimerIf::Mode) NULL;
	try { _val = ((UTTimerIf*) _this)->GetMode(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (int) _val;
    }
    __declspec(dllexport) char __cdecl Spr_UTTimerIf_SetMode(void* _this, int m) {
	UTTimerIf::Mode arg01_ = ((UTTimerIf::Mode) m);
	bool _val = (bool) NULL;
	try { _val = ((UTTimerIf*) _this)->SetMode((UTTimerIf::Mode) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_UTTimerIf_IsStarted(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTTimerIf*) _this)->IsStarted(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_UTTimerIf_IsRunning(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTTimerIf*) _this)->IsRunning(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_UTTimerIf_Start(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTTimerIf*) _this)->Start(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_UTTimerIf_Stop(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTTimerIf*) _this)->Stop(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_UTTimerIf_Call(void* _this) {
	try { ((UTTimerIf*) _this)->Call(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_new_UTOptimizerIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new UTOptimizerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_UTOptimizerIf(void* v) {
        if (v == NULL) return;
        try { delete (UTOptimizerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTOptimizerIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((UTOptimizerIf*) _this)) {
                (*((UTOptimizerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_UTOptimizerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTOptimizerIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((UTOptimizerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTOptimizerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) UTOptimizerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTOptimizerIf_SetDimension(void* _this, int dimension) {
	try { ((UTOptimizerIf*) _this)->SetDimension(dimension); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_UTOptimizerIf_GetDimension(void* _this) {
	int _val = (int) NULL;
	try { _val = ((UTOptimizerIf*) _this)->GetDimension(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_UTOptimizerIf_SetInitialValue(void* _this, void* initialValue) {
	try { ((UTOptimizerIf*) _this)->SetInitialValue((const double*) initialValue); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTOptimizerIf_Initialize(void* _this) {
	try { ((UTOptimizerIf*) _this)->Initialize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTOptimizerIf_GetPopulation(void* _this) {
	double* _ptr = (double*) NULL;
	try { _ptr = ((UTOptimizerIf*) _this)->GetPopulation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTOptimizerIf_SetObjectiveFunctionValue(void* _this, double value) {
	try { ((UTOptimizerIf*) _this)->SetObjectiveFunctionValue(value); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTOptimizerIf_Next(void* _this) {
	try { ((UTOptimizerIf*) _this)->Next(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_UTOptimizerIf_IsFinished(void* _this) {
	bool _val = (bool) NULL;
	try { _val = ((UTOptimizerIf*) _this)->IsFinished(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void* __cdecl Spr_UTOptimizerIf_GetResult(void* _this) {
	double* _ptr = (double*) NULL;
	try { _ptr = ((UTOptimizerIf*) _this)->GetResult(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_UTOptimizerIf_GetFitness(void* _this) {
	double _val = (double) NULL;
	try { _val = ((UTOptimizerIf*) _this)->GetFitness(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_new_UTCMAESOptimizerIf() {
	void* _ptr = (void*) NULL;
	try { _ptr = new UTCMAESOptimizerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_UTCMAESOptimizerIf(void* v) {
        if (v == NULL) return;
        try { delete (UTCMAESOptimizerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTCMAESOptimizerIf_ToString(void* _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((UTCMAESOptimizerIf*) _this)) {
                (*((UTCMAESOptimizerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void* __cdecl Spr_UTCMAESOptimizerIf_GetIfInfo(void* _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((UTCMAESOptimizerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTCMAESOptimizerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) UTCMAESOptimizerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerIf_SetInitialValue(void* _this, void* initialValue) {
	try { ((UTCMAESOptimizerIf*) _this)->SetInitialValue((const double*) initialValue); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_UTCMAESOptimizerIf_SetInitialStdDev(void* _this, void* initialStdDev) {
	try { ((UTCMAESOptimizerIf*) _this)->SetInitialStdDev((const double*) initialStdDev); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_UTCMAESOptimizerIf_GetCurrentGeneration(void* _this) {
	int _val = (int) NULL;
	try { _val = ((UTCMAESOptimizerIf*) _this)->GetCurrentGeneration(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_UTCMAESOptimizerIf_GetCurrentPopulation(void* _this) {
	int _val = (int) NULL;
	try { _val = ((UTCMAESOptimizerIf*) _this)->GetCurrentPopulation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void* __cdecl Spr_UTCMAESOptimizerIf_Create(void* desc) {
	UTCMAESOptimizerIf* _ptr = (UTCMAESOptimizerIf*) NULL;
	try { _ptr = (UTCMAESOptimizerIf*) UTCMAESOptimizerIf::Create((const UTCMAESOptimizerDesc&) *((UTCMAESOptimizerDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) void* __cdecl Spr_UTCMAESOptimizerIf_Create_1() {
	UTCMAESOptimizerIf* _ptr = (UTCMAESOptimizerIf*) NULL;
	try { _ptr = (UTCMAESOptimizerIf*) UTCMAESOptimizerIf::Create(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerIf_GetCs(void* _this) {
	double _val = (double) NULL;
	try { _val = ((UTCMAESOptimizerIf*) _this)->GetCs(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) double __cdecl Spr_UTCMAESOptimizerIf_GetLambda(void* _this) {
	double _val = (double) NULL;
	try { _val = ((UTCMAESOptimizerIf*) _this)->GetLambda(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) char __cdecl Spr_IfInfo_Inherit(void* _this, void* info) {
	bool _val = (bool) NULL;
	try { _val = ((IfInfo*) _this)->Inherit((const IfInfo*) info); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void* __cdecl Spr_IfInfo_ClassName(void* _this) {
	const char* _ptr = (const char*) NULL;
	try { _ptr = ((IfInfo*) _this)->ClassName(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (void*) _ptr;
    }
}

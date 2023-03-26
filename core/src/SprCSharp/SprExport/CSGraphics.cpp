#include <Springhead.h>
#include <Windows.h>
#include <sstream>
#include <SprGraphics.h>
#include <Framework/SprFWApp.h>
#include <Physics/SprPHJointMotor.h>
#include <Framework/SprFWEditor.h>
#include <Framework/SprFWOpObj.h>
#include <Framework/FWScene.h>
#include <../src/SprCSharp/SprExport/CSUtility.h>
using namespace Spr;
using namespace std;
extern "C" {
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRVisualDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRVisualDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRVisualDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRVisualDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRFrameTransformMatrix() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRFrameTransformMatrix(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRFrameTransformMatrix(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRFrameTransformMatrix*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRFrameDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRFrameDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRFrameDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRFrameDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRFrameDesc_addr_transform(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRFrameDesc*)_this)->transform; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRFrameDesc_set_transform(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRFrameDesc*)_this)->transform) != _ptr) {
                ((GRFrameDesc*)_this)->transform = *((Affinef*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRDummyFrameDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRDummyFrameDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRDummyFrameDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRDummyFrameDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRKey() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRKey(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRKey(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRKey*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_GRKey_get_time(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((GRKey*)_this)).time; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRKey_set_time(HANDLE _this, unsigned int value) {
        try { (*((GRKey*)_this)).time = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRKey_vector_addr_values(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((GRKey*)_this)).values; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRKey_vector_set_values(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((GRKey*)_this)).values != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((GRKey*)_this)).values;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRAnimationKey() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRAnimationKey(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRAnimationKey(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRAnimationKey*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRAnimationKey_get_keyType(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRAnimationKey*)_this)).keyType; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationKey_set_keyType(HANDLE _this, int value) {
        try { (*((GRAnimationKey*)_this)).keyType = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationKey_vector_get_keys(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<GRKey>*) &((GRAnimationKey*)_this)->keys; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationKey_vector_set_keys(HANDLE _this, HANDLE value) {
        try { ((GRAnimationKey*)_this)->keys = *((std::vector<GRKey>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRAnimationDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRAnimationDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRAnimationDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRAnimationDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationDesc_vector_get_keys(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<GRAnimationKey>*) &((GRAnimationDesc*)_this)->keys; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationDesc_vector_set_keys(HANDLE _this, HANDLE value) {
        try { ((GRAnimationDesc*)_this)->keys = *((std::vector<GRAnimationKey>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRAnimationSetDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRAnimationSetDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRAnimationSetDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRAnimationSetDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRAnimationControllerDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRAnimationControllerDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRAnimationControllerDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRAnimationControllerDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRBlendMeshDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRBlendMeshDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRBlendMeshDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRBlendMeshDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshDesc_vector_get_positions(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec3f>*) &((GRBlendMeshDesc*)_this)->positions; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRBlendMeshDesc_vector_set_positions(HANDLE _this, HANDLE value) {
        try { ((GRBlendMeshDesc*)_this)->positions = *((std::vector<Vec3f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshDesc_vector_get_normals(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec3f>*) &((GRBlendMeshDesc*)_this)->normals; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRBlendMeshDesc_vector_set_normals(HANDLE _this, HANDLE value) {
        try { ((GRBlendMeshDesc*)_this)->normals = *((std::vector<Vec3f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshDesc_vector_get_colors(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec4f>*) &((GRBlendMeshDesc*)_this)->colors; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRBlendMeshDesc_vector_set_colors(HANDLE _this, HANDLE value) {
        try { ((GRBlendMeshDesc*)_this)->colors = *((std::vector<Vec4f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshDesc_vector_get_texCoords(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec2f>*) &((GRBlendMeshDesc*)_this)->texCoords; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRBlendMeshDesc_vector_set_texCoords(HANDLE _this, HANDLE value) {
        try { ((GRBlendMeshDesc*)_this)->texCoords = *((std::vector<Vec2f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshDesc_vector_addr_faces(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((GRBlendMeshDesc*)_this)).faces; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRBlendMeshDesc_vector_set_faces(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((GRBlendMeshDesc*)_this)).faces != _ptr) {
                vector<size_t>* src = (vector<size_t>*) _ptr;
                vector<size_t>* dst = &(*((GRBlendMeshDesc*)_this)).faces;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshDesc_vector_get_blends(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec4f>*) &((GRBlendMeshDesc*)_this)->blends; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRBlendMeshDesc_vector_set_blends(HANDLE _this, HANDLE value) {
        try { ((GRBlendMeshDesc*)_this)->blends = *((std::vector<Vec4f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshDesc_vector_get_matrixIndices(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec4f>*) &((GRBlendMeshDesc*)_this)->matrixIndices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRBlendMeshDesc_vector_set_matrixIndices(HANDLE _this, HANDLE value) {
        try { ((GRBlendMeshDesc*)_this)->matrixIndices = *((std::vector<Vec4f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshDesc_vector_get_numMatrix(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec4f>*) &((GRBlendMeshDesc*)_this)->numMatrix; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRBlendMeshDesc_vector_set_numMatrix(HANDLE _this, HANDLE value) {
        try { ((GRBlendMeshDesc*)_this)->numMatrix = *((std::vector<Vec4f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRMeshFace() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRMeshFace(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRMeshFace(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRMeshFace*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRMeshFace_get_nVertices(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRMeshFace*)_this)).nVertices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshFace_set_nVertices(HANDLE _this, int value) {
        try { (*((GRMeshFace*)_this)).nVertices = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshFace_array_addr_indices(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRMeshFace*) _this)->indices[0]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshFace_array_set_indices(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((GRMeshFace*)_this)).indices != _ptr) {
                int* src = (int*) _ptr;
                int* dst = &((GRMeshFace*) _this)->indices[0];
                memcpy((void*) dst, (const void*) src, sizeof(((GRMeshFace*) _this)->indices));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRSkinWeightDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRSkinWeightDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRSkinWeightDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRSkinWeightDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSkinWeightDesc_addr_offset(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRSkinWeightDesc*)_this)->offset; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRSkinWeightDesc_set_offset(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRSkinWeightDesc*)_this)->offset) != _ptr) {
                ((GRSkinWeightDesc*)_this)->offset = *((Affinef*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSkinWeightDesc_vector_addr_indices(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((GRSkinWeightDesc*)_this)).indices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRSkinWeightDesc_vector_set_indices(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((GRSkinWeightDesc*)_this)).indices != _ptr) {
                vector<unsigned int>* src = (vector<unsigned int>*) _ptr;
                vector<unsigned int>* dst = &(*((GRSkinWeightDesc*)_this)).indices;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSkinWeightDesc_vector_addr_weights(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((GRSkinWeightDesc*)_this)).weights; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRSkinWeightDesc_vector_set_weights(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((GRSkinWeightDesc*)_this)).weights != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((GRSkinWeightDesc*)_this)).weights;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRMeshDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRMeshDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRMeshDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRMeshDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshDesc_vector_get_vertices(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec3f>*) &((GRMeshDesc*)_this)->vertices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshDesc_vector_set_vertices(HANDLE _this, HANDLE value) {
        try { ((GRMeshDesc*)_this)->vertices = *((std::vector<Vec3f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshDesc_vector_get_faces(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<GRMeshFace>*) &((GRMeshDesc*)_this)->faces; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshDesc_vector_set_faces(HANDLE _this, HANDLE value) {
        try { ((GRMeshDesc*)_this)->faces = *((std::vector<GRMeshFace>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshDesc_vector_get_normals(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec3f>*) &((GRMeshDesc*)_this)->normals; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshDesc_vector_set_normals(HANDLE _this, HANDLE value) {
        try { ((GRMeshDesc*)_this)->normals = *((std::vector<Vec3f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshDesc_vector_get_faceNormals(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<GRMeshFace>*) &((GRMeshDesc*)_this)->faceNormals; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshDesc_vector_set_faceNormals(HANDLE _this, HANDLE value) {
        try { ((GRMeshDesc*)_this)->faceNormals = *((std::vector<GRMeshFace>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshDesc_vector_get_colors(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec4f>*) &((GRMeshDesc*)_this)->colors; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshDesc_vector_set_colors(HANDLE _this, HANDLE value) {
        try { ((GRMeshDesc*)_this)->colors = *((std::vector<Vec4f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshDesc_vector_get_texCoords(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (vector<Vec2f>*) &((GRMeshDesc*)_this)->texCoords; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshDesc_vector_set_texCoords(HANDLE _this, HANDLE value) {
        try { ((GRMeshDesc*)_this)->texCoords = *((std::vector<Vec2f>*) value); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshDesc_vector_addr_materialList(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &(*((GRMeshDesc*)_this)).materialList; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshDesc_vector_set_materialList(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(*((GRMeshDesc*)_this)).materialList != _ptr) {
                vector<int>* src = (vector<int>*) _ptr;
                vector<int>* dst = &(*((GRMeshDesc*)_this)).materialList;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRFont() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRFont(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRFont_8(int h, const char* f) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRFont(h, f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRFont_9(int h) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRFont(h); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRFont(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRFont*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRFont_get_height(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRFont*)_this)).height; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRFont_set_height(HANDLE _this, int value) {
        try { (*((GRFont*)_this)).height = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRFont_get_width(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRFont*)_this)).width; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRFont_set_width(HANDLE _this, int value) {
        try { (*((GRFont*)_this)).width = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRFont_get_weight(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRFont*)_this)).weight; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRFont_set_weight(HANDLE _this, int value) {
        try { (*((GRFont*)_this)).weight = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRFont_get_face(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((GRFont*) _this)->face;
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
    __declspec(dllexport) void __cdecl Spr_GRFont_set_face(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((GRFont*) _this)->face = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRFont_FreeString_face(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned long __cdecl Spr_GRFont_get_color(HANDLE _this) {
        unsigned long _val = 0;
        try { _val = (*((GRFont*)_this)).color; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRFont_set_color(HANDLE _this, unsigned long value) {
        try { (*((GRFont*)_this)).color = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRFont_get_bItalic(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((GRFont*)_this)).bItalic; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRFont_set_bItalic(HANDLE _this, char value) {
        try { (*((GRFont*)_this)).bItalic = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRFont_SetColor(HANDLE _this, unsigned long c) {
	try { ((GRFont*) _this)->SetColor(c); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRLightDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRLightDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRLightDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRLightDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRLightDesc_addr_ambient(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRLightDesc*)_this)->ambient; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_ambient(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRLightDesc*)_this)->ambient) != _ptr) {
                ((GRLightDesc*)_this)->ambient = *((Vec4f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRLightDesc_addr_diffuse(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRLightDesc*)_this)->diffuse; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_diffuse(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRLightDesc*)_this)->diffuse) != _ptr) {
                ((GRLightDesc*)_this)->diffuse = *((Vec4f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRLightDesc_addr_specular(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRLightDesc*)_this)->specular; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_specular(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRLightDesc*)_this)->specular) != _ptr) {
                ((GRLightDesc*)_this)->specular = *((Vec4f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRLightDesc_addr_position(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRLightDesc*)_this)->position; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_position(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRLightDesc*)_this)->position) != _ptr) {
                ((GRLightDesc*)_this)->position = *((Vec4f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRLightDesc_get_range(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRLightDesc*)_this)).range; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_range(HANDLE _this, float value) {
        try { (*((GRLightDesc*)_this)).range = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRLightDesc_get_attenuation0(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRLightDesc*)_this)).attenuation0; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_attenuation0(HANDLE _this, float value) {
        try { (*((GRLightDesc*)_this)).attenuation0 = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRLightDesc_get_attenuation1(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRLightDesc*)_this)).attenuation1; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_attenuation1(HANDLE _this, float value) {
        try { (*((GRLightDesc*)_this)).attenuation1 = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRLightDesc_get_attenuation2(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRLightDesc*)_this)).attenuation2; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_attenuation2(HANDLE _this, float value) {
        try { (*((GRLightDesc*)_this)).attenuation2 = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRLightDesc_addr_spotDirection(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRLightDesc*)_this)->spotDirection; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_spotDirection(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRLightDesc*)_this)->spotDirection) != _ptr) {
                ((GRLightDesc*)_this)->spotDirection = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRLightDesc_get_spotFalloff(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRLightDesc*)_this)).spotFalloff; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_spotFalloff(HANDLE _this, float value) {
        try { (*((GRLightDesc*)_this)).spotFalloff = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRLightDesc_get_spotInner(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRLightDesc*)_this)).spotInner; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_spotInner(HANDLE _this, float value) {
        try { (*((GRLightDesc*)_this)).spotInner = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRLightDesc_get_spotCutoff(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRLightDesc*)_this)).spotCutoff; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRLightDesc_set_spotCutoff(HANDLE _this, float value) {
        try { (*((GRLightDesc*)_this)).spotCutoff = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRMaterialDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRMaterialDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRMaterialDesc_8(HANDLE a, HANDLE d, HANDLE s, HANDLE e, float p) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRMaterialDesc(*((Vec4f*) a), *((Vec4f*) d), *((Vec4f*) s), *((Vec4f*) e), p); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRMaterialDesc_9(HANDLE c, float p) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRMaterialDesc(*((Vec4f*) c), p); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRMaterialDesc_10(HANDLE c) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRMaterialDesc(*((Vec4f*) c)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRMaterialDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRMaterialDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMaterialDesc_addr_ambient(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRMaterialDesc*)_this)->ambient; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMaterialDesc_set_ambient(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRMaterialDesc*)_this)->ambient) != _ptr) {
                ((GRMaterialDesc*)_this)->ambient = *((Vec4f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMaterialDesc_addr_diffuse(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRMaterialDesc*)_this)->diffuse; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMaterialDesc_set_diffuse(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRMaterialDesc*)_this)->diffuse) != _ptr) {
                ((GRMaterialDesc*)_this)->diffuse = *((Vec4f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMaterialDesc_addr_specular(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRMaterialDesc*)_this)->specular; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMaterialDesc_set_specular(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRMaterialDesc*)_this)->specular) != _ptr) {
                ((GRMaterialDesc*)_this)->specular = *((Vec4f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMaterialDesc_addr_emissive(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRMaterialDesc*)_this)->emissive; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMaterialDesc_set_emissive(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRMaterialDesc*)_this)->emissive) != _ptr) {
                ((GRMaterialDesc*)_this)->emissive = *((Vec4f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRMaterialDesc_get_power(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRMaterialDesc*)_this)).power; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRMaterialDesc_set_power(HANDLE _this, float value) {
        try { (*((GRMaterialDesc*)_this)).power = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMaterialDesc_get_texname(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((GRMaterialDesc*) _this)->texname;
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
    __declspec(dllexport) void __cdecl Spr_GRMaterialDesc_set_texname(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((GRMaterialDesc*) _this)->texname = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRMaterialDesc_FreeString_texname(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRMaterialDesc_IsOpaque(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((GRMaterialDesc*) _this)->IsOpaque(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_GRMaterialDesc_Is3D(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((GRMaterialDesc*) _this)->Is3D(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRCameraDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRCameraDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRCameraDesc_7(HANDLE sz, HANDLE c, float f, float b, int t) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRCameraDesc(*((Vec2f*) sz), *((Vec2f*) c), f, b, t); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRCameraDesc_8(HANDLE sz, HANDLE c, float f, float b) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRCameraDesc(*((Vec2f*) sz), *((Vec2f*) c), f, b); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRCameraDesc_9(HANDLE sz, HANDLE c, float f) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRCameraDesc(*((Vec2f*) sz), *((Vec2f*) c), f); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRCameraDesc_10(HANDLE sz, HANDLE c) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRCameraDesc(*((Vec2f*) sz), *((Vec2f*) c)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRCameraDesc_11(HANDLE sz) {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRCameraDesc(*((Vec2f*) sz)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRCameraDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRCameraDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRCameraDesc_addr_size(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRCameraDesc*)_this)->size; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRCameraDesc_set_size(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRCameraDesc*)_this)->size) != _ptr) {
                ((GRCameraDesc*)_this)->size = *((Vec2f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRCameraDesc_addr_center(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRCameraDesc*)_this)->center; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRCameraDesc_set_center(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRCameraDesc*)_this)->center) != _ptr) {
                ((GRCameraDesc*)_this)->center = *((Vec2f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRCameraDesc_get_front(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRCameraDesc*)_this)).front; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRCameraDesc_set_front(HANDLE _this, float value) {
        try { (*((GRCameraDesc*)_this)).front = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRCameraDesc_get_back(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRCameraDesc*)_this)).back; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRCameraDesc_set_back(HANDLE _this, float value) {
        try { (*((GRCameraDesc*)_this)).back = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRCameraDesc_get_type(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRCameraDesc*)_this)).type; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRCameraDesc_set_type(HANDLE _this, int value) {
        try { (*((GRCameraDesc*)_this)).type = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRShadowLightDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRShadowLightDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRShadowLightDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRShadowLightDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRShadowLightDesc_get_directional(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((GRShadowLightDesc*)_this)).directional; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_directional(HANDLE _this, char value) {
        try { (*((GRShadowLightDesc*)_this)).directional = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShadowLightDesc_addr_position(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRShadowLightDesc*)_this)->position; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_position(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRShadowLightDesc*)_this)->position) != _ptr) {
                ((GRShadowLightDesc*)_this)->position = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShadowLightDesc_addr_lookat(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRShadowLightDesc*)_this)->lookat; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_lookat(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRShadowLightDesc*)_this)->lookat) != _ptr) {
                ((GRShadowLightDesc*)_this)->lookat = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShadowLightDesc_addr_up(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRShadowLightDesc*)_this)->up; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_up(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRShadowLightDesc*)_this)->up) != _ptr) {
                ((GRShadowLightDesc*)_this)->up = *((Vec3f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShadowLightDesc_addr_size(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRShadowLightDesc*)_this)->size; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_size(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRShadowLightDesc*)_this)->size) != _ptr) {
                ((GRShadowLightDesc*)_this)->size = *((Vec2f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRShadowLightDesc_get_fov(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRShadowLightDesc*)_this)).fov; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_fov(HANDLE _this, float value) {
        try { (*((GRShadowLightDesc*)_this)).fov = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRShadowLightDesc_get_front(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRShadowLightDesc*)_this)).front; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_front(HANDLE _this, float value) {
        try { (*((GRShadowLightDesc*)_this)).front = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRShadowLightDesc_get_back(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRShadowLightDesc*)_this)).back; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_back(HANDLE _this, float value) {
        try { (*((GRShadowLightDesc*)_this)).back = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRShadowLightDesc_get_texWidth(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRShadowLightDesc*)_this)).texWidth; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_texWidth(HANDLE _this, int value) {
        try { (*((GRShadowLightDesc*)_this)).texWidth = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRShadowLightDesc_get_texHeight(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRShadowLightDesc*)_this)).texHeight; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_texHeight(HANDLE _this, int value) {
        try { (*((GRShadowLightDesc*)_this)).texHeight = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRShadowLightDesc_get_offset(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRShadowLightDesc*)_this)).offset; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_offset(HANDLE _this, float value) {
        try { (*((GRShadowLightDesc*)_this)).offset = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShadowLightDesc_addr_color(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRShadowLightDesc*)_this)->color; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRShadowLightDesc_set_color(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRShadowLightDesc*)_this)->color) != _ptr) {
                ((GRShadowLightDesc*)_this)->color = *((Vec4f*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRSceneDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRSceneDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRSceneDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRSceneDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRSdkDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRSdkDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRSdkDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRSdkDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_SFBlendLocation() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new SFBlendLocation(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_SFBlendLocation(HANDLE v) {
        if (v == NULL) return;
        try { delete (SFBlendLocation*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_SFBlendLocation_get_uBlendMatrix(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((SFBlendLocation*)_this)).uBlendMatrix; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_SFBlendLocation_set_uBlendMatrix(HANDLE _this, unsigned int value) {
        try { (*((SFBlendLocation*)_this)).uBlendMatrix = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_SFBlendLocation_get_aWeight(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((SFBlendLocation*)_this)).aWeight; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_SFBlendLocation_set_aWeight(HANDLE _this, unsigned int value) {
        try { (*((SFBlendLocation*)_this)).aWeight = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_SFBlendLocation_get_aMatrixIndices(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((SFBlendLocation*)_this)).aMatrixIndices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_SFBlendLocation_set_aMatrixIndices(HANDLE _this, unsigned int value) {
        try { (*((SFBlendLocation*)_this)).aMatrixIndices = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_SFBlendLocation_get_aNumMatrix(HANDLE _this) {
        unsigned int _val = 0;
        try { _val = (*((SFBlendLocation*)_this)).aNumMatrix; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_SFBlendLocation_set_aNumMatrix(HANDLE _this, unsigned int value) {
        try { (*((SFBlendLocation*)_this)).aNumMatrix = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRShaderDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRShaderDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRShaderDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRShaderDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShaderDesc_get_vsname(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((GRShaderDesc*) _this)->vsname;
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
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_set_vsname(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((GRShaderDesc*) _this)->vsname = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_FreeString_vsname(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShaderDesc_get_fsname(HANDLE _this) {
        BSTR result = NULL;
        try {
	    string str = ((GRShaderDesc*) _this)->fsname;
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
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_set_fsname(HANDLE _this, HANDLE value) {
        try {
	    int lenMB0 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, NULL, 0, NULL, NULL);
	    if (lenMB0 > 0) {
	        LPSTR addr0 = (LPSTR) ::SysAllocStringLen(0, lenMB0);
	        ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) value, -1, addr0, lenMB0, NULL, NULL);
	        ((GRShaderDesc*) _this)->fsname = (string) addr0;
	    }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_FreeString_fsname(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRShaderDesc_get_bEnableLighting(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((GRShaderDesc*)_this)).bEnableLighting; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_set_bEnableLighting(HANDLE _this, char value) {
        try { (*((GRShaderDesc*)_this)).bEnableLighting = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRShaderDesc_get_bEnableTexture2D(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((GRShaderDesc*)_this)).bEnableTexture2D; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_set_bEnableTexture2D(HANDLE _this, char value) {
        try { (*((GRShaderDesc*)_this)).bEnableTexture2D = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRShaderDesc_get_bEnableTexture3D(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((GRShaderDesc*)_this)).bEnableTexture3D; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_set_bEnableTexture3D(HANDLE _this, char value) {
        try { (*((GRShaderDesc*)_this)).bEnableTexture3D = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRShaderDesc_get_bShadowCreate(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((GRShaderDesc*)_this)).bShadowCreate; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_set_bShadowCreate(HANDLE _this, char value) {
        try { (*((GRShaderDesc*)_this)).bShadowCreate = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRShaderDesc_get_bShadowRender(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((GRShaderDesc*)_this)).bShadowRender; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_set_bShadowRender(HANDLE _this, char value) {
        try { (*((GRShaderDesc*)_this)).bShadowRender = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRShaderDesc_get_bEnableBlending(HANDLE _this) {
        char _val = 0;
        try { _val = (char) (*((GRShaderDesc*)_this)).bEnableBlending; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_set_bEnableBlending(HANDLE _this, char value) {
        try { (*((GRShaderDesc*)_this)).bEnableBlending = (value == 0) ? false : true; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRShaderDesc_get_numBlendMatrices(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRShaderDesc*)_this)).numBlendMatrices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRShaderDesc_set_numBlendMatrices(HANDLE _this, int value) {
        try { (*((GRShaderDesc*)_this)).numBlendMatrices = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRShaderFormat() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRShaderFormat(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRShaderFormat(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRShaderFormat*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRSphereDesc() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRSphereDesc(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRSphereDesc(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRSphereDesc*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRSphereDesc_get_radius(HANDLE _this) {
        float _val = 0;
        try { _val = (*((GRSphereDesc*)_this)).radius; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRSphereDesc_set_radius(HANDLE _this, float value) {
        try { (*((GRSphereDesc*)_this)).radius = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRSphereDesc_get_slices(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRSphereDesc*)_this)).slices; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRSphereDesc_set_slices(HANDLE _this, int value) {
        try { (*((GRSphereDesc*)_this)).slices = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRSphereDesc_get_stacks(HANDLE _this) {
        int _val = 0;
        try { _val = (*((GRSphereDesc*)_this)).stacks; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRSphereDesc_set_stacks(HANDLE _this, int value) {
        try { (*((GRSphereDesc*)_this)).stacks = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRVertexElement() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRVertexElement(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRVertexElement(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRVertexElement*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) short __cdecl Spr_GRVertexElement_get_stream(HANDLE _this) {
        short _val = 0;
        try { _val = (*((GRVertexElement*)_this)).stream; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRVertexElement_set_stream(HANDLE _this, short value) {
        try { (*((GRVertexElement*)_this)).stream = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) short __cdecl Spr_GRVertexElement_get_offset(HANDLE _this) {
        short _val = 0;
        try { _val = (*((GRVertexElement*)_this)).offset; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRVertexElement_set_offset(HANDLE _this, short value) {
        try { (*((GRVertexElement*)_this)).offset = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned char __cdecl Spr_GRVertexElement_get_type(HANDLE _this) {
        unsigned char _val = 0;
        try { _val = (*((GRVertexElement*)_this)).type; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRVertexElement_set_type(HANDLE _this, unsigned char value) {
        try { (*((GRVertexElement*)_this)).type = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned char __cdecl Spr_GRVertexElement_get_method(HANDLE _this) {
        unsigned char _val = 0;
        try { _val = (*((GRVertexElement*)_this)).method; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRVertexElement_set_method(HANDLE _this, unsigned char value) {
        try { (*((GRVertexElement*)_this)).method = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned char __cdecl Spr_GRVertexElement_get_usage(HANDLE _this) {
        unsigned char _val = 0;
        try { _val = (*((GRVertexElement*)_this)).usage; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRVertexElement_set_usage(HANDLE _this, unsigned char value) {
        try { (*((GRVertexElement*)_this)).usage = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned char __cdecl Spr_GRVertexElement_get_usageIndex(HANDLE _this) {
        unsigned char _val = 0;
        try { _val = (*((GRVertexElement*)_this)).usageIndex; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRVertexElement_set_usageIndex(HANDLE _this, unsigned char value) {
        try { (*((GRVertexElement*)_this)).usageIndex = value; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Position2f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Position2f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Position3f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Position3f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Position4f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Position4f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Normal3f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Normal3f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_TexCoords2f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::TexCoords2f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_TexCoords4f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::TexCoords4f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Color4b(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Color4b(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Color4f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Color4f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Color3f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Color3f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_BlendNf(size_t o, size_t n) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::BlendNf(o, n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Blend4f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Blend4f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Blend3f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Blend3f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Blend2f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Blend2f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_Blend1f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::Blend1f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_MatrixIndicesNf(size_t o, size_t n) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::MatrixIndicesNf(o, n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_NumBonesNf(size_t o, size_t n) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::NumBonesNf(o, n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_MatrixIndices4f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::MatrixIndices4f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexElement_NumBones4f(size_t o) {
	GRVertexElement* _ptr = (GRVertexElement*) NULL;
	try { _ptr = new GRVertexElement(); (*_ptr) = GRVertexElement::NumBones4f(o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRVertexArray() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRVertexArray(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRVertexArray(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRVertexArray*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexArray_addr_format(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = &((GRVertexArray*)_this)->format; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRVertexArray_set_format(HANDLE _this, HANDLE _ptr) {
        try {
            if (&(((GRVertexArray*)_this)->format) != _ptr) {
                ((GRVertexArray*)_this)->format = *((GRVertexElement*)_ptr);
            }
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVertexArray_get_buffer(HANDLE _this) {
        HANDLE _ptr = NULL;
        try { _ptr = (*((GRVertexArray*)_this)).buffer; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRVertexArray_set_buffer(HANDLE _this, HANDLE value) {
        try { (*((GRVertexArray*)_this)).buffer = (*((void**)value)); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRVisualIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRVisualIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRVisualIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRVisualIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVisualIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRVisualIf*) _this)) {
                (*((GRVisualIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRVisualIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVisualIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRVisualIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVisualIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRVisualIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRVisualIf_Render(HANDLE _this, HANDLE r) {
	try { ((GRVisualIf*) _this)->Render((GRRenderIf*) r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRVisualIf_Rendered(HANDLE _this, HANDLE r) {
	try { ((GRVisualIf*) _this)->Rendered((GRRenderIf*) r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRVisualIf_Enable(HANDLE _this, char on) {
	bool arg01_ = (on == 0) ? false : true;
	try { ((GRVisualIf*) _this)->Enable((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRVisualIf_Enable_1(HANDLE _this) {
	try { ((GRVisualIf*) _this)->Enable(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRVisualIf_IsEnabled(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((GRVisualIf*) _this)->IsEnabled(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRVisualIf_GetMaterial(HANDLE _this) {
	GRMaterialIf* _ptr = (GRMaterialIf*) NULL;
	try { _ptr = (GRMaterialIf*) ((GRVisualIf*) _this)->GetMaterial(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRVisualIf_SetMaterial(HANDLE _this, HANDLE mat) {
	try { ((GRVisualIf*) _this)->SetMaterial((GRMaterialIf*) mat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRFrameIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRFrameIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRFrameIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRFrameIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRFrameIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRFrameIf*) _this)) {
                (*((GRFrameIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRFrameIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRFrameIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRFrameIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRFrameIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRFrameIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRFrameIf_GetParent(HANDLE _this) {
	GRFrameIf* _ptr = (GRFrameIf*) NULL;
	try { _ptr = (GRFrameIf*) ((GRFrameIf*) _this)->GetParent(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRFrameIf_SetParent(HANDLE _this, HANDLE fr) {
	try { ((GRFrameIf*) _this)->SetParent((GRFrameIf*) fr); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRFrameIf_NChildren(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((GRFrameIf*) _this)->NChildren(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRFrameIf_GetChildren(HANDLE _this) {
	GRVisualIf* _ptr = (GRVisualIf*) NULL;
	try { _ptr = (GRVisualIf*) ((GRFrameIf*) _this)->GetChildren(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRDummyFrameIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRDummyFrameIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRDummyFrameIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRDummyFrameIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRDummyFrameIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRDummyFrameIf*) _this)) {
                (*((GRDummyFrameIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRDummyFrameIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRDummyFrameIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRDummyFrameIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRDummyFrameIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRDummyFrameIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRAnimationIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRAnimationIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRAnimationIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRAnimationIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRAnimationIf*) _this)) {
                (*((GRAnimationIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRAnimationIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRAnimationIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRAnimationIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationIf_BlendPose(HANDLE _this, float time, float weight) {
	try { ((GRAnimationIf*) _this)->BlendPose(time, weight); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationIf_ResetPose(HANDLE _this) {
	try { ((GRAnimationIf*) _this)->ResetPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationIf_LoadInitialPose(HANDLE _this) {
	try { ((GRAnimationIf*) _this)->LoadInitialPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationIf_GetAnimationKey(HANDLE _this, int n) {
	GRAnimationKey* _ptr = (GRAnimationKey*) NULL;
	try { _ptr = new GRAnimationKey(); (*_ptr) = ((GRAnimationIf*) _this)->GetAnimationKey(n); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_GRAnimationIf_NAnimationKey(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((GRAnimationIf*) _this)->NAnimationKey(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationIf_DeletePose(HANDLE _this, float t) {
	try { ((GRAnimationIf*) _this)->DeletePose(t); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRAnimationSetIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRAnimationSetIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRAnimationSetIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRAnimationSetIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationSetIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRAnimationSetIf*) _this)) {
                (*((GRAnimationSetIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRAnimationSetIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationSetIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRAnimationSetIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationSetIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRAnimationSetIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationSetIf_BlendPose(HANDLE _this, float time, float weight) {
	try { ((GRAnimationSetIf*) _this)->BlendPose(time, weight); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationSetIf_ResetPose(HANDLE _this) {
	try { ((GRAnimationSetIf*) _this)->ResetPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationSetIf_LoadInitialPose(HANDLE _this) {
	try { ((GRAnimationSetIf*) _this)->LoadInitialPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationSetIf_GetChildObject(HANDLE _this, size_t p) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((GRAnimationSetIf*) _this)->GetChildObject(p); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationSetIf_SetCurrentAnimationPose(HANDLE _this, float t) {
	try { ((GRAnimationSetIf*) _this)->SetCurrentAnimationPose(t); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationSetIf_DeleteAnimationPose(HANDLE _this, float t) {
	try { ((GRAnimationSetIf*) _this)->DeleteAnimationPose(t); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) float __cdecl Spr_GRAnimationSetIf_GetLastKeyTime(HANDLE _this) {
	float _val = (float) NULL;
	try { _val = ((GRAnimationSetIf*) _this)->GetLastKeyTime(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRAnimationControllerIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRAnimationControllerIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRAnimationControllerIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRAnimationControllerIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationControllerIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRAnimationControllerIf*) _this)) {
                (*((GRAnimationControllerIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRAnimationControllerIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationControllerIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRAnimationControllerIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationControllerIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRAnimationControllerIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationControllerIf_BlendPose(HANDLE _this, BSTR name, float time, float weight) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) name, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	try { ((GRAnimationControllerIf*) _this)->BlendPose((string) arg01_, time, weight); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationControllerIf_ResetPose(HANDLE _this) {
	try { ((GRAnimationControllerIf*) _this)->ResetPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRAnimationControllerIf_LoadInitialPose(HANDLE _this) {
	try { ((GRAnimationControllerIf*) _this)->LoadInitialPose(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRAnimationControllerIf_AddChildObject(HANDLE _this, HANDLE o) {
	bool _val = (bool) NULL;
	try { _val = ((GRAnimationControllerIf*) _this)->AddChildObject((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) char __cdecl Spr_GRAnimationControllerIf_DelChildObject(HANDLE _this, HANDLE o) {
	bool _val = (bool) NULL;
	try { _val = ((GRAnimationControllerIf*) _this)->DelChildObject((ObjectIf*) o); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) size_t __cdecl Spr_GRAnimationControllerIf_NChildObject(HANDLE _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((GRAnimationControllerIf*) _this)->NChildObject(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationControllerIf_GetChildObject(HANDLE _this, size_t p) {
	ObjectIf* _ptr = (ObjectIf*) NULL;
	try { _ptr = (ObjectIf*) ((GRAnimationControllerIf*) _this)->GetChildObject(p); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRAnimationControllerIf_GetAnimationSet(HANDLE _this, size_t p) {
	GRAnimationSetIf* _ptr = (GRAnimationSetIf*) NULL;
	try { _ptr = (GRAnimationSetIf*) ((GRAnimationControllerIf*) _this)->GetAnimationSet(p); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRBlendMeshIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRBlendMeshIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRBlendMeshIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRBlendMeshIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRBlendMeshIf*) _this)) {
                (*((GRBlendMeshIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRBlendMeshIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRBlendMeshIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRBlendMeshIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRBlendMeshIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRSkinWeightIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRSkinWeightIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRSkinWeightIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRSkinWeightIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSkinWeightIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRSkinWeightIf*) _this)) {
                (*((GRSkinWeightIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRSkinWeightIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSkinWeightIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRSkinWeightIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSkinWeightIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRSkinWeightIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRMeshIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRMeshIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRMeshIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRMeshIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRMeshIf*) _this)) {
                (*((GRMeshIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRMeshIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRMeshIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRMeshIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_GRMeshIf_NVertex(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((GRMeshIf*) _this)->NVertex(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_GRMeshIf_NTriangle(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((GRMeshIf*) _this)->NTriangle(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_GRMeshIf_NFace(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((GRMeshIf*) _this)->NFace(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_GetVertices(HANDLE _this) {
        Vec3f* _ptr = (Vec3f*) NULL;
        try { Vec3f* _ary = (((GRMeshIf*) _this)->GetVertices());
              int _size = 0;
              _ptr = new Vec3f[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_GetNormals(HANDLE _this) {
        Vec3f* _ptr = (Vec3f*) NULL;
        try { Vec3f* _ary = (((GRMeshIf*) _this)->GetNormals());
              int _size = 0;
              _ptr = new Vec3f[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_GetColors(HANDLE _this) {
        Vec4f* _ptr = (Vec4f*) NULL;
        try { Vec4f* _ary = (((GRMeshIf*) _this)->GetColors());
              int _size = 0;
              _ptr = new Vec4f[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_GetTexCoords(HANDLE _this) {
        Vec2f* _ptr = (Vec2f*) NULL;
        try { Vec2f* _ary = (((GRMeshIf*) _this)->GetTexCoords());
              int _size = 0;
              _ptr = new Vec2f[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_GetFaces(HANDLE _this) {
        GRMeshFace* _ptr = (GRMeshFace*) NULL;
        try { GRMeshFace* _ary = (((GRMeshIf*) _this)->GetFaces());
              int _size = 0;
              _ptr = new GRMeshFace[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_GetFaceNormals(HANDLE _this) {
        GRMeshFace* _ptr = (GRMeshFace*) NULL;
        try { GRMeshFace* _ary = (((GRMeshIf*) _this)->GetFaceNormals());
              int _size = 0;
              _ptr = new GRMeshFace[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_GetMaterialIndices(HANDLE _this) {
	int* _ptr = (int*) NULL;
	try { _ptr = ((GRMeshIf*) _this)->GetMaterialIndices(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshIf_SwitchCoordinate(HANDLE _this) {
	try { ((GRMeshIf*) _this)->SwitchCoordinate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshIf_EnableTex3D(HANDLE _this, char on) {
	bool arg01_ = (on == 0) ? false : true;
	try { ((GRMeshIf*) _this)->EnableTex3D((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRMeshIf_EnableTex3D_1(HANDLE _this) {
	try { ((GRMeshIf*) _this)->EnableTex3D(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) char __cdecl Spr_GRMeshIf_IsTex3D(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((GRMeshIf*) _this)->IsTex3D(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMeshIf_CreateSkinWeight(HANDLE _this, HANDLE desc) {
	GRSkinWeightIf* _ptr = (GRSkinWeightIf*) NULL;
	try { _ptr = (GRSkinWeightIf*) ((GRMeshIf*) _this)->CreateSkinWeight((const GRSkinWeightDesc&) *((GRSkinWeightDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRLightIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRLightIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRLightIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRLightIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRLightIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRLightIf*) _this)) {
                (*((GRLightIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRLightIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRLightIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRLightIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRLightIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRLightIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRMaterialIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRMaterialIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRMaterialIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRMaterialIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMaterialIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRMaterialIf*) _this)) {
                (*((GRMaterialIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRMaterialIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMaterialIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRMaterialIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRMaterialIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRMaterialIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_GRMaterialIf_IsOpaque(HANDLE _this) {
	bool _val = (bool) NULL;
	try { _val = ((GRMaterialIf*) _this)->IsOpaque(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRCameraIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRCameraIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRCameraIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRCameraIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRCameraIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRCameraIf*) _this)) {
                (*((GRCameraIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRCameraIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRCameraIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRCameraIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRCameraIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRCameraIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRCameraIf_GetFrame(HANDLE _this) {
	GRFrameIf* _ptr = (GRFrameIf*) NULL;
	try { _ptr = (GRFrameIf*) ((GRCameraIf*) _this)->GetFrame(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRCameraIf_SetFrame(HANDLE _this, HANDLE fr) {
	try { ((GRCameraIf*) _this)->SetFrame((GRFrameIf*) fr); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRShadowLightIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRShadowLightIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRShadowLightIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRShadowLightIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShadowLightIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRShadowLightIf*) _this)) {
                (*((GRShadowLightIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRShadowLightIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShadowLightIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRShadowLightIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShadowLightIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRShadowLightIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRRenderBaseIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRRenderBaseIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRRenderBaseIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRRenderBaseIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderBaseIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRRenderBaseIf*) _this)) {
                (*((GRRenderBaseIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderBaseIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRRenderBaseIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderBaseIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRRenderBaseIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetViewport(HANDLE _this, HANDLE pos, HANDLE sz) {
	Vec2f arg01_ = *((Vec2f*) pos);
	Vec2f arg02_ = *((Vec2f*) sz);
	try { ((GRRenderBaseIf*) _this)->SetViewport((Vec2f) arg01_, (Vec2f) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderBaseIf_GetViewportPos(HANDLE _this) {
	Vec2f* _ptr = (Vec2f*) NULL;
	try { _ptr = new Vec2f(); (*_ptr) = ((GRRenderBaseIf*) _this)->GetViewportPos(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderBaseIf_GetViewportSize(HANDLE _this) {
	Vec2f* _ptr = (Vec2f*) NULL;
	try { _ptr = new Vec2f(); (*_ptr) = ((GRRenderBaseIf*) _this)->GetViewportSize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_ClearBuffer(HANDLE _this, char color, char depth) {
	bool arg01_ = (color == 0) ? false : true;
	bool arg02_ = (depth == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->ClearBuffer((bool) arg01_, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_ClearBuffer_1(HANDLE _this, char color) {
	bool arg01_ = (color == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->ClearBuffer((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_ClearBuffer_2(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->ClearBuffer(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SwapBuffers(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->SwapBuffers(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_GetClearColor(HANDLE _this, HANDLE color) {
	try { ((GRRenderBaseIf*) _this)->GetClearColor((Vec4f&) *((Vec4f*) color)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetClearColor(HANDLE _this, HANDLE color) {
	try { ((GRRenderBaseIf*) _this)->SetClearColor((const Vec4f&) *((Vec4f*) color)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_BeginScene(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->BeginScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_EndScene(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->EndScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_PushProjectionMatrix(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->PushProjectionMatrix(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_PopProjectionMatrix(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->PopProjectionMatrix(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_PushModelMatrix(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->PushModelMatrix(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_PopModelMatrix(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->PopModelMatrix(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_ClearBlendMatrix(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->ClearBlendMatrix(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetVertexFormat(HANDLE _this, HANDLE e) {
	try { ((GRRenderBaseIf*) _this)->SetVertexFormat((const GRVertexElement*) e); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawDirect(HANDLE _this, int ty, HANDLE vtx, size_t count, size_t stride) {
	GRRenderBaseIf::TPrimitiveType arg01_ = ((GRRenderBaseIf::TPrimitiveType) ty);
	try { ((GRRenderBaseIf*) _this)->DrawDirect((GRRenderBaseIf::TPrimitiveType) arg01_, vtx, count, stride); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawDirect_1(HANDLE _this, int ty, HANDLE vtx, size_t count) {
	GRRenderBaseIf::TPrimitiveType arg01_ = ((GRRenderBaseIf::TPrimitiveType) ty);
	try { ((GRRenderBaseIf*) _this)->DrawDirect((GRRenderBaseIf::TPrimitiveType) arg01_, vtx, count); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawIndexed(HANDLE _this, int ty, HANDLE idx, HANDLE vtx, size_t count, size_t stride) {
	GRRenderBaseIf::TPrimitiveType arg01_ = ((GRRenderBaseIf::TPrimitiveType) ty);
	try { ((GRRenderBaseIf*) _this)->DrawIndexed((GRRenderBaseIf::TPrimitiveType) arg01_, (unsigned int*) idx, vtx, count, stride); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawIndexed_1(HANDLE _this, int ty, HANDLE idx, HANDLE vtx, size_t count) {
	GRRenderBaseIf::TPrimitiveType arg01_ = ((GRRenderBaseIf::TPrimitiveType) ty);
	try { ((GRRenderBaseIf*) _this)->DrawIndexed((GRRenderBaseIf::TPrimitiveType) arg01_, (unsigned int*) idx, vtx, count); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawArrays(HANDLE _this, int ty, HANDLE arrays, size_t count) {
	GRRenderBaseIf::TPrimitiveType arg01_ = ((GRRenderBaseIf::TPrimitiveType) ty);
	try { ((GRRenderBaseIf*) _this)->DrawArrays((GRRenderBaseIf::TPrimitiveType) arg01_, (GRVertexArray*) arrays, count); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawArrays_1(HANDLE _this, int ty, HANDLE idx, HANDLE arrays, size_t count) {
	GRRenderBaseIf::TPrimitiveType arg01_ = ((GRRenderBaseIf::TPrimitiveType) ty);
	try { ((GRRenderBaseIf*) _this)->DrawArrays((GRRenderBaseIf::TPrimitiveType) arg01_, (size_t*) idx, (GRVertexArray*) arrays, count); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawPoint(HANDLE _this, HANDLE p) {
	Vec3f arg01_ = *((Vec3f*) p);
	try { ((GRRenderBaseIf*) _this)->DrawPoint((Vec3f) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawLine(HANDLE _this, HANDLE p0, HANDLE p1) {
	Vec3f arg01_ = *((Vec3f*) p0);
	Vec3f arg02_ = *((Vec3f*) p1);
	try { ((GRRenderBaseIf*) _this)->DrawLine((Vec3f) arg01_, (Vec3f) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawSpline(HANDLE _this, HANDLE p0, HANDLE v0, HANDLE p1, HANDLE v1, int ndiv) {
	Vec3f arg01_ = *((Vec3f*) p0);
	Vec3f arg02_ = *((Vec3f*) v0);
	Vec3f arg03_ = *((Vec3f*) p1);
	Vec3f arg04_ = *((Vec3f*) v1);
	try { ((GRRenderBaseIf*) _this)->DrawSpline((Vec3f) arg01_, (Vec3f) arg02_, (Vec3f) arg03_, (Vec3f) arg04_, ndiv); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawSpline_1(HANDLE _this, HANDLE p0, HANDLE v0, HANDLE p1, HANDLE v1) {
	Vec3f arg01_ = *((Vec3f*) p0);
	Vec3f arg02_ = *((Vec3f*) v0);
	Vec3f arg03_ = *((Vec3f*) p1);
	Vec3f arg04_ = *((Vec3f*) v1);
	try { ((GRRenderBaseIf*) _this)->DrawSpline((Vec3f) arg01_, (Vec3f) arg02_, (Vec3f) arg03_, (Vec3f) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawArrow(HANDLE _this, HANDLE p0, HANDLE p1, float rbar, float rhead, float lhead, int slice, char solid) {
	Vec3f arg01_ = *((Vec3f*) p0);
	Vec3f arg02_ = *((Vec3f*) p1);
	bool arg07_ = (solid == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->DrawArrow((Vec3f) arg01_, (Vec3f) arg02_, rbar, rhead, lhead, slice, (bool) arg07_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawBox(HANDLE _this, float sx, float sy, float sz, char solid) {
	bool arg04_ = (solid == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->DrawBox(sx, sy, sz, (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawBox_1(HANDLE _this, float sx, float sy, float sz) {
	try { ((GRRenderBaseIf*) _this)->DrawBox(sx, sy, sz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawSphere(HANDLE _this, float radius, int slices, int stacks, char solid) {
	bool arg04_ = (solid == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->DrawSphere(radius, slices, stacks, (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawSphere_1(HANDLE _this, float radius, int slices, int stacks) {
	try { ((GRRenderBaseIf*) _this)->DrawSphere(radius, slices, stacks); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawEllipsoid(HANDLE _this, HANDLE radius, int slices, int stacks, char solid) {
	Vec3f arg01_ = *((Vec3f*) radius);
	bool arg04_ = (solid == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->DrawEllipsoid((Vec3f) arg01_, slices, stacks, (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawEllipsoid_1(HANDLE _this, HANDLE radius, int slices, int stacks) {
	Vec3f arg01_ = *((Vec3f*) radius);
	try { ((GRRenderBaseIf*) _this)->DrawEllipsoid((Vec3f) arg01_, slices, stacks); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawCone(HANDLE _this, float radius, float height, int slice, char solid) {
	bool arg04_ = (solid == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->DrawCone(radius, height, slice, (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawCone_1(HANDLE _this, float radius, float height, int slice) {
	try { ((GRRenderBaseIf*) _this)->DrawCone(radius, height, slice); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawCylinder(HANDLE _this, float radius, float height, int slice, char solid, char cap) {
	bool arg04_ = (solid == 0) ? false : true;
	bool arg05_ = (cap == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->DrawCylinder(radius, height, slice, (bool) arg04_, (bool) arg05_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawCylinder_1(HANDLE _this, float radius, float height, int slice, char solid) {
	bool arg04_ = (solid == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->DrawCylinder(radius, height, slice, (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawCylinder_2(HANDLE _this, float radius, float height, int slice) {
	try { ((GRRenderBaseIf*) _this)->DrawCylinder(radius, height, slice); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawDisk(HANDLE _this, float radius, int slice, char solid) {
	bool arg03_ = (solid == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->DrawDisk(radius, slice, (bool) arg03_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawDisk_1(HANDLE _this, float radius, int slice) {
	try { ((GRRenderBaseIf*) _this)->DrawDisk(radius, slice); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawCapsule(HANDLE _this, float radius, float height, int slice, char solid) {
	bool arg04_ = (solid == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->DrawCapsule(radius, height, slice, (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawCapsule_1(HANDLE _this, float radius, float height, int slice) {
	try { ((GRRenderBaseIf*) _this)->DrawCapsule(radius, height, slice); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawCapsule_2(HANDLE _this, float radius, float height) {
	try { ((GRRenderBaseIf*) _this)->DrawCapsule(radius, height); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawRoundCone(HANDLE _this, float rbottom, float rtop, float height, int slice, char solid) {
	bool arg05_ = (solid == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->DrawRoundCone(rbottom, rtop, height, slice, (bool) arg05_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawRoundCone_1(HANDLE _this, float rbottom, float rtop, float height, int slice) {
	try { ((GRRenderBaseIf*) _this)->DrawRoundCone(rbottom, rtop, height, slice); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawRoundCone_2(HANDLE _this, float rbottom, float rtop, float height) {
	try { ((GRRenderBaseIf*) _this)->DrawRoundCone(rbottom, rtop, height); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawGrid(HANDLE _this, float size, int slice, float lineWidth) {
	try { ((GRRenderBaseIf*) _this)->DrawGrid(size, slice, lineWidth); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawGrid_1(HANDLE _this, float size, int slice) {
	try { ((GRRenderBaseIf*) _this)->DrawGrid(size, slice); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawCurve(HANDLE _this, HANDLE curve) {
	try { ((GRRenderBaseIf*) _this)->DrawCurve((const Curve3f&) *((Curve3f*) curve)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRRenderBaseIf_StartList(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((GRRenderBaseIf*) _this)->StartList(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_EndList(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->EndList(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawList(HANDLE _this, int i) {
	try { ((GRRenderBaseIf*) _this)->DrawList(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_ReleaseList(HANDLE _this, int i) {
	try { ((GRRenderBaseIf*) _this)->ReleaseList(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetFont(HANDLE _this, HANDLE font) {
	try { ((GRRenderBaseIf*) _this)->SetFont((const GRFont&) *((GRFont*) font)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawFont(HANDLE _this, HANDLE pos, BSTR str) {
	Vec2f arg01_ = *((Vec2f*) pos);
	string arg02_("");
	int lenMB2 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) str, -1, NULL, 0, NULL, NULL);
	if (lenMB2 > 0) {
	    LPSTR addr2 = (LPSTR) ::SysAllocStringLen(0, lenMB2);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) str, -1, addr2, lenMB2, NULL, NULL);
	    arg02_ = (string) addr2;
	}
	try { ((GRRenderBaseIf*) _this)->DrawFont((Vec2f) arg01_, (string) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_DrawFont_1(HANDLE _this, HANDLE pos, BSTR str) {
	Vec3f arg01_ = *((Vec3f*) pos);
	string arg02_("");
	int lenMB2 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) str, -1, NULL, 0, NULL, NULL);
	if (lenMB2 > 0) {
	    LPSTR addr2 = (LPSTR) ::SysAllocStringLen(0, lenMB2);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) str, -1, addr2, lenMB2, NULL, NULL);
	    arg02_ = (string) addr2;
	}
	try { ((GRRenderBaseIf*) _this)->DrawFont((Vec3f) arg01_, (string) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetMaterial(HANDLE _this, HANDLE mat) {
	try { ((GRRenderBaseIf*) _this)->SetMaterial((const GRMaterialDesc&) *((GRMaterialDesc*) mat)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetMaterial_1(HANDLE _this, HANDLE mat) {
	try { ((GRRenderBaseIf*) _this)->SetMaterial((const GRMaterialIf*) mat); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetMaterial_2(HANDLE _this, int matname) {
	try { ((GRRenderBaseIf*) _this)->SetMaterial(matname); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetMaterial_3(HANDLE _this, int matname, float alpha) {
	try { ((GRRenderBaseIf*) _this)->SetMaterial(matname, alpha); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetPointSize(HANDLE _this, float sz, char smooth) {
	bool arg02_ = (smooth == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->SetPointSize(sz, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetPointSize_1(HANDLE _this, float sz) {
	try { ((GRRenderBaseIf*) _this)->SetPointSize(sz); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetLineWidth(HANDLE _this, float w, char smooth) {
	bool arg02_ = (smooth == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->SetLineWidth(w, (bool) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetLineWidth_1(HANDLE _this, float w) {
	try { ((GRRenderBaseIf*) _this)->SetLineWidth(w); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_PushLight(HANDLE _this, HANDLE light) {
	try { ((GRRenderBaseIf*) _this)->PushLight((const GRLightDesc&) *((GRLightDesc*) light)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_PushLight_1(HANDLE _this, HANDLE light) {
	try { ((GRRenderBaseIf*) _this)->PushLight((const GRLightIf*) light); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_PopLight(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->PopLight(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_GRRenderBaseIf_NLights(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((GRRenderBaseIf*) _this)->NLights(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetDepthWrite(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->SetDepthWrite((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetDepthTest(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->SetDepthTest((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetDepthFunc(HANDLE _this, int f) {
	GRRenderBaseIf::TDepthFunc arg01_ = ((GRRenderBaseIf::TDepthFunc) f);
	try { ((GRRenderBaseIf*) _this)->SetDepthFunc((GRRenderBaseIf::TDepthFunc) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetAlphaTest(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->SetAlphaTest((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetAlphaMode(HANDLE _this, int src, int dest) {
	GRRenderBaseIf::TBlendFunc arg01_ = ((GRRenderBaseIf::TBlendFunc) src);
	GRRenderBaseIf::TBlendFunc arg02_ = ((GRRenderBaseIf::TBlendFunc) dest);
	try { ((GRRenderBaseIf*) _this)->SetAlphaMode((GRRenderBaseIf::TBlendFunc) arg01_, (GRRenderBaseIf::TBlendFunc) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetLighting(HANDLE _this, char l) {
	bool arg01_ = (l == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->SetLighting((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetTexture2D(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->SetTexture2D((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetTexture3D(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->SetTexture3D((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) unsigned int __cdecl Spr_GRRenderBaseIf_LoadTexture(HANDLE _this, BSTR filename) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) filename, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) filename, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	unsigned int _val = (unsigned int) NULL;
	try { _val = ((GRRenderBaseIf*) _this)->LoadTexture((string) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetTextureImage(HANDLE _this, BSTR id, int components, int xsize, int ysize, int format, HANDLE tb) {
	string arg01_("");
	int lenMB1 = ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) id, -1, NULL, 0, NULL, NULL);
	if (lenMB1 > 0) {
	    LPSTR addr1 = (LPSTR) ::SysAllocStringLen(0, lenMB1);
	    ::WideCharToMultiByte(CP_ACP, (DWORD) 0, (LPCWSTR) id, -1, addr1, lenMB1, NULL, NULL);
	    arg01_ = (string) addr1;
	}
	try { ((GRRenderBaseIf*) _this)->SetTextureImage((string) arg01_, components, xsize, ysize, format, (const char*) tb); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetBlending(HANDLE _this, char b) {
	bool arg01_ = (b == 0) ? false : true;
	try { ((GRRenderBaseIf*) _this)->SetBlending((bool) arg01_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderBaseIf_CreateShader(HANDLE _this, HANDLE sd) {
	GRShaderIf* _ptr = (GRShaderIf*) NULL;
	try { _ptr = (GRShaderIf*) ((GRRenderBaseIf*) _this)->CreateShader((const GRShaderDesc&) *((GRShaderDesc*) sd)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_GRRenderBaseIf_SetShader(HANDLE _this, HANDLE shader) {
	bool _val = (bool) NULL;
	try { _val = ((GRRenderBaseIf*) _this)->SetShader((GRShaderIf*) shader); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_SetShadowLight(HANDLE _this, HANDLE sld) {
	try { ((GRRenderBaseIf*) _this)->SetShadowLight((const GRShadowLightDesc&) *((GRShadowLightDesc*) sld)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_EnterShadowMapGeneration(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->EnterShadowMapGeneration(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderBaseIf_LeaveShadowMapGeneration(HANDLE _this) {
	try { ((GRRenderBaseIf*) _this)->LeaveShadowMapGeneration(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRRenderIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRRenderIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRRenderIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRRenderIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRRenderIf*) _this)) {
                (*((GRRenderIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRRenderIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRRenderIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRRenderIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderIf_SetDevice(HANDLE _this, HANDLE dev) {
	try { ((GRRenderIf*) _this)->SetDevice((GRDeviceIf*) dev); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderIf_GetDevice(HANDLE _this) {
	GRDeviceIf* _ptr = (GRDeviceIf*) NULL;
	try { _ptr = (GRDeviceIf*) ((GRRenderIf*) _this)->GetDevice(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderIf_SetCamera(HANDLE _this, HANDLE cam) {
	try { ((GRRenderIf*) _this)->SetCamera((const GRCameraDesc&) *((GRCameraDesc*) cam)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderIf_GetCamera(HANDLE _this) {
	GRCameraDesc* _ptr = (GRCameraDesc*) NULL;
	try { _ptr = new GRCameraDesc(); (*_ptr) = ((GRRenderIf*) _this)->GetCamera(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderIf_Reshape(HANDLE _this, HANDLE pos, HANDLE screenSize) {
	Vec2f arg01_ = *((Vec2f*) pos);
	Vec2f arg02_ = *((Vec2f*) screenSize);
	try { ((GRRenderIf*) _this)->Reshape((Vec2f) arg01_, (Vec2f) arg02_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderIf_GetPixelSize(HANDLE _this) {
	Vec2f* _ptr = (Vec2f*) NULL;
	try { _ptr = new Vec2f(); (*_ptr) = ((GRRenderIf*) _this)->GetPixelSize(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderIf_GetReservedColor(HANDLE _this, int matname) {
	Vec4f* _ptr = (Vec4f*) NULL;
	try { _ptr = new Vec4f(); (*_ptr) = ((GRRenderIf*) _this)->GetReservedColor(matname); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderIf_ScreenToCamera(HANDLE _this, int x, int y, float depth, char LorR) {
	bool arg04_ = (LorR == 0) ? false : true;
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((GRRenderIf*) _this)->ScreenToCamera(x, y, depth, (bool) arg04_); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRRenderIf_ScreenToCamera_1(HANDLE _this, int x, int y, float depth) {
	Vec3f* _ptr = (Vec3f*) NULL;
	try { _ptr = new Vec3f(); (*_ptr) = ((GRRenderIf*) _this)->ScreenToCamera(x, y, depth); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderIf_EnterScreenCoordinate(HANDLE _this) {
	try { ((GRRenderIf*) _this)->EnterScreenCoordinate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRRenderIf_LeaveScreenCoordinate(HANDLE _this) {
	try { ((GRRenderIf*) _this)->LeaveScreenCoordinate(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRDeviceIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRDeviceIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRDeviceIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRDeviceIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRDeviceIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str;
            (*((GRDeviceIf*) _this)).Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRDeviceIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRDeviceIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRDeviceIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRDeviceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRDeviceIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRDeviceIf_Init(HANDLE _this) {
	try { ((GRDeviceIf*) _this)->Init(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRDeviceGLIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRDeviceGLIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRDeviceGLIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRDeviceGLIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRDeviceGLIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRDeviceGLIf*) _this)) {
                (*((GRDeviceGLIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRDeviceGLIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRDeviceGLIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRDeviceGLIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRDeviceGLIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRDeviceGLIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) char __cdecl Spr_GRDeviceGLIf_CheckGLVersion(HANDLE _this, int major, int minor) {
	bool _val = (bool) NULL;
	try { _val = ((GRDeviceGLIf*) _this)->CheckGLVersion(major, minor); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __declspec(dllexport) int __cdecl Spr_GRDeviceGLIf_GetGLMajorVersion(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((GRDeviceGLIf*) _this)->GetGLMajorVersion(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) int __cdecl Spr_GRDeviceGLIf_GetGLMinorVersion(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((GRDeviceGLIf*) _this)->GetGLMinorVersion(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRDeviceGLIf_SetGLVersion(HANDLE _this, int major, int minor) {
	try { ((GRDeviceGLIf*) _this)->SetGLVersion(major, minor); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRSceneIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRSceneIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRSceneIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRSceneIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSceneIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRSceneIf*) _this)) {
                (*((GRSceneIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRSceneIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSceneIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRSceneIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSceneIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRSceneIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRSceneIf_Render(HANDLE _this, HANDLE r) {
	try { ((GRSceneIf*) _this)->Render((GRRenderIf*) r); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSceneIf_GetWorld(HANDLE _this) {
	GRFrameIf* _ptr = (GRFrameIf*) NULL;
	try { _ptr = (GRFrameIf*) ((GRSceneIf*) _this)->GetWorld(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSceneIf_GetCamera(HANDLE _this) {
	GRCameraIf* _ptr = (GRCameraIf*) NULL;
	try { _ptr = (GRCameraIf*) ((GRSceneIf*) _this)->GetCamera(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRSceneIf_SetCamera(HANDLE _this, HANDLE desc) {
	try { ((GRSceneIf*) _this)->SetCamera((const GRCameraDesc&) *((GRCameraDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_GRSceneIf_SetCamera_1(HANDLE _this) {
	try { ((GRSceneIf*) _this)->SetCamera(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSceneIf_GetAnimationController(HANDLE _this) {
	GRAnimationControllerIf* _ptr = (GRAnimationControllerIf*) NULL;
	try { _ptr = (GRAnimationControllerIf*) ((GRSceneIf*) _this)->GetAnimationController(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSceneIf_GetSdk(HANDLE _this) {
	GRSdkIf* _ptr = (GRSdkIf*) NULL;
	try { _ptr = (GRSdkIf*) ((GRSceneIf*) _this)->GetSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRSdkIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRSdkIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRSdkIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRSdkIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSdkIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRSdkIf*) _this)) {
                (*((GRSdkIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRSdkIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSdkIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRSdkIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSdkIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRSdkIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSdkIf_CreateRender(HANDLE _this) {
	GRRenderIf* _ptr = (GRRenderIf*) NULL;
	try { _ptr = (GRRenderIf*) ((GRSdkIf*) _this)->CreateRender(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSdkIf_CreateDeviceGL(HANDLE _this) {
	GRDeviceGLIf* _ptr = (GRDeviceGLIf*) NULL;
	try { _ptr = (GRDeviceGLIf*) ((GRSdkIf*) _this)->CreateDeviceGL(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSdkIf_CreateScene(HANDLE _this, HANDLE desc) {
	GRSceneIf* _ptr = (GRSceneIf*) NULL;
	try { _ptr = (GRSceneIf*) ((GRSdkIf*) _this)->CreateScene((const GRSceneDesc&) *((GRSceneDesc*) desc)); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSdkIf_CreateScene_1(HANDLE _this) {
	GRSceneIf* _ptr = (GRSceneIf*) NULL;
	try { _ptr = (GRSceneIf*) ((GRSdkIf*) _this)->CreateScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSdkIf_GetScene(HANDLE _this, size_t i) {
	GRSceneIf* _ptr = (GRSceneIf*) NULL;
	try { _ptr = (GRSceneIf*) ((GRSdkIf*) _this)->GetScene(i); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) size_t __cdecl Spr_GRSdkIf_NScene(HANDLE _this) {
	size_t _val = (size_t) NULL;
	try { _val = ((GRSdkIf*) _this)->NScene(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) void __cdecl Spr_GRSdkIf_MergeScene(HANDLE _this, HANDLE scene0, HANDLE scene1) {
	try { ((GRSdkIf*) _this)->MergeScene((GRSceneIf*) scene0, (GRSceneIf*) scene1); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSdkIf_CreateSdk() {
	GRSdkIf* _ptr = (GRSdkIf*) NULL;
	try { _ptr = (GRSdkIf*) GRSdkIf::CreateSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_GRSdkIf_RegisterSdk() {
	try { GRSdkIf::RegisterSdk(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRShaderIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRShaderIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRShaderIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRShaderIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShaderIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRShaderIf*) _this)) {
                (*((GRShaderIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRShaderIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShaderIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRShaderIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRShaderIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRShaderIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) int __cdecl Spr_GRShaderIf_GetProgramID(HANDLE _this) {
	int _val = (int) NULL;
	try { _val = ((GRShaderIf*) _this)->GetProgramID(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_new_GRSphereIf() {
	HANDLE _ptr = (HANDLE) NULL;
	try { _ptr = new GRSphereIf(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_delete_GRSphereIf(HANDLE v) {
        if (v == NULL) return;
        try { delete (GRSphereIf*) v; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSphereIf_ToString(HANDLE _this) {
        BSTR result = NULL;
        try {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((GRSphereIf*) _this)) {
                (*((GRSphereIf*) _this)).GetObjectIf()->Print(oss);
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
    __declspec(dllexport) void __cdecl Spr_GRSphereIf_FreeString(BSTR ptr) {
        try { ::SysFreeString(ptr); }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSphereIf_GetIfInfo(HANDLE _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) ((GRSphereIf*) _this)->GetIfInfo(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_GRSphereIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	try { _ptr = (IfInfo*) GRSphereIf::GetIfInfoStatic(); }
	catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
	return (HANDLE) _ptr;
    }
}

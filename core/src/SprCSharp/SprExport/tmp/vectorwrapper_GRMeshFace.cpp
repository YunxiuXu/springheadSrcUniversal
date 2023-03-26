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

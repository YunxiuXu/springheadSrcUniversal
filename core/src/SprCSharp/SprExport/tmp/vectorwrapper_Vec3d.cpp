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

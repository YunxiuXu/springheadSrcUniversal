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

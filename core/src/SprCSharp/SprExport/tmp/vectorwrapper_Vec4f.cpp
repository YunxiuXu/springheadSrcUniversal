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

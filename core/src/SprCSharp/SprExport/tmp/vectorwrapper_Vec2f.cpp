    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_Vec2f() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<Vec2f>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_Vec2f(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<Vec2f>* vec = (vector<Vec2f>*) ptr;
        vector<Vec2f>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_Vec2f(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_Vec2f(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            (*vecptr)[index] = *((Vec2f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_Vec2f(HANDLE ptr) {
        int _val = 0;
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_Vec2f(HANDLE ptr, HANDLE value) {
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            (*vecptr).push_back(*((Vec2f*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_Vec2f(HANDLE ptr) {
        try {
            vector<Vec2f>* vecptr = (vector<Vec2f>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

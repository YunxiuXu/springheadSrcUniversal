    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_GRKey() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<GRKey>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_GRKey(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<GRKey>* vec = (vector<GRKey>*) ptr;
        vector<GRKey>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_GRKey(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_GRKey(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            (*vecptr)[index] = *((GRKey*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_GRKey(HANDLE ptr) {
        int _val = 0;
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_GRKey(HANDLE ptr, HANDLE value) {
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            (*vecptr).push_back(*((GRKey*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_GRKey(HANDLE ptr) {
        try {
            vector<GRKey>* vecptr = (vector<GRKey>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

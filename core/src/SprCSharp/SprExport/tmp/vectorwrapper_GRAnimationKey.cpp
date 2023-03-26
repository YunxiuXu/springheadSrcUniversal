    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_GRAnimationKey() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<GRAnimationKey>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_GRAnimationKey(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<GRAnimationKey>* vec = (vector<GRAnimationKey>*) ptr;
        vector<GRAnimationKey>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_GRAnimationKey(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_GRAnimationKey(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            (*vecptr)[index] = *((GRAnimationKey*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_GRAnimationKey(HANDLE ptr) {
        int _val = 0;
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_GRAnimationKey(HANDLE ptr, HANDLE value) {
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            (*vecptr).push_back(*((GRAnimationKey*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_GRAnimationKey(HANDLE ptr) {
        try {
            vector<GRAnimationKey>* vecptr = (vector<GRAnimationKey>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_PHPathPoint() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<PHPathPoint>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_PHPathPoint(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<PHPathPoint>* vec = (vector<PHPathPoint>*) ptr;
        vector<PHPathPoint>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_PHPathPoint(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_PHPathPoint(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            (*vecptr)[index] = *((PHPathPoint*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_PHPathPoint(HANDLE ptr) {
        int _val = 0;
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_PHPathPoint(HANDLE ptr, HANDLE value) {
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            (*vecptr).push_back(*((PHPathPoint*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_PHPathPoint(HANDLE ptr) {
        try {
            vector<PHPathPoint>* vecptr = (vector<PHPathPoint>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

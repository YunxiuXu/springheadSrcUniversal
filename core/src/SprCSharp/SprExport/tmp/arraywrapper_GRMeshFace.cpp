    __declspec(dllexport) HANDLE __cdecl Spr_array_new_GRMeshFace(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new GRMeshFace[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_GRMeshFace(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (GRMeshFace*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_GRMeshFace(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            GRMeshFace* aryptr = (GRMeshFace*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_GRMeshFace(HANDLE ptr, int index, HANDLE value) {
        try {
            GRMeshFace* aryptr = (GRMeshFace*) ptr;
            aryptr[index] = *((GRMeshFace*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

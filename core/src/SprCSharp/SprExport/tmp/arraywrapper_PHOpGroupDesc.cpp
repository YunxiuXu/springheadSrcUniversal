    __declspec(dllexport) HANDLE __cdecl Spr_array_new_PHOpGroupDesc(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new PHOpGroupDesc[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHOpGroupDesc(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHOpGroupDesc*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_PHOpGroupDesc(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            PHOpGroupDesc* aryptr = (PHOpGroupDesc*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHOpGroupDesc(HANDLE ptr, int index, HANDLE value) {
        try {
            PHOpGroupDesc* aryptr = (PHOpGroupDesc*) ptr;
            aryptr[index] = *((PHOpGroupDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

    __declspec(dllexport) HANDLE __cdecl Spr_array_new_PHOpObjDesc(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new PHOpObjDesc[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHOpObjDesc(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHOpObjDesc*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_PHOpObjDesc(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            PHOpObjDesc* aryptr = (PHOpObjDesc*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHOpObjDesc(HANDLE ptr, int index, HANDLE value) {
        try {
            PHOpObjDesc* aryptr = (PHOpObjDesc*) ptr;
            aryptr[index] = *((PHOpObjDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

    __declspec(dllexport) HANDLE __cdecl Spr_array_new_PHRaycastHit(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new PHRaycastHit[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHRaycastHit(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHRaycastHit*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_PHRaycastHit(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            PHRaycastHit* aryptr = (PHRaycastHit*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHRaycastHit(HANDLE ptr, int index, HANDLE value) {
        try {
            PHRaycastHit* aryptr = (PHRaycastHit*) ptr;
            aryptr[index] = *((PHRaycastHit*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

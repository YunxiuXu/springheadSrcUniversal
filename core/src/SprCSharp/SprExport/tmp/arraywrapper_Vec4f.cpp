    __declspec(dllexport) HANDLE __cdecl Spr_array_new_Vec4f(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new Vec4f[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_Vec4f(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (Vec4f*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_Vec4f(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            Vec4f* aryptr = (Vec4f*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_Vec4f(HANDLE ptr, int index, HANDLE value) {
        try {
            Vec4f* aryptr = (Vec4f*) ptr;
            aryptr[index] = *((Vec4f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

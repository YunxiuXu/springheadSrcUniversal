    __declspec(dllexport) HANDLE __cdecl Spr_array_new_Vec2f(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new Vec2f[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_Vec2f(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (Vec2f*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_Vec2f(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            Vec2f* aryptr = (Vec2f*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_Vec2f(HANDLE ptr, int index, HANDLE value) {
        try {
            Vec2f* aryptr = (Vec2f*) ptr;
            aryptr[index] = *((Vec2f*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

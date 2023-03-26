    __declspec(dllexport) HANDLE __cdecl Spr_array_new_PHOpParticleDesc(int size) {
        HANDLE _ptr = NULL;
        try { _ptr = new PHOpParticleDesc[size]; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_delete_PHOpParticleDesc(HANDLE ptr) {
        if (ptr == NULL) return;
        try { delete[] (PHOpParticleDesc*) ptr; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) HANDLE __cdecl Spr_array_get_PHOpParticleDesc(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            PHOpParticleDesc* aryptr = (PHOpParticleDesc*) ptr;
            _ptr = (HANDLE) &aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_array_set_PHOpParticleDesc(HANDLE ptr, int index, HANDLE value) {
        try {
            PHOpParticleDesc* aryptr = (PHOpParticleDesc*) ptr;
            aryptr[index] = *((PHOpParticleDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

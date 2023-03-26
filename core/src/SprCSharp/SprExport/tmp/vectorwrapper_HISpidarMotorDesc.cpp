    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_HISpidarMotorDesc() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<HISpidarMotorDesc>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_HISpidarMotorDesc(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<HISpidarMotorDesc>* vec = (vector<HISpidarMotorDesc>*) ptr;
        vector<HISpidarMotorDesc>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_HISpidarMotorDesc(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_HISpidarMotorDesc(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            (*vecptr)[index] = *((HISpidarMotorDesc*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_HISpidarMotorDesc(HANDLE ptr) {
        int _val = 0;
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_HISpidarMotorDesc(HANDLE ptr, HANDLE value) {
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            (*vecptr).push_back(*((HISpidarMotorDesc*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_HISpidarMotorDesc(HANDLE ptr) {
        try {
            vector<HISpidarMotorDesc>* vecptr = (vector<HISpidarMotorDesc>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

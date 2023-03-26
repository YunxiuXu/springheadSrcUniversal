    __declspec(dllexport) int __cdecl Spr_PHHapticPointerDesc_struct_get_PHHapticPointerDesc_HapticRenderMode(HANDLE ptr, int index) {
        int _val = 0;
        try {
            PHHapticPointerDesc::HapticRenderMode* aryptr = (PHHapticPointerDesc::HapticRenderMode*) ptr;
            _val = (int) aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHHapticPointerDesc_struct_new_PHHapticPointerDesc_HapticRenderMode() {
        vector<PHHapticPointerDesc>* ptr = new vector<PHHapticPointerDesc>;
        return (HANDLE) ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHHapticPointerDesc_struct_set_PHHapticPointerDesc_HapticRenderMode(HANDLE ptr, int index, int value) {
        try {
            PHHapticPointerDesc::HapticRenderMode* aryptr = (PHHapticPointerDesc::HapticRenderMode*) ptr;
            aryptr[index] = (PHHapticPointerDesc::HapticRenderMode) value;
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

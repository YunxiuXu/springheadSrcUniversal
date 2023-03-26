    __declspec(dllexport) int __cdecl Spr_PHOpHapticControllerDesc_struct_get_PHOpHapticControllerDesc_HapticDOFType(HANDLE ptr, int index) {
        int _val = 0;
        try {
            PHOpHapticControllerDesc::HapticDOFType* aryptr = (PHOpHapticControllerDesc::HapticDOFType*) ptr;
            _val = (int) aryptr[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) HANDLE __cdecl Spr_PHOpHapticControllerDesc_struct_new_PHOpHapticControllerDesc_HapticDOFType() {
        vector<PHOpHapticControllerDesc>* ptr = new vector<PHOpHapticControllerDesc>;
        return (HANDLE) ptr;
    }
    __declspec(dllexport) void __cdecl Spr_PHOpHapticControllerDesc_struct_set_PHOpHapticControllerDesc_HapticDOFType(HANDLE ptr, int index, int value) {
        try {
            PHOpHapticControllerDesc::HapticDOFType* aryptr = (PHOpHapticControllerDesc::HapticDOFType*) ptr;
            aryptr[index] = (PHOpHapticControllerDesc::HapticDOFType) value;
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

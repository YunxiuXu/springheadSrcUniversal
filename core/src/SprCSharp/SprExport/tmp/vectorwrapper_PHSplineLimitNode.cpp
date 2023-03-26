    __declspec(dllexport) HANDLE __cdecl Spr_vector_new_PHSplineLimitNode() {
        HANDLE _ptr = NULL;
        try { _ptr = new vector<PHSplineLimitNode>; }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_delete_PHSplineLimitNode(HANDLE ptr) {
        if (ptr == NULL) return;
        vector<PHSplineLimitNode>* vec = (vector<PHSplineLimitNode>*) ptr;
        vector<PHSplineLimitNode>().swap(*vec);
    }
    __declspec(dllexport) HANDLE __cdecl Spr_vector_get_PHSplineLimitNode(HANDLE ptr, int index) {
        HANDLE _ptr = NULL;
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            _ptr = (HANDLE) &(*vecptr)[index];
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _ptr;
    }
    __declspec(dllexport) void __cdecl Spr_vector_set_PHSplineLimitNode(HANDLE ptr, int index, HANDLE value) {
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            (*vecptr)[index] = *((PHSplineLimitNode*) value);
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) int __cdecl Spr_vector_size_PHSplineLimitNode(HANDLE ptr) {
        int _val = 0;
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            _val = (int) (*vecptr).size();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
        return _val;
    }
    __declspec(dllexport) void __cdecl Spr_vector_push_back_PHSplineLimitNode(HANDLE ptr, HANDLE value) {
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            (*vecptr).push_back(*((PHSplineLimitNode*) value));
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }
    __declspec(dllexport) void __cdecl Spr_vector_clear_PHSplineLimitNode(HANDLE ptr) {
        try {
            vector<PHSplineLimitNode>* vecptr = (vector<PHSplineLimitNode>*) ptr;
            (*vecptr).clear();
        }
        catch (SEH_Exception e) { e.raise_managed_exception("SprExport.dll"); }
    }

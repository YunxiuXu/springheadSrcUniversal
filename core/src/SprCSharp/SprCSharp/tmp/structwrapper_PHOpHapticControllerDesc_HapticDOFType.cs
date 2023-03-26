    public class structwrapper_PHOpHapticControllerDesc_HapticDOFType : wrapper {
        private IntPtr _ptr;
        public structwrapper_PHOpHapticControllerDesc_HapticDOFType(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_PHOpHapticControllerDesc_HapticDOFType(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_PHOpHapticControllerDesc_HapticDOFType() {}
        ~structwrapper_PHOpHapticControllerDesc_HapticDOFType() {}
        public PHOpHapticControllerDesc.HapticDOFType this[int index] {
            get { return (PHOpHapticControllerDesc.HapticDOFType) SprExport.Spr_PHOpHapticControllerDesc_struct_get_PHOpHapticControllerDesc_HapticDOFType(_ptr, index); }
            set { SprExport.Spr_PHOpHapticControllerDesc_struct_set_PHOpHapticControllerDesc_HapticDOFType(_ptr, index, (int) value); }
        }
    }

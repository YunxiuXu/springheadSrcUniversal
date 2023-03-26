    public class structwrapper_Posef : wrapper {
        private IntPtr _ptr;
        public structwrapper_Posef(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Posef(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Posef() {}
        ~structwrapper_Posef() {}
        public Posef this[int index] {
            get { return new Posef(SprExport.Spr_PHOpHapticControllerDesc_struct_get_Posef(_ptr, index)); }
            set { SprExport.Spr_PHOpHapticControllerDesc_struct_set_Posef(_ptr, index, value); }
        }
    }

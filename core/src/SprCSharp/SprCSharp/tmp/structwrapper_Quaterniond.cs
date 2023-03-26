    public class structwrapper_Quaterniond : wrapper {
        private IntPtr _ptr;
        public structwrapper_Quaterniond(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Quaterniond(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Quaterniond() {}
        ~structwrapper_Quaterniond() {}
        public Quaterniond this[int index] {
            get { return new Quaterniond(SprExport.Spr_PHIKEndEffectorDesc_struct_get_Quaterniond(_ptr, index)); }
            set { SprExport.Spr_PHIKEndEffectorDesc_struct_set_Quaterniond(_ptr, index, value); }
        }
    }

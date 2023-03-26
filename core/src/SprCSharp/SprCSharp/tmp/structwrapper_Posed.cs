    public class structwrapper_Posed : wrapper {
        private IntPtr _ptr;
        public structwrapper_Posed(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Posed(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Posed() {}
        ~structwrapper_Posed() {}
        public Posed this[int index] {
            get { return new Posed(SprExport.Spr_PHFrameDesc_struct_get_Posed(_ptr, index)); }
            set { SprExport.Spr_PHFrameDesc_struct_set_Posed(_ptr, index, value); }
        }
    }

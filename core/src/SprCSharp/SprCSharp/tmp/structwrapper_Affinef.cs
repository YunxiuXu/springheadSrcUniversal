    public class structwrapper_Affinef : wrapper {
        private IntPtr _ptr;
        public structwrapper_Affinef(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Affinef(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Affinef() {}
        ~structwrapper_Affinef() {}
        public Affinef this[int index] {
            get { return new Affinef(SprExport.Spr_GRFrameDesc_struct_get_Affinef(_ptr, index)); }
            set { SprExport.Spr_GRFrameDesc_struct_set_Affinef(_ptr, index, value); }
        }
    }

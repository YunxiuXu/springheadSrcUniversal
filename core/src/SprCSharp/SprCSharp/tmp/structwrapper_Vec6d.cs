    public class structwrapper_Vec6d : wrapper {
        private IntPtr _ptr;
        public structwrapper_Vec6d(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Vec6d(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Vec6d() {}
        ~structwrapper_Vec6d() {}
        public Vec6d this[int index] {
            get { return new Vec6d(SprExport.Spr_PHSpringDesc_struct_get_Vec6d(_ptr, index)); }
            set { SprExport.Spr_PHSpringDesc_struct_set_Vec6d(_ptr, index, value); }
        }
    }

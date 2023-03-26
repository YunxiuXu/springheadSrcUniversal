    public class structwrapper_Vec4f : wrapper {
        private IntPtr _ptr;
        public structwrapper_Vec4f(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Vec4f(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Vec4f() {}
        ~structwrapper_Vec4f() {}
        public Vec4f this[int index] {
            get { return new Vec4f(SprExport.Spr_GRLightDesc_struct_get_Vec4f(_ptr, index)); }
            set { SprExport.Spr_GRLightDesc_struct_set_Vec4f(_ptr, index, value); }
        }
    }

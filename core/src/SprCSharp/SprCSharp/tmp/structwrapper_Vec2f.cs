    public class structwrapper_Vec2f : wrapper {
        private IntPtr _ptr;
        public structwrapper_Vec2f(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Vec2f(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Vec2f() {}
        ~structwrapper_Vec2f() {}
        public Vec2f this[int index] {
            get { return new Vec2f(SprExport.Spr_HITrackballDesc_struct_get_Vec2f(_ptr, index)); }
            set { SprExport.Spr_HITrackballDesc_struct_set_Vec2f(_ptr, index, value); }
        }
    }

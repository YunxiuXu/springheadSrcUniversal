    public class structwrapper_Vec3f : wrapper {
        private IntPtr _ptr;
        public structwrapper_Vec3f(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Vec3f(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Vec3f() {}
        ~structwrapper_Vec3f() {}
        public Vec3f this[int index] {
            get { return new Vec3f(SprExport.Spr_PHOpHapticRendererDesc_struct_get_Vec3f(_ptr, index)); }
            set { SprExport.Spr_PHOpHapticRendererDesc_struct_set_Vec3f(_ptr, index, value); }
        }
    }

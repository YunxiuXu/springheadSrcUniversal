    public class structwrapper_Vec3i : wrapper {
        private IntPtr _ptr;
        public structwrapper_Vec3i(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Vec3i(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Vec3i() {}
        ~structwrapper_Vec3i() {}
        public Vec3i this[int index] {
            get { return new Vec3i(SprExport.Spr_FWUngroundedConstraint_struct_get_Vec3i(_ptr, index)); }
            set { SprExport.Spr_FWUngroundedConstraint_struct_set_Vec3i(_ptr, index, value); }
        }
    }

    public class structwrapper_Vec3f_p : wrapper {
        private IntPtr _ptr;
        public structwrapper_Vec3f_p(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Vec3f_p(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Vec3f_p() {}
        ~structwrapper_Vec3f_p() {}
        public Vec3f this[int index] {
            get { return new Vec3f(SprExport.Spr_PHOpObjDesc_struct_get_Vec3f_p(_ptr, index)); }
            set { SprExport.Spr_PHOpObjDesc_struct_set_Vec3f_p(_ptr, index, value); }
        }
    }

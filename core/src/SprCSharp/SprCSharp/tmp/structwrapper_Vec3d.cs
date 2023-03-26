    public class structwrapper_Vec3d : wrapper {
        private IntPtr _ptr;
        public structwrapper_Vec3d(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Vec3d(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Vec3d() {}
        ~structwrapper_Vec3d() {}
        public Vec3d this[int index] {
            get { return new Vec3d(SprExport.Spr_PHFemPorousWOMoveDesc_struct_get_Vec3d(_ptr, index)); }
            set { SprExport.Spr_PHFemPorousWOMoveDesc_struct_set_Vec3d(_ptr, index, value); }
        }
    }

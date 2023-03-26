    public class structwrapper_Matrix3f : wrapper {
        private IntPtr _ptr;
        public structwrapper_Matrix3f(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Matrix3f(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Matrix3f() {}
        ~structwrapper_Matrix3f() {}
        public Matrix3f this[int index] {
            get { return new Matrix3f(SprExport.Spr_PHOpParticleDesc_struct_get_Matrix3f(_ptr, index)); }
            set { SprExport.Spr_PHOpParticleDesc_struct_set_Matrix3f(_ptr, index, value); }
        }
    }

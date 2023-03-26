    public class structwrapper_Matrix3d : wrapper {
        private IntPtr _ptr;
        public structwrapper_Matrix3d(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Matrix3d(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Matrix3d() {}
        ~structwrapper_Matrix3d() {}
        public Matrix3d this[int index] {
            get { return new Matrix3d(SprExport.Spr_PHSolidDesc_struct_get_Matrix3d(_ptr, index)); }
            set { SprExport.Spr_PHSolidDesc_struct_set_Matrix3d(_ptr, index, value); }
        }
    }

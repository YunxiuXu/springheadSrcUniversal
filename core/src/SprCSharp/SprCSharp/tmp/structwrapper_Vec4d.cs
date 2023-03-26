    public class structwrapper_Vec4d : wrapper {
        private IntPtr _ptr;
        public structwrapper_Vec4d(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Vec4d(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Vec4d() {}
        ~structwrapper_Vec4d() {}
        public Vec4d this[int index] {
            get { return new Vec4d(SprExport.Spr_PHHuman1DJointResistanceDesc_struct_get_Vec4d(_ptr, index)); }
            set { SprExport.Spr_PHHuman1DJointResistanceDesc_struct_set_Vec4d(_ptr, index, value); }
        }
    }

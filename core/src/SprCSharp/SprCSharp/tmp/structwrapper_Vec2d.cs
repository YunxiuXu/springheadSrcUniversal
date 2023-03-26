    public class structwrapper_Vec2d : wrapper {
        private IntPtr _ptr;
        public structwrapper_Vec2d(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Vec2d(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Vec2d() {}
        ~structwrapper_Vec2d() {}
        public Vec2d this[int index] {
            get { return new Vec2d(SprExport.Spr_PHPointToPlaneMateDesc_struct_get_Vec2d(_ptr, index)); }
            set { SprExport.Spr_PHPointToPlaneMateDesc_struct_set_Vec2d(_ptr, index, value); }
        }
    }

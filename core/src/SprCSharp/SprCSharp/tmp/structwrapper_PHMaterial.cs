    public class structwrapper_PHMaterial : wrapper {
        private IntPtr _ptr;
        public structwrapper_PHMaterial(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_PHMaterial(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_PHMaterial() {}
        ~structwrapper_PHMaterial() {}
        public PHMaterial this[int index] {
            get { return new PHMaterial(SprExport.Spr_CDShapeDesc_struct_get_PHMaterial(_ptr, index)); }
            set { SprExport.Spr_CDShapeDesc_struct_set_PHMaterial(_ptr, index, value); }
        }
    }

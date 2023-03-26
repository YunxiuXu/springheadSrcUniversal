    public class structwrapper_CDShapeIf_p : wrapper {
        private IntPtr _ptr;
        public structwrapper_CDShapeIf_p(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_CDShapeIf_p(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_CDShapeIf_p() {}
        ~structwrapper_CDShapeIf_p() {}
        public CDShapeIf this[int index] {
            get { return new CDShapeIf(SprExport.Spr_PHRaycastHit_struct_get_CDShapeIf_p(_ptr, index)); }
            set { SprExport.Spr_PHRaycastHit_struct_set_CDShapeIf_p(_ptr, index, value); }
        }
    }

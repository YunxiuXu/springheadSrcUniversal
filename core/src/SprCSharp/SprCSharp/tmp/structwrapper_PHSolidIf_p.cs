    public class structwrapper_PHSolidIf_p : wrapper {
        private IntPtr _ptr;
        public structwrapper_PHSolidIf_p(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_PHSolidIf_p(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_PHSolidIf_p() {}
        ~structwrapper_PHSolidIf_p() {}
        public PHSolidIf this[int index] {
            get { return new PHSolidIf(SprExport.Spr_PHRaycastHit_struct_get_PHSolidIf_p(_ptr, index)); }
            set { SprExport.Spr_PHRaycastHit_struct_set_PHSolidIf_p(_ptr, index, value); }
        }
    }

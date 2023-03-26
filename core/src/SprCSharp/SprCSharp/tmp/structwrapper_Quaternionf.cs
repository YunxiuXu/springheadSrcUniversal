    public class structwrapper_Quaternionf : wrapper {
        private IntPtr _ptr;
        public structwrapper_Quaternionf(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_Quaternionf(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_Quaternionf() {}
        ~structwrapper_Quaternionf() {}
        public Quaternionf this[int index] {
            get { return new Quaternionf(SprExport.Spr_PHOpParticleDesc_struct_get_Quaternionf(_ptr, index)); }
            set { SprExport.Spr_PHOpParticleDesc_struct_set_Quaternionf(_ptr, index, value); }
        }
    }

    public class structwrapper_PHHapticPointerDesc_HapticRenderMode : wrapper {
        private IntPtr _ptr;
        public structwrapper_PHHapticPointerDesc_HapticRenderMode(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_PHHapticPointerDesc_HapticRenderMode(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_PHHapticPointerDesc_HapticRenderMode() {}
        ~structwrapper_PHHapticPointerDesc_HapticRenderMode() {}
        public PHHapticPointerDesc.HapticRenderMode this[int index] {
            get { return (PHHapticPointerDesc.HapticRenderMode) SprExport.Spr_PHHapticPointerDesc_struct_get_PHHapticPointerDesc_HapticRenderMode(_ptr, index); }
            set { SprExport.Spr_PHHapticPointerDesc_struct_set_PHHapticPointerDesc_HapticRenderMode(_ptr, index, (int) value); }
        }
    }

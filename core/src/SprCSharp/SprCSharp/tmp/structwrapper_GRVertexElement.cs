    public class structwrapper_GRVertexElement : wrapper {
        private IntPtr _ptr;
        public structwrapper_GRVertexElement(IntPtr ptr) { _ptr = ptr; }
        public structwrapper_GRVertexElement(IntPtr ptr, bool flag) { _ptr = ptr; _flag = flag; }
        protected structwrapper_GRVertexElement() {}
        ~structwrapper_GRVertexElement() {}
        public GRVertexElement this[int index] {
            get { return new GRVertexElement(SprExport.Spr_GRVertexArray_struct_get_GRVertexElement(_ptr, index)); }
            set { SprExport.Spr_GRVertexArray_struct_set_GRVertexElement(_ptr, index, value); }
        }
    }

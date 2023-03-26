    public class vectorwrapper_PHSplineLimitNode : vectorwrapper {
        public vectorwrapper_PHSplineLimitNode() {
            _this = SprExport.Spr_vector_new_PHSplineLimitNode();
            _flag = true;
        }
        public vectorwrapper_PHSplineLimitNode(IntPtr ptr) : base(ptr) {}
        public vectorwrapper_PHSplineLimitNode(IntPtr ptr, bool flag) : base(ptr, flag) {}
        ~vectorwrapper_PHSplineLimitNode() {
            if (_flag) { SprExport.Spr_vector_delete_PHSplineLimitNode(_this); _flag = false; }
        }
        public PHSplineLimitNode this[int index] {
            get { return new PHSplineLimitNode(SprExport.Spr_vector_get_PHSplineLimitNode(_this, index)); }
            set { SprExport.Spr_vector_set_PHSplineLimitNode(_this, index, value); }
        }
        public int size() { return (int) SprExport.Spr_vector_size_PHSplineLimitNode(_this); }
        public void push_back(PHSplineLimitNode value) { SprExport.Spr_vector_push_back_PHSplineLimitNode(_this, value); }
        public void clear() { SprExport.Spr_vector_clear_PHSplineLimitNode(_this); }
        public static implicit operator List<PHSplineLimitNode>(vectorwrapper_PHSplineLimitNode m) {
            List<PHSplineLimitNode> r = new List<PHSplineLimitNode>();
            int size = SprExport.Spr_vector_size_PHSplineLimitNode(m._this);
            for (int i = 0; i < size; i++) {
                IntPtr member = SprExport.Spr_vector_get_PHSplineLimitNode(m._this, i);
                r.Add(new PHSplineLimitNode(member));
            }
            return r;
        }
        public static implicit operator vectorwrapper_PHSplineLimitNode(List<PHSplineLimitNode> r) {
            IntPtr ptr = SprExport.Spr_vector_new_PHSplineLimitNode();
            vectorwrapper_PHSplineLimitNode m = new vectorwrapper_PHSplineLimitNode(ptr, true);
            for (int i = 0; i < (int) r.Count; i++) {
                SprExport.Spr_vector_push_back_PHSplineLimitNode(ptr, r[i]);
            }
            return m;
        }
        public static implicit operator PHSplineLimitNode[](vectorwrapper_PHSplineLimitNode m) {
            int size = SprExport.Spr_vector_size_PHSplineLimitNode(m._this);
            PHSplineLimitNode[] r = new PHSplineLimitNode[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_vector_get_PHSplineLimitNode(m._this, i);
                 r[i] = new PHSplineLimitNode(ptr);
            }
            return r;
        }
        public static implicit operator vectorwrapper_PHSplineLimitNode(PHSplineLimitNode[] r) {
            IntPtr ptr = SprExport.Spr_vector_new_PHSplineLimitNode();
            vectorwrapper_PHSplineLimitNode m = new vectorwrapper_PHSplineLimitNode(ptr, true);
            for (int i = 0; i < r.Length; i++) {
                SprExport.Spr_vector_push_back_PHSplineLimitNode(m._this, r[i]);
            }
            return m;
        }
    }

    public class vectorwrapper_GRKey : vectorwrapper {
        public vectorwrapper_GRKey() {
            _this = SprExport.Spr_vector_new_GRKey();
            _flag = true;
        }
        public vectorwrapper_GRKey(IntPtr ptr) : base(ptr) {}
        public vectorwrapper_GRKey(IntPtr ptr, bool flag) : base(ptr, flag) {}
        ~vectorwrapper_GRKey() {
            if (_flag) { SprExport.Spr_vector_delete_GRKey(_this); _flag = false; }
        }
        public GRKey this[int index] {
            get { return new GRKey(SprExport.Spr_vector_get_GRKey(_this, index)); }
            set { SprExport.Spr_vector_set_GRKey(_this, index, value); }
        }
        public int size() { return (int) SprExport.Spr_vector_size_GRKey(_this); }
        public void push_back(GRKey value) { SprExport.Spr_vector_push_back_GRKey(_this, value); }
        public void clear() { SprExport.Spr_vector_clear_GRKey(_this); }
        public static implicit operator List<GRKey>(vectorwrapper_GRKey m) {
            List<GRKey> r = new List<GRKey>();
            int size = SprExport.Spr_vector_size_GRKey(m._this);
            for (int i = 0; i < size; i++) {
                IntPtr member = SprExport.Spr_vector_get_GRKey(m._this, i);
                r.Add(new GRKey(member));
            }
            return r;
        }
        public static implicit operator vectorwrapper_GRKey(List<GRKey> r) {
            IntPtr ptr = SprExport.Spr_vector_new_GRKey();
            vectorwrapper_GRKey m = new vectorwrapper_GRKey(ptr, true);
            for (int i = 0; i < (int) r.Count; i++) {
                SprExport.Spr_vector_push_back_GRKey(ptr, r[i]);
            }
            return m;
        }
        public static implicit operator GRKey[](vectorwrapper_GRKey m) {
            int size = SprExport.Spr_vector_size_GRKey(m._this);
            GRKey[] r = new GRKey[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_vector_get_GRKey(m._this, i);
                 r[i] = new GRKey(ptr);
            }
            return r;
        }
        public static implicit operator vectorwrapper_GRKey(GRKey[] r) {
            IntPtr ptr = SprExport.Spr_vector_new_GRKey();
            vectorwrapper_GRKey m = new vectorwrapper_GRKey(ptr, true);
            for (int i = 0; i < r.Length; i++) {
                SprExport.Spr_vector_push_back_GRKey(m._this, r[i]);
            }
            return m;
        }
    }

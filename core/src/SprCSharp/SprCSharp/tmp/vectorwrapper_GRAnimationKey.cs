    public class vectorwrapper_GRAnimationKey : vectorwrapper {
        public vectorwrapper_GRAnimationKey() {
            _this = SprExport.Spr_vector_new_GRAnimationKey();
            _flag = true;
        }
        public vectorwrapper_GRAnimationKey(IntPtr ptr) : base(ptr) {}
        public vectorwrapper_GRAnimationKey(IntPtr ptr, bool flag) : base(ptr, flag) {}
        ~vectorwrapper_GRAnimationKey() {
            if (_flag) { SprExport.Spr_vector_delete_GRAnimationKey(_this); _flag = false; }
        }
        public GRAnimationKey this[int index] {
            get { return new GRAnimationKey(SprExport.Spr_vector_get_GRAnimationKey(_this, index)); }
            set { SprExport.Spr_vector_set_GRAnimationKey(_this, index, value); }
        }
        public int size() { return (int) SprExport.Spr_vector_size_GRAnimationKey(_this); }
        public void push_back(GRAnimationKey value) { SprExport.Spr_vector_push_back_GRAnimationKey(_this, value); }
        public void clear() { SprExport.Spr_vector_clear_GRAnimationKey(_this); }
        public static implicit operator List<GRAnimationKey>(vectorwrapper_GRAnimationKey m) {
            List<GRAnimationKey> r = new List<GRAnimationKey>();
            int size = SprExport.Spr_vector_size_GRAnimationKey(m._this);
            for (int i = 0; i < size; i++) {
                IntPtr member = SprExport.Spr_vector_get_GRAnimationKey(m._this, i);
                r.Add(new GRAnimationKey(member));
            }
            return r;
        }
        public static implicit operator vectorwrapper_GRAnimationKey(List<GRAnimationKey> r) {
            IntPtr ptr = SprExport.Spr_vector_new_GRAnimationKey();
            vectorwrapper_GRAnimationKey m = new vectorwrapper_GRAnimationKey(ptr, true);
            for (int i = 0; i < (int) r.Count; i++) {
                SprExport.Spr_vector_push_back_GRAnimationKey(ptr, r[i]);
            }
            return m;
        }
        public static implicit operator GRAnimationKey[](vectorwrapper_GRAnimationKey m) {
            int size = SprExport.Spr_vector_size_GRAnimationKey(m._this);
            GRAnimationKey[] r = new GRAnimationKey[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_vector_get_GRAnimationKey(m._this, i);
                 r[i] = new GRAnimationKey(ptr);
            }
            return r;
        }
        public static implicit operator vectorwrapper_GRAnimationKey(GRAnimationKey[] r) {
            IntPtr ptr = SprExport.Spr_vector_new_GRAnimationKey();
            vectorwrapper_GRAnimationKey m = new vectorwrapper_GRAnimationKey(ptr, true);
            for (int i = 0; i < r.Length; i++) {
                SprExport.Spr_vector_push_back_GRAnimationKey(m._this, r[i]);
            }
            return m;
        }
    }

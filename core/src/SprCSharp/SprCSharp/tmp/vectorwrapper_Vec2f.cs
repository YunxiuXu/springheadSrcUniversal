    public class vectorwrapper_Vec2f : vectorwrapper {
        public vectorwrapper_Vec2f() {
            _this = SprExport.Spr_vector_new_Vec2f();
            _flag = true;
        }
        public vectorwrapper_Vec2f(IntPtr ptr) : base(ptr) {}
        public vectorwrapper_Vec2f(IntPtr ptr, bool flag) : base(ptr, flag) {}
        ~vectorwrapper_Vec2f() {
            if (_flag) { SprExport.Spr_vector_delete_Vec2f(_this); _flag = false; }
        }
        public Vec2f this[int index] {
            get { return new Vec2f(SprExport.Spr_vector_get_Vec2f(_this, index)); }
            set { SprExport.Spr_vector_set_Vec2f(_this, index, value); }
        }
        public int size() { return (int) SprExport.Spr_vector_size_Vec2f(_this); }
        public void push_back(Vec2f value) { SprExport.Spr_vector_push_back_Vec2f(_this, value); }
        public void clear() { SprExport.Spr_vector_clear_Vec2f(_this); }
        public static implicit operator List<Vec2f>(vectorwrapper_Vec2f m) {
            List<Vec2f> r = new List<Vec2f>();
            int size = SprExport.Spr_vector_size_Vec2f(m._this);
            for (int i = 0; i < size; i++) {
                IntPtr member = SprExport.Spr_vector_get_Vec2f(m._this, i);
                r.Add(new Vec2f(member));
            }
            return r;
        }
        public static implicit operator vectorwrapper_Vec2f(List<Vec2f> r) {
            IntPtr ptr = SprExport.Spr_vector_new_Vec2f();
            vectorwrapper_Vec2f m = new vectorwrapper_Vec2f(ptr, true);
            for (int i = 0; i < (int) r.Count; i++) {
                SprExport.Spr_vector_push_back_Vec2f(ptr, r[i]);
            }
            return m;
        }
        public static implicit operator Vec2f[](vectorwrapper_Vec2f m) {
            int size = SprExport.Spr_vector_size_Vec2f(m._this);
            Vec2f[] r = new Vec2f[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_vector_get_Vec2f(m._this, i);
                 r[i] = new Vec2f(ptr);
            }
            return r;
        }
        public static implicit operator vectorwrapper_Vec2f(Vec2f[] r) {
            IntPtr ptr = SprExport.Spr_vector_new_Vec2f();
            vectorwrapper_Vec2f m = new vectorwrapper_Vec2f(ptr, true);
            for (int i = 0; i < r.Length; i++) {
                SprExport.Spr_vector_push_back_Vec2f(m._this, r[i]);
            }
            return m;
        }
    }

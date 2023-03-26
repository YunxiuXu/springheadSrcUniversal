    public class vectorwrapper_Vec4f : vectorwrapper {
        public vectorwrapper_Vec4f() {
            _this = SprExport.Spr_vector_new_Vec4f();
            _flag = true;
        }
        public vectorwrapper_Vec4f(IntPtr ptr) : base(ptr) {}
        public vectorwrapper_Vec4f(IntPtr ptr, bool flag) : base(ptr, flag) {}
        ~vectorwrapper_Vec4f() {
            if (_flag) { SprExport.Spr_vector_delete_Vec4f(_this); _flag = false; }
        }
        public Vec4f this[int index] {
            get { return new Vec4f(SprExport.Spr_vector_get_Vec4f(_this, index)); }
            set { SprExport.Spr_vector_set_Vec4f(_this, index, value); }
        }
        public int size() { return (int) SprExport.Spr_vector_size_Vec4f(_this); }
        public void push_back(Vec4f value) { SprExport.Spr_vector_push_back_Vec4f(_this, value); }
        public void clear() { SprExport.Spr_vector_clear_Vec4f(_this); }
        public static implicit operator List<Vec4f>(vectorwrapper_Vec4f m) {
            List<Vec4f> r = new List<Vec4f>();
            int size = SprExport.Spr_vector_size_Vec4f(m._this);
            for (int i = 0; i < size; i++) {
                IntPtr member = SprExport.Spr_vector_get_Vec4f(m._this, i);
                r.Add(new Vec4f(member));
            }
            return r;
        }
        public static implicit operator vectorwrapper_Vec4f(List<Vec4f> r) {
            IntPtr ptr = SprExport.Spr_vector_new_Vec4f();
            vectorwrapper_Vec4f m = new vectorwrapper_Vec4f(ptr, true);
            for (int i = 0; i < (int) r.Count; i++) {
                SprExport.Spr_vector_push_back_Vec4f(ptr, r[i]);
            }
            return m;
        }
        public static implicit operator Vec4f[](vectorwrapper_Vec4f m) {
            int size = SprExport.Spr_vector_size_Vec4f(m._this);
            Vec4f[] r = new Vec4f[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_vector_get_Vec4f(m._this, i);
                 r[i] = new Vec4f(ptr);
            }
            return r;
        }
        public static implicit operator vectorwrapper_Vec4f(Vec4f[] r) {
            IntPtr ptr = SprExport.Spr_vector_new_Vec4f();
            vectorwrapper_Vec4f m = new vectorwrapper_Vec4f(ptr, true);
            for (int i = 0; i < r.Length; i++) {
                SprExport.Spr_vector_push_back_Vec4f(m._this, r[i]);
            }
            return m;
        }
    }

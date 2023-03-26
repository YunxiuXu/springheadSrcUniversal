    public class vectorwrapper_Vec3f : vectorwrapper {
        public vectorwrapper_Vec3f() {
            _this = SprExport.Spr_vector_new_Vec3f();
            _flag = true;
        }
        public vectorwrapper_Vec3f(IntPtr ptr) : base(ptr) {}
        public vectorwrapper_Vec3f(IntPtr ptr, bool flag) : base(ptr, flag) {}
        ~vectorwrapper_Vec3f() {
            if (_flag) { SprExport.Spr_vector_delete_Vec3f(_this); _flag = false; }
        }
        public Vec3f this[int index] {
            get { return new Vec3f(SprExport.Spr_vector_get_Vec3f(_this, index)); }
            set { SprExport.Spr_vector_set_Vec3f(_this, index, value); }
        }
        public int size() { return (int) SprExport.Spr_vector_size_Vec3f(_this); }
        public void push_back(Vec3f value) { SprExport.Spr_vector_push_back_Vec3f(_this, value); }
        public void clear() { SprExport.Spr_vector_clear_Vec3f(_this); }
        public static implicit operator List<Vec3f>(vectorwrapper_Vec3f m) {
            List<Vec3f> r = new List<Vec3f>();
            int size = SprExport.Spr_vector_size_Vec3f(m._this);
            for (int i = 0; i < size; i++) {
                IntPtr member = SprExport.Spr_vector_get_Vec3f(m._this, i);
                r.Add(new Vec3f(member));
            }
            return r;
        }
        public static implicit operator vectorwrapper_Vec3f(List<Vec3f> r) {
            IntPtr ptr = SprExport.Spr_vector_new_Vec3f();
            vectorwrapper_Vec3f m = new vectorwrapper_Vec3f(ptr, true);
            for (int i = 0; i < (int) r.Count; i++) {
                SprExport.Spr_vector_push_back_Vec3f(ptr, r[i]);
            }
            return m;
        }
        public static implicit operator Vec3f[](vectorwrapper_Vec3f m) {
            int size = SprExport.Spr_vector_size_Vec3f(m._this);
            Vec3f[] r = new Vec3f[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_vector_get_Vec3f(m._this, i);
                 r[i] = new Vec3f(ptr);
            }
            return r;
        }
        public static implicit operator vectorwrapper_Vec3f(Vec3f[] r) {
            IntPtr ptr = SprExport.Spr_vector_new_Vec3f();
            vectorwrapper_Vec3f m = new vectorwrapper_Vec3f(ptr, true);
            for (int i = 0; i < r.Length; i++) {
                SprExport.Spr_vector_push_back_Vec3f(m._this, r[i]);
            }
            return m;
        }
    }

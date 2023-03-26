    public class arraywrapper_Vec3f : arraywrapper {
        public arraywrapper_Vec3f(int nelm) : base(nelm) {
            _this = SprExport.Spr_array_new_Vec3f(nelm);
            _flag = true;
        }
        public arraywrapper_Vec3f(IntPtr ptr, int nelm) : base(ptr, nelm) {}
        public arraywrapper_Vec3f(IntPtr ptr, int nelm, bool flag) : base(ptr, nelm, flag) {}
        ~arraywrapper_Vec3f() {
            if (_flag) { SprExport.Spr_array_delete_Vec3f(_this); _flag = false; }
        }
        public Vec3f this[int index] {
            get { return new Vec3f(SprExport.Spr_array_get_Vec3f(_this, index)); }
            set { SprExport.Spr_array_set_Vec3f(_this, index, value); }
        }
        public int size() { return (int) _nelm; }
        public static implicit operator List<Vec3f>(arraywrapper_Vec3f m) {
            List<Vec3f> r = new List<Vec3f>();
            for (int i = 0; i < (int) m._nelm; i++) {
                IntPtr member = SprExport.Spr_array_get_Vec3f(m._this, i);
                r.Add(new Vec3f(member));
            }
            return r;
        }
        public static implicit operator arraywrapper_Vec3f(List<Vec3f> r) {
            int size = r.Count;
            IntPtr ptr = SprExport.Spr_array_new_Vec3f(size);
            arraywrapper_Vec3f m = new arraywrapper_Vec3f(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_Vec3f(m._this, i, r[i]);
            }
            return m;
        }
        public static implicit operator Vec3f[](arraywrapper_Vec3f m) {
            int size = (int) m._nelm;
            Vec3f[] r = new Vec3f[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_array_get_Vec3f(m._this, i);
                 r[i] = new Vec3f(ptr);
            }
            return r;
        }
        public static implicit operator Vec3f(arraywrapper_Vec3f m) {
            int size = (int) m._nelm;
            IntPtr ptr = SprExport.Spr_array_get_Vec3f(m._this, 0);
            Vec3f r = new Vec3f(ptr);
            return r;
        }
        public static implicit operator arraywrapper_Vec3f(Vec3f[] r) {
            int size = r.Length;
            IntPtr ptr = SprExport.Spr_array_new_Vec3f(size);
            arraywrapper_Vec3f m = new arraywrapper_Vec3f(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_Vec3f(m._this, i, r[i]);
            }
            return m;
        }
    }

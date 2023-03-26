    public class arraywrapper_Vec2f : arraywrapper {
        public arraywrapper_Vec2f(int nelm) : base(nelm) {
            _this = SprExport.Spr_array_new_Vec2f(nelm);
            _flag = true;
        }
        public arraywrapper_Vec2f(IntPtr ptr, int nelm) : base(ptr, nelm) {}
        public arraywrapper_Vec2f(IntPtr ptr, int nelm, bool flag) : base(ptr, nelm, flag) {}
        ~arraywrapper_Vec2f() {
            if (_flag) { SprExport.Spr_array_delete_Vec2f(_this); _flag = false; }
        }
        public Vec2f this[int index] {
            get { return new Vec2f(SprExport.Spr_array_get_Vec2f(_this, index)); }
            set { SprExport.Spr_array_set_Vec2f(_this, index, value); }
        }
        public int size() { return (int) _nelm; }
        public static implicit operator List<Vec2f>(arraywrapper_Vec2f m) {
            List<Vec2f> r = new List<Vec2f>();
            for (int i = 0; i < (int) m._nelm; i++) {
                IntPtr member = SprExport.Spr_array_get_Vec2f(m._this, i);
                r.Add(new Vec2f(member));
            }
            return r;
        }
        public static implicit operator arraywrapper_Vec2f(List<Vec2f> r) {
            int size = r.Count;
            IntPtr ptr = SprExport.Spr_array_new_Vec2f(size);
            arraywrapper_Vec2f m = new arraywrapper_Vec2f(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_Vec2f(m._this, i, r[i]);
            }
            return m;
        }
        public static implicit operator Vec2f[](arraywrapper_Vec2f m) {
            int size = (int) m._nelm;
            Vec2f[] r = new Vec2f[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_array_get_Vec2f(m._this, i);
                 r[i] = new Vec2f(ptr);
            }
            return r;
        }
        public static implicit operator Vec2f(arraywrapper_Vec2f m) {
            int size = (int) m._nelm;
            IntPtr ptr = SprExport.Spr_array_get_Vec2f(m._this, 0);
            Vec2f r = new Vec2f(ptr);
            return r;
        }
        public static implicit operator arraywrapper_Vec2f(Vec2f[] r) {
            int size = r.Length;
            IntPtr ptr = SprExport.Spr_array_new_Vec2f(size);
            arraywrapper_Vec2f m = new arraywrapper_Vec2f(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_Vec2f(m._this, i, r[i]);
            }
            return m;
        }
    }

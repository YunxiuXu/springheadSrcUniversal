    public class arraywrapper_Vec4f : arraywrapper {
        public arraywrapper_Vec4f(int nelm) : base(nelm) {
            _this = SprExport.Spr_array_new_Vec4f(nelm);
            _flag = true;
        }
        public arraywrapper_Vec4f(IntPtr ptr, int nelm) : base(ptr, nelm) {}
        public arraywrapper_Vec4f(IntPtr ptr, int nelm, bool flag) : base(ptr, nelm, flag) {}
        ~arraywrapper_Vec4f() {
            if (_flag) { SprExport.Spr_array_delete_Vec4f(_this); _flag = false; }
        }
        public Vec4f this[int index] {
            get { return new Vec4f(SprExport.Spr_array_get_Vec4f(_this, index)); }
            set { SprExport.Spr_array_set_Vec4f(_this, index, value); }
        }
        public int size() { return (int) _nelm; }
        public static implicit operator List<Vec4f>(arraywrapper_Vec4f m) {
            List<Vec4f> r = new List<Vec4f>();
            for (int i = 0; i < (int) m._nelm; i++) {
                IntPtr member = SprExport.Spr_array_get_Vec4f(m._this, i);
                r.Add(new Vec4f(member));
            }
            return r;
        }
        public static implicit operator arraywrapper_Vec4f(List<Vec4f> r) {
            int size = r.Count;
            IntPtr ptr = SprExport.Spr_array_new_Vec4f(size);
            arraywrapper_Vec4f m = new arraywrapper_Vec4f(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_Vec4f(m._this, i, r[i]);
            }
            return m;
        }
        public static implicit operator Vec4f[](arraywrapper_Vec4f m) {
            int size = (int) m._nelm;
            Vec4f[] r = new Vec4f[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_array_get_Vec4f(m._this, i);
                 r[i] = new Vec4f(ptr);
            }
            return r;
        }
        public static implicit operator Vec4f(arraywrapper_Vec4f m) {
            int size = (int) m._nelm;
            IntPtr ptr = SprExport.Spr_array_get_Vec4f(m._this, 0);
            Vec4f r = new Vec4f(ptr);
            return r;
        }
        public static implicit operator arraywrapper_Vec4f(Vec4f[] r) {
            int size = r.Length;
            IntPtr ptr = SprExport.Spr_array_new_Vec4f(size);
            arraywrapper_Vec4f m = new arraywrapper_Vec4f(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_Vec4f(m._this, i, r[i]);
            }
            return m;
        }
    }

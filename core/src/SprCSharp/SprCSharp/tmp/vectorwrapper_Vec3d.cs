    public class vectorwrapper_Vec3d : vectorwrapper {
        public vectorwrapper_Vec3d() {
            _this = SprExport.Spr_vector_new_Vec3d();
            _flag = true;
        }
        public vectorwrapper_Vec3d(IntPtr ptr) : base(ptr) {}
        public vectorwrapper_Vec3d(IntPtr ptr, bool flag) : base(ptr, flag) {}
        ~vectorwrapper_Vec3d() {
            if (_flag) { SprExport.Spr_vector_delete_Vec3d(_this); _flag = false; }
        }
        public Vec3d this[int index] {
            get { return new Vec3d(SprExport.Spr_vector_get_Vec3d(_this, index)); }
            set { SprExport.Spr_vector_set_Vec3d(_this, index, value); }
        }
        public int size() { return (int) SprExport.Spr_vector_size_Vec3d(_this); }
        public void push_back(Vec3d value) { SprExport.Spr_vector_push_back_Vec3d(_this, value); }
        public void clear() { SprExport.Spr_vector_clear_Vec3d(_this); }
        public static implicit operator List<Vec3d>(vectorwrapper_Vec3d m) {
            List<Vec3d> r = new List<Vec3d>();
            int size = SprExport.Spr_vector_size_Vec3d(m._this);
            for (int i = 0; i < size; i++) {
                IntPtr member = SprExport.Spr_vector_get_Vec3d(m._this, i);
                r.Add(new Vec3d(member));
            }
            return r;
        }
        public static implicit operator vectorwrapper_Vec3d(List<Vec3d> r) {
            IntPtr ptr = SprExport.Spr_vector_new_Vec3d();
            vectorwrapper_Vec3d m = new vectorwrapper_Vec3d(ptr, true);
            for (int i = 0; i < (int) r.Count; i++) {
                SprExport.Spr_vector_push_back_Vec3d(ptr, r[i]);
            }
            return m;
        }
        public static implicit operator Vec3d[](vectorwrapper_Vec3d m) {
            int size = SprExport.Spr_vector_size_Vec3d(m._this);
            Vec3d[] r = new Vec3d[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_vector_get_Vec3d(m._this, i);
                 r[i] = new Vec3d(ptr);
            }
            return r;
        }
        public static implicit operator vectorwrapper_Vec3d(Vec3d[] r) {
            IntPtr ptr = SprExport.Spr_vector_new_Vec3d();
            vectorwrapper_Vec3d m = new vectorwrapper_Vec3d(ptr, true);
            for (int i = 0; i < r.Length; i++) {
                SprExport.Spr_vector_push_back_Vec3d(m._this, r[i]);
            }
            return m;
        }
    }

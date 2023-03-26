    public class arraywrapper_GRMeshFace : arraywrapper {
        public arraywrapper_GRMeshFace(int nelm) : base(nelm) {
            _this = SprExport.Spr_array_new_GRMeshFace(nelm);
            _flag = true;
        }
        public arraywrapper_GRMeshFace(IntPtr ptr, int nelm) : base(ptr, nelm) {}
        public arraywrapper_GRMeshFace(IntPtr ptr, int nelm, bool flag) : base(ptr, nelm, flag) {}
        ~arraywrapper_GRMeshFace() {
            if (_flag) { SprExport.Spr_array_delete_GRMeshFace(_this); _flag = false; }
        }
        public GRMeshFace this[int index] {
            get { return new GRMeshFace(SprExport.Spr_array_get_GRMeshFace(_this, index)); }
            set { SprExport.Spr_array_set_GRMeshFace(_this, index, value); }
        }
        public int size() { return (int) _nelm; }
        public static implicit operator List<GRMeshFace>(arraywrapper_GRMeshFace m) {
            List<GRMeshFace> r = new List<GRMeshFace>();
            for (int i = 0; i < (int) m._nelm; i++) {
                IntPtr member = SprExport.Spr_array_get_GRMeshFace(m._this, i);
                r.Add(new GRMeshFace(member));
            }
            return r;
        }
        public static implicit operator arraywrapper_GRMeshFace(List<GRMeshFace> r) {
            int size = r.Count;
            IntPtr ptr = SprExport.Spr_array_new_GRMeshFace(size);
            arraywrapper_GRMeshFace m = new arraywrapper_GRMeshFace(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_GRMeshFace(m._this, i, r[i]);
            }
            return m;
        }
        public static implicit operator GRMeshFace[](arraywrapper_GRMeshFace m) {
            int size = (int) m._nelm;
            GRMeshFace[] r = new GRMeshFace[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_array_get_GRMeshFace(m._this, i);
                 r[i] = new GRMeshFace(ptr);
            }
            return r;
        }
        public static implicit operator GRMeshFace(arraywrapper_GRMeshFace m) {
            int size = (int) m._nelm;
            IntPtr ptr = SprExport.Spr_array_get_GRMeshFace(m._this, 0);
            GRMeshFace r = new GRMeshFace(ptr);
            return r;
        }
        public static implicit operator arraywrapper_GRMeshFace(GRMeshFace[] r) {
            int size = r.Length;
            IntPtr ptr = SprExport.Spr_array_new_GRMeshFace(size);
            arraywrapper_GRMeshFace m = new arraywrapper_GRMeshFace(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_GRMeshFace(m._this, i, r[i]);
            }
            return m;
        }
    }

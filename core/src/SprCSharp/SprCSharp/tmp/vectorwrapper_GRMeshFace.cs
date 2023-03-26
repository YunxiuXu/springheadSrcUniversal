    public class vectorwrapper_GRMeshFace : vectorwrapper {
        public vectorwrapper_GRMeshFace() {
            _this = SprExport.Spr_vector_new_GRMeshFace();
            _flag = true;
        }
        public vectorwrapper_GRMeshFace(IntPtr ptr) : base(ptr) {}
        public vectorwrapper_GRMeshFace(IntPtr ptr, bool flag) : base(ptr, flag) {}
        ~vectorwrapper_GRMeshFace() {
            if (_flag) { SprExport.Spr_vector_delete_GRMeshFace(_this); _flag = false; }
        }
        public GRMeshFace this[int index] {
            get { return new GRMeshFace(SprExport.Spr_vector_get_GRMeshFace(_this, index)); }
            set { SprExport.Spr_vector_set_GRMeshFace(_this, index, value); }
        }
        public int size() { return (int) SprExport.Spr_vector_size_GRMeshFace(_this); }
        public void push_back(GRMeshFace value) { SprExport.Spr_vector_push_back_GRMeshFace(_this, value); }
        public void clear() { SprExport.Spr_vector_clear_GRMeshFace(_this); }
        public static implicit operator List<GRMeshFace>(vectorwrapper_GRMeshFace m) {
            List<GRMeshFace> r = new List<GRMeshFace>();
            int size = SprExport.Spr_vector_size_GRMeshFace(m._this);
            for (int i = 0; i < size; i++) {
                IntPtr member = SprExport.Spr_vector_get_GRMeshFace(m._this, i);
                r.Add(new GRMeshFace(member));
            }
            return r;
        }
        public static implicit operator vectorwrapper_GRMeshFace(List<GRMeshFace> r) {
            IntPtr ptr = SprExport.Spr_vector_new_GRMeshFace();
            vectorwrapper_GRMeshFace m = new vectorwrapper_GRMeshFace(ptr, true);
            for (int i = 0; i < (int) r.Count; i++) {
                SprExport.Spr_vector_push_back_GRMeshFace(ptr, r[i]);
            }
            return m;
        }
        public static implicit operator GRMeshFace[](vectorwrapper_GRMeshFace m) {
            int size = SprExport.Spr_vector_size_GRMeshFace(m._this);
            GRMeshFace[] r = new GRMeshFace[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_vector_get_GRMeshFace(m._this, i);
                 r[i] = new GRMeshFace(ptr);
            }
            return r;
        }
        public static implicit operator vectorwrapper_GRMeshFace(GRMeshFace[] r) {
            IntPtr ptr = SprExport.Spr_vector_new_GRMeshFace();
            vectorwrapper_GRMeshFace m = new vectorwrapper_GRMeshFace(ptr, true);
            for (int i = 0; i < r.Length; i++) {
                SprExport.Spr_vector_push_back_GRMeshFace(m._this, r[i]);
            }
            return m;
        }
    }

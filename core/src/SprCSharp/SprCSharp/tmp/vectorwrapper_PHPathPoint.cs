    public class vectorwrapper_PHPathPoint : vectorwrapper {
        public vectorwrapper_PHPathPoint() {
            _this = SprExport.Spr_vector_new_PHPathPoint();
            _flag = true;
        }
        public vectorwrapper_PHPathPoint(IntPtr ptr) : base(ptr) {}
        public vectorwrapper_PHPathPoint(IntPtr ptr, bool flag) : base(ptr, flag) {}
        ~vectorwrapper_PHPathPoint() {
            if (_flag) { SprExport.Spr_vector_delete_PHPathPoint(_this); _flag = false; }
        }
        public PHPathPoint this[int index] {
            get { return new PHPathPoint(SprExport.Spr_vector_get_PHPathPoint(_this, index)); }
            set { SprExport.Spr_vector_set_PHPathPoint(_this, index, value); }
        }
        public int size() { return (int) SprExport.Spr_vector_size_PHPathPoint(_this); }
        public void push_back(PHPathPoint value) { SprExport.Spr_vector_push_back_PHPathPoint(_this, value); }
        public void clear() { SprExport.Spr_vector_clear_PHPathPoint(_this); }
        public static implicit operator List<PHPathPoint>(vectorwrapper_PHPathPoint m) {
            List<PHPathPoint> r = new List<PHPathPoint>();
            int size = SprExport.Spr_vector_size_PHPathPoint(m._this);
            for (int i = 0; i < size; i++) {
                IntPtr member = SprExport.Spr_vector_get_PHPathPoint(m._this, i);
                r.Add(new PHPathPoint(member));
            }
            return r;
        }
        public static implicit operator vectorwrapper_PHPathPoint(List<PHPathPoint> r) {
            IntPtr ptr = SprExport.Spr_vector_new_PHPathPoint();
            vectorwrapper_PHPathPoint m = new vectorwrapper_PHPathPoint(ptr, true);
            for (int i = 0; i < (int) r.Count; i++) {
                SprExport.Spr_vector_push_back_PHPathPoint(ptr, r[i]);
            }
            return m;
        }
        public static implicit operator PHPathPoint[](vectorwrapper_PHPathPoint m) {
            int size = SprExport.Spr_vector_size_PHPathPoint(m._this);
            PHPathPoint[] r = new PHPathPoint[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_vector_get_PHPathPoint(m._this, i);
                 r[i] = new PHPathPoint(ptr);
            }
            return r;
        }
        public static implicit operator vectorwrapper_PHPathPoint(PHPathPoint[] r) {
            IntPtr ptr = SprExport.Spr_vector_new_PHPathPoint();
            vectorwrapper_PHPathPoint m = new vectorwrapper_PHPathPoint(ptr, true);
            for (int i = 0; i < r.Length; i++) {
                SprExport.Spr_vector_push_back_PHPathPoint(m._this, r[i]);
            }
            return m;
        }
    }

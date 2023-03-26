    public class arraywrapper_PHRaycastHit : arraywrapper {
        public arraywrapper_PHRaycastHit(int nelm) : base(nelm) {
            _this = SprExport.Spr_array_new_PHRaycastHit(nelm);
            _flag = true;
        }
        public arraywrapper_PHRaycastHit(IntPtr ptr, int nelm) : base(ptr, nelm) {}
        public arraywrapper_PHRaycastHit(IntPtr ptr, int nelm, bool flag) : base(ptr, nelm, flag) {}
        ~arraywrapper_PHRaycastHit() {
            if (_flag) { SprExport.Spr_array_delete_PHRaycastHit(_this); _flag = false; }
        }
        public PHRaycastHit this[int index] {
            get { return new PHRaycastHit(SprExport.Spr_array_get_PHRaycastHit(_this, index)); }
            set { SprExport.Spr_array_set_PHRaycastHit(_this, index, value); }
        }
        public int size() { return (int) _nelm; }
        public static implicit operator List<PHRaycastHit>(arraywrapper_PHRaycastHit m) {
            List<PHRaycastHit> r = new List<PHRaycastHit>();
            for (int i = 0; i < (int) m._nelm; i++) {
                IntPtr member = SprExport.Spr_array_get_PHRaycastHit(m._this, i);
                r.Add(new PHRaycastHit(member));
            }
            return r;
        }
        public static implicit operator arraywrapper_PHRaycastHit(List<PHRaycastHit> r) {
            int size = r.Count;
            IntPtr ptr = SprExport.Spr_array_new_PHRaycastHit(size);
            arraywrapper_PHRaycastHit m = new arraywrapper_PHRaycastHit(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_PHRaycastHit(m._this, i, r[i]);
            }
            return m;
        }
        public static implicit operator PHRaycastHit[](arraywrapper_PHRaycastHit m) {
            int size = (int) m._nelm;
            PHRaycastHit[] r = new PHRaycastHit[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_array_get_PHRaycastHit(m._this, i);
                 r[i] = new PHRaycastHit(ptr);
            }
            return r;
        }
        public static implicit operator PHRaycastHit(arraywrapper_PHRaycastHit m) {
            int size = (int) m._nelm;
            IntPtr ptr = SprExport.Spr_array_get_PHRaycastHit(m._this, 0);
            PHRaycastHit r = new PHRaycastHit(ptr);
            return r;
        }
        public static implicit operator arraywrapper_PHRaycastHit(PHRaycastHit[] r) {
            int size = r.Length;
            IntPtr ptr = SprExport.Spr_array_new_PHRaycastHit(size);
            arraywrapper_PHRaycastHit m = new arraywrapper_PHRaycastHit(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_PHRaycastHit(m._this, i, r[i]);
            }
            return m;
        }
    }

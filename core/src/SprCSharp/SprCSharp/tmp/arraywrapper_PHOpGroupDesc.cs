    public class arraywrapper_PHOpGroupDesc : arraywrapper {
        public arraywrapper_PHOpGroupDesc(int nelm) : base(nelm) {
            _this = SprExport.Spr_array_new_PHOpGroupDesc(nelm);
            _flag = true;
        }
        public arraywrapper_PHOpGroupDesc(IntPtr ptr, int nelm) : base(ptr, nelm) {}
        public arraywrapper_PHOpGroupDesc(IntPtr ptr, int nelm, bool flag) : base(ptr, nelm, flag) {}
        ~arraywrapper_PHOpGroupDesc() {
            if (_flag) { SprExport.Spr_array_delete_PHOpGroupDesc(_this); _flag = false; }
        }
        public PHOpGroupDesc this[int index] {
            get { return new PHOpGroupDesc(SprExport.Spr_array_get_PHOpGroupDesc(_this, index)); }
            set { SprExport.Spr_array_set_PHOpGroupDesc(_this, index, value); }
        }
        public int size() { return (int) _nelm; }
        public static implicit operator List<PHOpGroupDesc>(arraywrapper_PHOpGroupDesc m) {
            List<PHOpGroupDesc> r = new List<PHOpGroupDesc>();
            for (int i = 0; i < (int) m._nelm; i++) {
                IntPtr member = SprExport.Spr_array_get_PHOpGroupDesc(m._this, i);
                r.Add(new PHOpGroupDesc(member));
            }
            return r;
        }
        public static implicit operator arraywrapper_PHOpGroupDesc(List<PHOpGroupDesc> r) {
            int size = r.Count;
            IntPtr ptr = SprExport.Spr_array_new_PHOpGroupDesc(size);
            arraywrapper_PHOpGroupDesc m = new arraywrapper_PHOpGroupDesc(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_PHOpGroupDesc(m._this, i, r[i]);
            }
            return m;
        }
        public static implicit operator PHOpGroupDesc[](arraywrapper_PHOpGroupDesc m) {
            int size = (int) m._nelm;
            PHOpGroupDesc[] r = new PHOpGroupDesc[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_array_get_PHOpGroupDesc(m._this, i);
                 r[i] = new PHOpGroupDesc(ptr);
            }
            return r;
        }
        public static implicit operator PHOpGroupDesc(arraywrapper_PHOpGroupDesc m) {
            int size = (int) m._nelm;
            IntPtr ptr = SprExport.Spr_array_get_PHOpGroupDesc(m._this, 0);
            PHOpGroupDesc r = new PHOpGroupDesc(ptr);
            return r;
        }
        public static implicit operator arraywrapper_PHOpGroupDesc(PHOpGroupDesc[] r) {
            int size = r.Length;
            IntPtr ptr = SprExport.Spr_array_new_PHOpGroupDesc(size);
            arraywrapper_PHOpGroupDesc m = new arraywrapper_PHOpGroupDesc(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_PHOpGroupDesc(m._this, i, r[i]);
            }
            return m;
        }
    }

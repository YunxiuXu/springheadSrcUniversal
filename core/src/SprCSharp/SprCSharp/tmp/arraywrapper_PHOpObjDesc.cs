    public class arraywrapper_PHOpObjDesc : arraywrapper {
        public arraywrapper_PHOpObjDesc(int nelm) : base(nelm) {
            _this = SprExport.Spr_array_new_PHOpObjDesc(nelm);
            _flag = true;
        }
        public arraywrapper_PHOpObjDesc(IntPtr ptr, int nelm) : base(ptr, nelm) {}
        public arraywrapper_PHOpObjDesc(IntPtr ptr, int nelm, bool flag) : base(ptr, nelm, flag) {}
        ~arraywrapper_PHOpObjDesc() {
            if (_flag) { SprExport.Spr_array_delete_PHOpObjDesc(_this); _flag = false; }
        }
        public PHOpObjDesc this[int index] {
            get { return new PHOpObjDesc(SprExport.Spr_array_get_PHOpObjDesc(_this, index)); }
            set { SprExport.Spr_array_set_PHOpObjDesc(_this, index, value); }
        }
        public int size() { return (int) _nelm; }
        public static implicit operator List<PHOpObjDesc>(arraywrapper_PHOpObjDesc m) {
            List<PHOpObjDesc> r = new List<PHOpObjDesc>();
            for (int i = 0; i < (int) m._nelm; i++) {
                IntPtr member = SprExport.Spr_array_get_PHOpObjDesc(m._this, i);
                r.Add(new PHOpObjDesc(member));
            }
            return r;
        }
        public static implicit operator arraywrapper_PHOpObjDesc(List<PHOpObjDesc> r) {
            int size = r.Count;
            IntPtr ptr = SprExport.Spr_array_new_PHOpObjDesc(size);
            arraywrapper_PHOpObjDesc m = new arraywrapper_PHOpObjDesc(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_PHOpObjDesc(m._this, i, r[i]);
            }
            return m;
        }
        public static implicit operator PHOpObjDesc[](arraywrapper_PHOpObjDesc m) {
            int size = (int) m._nelm;
            PHOpObjDesc[] r = new PHOpObjDesc[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_array_get_PHOpObjDesc(m._this, i);
                 r[i] = new PHOpObjDesc(ptr);
            }
            return r;
        }
        public static implicit operator PHOpObjDesc(arraywrapper_PHOpObjDesc m) {
            int size = (int) m._nelm;
            IntPtr ptr = SprExport.Spr_array_get_PHOpObjDesc(m._this, 0);
            PHOpObjDesc r = new PHOpObjDesc(ptr);
            return r;
        }
        public static implicit operator arraywrapper_PHOpObjDesc(PHOpObjDesc[] r) {
            int size = r.Length;
            IntPtr ptr = SprExport.Spr_array_new_PHOpObjDesc(size);
            arraywrapper_PHOpObjDesc m = new arraywrapper_PHOpObjDesc(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_PHOpObjDesc(m._this, i, r[i]);
            }
            return m;
        }
    }

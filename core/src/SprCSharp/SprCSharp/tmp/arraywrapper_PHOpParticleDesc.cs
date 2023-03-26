    public class arraywrapper_PHOpParticleDesc : arraywrapper {
        public arraywrapper_PHOpParticleDesc(int nelm) : base(nelm) {
            _this = SprExport.Spr_array_new_PHOpParticleDesc(nelm);
            _flag = true;
        }
        public arraywrapper_PHOpParticleDesc(IntPtr ptr, int nelm) : base(ptr, nelm) {}
        public arraywrapper_PHOpParticleDesc(IntPtr ptr, int nelm, bool flag) : base(ptr, nelm, flag) {}
        ~arraywrapper_PHOpParticleDesc() {
            if (_flag) { SprExport.Spr_array_delete_PHOpParticleDesc(_this); _flag = false; }
        }
        public PHOpParticleDesc this[int index] {
            get { return new PHOpParticleDesc(SprExport.Spr_array_get_PHOpParticleDesc(_this, index)); }
            set { SprExport.Spr_array_set_PHOpParticleDesc(_this, index, value); }
        }
        public int size() { return (int) _nelm; }
        public static implicit operator List<PHOpParticleDesc>(arraywrapper_PHOpParticleDesc m) {
            List<PHOpParticleDesc> r = new List<PHOpParticleDesc>();
            for (int i = 0; i < (int) m._nelm; i++) {
                IntPtr member = SprExport.Spr_array_get_PHOpParticleDesc(m._this, i);
                r.Add(new PHOpParticleDesc(member));
            }
            return r;
        }
        public static implicit operator arraywrapper_PHOpParticleDesc(List<PHOpParticleDesc> r) {
            int size = r.Count;
            IntPtr ptr = SprExport.Spr_array_new_PHOpParticleDesc(size);
            arraywrapper_PHOpParticleDesc m = new arraywrapper_PHOpParticleDesc(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_PHOpParticleDesc(m._this, i, r[i]);
            }
            return m;
        }
        public static implicit operator PHOpParticleDesc[](arraywrapper_PHOpParticleDesc m) {
            int size = (int) m._nelm;
            PHOpParticleDesc[] r = new PHOpParticleDesc[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_array_get_PHOpParticleDesc(m._this, i);
                 r[i] = new PHOpParticleDesc(ptr);
            }
            return r;
        }
        public static implicit operator PHOpParticleDesc(arraywrapper_PHOpParticleDesc m) {
            int size = (int) m._nelm;
            IntPtr ptr = SprExport.Spr_array_get_PHOpParticleDesc(m._this, 0);
            PHOpParticleDesc r = new PHOpParticleDesc(ptr);
            return r;
        }
        public static implicit operator arraywrapper_PHOpParticleDesc(PHOpParticleDesc[] r) {
            int size = r.Length;
            IntPtr ptr = SprExport.Spr_array_new_PHOpParticleDesc(size);
            arraywrapper_PHOpParticleDesc m = new arraywrapper_PHOpParticleDesc(ptr, size, true);
            for (int i = 0; i < size; i++) {
                SprExport.Spr_array_set_PHOpParticleDesc(m._this, i, r[i]);
            }
            return m;
        }
    }

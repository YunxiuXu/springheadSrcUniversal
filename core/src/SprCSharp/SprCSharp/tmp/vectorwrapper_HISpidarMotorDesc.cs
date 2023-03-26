    public class vectorwrapper_HISpidarMotorDesc : vectorwrapper {
        public vectorwrapper_HISpidarMotorDesc() {
            _this = SprExport.Spr_vector_new_HISpidarMotorDesc();
            _flag = true;
        }
        public vectorwrapper_HISpidarMotorDesc(IntPtr ptr) : base(ptr) {}
        public vectorwrapper_HISpidarMotorDesc(IntPtr ptr, bool flag) : base(ptr, flag) {}
        ~vectorwrapper_HISpidarMotorDesc() {
            if (_flag) { SprExport.Spr_vector_delete_HISpidarMotorDesc(_this); _flag = false; }
        }
        public HISpidarMotorDesc this[int index] {
            get { return new HISpidarMotorDesc(SprExport.Spr_vector_get_HISpidarMotorDesc(_this, index)); }
            set { SprExport.Spr_vector_set_HISpidarMotorDesc(_this, index, value); }
        }
        public int size() { return (int) SprExport.Spr_vector_size_HISpidarMotorDesc(_this); }
        public void push_back(HISpidarMotorDesc value) { SprExport.Spr_vector_push_back_HISpidarMotorDesc(_this, value); }
        public void clear() { SprExport.Spr_vector_clear_HISpidarMotorDesc(_this); }
        public static implicit operator List<HISpidarMotorDesc>(vectorwrapper_HISpidarMotorDesc m) {
            List<HISpidarMotorDesc> r = new List<HISpidarMotorDesc>();
            int size = SprExport.Spr_vector_size_HISpidarMotorDesc(m._this);
            for (int i = 0; i < size; i++) {
                IntPtr member = SprExport.Spr_vector_get_HISpidarMotorDesc(m._this, i);
                r.Add(new HISpidarMotorDesc(member));
            }
            return r;
        }
        public static implicit operator vectorwrapper_HISpidarMotorDesc(List<HISpidarMotorDesc> r) {
            IntPtr ptr = SprExport.Spr_vector_new_HISpidarMotorDesc();
            vectorwrapper_HISpidarMotorDesc m = new vectorwrapper_HISpidarMotorDesc(ptr, true);
            for (int i = 0; i < (int) r.Count; i++) {
                SprExport.Spr_vector_push_back_HISpidarMotorDesc(ptr, r[i]);
            }
            return m;
        }
        public static implicit operator HISpidarMotorDesc[](vectorwrapper_HISpidarMotorDesc m) {
            int size = SprExport.Spr_vector_size_HISpidarMotorDesc(m._this);
            HISpidarMotorDesc[] r = new HISpidarMotorDesc[size];
            for (int i = 0; i < size; i++) {
                 IntPtr ptr = SprExport.Spr_vector_get_HISpidarMotorDesc(m._this, i);
                 r[i] = new HISpidarMotorDesc(ptr);
            }
            return r;
        }
        public static implicit operator vectorwrapper_HISpidarMotorDesc(HISpidarMotorDesc[] r) {
            IntPtr ptr = SprExport.Spr_vector_new_HISpidarMotorDesc();
            vectorwrapper_HISpidarMotorDesc m = new vectorwrapper_HISpidarMotorDesc(ptr, true);
            for (int i = 0; i < r.Length; i++) {
                SprExport.Spr_vector_push_back_HISpidarMotorDesc(m._this, r[i]);
            }
            return m;
        }
    }

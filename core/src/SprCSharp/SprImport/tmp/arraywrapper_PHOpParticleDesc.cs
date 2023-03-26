	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_array_new_PHOpParticleDesc(int _size);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_array_delete_PHOpParticleDesc(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_array_get_PHOpParticleDesc(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_array_set_PHOpParticleDesc(IntPtr _ptr, int index, IntPtr value);

	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_PHOpParticleDesc_struct_get_Matrix3f(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_PHOpParticleDesc_struct_set_Matrix3f(IntPtr _ptr, int index, IntPtr value);

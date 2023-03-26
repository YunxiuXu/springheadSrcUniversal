	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_HITrackballDesc_struct_get_Vec2f(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_HITrackballDesc_struct_set_Vec2f(IntPtr _ptr, int index, IntPtr value);

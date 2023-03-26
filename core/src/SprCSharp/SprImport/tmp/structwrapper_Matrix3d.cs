	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_PHSolidDesc_struct_get_Matrix3d(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_PHSolidDesc_struct_set_Matrix3d(IntPtr _ptr, int index, IntPtr value);

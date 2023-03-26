	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_GRLightDesc_struct_get_Vec4f(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_GRLightDesc_struct_set_Vec4f(IntPtr _ptr, int index, IntPtr value);
